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
typedef unsigned char undefined;
typedef unsigned int undefined4;
typedef unsigned long undefined8;
typedef void (*code)(void);
typedef unsigned int uint;
#define __thiscall

/* External function declarations */
extern void __stack_chk_fail(void);
void __stack_chk_fail(void) { }
extern int __printf_chk(int flag, const char *format, ...);
int __printf_chk(int flag, const char *format, ...) { return 0; }
extern void *operator_new(size_t size);
void *operator_new(size_t size) { return (void *)0; }
extern void *operator_new__(size_t size);
void *operator_new__(size_t size) { return (void *)0; }
extern void operator_delete(void *ptr, size_t size);
void operator_delete(void *ptr, size_t size) { }
extern void operator_delete_array(void *ptr);
void operator_delete_array(void *ptr) { }
extern void *__cxa_allocate_exception(size_t size);
void *__cxa_allocate_exception(size_t size) { return (void *)0; }
extern void __cxa_throw(void *exc, void *typeinfo, void *dest);
void __cxa_throw(void *exc, void *typeinfo, void *dest) { }
extern int __cxa_atexit(void (*func)(void *), void *arg, void *dso);
extern void *__dynamic_cast(void *src, void *src_type, void *dst_type, int src_type_info);
void *__dynamic_cast(void *src, void *src_type, void *dst_type, int src_type_info) { return (void *)0; }
extern char *strncpy(char *dest, const char *src, size_t n);
char *strncpy(char *dest, const char *src, size_t n) { return dest; }
extern size_t strlen(const char *s);
size_t strlen(const char *s) { return 0; }
extern int strcmp(const char *s1, const char *s2);
int strcmp(const char *s1, const char *s2) { return 0; }
extern int puts(const char *s);
int puts(const char *s) { return 0; }

/* Forward declarations for structs */
struct SimpleClass;
struct Base;
struct Derived;
struct MultiDerived;
struct VirtualBase;
struct MiddleA;
struct MiddleB;
struct DiamondDerived;
struct RTTIBase;
struct RTTIDerivedA;
struct RTTIDerivedB;
struct Container_int;
struct Container_double;
struct unique_ptr_int;
struct unique_ptr_int_array;
struct LifecycleClass;

/* Type definitions for function pointers */
typedef int (*_func_int_varargs)(void);

/* Struct definitions */
struct SimpleClass {
 char name[32];
};

struct Base {
 _func_int_varargs **_vptr_Base;
};

struct Derived {
 struct Base super_Base;
 int multiplier;
};

struct MultiDerived {
 struct Base super_BaseA;
 struct Base super_BaseB;
};

struct VirtualBase {
 int data;
};

struct MiddleA {
 _func_int_varargs **_vptr_MiddleA;
 int dataA;
 undefined8 field_0x10;
};

struct MiddleB {
 _func_int_varargs **_vptr_MiddleB;
 int dataB;
 undefined8 field_0x10;
};

struct DiamondDerived {
 struct MiddleA super_MiddleA;
 struct MiddleB super_MiddleB;
 int _40_4_;
 undefined8 _32_8_;
 undefined8 field_0x20;
};

struct RTTIBase {
 undefined8 _vptr;
};

struct RTTIDerivedA {
 struct RTTIBase super;
};

struct RTTIDerivedB {
 struct RTTIBase super;
};

struct Container_int {
 int size;
 int data[10];
};

struct Container_double {
 int size;
 double data[10];
};

typedef undefined8 __uniq_ptr_data_int;
typedef undefined8 __uniq_ptr_data_int_array;

struct _Tuple_impl_int {
 __uniq_ptr_data_int _M_t;
};

struct _Tuple_impl_int_array {
 __uniq_ptr_data_int_array _M_t;
};

struct unique_ptr_int {
 struct _Tuple_impl_int _M_t;
};

struct unique_ptr_int_array {
 struct _Tuple_impl_int_array _M_t;
};

struct LifecycleClass {
 int instance_count;
};

/* External variables */
struct LifecycleClass LifecycleClass = {0};
extern void *__ioinit;
extern void *__dso_handle;
void *int_typeinfo = (void *)0x0;
void *RTTIBase_typeinfo = (void *)0x0;
void *RTTIDerivedA_typeinfo = (void *)0x0;
void *RTTIDerivedB_typeinfo = (void *)0x0;
void *PTR_virtual_func_001058a8 = (void *)0x0;
void *PTR_virtual_func_001058d8 = (void *)0x0;
void *PTR_func_00105b08 = (void *)0x0;
void *PTR_func_00105b70 = (void *)0x0;
void *PTR_func_00105b38 = (void *)0x0;
void *PTR_func_00105920 = (void *)0x0;
void *PTR_func_00105958 = (void *)0x0;
void *PTR_func_00105998 = (void *)0x0;
void *PTR_func_001059d0 = (void *)0x0;
void *PTR__RTTIDerivedA_00105b98 = (void *)0x0;
void *PTR__RTTIDerivedB_00105bc0 = (void *)0x0;
void *PTR_construction_vtable_24__00105ad0 = (void *)0x0;
void *PTR_construction_vtable_24__00105ac0 = (void *)0x0;
char DAT_00103016[] = "Testing C++ OO features\n";
char DAT_0010303a[] = "Member func result: %d\n";
char DAT_00103074[] = "Constructor result: %d\n";
char DAT_001030ac[] = "Virtual func result: %d\n";
char DAT_001030e5[] = "Diamond inheritance result: %d\n";
char DAT_00103101[] = "Operator overload result: %d\n";
char DAT_00103139[] = "Template func result: %d\n";
char DAT_00103156[] = "Template class result: %d\n";
char DAT_00103173[] = "Lambda result: %d\n";

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x64/5-1/5-1_gcc_Os_g
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



/* Function: test_cpp_exception @ 001022a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_exception(void)

{
 undefined4 *puVar1;
 
 puVar1 = (undefined4 *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* WARNING: Subroutine does not return */
 /* try { // try from 001022c4 to 001022c8 has its CatchHandler @ 001022c9 */
 __cxa_throw(puVar1,&int_typeinfo,0);
}



/* Forward declarations */
extern void test_cpp_oo_features(void);
extern int template_max_int(int a, int b);
extern double template_max_double(double a, double b);
extern void template_swap_int(int *a, int *b);
extern void Container_int_push(Container_int *, int);
extern void unique_ptr_int_dtor(unique_ptr_int *, int);
extern void unique_ptr_int_array_dtor(unique_ptr_int_array *, int);
extern int Base_virtual_func(Base *,int);
extern char *Base_getName(Base *);
extern void Base_dtor_Base(Base *,int);
extern int Derived_virtual_func(Derived *,int);
extern char *Derived_getName(Derived *);
extern int MultiDerived_funcA(MultiDerived *);
extern int MultiDerived_funcB(MultiDerived *);
extern int VirtualBase_func(VirtualBase *);
extern void VirtualBase_dtor_VirtualBase(VirtualBase *,int);
extern int MiddleA_func(MiddleA *);
extern int MiddleB_func(MiddleB *);
extern int DiamondDerived_func(DiamondDerived *);
extern void MiddleA_dtor_MiddleA(MiddleA *);
extern void MiddleB_dtor_MiddleB(MiddleB *);
extern int RTTIDerivedA_getType(RTTIDerivedA *);
extern int RTTIDerivedB_getType(RTTIDerivedB *);
extern void RTTIDerivedB_dtor_RTTIDerivedB(RTTIDerivedB *,int);
extern void RTTIDerivedA_dtor_RTTIDerivedA(RTTIDerivedA *,int);
extern void MultiDerived_dtor_MultiDerived(MultiDerived *,int);
extern void Derived_dtor_Derived(Derived *,int);
extern void Base_dtor_Base_deleting(Base *,int);
extern void Derived_dtor_Derived_deleting(Derived *,int);
extern void MultiDerived_dtor_MultiDerived_deleting(MultiDerived *,int);
extern void VirtualBase_dtor_VirtualBase_deleting(VirtualBase *,int);
extern void RTTIDerivedB_dtor_RTTIDerivedB_deleting(RTTIDerivedB *,int);
extern void RTTIDerivedA_dtor_RTTIDerivedA_deleting(RTTIDerivedA *,int);
extern void MiddleA_dtor_MiddleA_deleting(MiddleA *);
extern void MiddleB_dtor_MiddleB_deleting(MiddleB *);
extern void MiddleA_dtor_MiddleA_vtt(MiddleA *,int,void **);
extern void MiddleB_dtor_MiddleB_vtt(MiddleB *,int,void **);
extern void Container_int_ctor(Container_int *);
extern void Container_double_ctor(Container_double *);
extern int Container_int_get(Container_int *,int);
extern int Container_int_getSize(Container_int *);
extern void Container_double_push(Container_double *,double);
extern double Container_double_get(Container_double *,int);
extern int Container_double_getSize(Container_double *);
extern void DiamondDerived_dtor_DiamondDerived_vtt(DiamondDerived *,int,void **);
extern void DiamondDerived_dtor_DiamondDerived(DiamondDerived *);
extern void DiamondDerived_dtor_DiamondDerived_deleting(DiamondDerived *);

/* Function: main @ 00102367 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 00102375 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _GLOBAL__sub_I__Z20test_cpp_member_funcv(void)

{
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: test_cpp_member_func @ 00102489 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_member_func(void)

{
 long lVar1;
 char *__s;
 size_t sVar2;
 long in_FS_OFFSET;
 SimpleClass obj;
 
 lVar1 = *(long *)(in_FS_OFFSET + 0x28);
 __s = strncpy(obj.name,"Test",0x1f);
 obj.name[0x1f] = '\0';
 sVar2 = strlen(__s);
 if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return (int)sVar2 + 0x125c;
}



/* Function: test_cpp_constructor @ 001024e3 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_constructor(void)

{
 return LifecycleClass.instance_count * 0x3e9 + 0x15;
}



/* Function: call_virtual_func @ 001024f5 */

int call_virtual_func(Base *obj,int x)

{
 int iVar1;
 
 /* WARNING: Could not recover jumptable at 0x001024fc. Too many branches */
 /* WARNING: Treating indirect jump as call */
 iVar1 = (**obj->_vptr_Base)();
 return iVar1;
}



/* Function: test_cpp_virtual_func @ 001024fe */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_virtual_func(void)

{
 long lVar1;
 int iVar2;
 int iVar3;
 long in_FS_OFFSET;
 Base base;
 Derived derived;
 
 lVar1 = *(long *)(in_FS_OFFSET + 0x28);
 derived.multiplier = 3;
 base._vptr_Base = (_func_int_varargs **)&PTR_virtual_func_001058a8;
 derived.super_Base._vptr_Base = (_func_int_varargs **)&PTR_virtual_func_001058d8;
 iVar2 = call_virtual_func(&base,5);
 iVar3 = call_virtual_func(&derived.super_Base,5);
 if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return iVar2 + 0x15 + iVar3;
}



/* Function: test_cpp_multiple_inheritance @ 00102571 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_multiple_inheritance(void)

{
 return 0x47;
}



/* Function: test_cpp_operator_overload @ 0010257b */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_operator_overload(void)

{
 return 0x16;
}



/* Function: test_cpp_template_func @ 00102585 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_func(void)

{
 int iVar1;
 long in_FS_OFFSET;
 double dVar2;
 int a;
 int b;
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 iVar1 = template_max_int(3,7);
 dVar2 = template_max_double(2.5,1.5);
 a = 10;
 b = 0x14;
 template_swap_int(&a,&b);
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return (int)dVar2 + iVar1 + a + b;
}



/* Function: test_cpp_template_class @ 00102618 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_class(void)

{
 long lVar1;
 int iVar2;
 long in_FS_OFFSET;
 Container_int int_container;
 
 lVar1 = *(long *)(in_FS_OFFSET + 0x28);
 int_container.size = 1;
 int_container.data[0] = 10;
 Container_int_push(&int_container, 10);
 Container_int_push(&int_container, 20);
 iVar2 = 0;
 if (0 < int_container.size) {
 iVar2 = int_container.data[0];
 }
 if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return int_container.size + 3 + iVar2;
}



/* Function: test_cpp_lambda @ 0010268d */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_lambda(void)

{
 return 0x55;
}



/* Function: test_cpp_rtti @ 00102697 */

/* WARNING: Removing unreachable block (ram,0x00102723) */
/* WARNING: Removing unreachable block (ram,0x00102728) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_rtti(void)

{
 long lVar1;
 int iVar2;
 long *plVar3;
 long *plVar4;
 long lVar5;
 size_t sVar6;
 uint uVar7;
 char *__s1;
 
 uVar7 = 10;
 plVar3 = (long *)operator_new(8);
 *(void **)plVar3 = &PTR__RTTIDerivedA_00105b98;
 plVar4 = (long *)operator_new(8);
 lVar1 = *plVar3;
 *(void **)plVar4 = &PTR__RTTIDerivedB_00105bc0;
 __s1 = *(char **)(*(long *)(lVar1 + -8) + 8);
 if ((__s1 != "12RTTIDerivedA") && (uVar7 = 0, *__s1 != '*')) {
 iVar2 = strcmp(__s1,"12RTTIDerivedA");
 uVar7 = -(uint)(iVar2 == 0) & 10;
 }
 iVar2 = uVar7 + 0x14;
 /* Unresolved local var: RTTIDerivedA * derivedA@[???] */
 lVar5 = (long)__dynamic_cast(plVar3,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0);
 if (lVar5 != 0) {
 iVar2 = uVar7 + 0x78;
 }
 /* Unresolved local var: RTTIDerivedB * derivedB@[???] */
 lVar5 = (long)__dynamic_cast(plVar4,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo,0);
 if (lVar5 != 0) {
 iVar2 = iVar2 + 200;
 }
 if (*__s1 == '*') {
 __s1 = __s1 + 1;
 }
 sVar6 = strlen(__s1);
 (*(code *)(lVar1 + 8))();
 (*(code *)(lVar1 + 8))();
 return iVar2 + (int)sVar6;
}



/* Function: test_cpp_smart_ptr @ 001027ac */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_smart_ptr(void)

{
 long lVar1;
 int in_ESI;
 long in_FS_OFFSET;
 unique_ptr_int ptr1;
 unique_ptr_int ptr2;
 unique_ptr_int_array arr;
 
 lVar1 = *(long *)(in_FS_OFFSET + 0x28);
 ptr2._M_t._M_t =
 (__uniq_ptr_data_int)operator_new(4);
 ptr1._M_t._M_t =
 (__uniq_ptr_data_int)0x0;
 *(undefined4 *)ptr2._M_t._M_t = 200;
 /* try { // try from 001027f3 to 001027f7 has its CatchHandler @ 0010284e */
 arr._M_t._M_t =
 (__uniq_ptr_data_int_array)operator_new__(0x14);
 *(undefined8 *)arr._M_t._M_t = 0x200000001;
 *(undefined8 *)
 ((long)arr._M_t._M_t + 8) = 0x400000003;
 *(undefined4 *)
 ((long)arr._M_t._M_t + 0x10) = 5;
 unique_ptr_int_array_dtor(&arr, 1);
 unique_ptr_int_dtor(&ptr2, 1);
 unique_ptr_int_dtor(&ptr1, 1);
 if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return 0x2bf;
}



/* Function: test_cpp_diamond_inheritance @ 0010287c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */

int test_cpp_diamond_inheritance(void)

{
 long lVar1;
 int iVar2;
 int iVar3;
 long in_FS_OFFSET;
 DiamondDerived obj;
 
 lVar1 = *(long *)(in_FS_OFFSET + 0x28);
 obj._40_4_ = 0x32;
 obj.super_MiddleA._vptr_MiddleA = (_func_int_varargs **)&PTR_func_00105b08;
 obj._32_8_ = (undefined8)&PTR_func_00105b70;
 obj.super_MiddleA.field_0x10 = (undefined8)&PTR_func_00105b38;
 iVar2 = DiamondDerived_func((DiamondDerived *)&obj);
 obj._40_4_ = 100;
 iVar3 = DiamondDerived_func((DiamondDerived *)&obj);
 DiamondDerived_dtor_DiamondDerived(&obj);
 if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return iVar2 + iVar3;
}



/* Function: test_cpp_oo_features @ 0010290d */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */

void test_cpp_oo_features(void)

{
 int iVar1;
 undefined8 in_RAX;
 
 puts(DAT_00103016);
 iVar1 = test_cpp_member_func();
 __printf_chk(1,DAT_0010303a,iVar1);
 test_cpp_constructor();
 __printf_chk(1,DAT_00103074,iVar1);
 iVar1 = test_cpp_virtual_func();
 __printf_chk(1,DAT_00103074,iVar1);
 test_cpp_multiple_inheritance();
 __printf_chk(1,DAT_001030ac,iVar1);
 iVar1 = test_cpp_diamond_inheritance();
 __printf_chk(1,DAT_001030ac,iVar1);
 test_cpp_operator_overload();
 __printf_chk(1,DAT_001030e5,iVar1);
 iVar1 = test_cpp_template_func();
 __printf_chk(1,DAT_001030e5,iVar1);
 iVar1 = test_cpp_template_class();
 __printf_chk(1,DAT_00103101,iVar1);
 test_cpp_lambda();
 __printf_chk(1,DAT_00103139,iVar1);
 iVar1 = test_cpp_exception();
 __printf_chk(1,DAT_00103139,iVar1);
 iVar1 = test_cpp_smart_ptr();
 __printf_chk(1,DAT_00103156,iVar1);
 iVar1 = test_cpp_rtti();
 __printf_chk(1,DAT_00103173,iVar1,in_RAX);
 return;
}



/* Function: virtual_func @ 00102a58 */

/* DWARF original prototype: int virtual_func(Base * this, int x) */

int Base_virtual_func(Base *this_ptr,int x)

{
 return x + 1;
}



/* Function: getName @ 00102a60 */

/* DWARF original prototype: char * getName(Base * this) */

char * Base_getName(Base *this_ptr)

{
 return "Base";
}



/* Function: ~Base @ 00102a6c */

/* DWARF original prototype: void ~Base(Base * this, int __in_chrg) */

void Base_dtor_Base(Base *this_ptr,int __in_chrg)

{
 return;
}



/* Function: virtual_func @ 00102a72 */

/* DWARF original prototype: int virtual_func(Derived * this, int x) */

int Derived_virtual_func(Derived *this_ptr,int x)

{
 return this_ptr->multiplier * x;
}



/* Function: getName @ 00102a7e */

/* DWARF original prototype: char * getName(Derived * this) */

char * Derived_getName(Derived *this_ptr)

{
 return "Derived";
}



/* Function: funcA @ 00102a8a */

/* DWARF original prototype: int funcA(MultiDerived * this) */

int MultiDerived_funcA(MultiDerived *this_ptr)

{
 return 0x1e;
}



/* Function: funcB @ 00102a94 */

/* DWARF original prototype: int funcB(MultiDerived * this) */

int MultiDerived_funcB(MultiDerived *this_ptr)

{
 return 0x28;
}



/* Function: funcB @ 00102a9e */

/* non-virtual thunk to MultiDerived::funcB() */

undefined8 MultiDerived_funcB_thunk(MultiDerived *this_ptr)

{
 return 0x28;
}



/* Function: func @ 00102aa8 */

/* DWARF original prototype: int func(VirtualBase * this) */

int VirtualBase_func(VirtualBase *this_ptr)

{
 return 100;
}



/* Function: ~VirtualBase @ 00102ab2 */

/* DWARF original prototype: void ~VirtualBase(VirtualBase * this, int __in_chrg) */

void VirtualBase_dtor_VirtualBase(VirtualBase *this_ptr,int __in_chrg)

{
 return;
}



/* Function: func @ 00102ab8 */

/* DWARF original prototype: int func(MiddleA * this) */

int MiddleA_func(MiddleA *this_ptr)

{
 return *(int *)((long)&this_ptr->dataA + (long)this_ptr->_vptr_MiddleA[-3]) + 0x96;
}



/* Function: func @ 00102acd */

/* virtual thunk to MiddleA::func() */

void MiddleA_func_thunk(MiddleA *this_ptr)

{
 MiddleA_func((MiddleA *)((long)&this_ptr->_vptr_MiddleA + (long)this_ptr->_vptr_MiddleA[-3]));
 return;
}



/* Function: func @ 00102ada */

/* DWARF original prototype: int func(MiddleB * this) */

int MiddleB_func(MiddleB *this_ptr)

{
 return *(int *)((long)&this_ptr->dataB + (long)this_ptr->_vptr_MiddleB[-3]) + 200;
}



/* Function: func @ 00102aef */

/* virtual thunk to MiddleB::func() */

void MiddleB_func_thunk(MiddleB *this_ptr)

{
 MiddleB_func((MiddleB *)((long)&this_ptr->_vptr_MiddleB + (long)this_ptr->_vptr_MiddleB[-3]));
 return;
}



/* Function: func @ 00102afc */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: int func(DiamondDerived * this) */

int DiamondDerived_func(DiamondDerived *this_ptr)

{
 return *(int *)((long)&(this_ptr->super_MiddleA).dataA + (long)(this_ptr->super_MiddleA)._vptr_MiddleA[-3]
 ) + 0xfa;
}



/* Function: func @ 00102b11 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::func() */

void DiamondDerived_func_thunk(DiamondDerived *this_ptr)

{
 DiamondDerived_func((DiamondDerived *)
 ((long)&(this_ptr->super_MiddleA)._vptr_MiddleA + (long)(this_ptr->super_MiddleA)._vptr_MiddleA[-3]))
 ;
 return;
}



/* Function: func @ 00102b1e */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::func() */

void DiamondDerived_func_nonvirtual_thunk(DiamondDerived *this_ptr)

{
 DiamondDerived_func((DiamondDerived *)&this_ptr[-1].field_0x20);
 return;
}



/* Function: ~MiddleA @ 00102b28 */

/* DWARF original prototype: void ~MiddleA(MiddleA * this) */

void MiddleA_dtor_MiddleA(MiddleA *this_ptr)

{
 this_ptr->_vptr_MiddleA = (_func_int_varargs **)&PTR_func_00105920;
 *(undefined8*)&this_ptr->field_0x10 = (undefined8)&PTR_func_00105958;
 return;
}



/* Function: ~MiddleA @ 00102b3f */

/* virtual thunk to MiddleA::~MiddleA() */

void MiddleA_dtor_MiddleA_thunk(MiddleA *this_ptr)

{
 _func_int_varargs *p_Var1;
 
 p_Var1 = (_func_int_varargs *)((long)&this_ptr->_vptr_MiddleA + (long)this_ptr->_vptr_MiddleA[-4]);
 *(undefined8*)p_Var1 = (undefined8)&PTR_func_00105920;
 *(undefined8*)(p_Var1 + 0x10) = (undefined8)&PTR_func_00105958;
 return;
}



/* Function: ~MiddleB @ 00102b5e */

/* DWARF original prototype: void ~MiddleB(MiddleB * this) */

void MiddleB_dtor_MiddleB(MiddleB *this_ptr)

{
 this_ptr->_vptr_MiddleB = (_func_int_varargs **)&PTR_func_00105998;
 *(undefined8*)&this_ptr->field_0x10 = (undefined8)&PTR_func_001059d0;
 return;
}



/* Function: ~MiddleB @ 00102b75 */

/* virtual thunk to MiddleB::~MiddleB() */

void MiddleB_dtor_MiddleB_thunk(MiddleB *this_ptr)

{
 _func_int_varargs *p_Var1;
 
 p_Var1 = (_func_int_varargs *)((long)&this_ptr->_vptr_MiddleB + (long)this_ptr->_vptr_MiddleB[-4]);
 *(undefined8*)p_Var1 = (undefined8)&PTR_func_00105998;
 *(undefined8*)(p_Var1 + 0x10) = (undefined8)&PTR_func_001059d0;
 return;
}



/* Function: getType @ 00102b94 */

/* DWARF original prototype: int getType(RTTIDerivedA * this) */

int RTTIDerivedA_getType(RTTIDerivedA *this_ptr)

{
 return 1;
}



/* Function: getType @ 00102b9e */

/* DWARF original prototype: int getType(RTTIDerivedB * this) */

int RTTIDerivedB_getType(RTTIDerivedB *this_ptr)

{
 return 2;
}



/* Function: ~RTTIDerivedB @ 00102ba8 */

/* DWARF original prototype: void ~RTTIDerivedB(RTTIDerivedB * this, int __in_chrg) */

void RTTIDerivedB_dtor_RTTIDerivedB(RTTIDerivedB *this_ptr,int __in_chrg)

{
 return;
}



/* Function: ~RTTIDerivedA @ 00102bae */

/* DWARF original prototype: void ~RTTIDerivedA(RTTIDerivedA * this, int __in_chrg) */

void RTTIDerivedA_dtor_RTTIDerivedA(RTTIDerivedA *this_ptr,int __in_chrg)

{
 return;
}



/* Function: ~MultiDerived @ 00102bb4 */

/* DWARF original prototype: void ~MultiDerived(MultiDerived * this, int __in_chrg) */

void MultiDerived_dtor_MultiDerived(MultiDerived *this_ptr,int __in_chrg)

{
 return;
}



/* Function: ~MultiDerived @ 00102bb9 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void MultiDerived_dtor_MultiDerived_thunk(MultiDerived *this_ptr)

{
 return;
}



/* Function: ~Derived @ 00102bbe */

/* DWARF original prototype: void ~Derived(Derived * this, int __in_chrg) */

void Derived_dtor_Derived(Derived *this_ptr,int __in_chrg)

{
 return;
}



/* Function: ~Base @ 00102bc4 */

/* DWARF original prototype: void ~Base(Base * this, int __in_chrg) */

void Base_dtor_Base_deleting(Base *this_ptr,int __in_chrg)

{
 operator_delete(this_ptr,8);
 return;
}



/* Function: ~Derived @ 00102bd2 */

/* DWARF original prototype: void ~Derived(Derived * this, int __in_chrg) */

void Derived_dtor_Derived_deleting(Derived *this_ptr,int __in_chrg)

{
 operator_delete(this_ptr,0x10);
 return;
}



/* Function: ~MultiDerived @ 00102be0 */

/* DWARF original prototype: void ~MultiDerived(MultiDerived * this, int __in_chrg) */

void MultiDerived_dtor_MultiDerived_deleting(MultiDerived *this_ptr,int __in_chrg)

{
 operator_delete(this_ptr,0x20);
 return;
}



/* Function: ~MultiDerived @ 00102bee */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void MultiDerived_dtor_MultiDerived_nonvirtual_thunk(MultiDerived *this_ptr)

{
 int in_ESI;
 
 MultiDerived_dtor_MultiDerived_deleting((MultiDerived *)&this_ptr[-1].super_BaseB,in_ESI);
 return;
}



/* Function: ~VirtualBase @ 00102bf8 */

/* DWARF original prototype: void ~VirtualBase(VirtualBase * this, int __in_chrg) */

void VirtualBase_dtor_VirtualBase_deleting(VirtualBase *this_ptr,int __in_chrg)

{
 operator_delete(this_ptr,0x10);
 return;
}



/* Function: ~RTTIDerivedB @ 00102c06 */

/* DWARF original prototype: void ~RTTIDerivedB(RTTIDerivedB * this, int __in_chrg) */

void RTTIDerivedB_dtor_RTTIDerivedB_deleting(RTTIDerivedB *this_ptr,int __in_chrg)

{
 operator_delete(this_ptr,8);
 return;
}



/* Function: ~RTTIDerivedA @ 00102c14 */

/* DWARF original prototype: void ~RTTIDerivedA(RTTIDerivedA * this, int __in_chrg) */

void RTTIDerivedA_dtor_RTTIDerivedA_deleting(RTTIDerivedA *this_ptr,int __in_chrg)

{
 operator_delete(this_ptr,8);
 return;
}



/* Function: ~MiddleA @ 00102c22 */

/* DWARF original prototype: void ~MiddleA(MiddleA * this) */

void MiddleA_dtor_MiddleA_deleting(MiddleA *this_ptr)

{
 this_ptr->_vptr_MiddleA = (_func_int_varargs **)&PTR_func_00105920;
 *(undefined8*)&this_ptr->field_0x10 = (undefined8)&PTR_func_00105958;
 operator_delete(this_ptr,0x20);
 return;
}



/* Function: ~MiddleA @ 00102c42 */

/* virtual thunk to MiddleA::~MiddleA() */

void MiddleA_dtor_MiddleA_thunk2(MiddleA *this_ptr)

{
 MiddleA_dtor_MiddleA_deleting((MiddleA *)((long)&this_ptr->_vptr_MiddleA + (long)this_ptr->_vptr_MiddleA[-4]));
 return;
}



/* Function: ~MiddleB @ 00102c50 */

/* DWARF original prototype: void ~MiddleB(MiddleB * this) */

void MiddleB_dtor_MiddleB_deleting(MiddleB *this_ptr)

{
 this_ptr->_vptr_MiddleB = (_func_int_varargs **)&PTR_func_00105998;
 *(undefined8*)&this_ptr->field_0x10 = (undefined8)&PTR_func_001059d0;
 operator_delete(this_ptr,0x20);
 return;
}



/* Function: ~MiddleB @ 00102c70 */

/* virtual thunk to MiddleB::~MiddleB() */

void MiddleB_dtor_MiddleB_thunk2(MiddleB *this_ptr)

{
 MiddleB_dtor_MiddleB_deleting((MiddleB *)((long)&this_ptr->_vptr_MiddleB + (long)this_ptr->_vptr_MiddleB[-4]));
 return;
}



/* Function: ~MiddleA @ 00102c7e */

/* DWARF original prototype: void ~MiddleA(MiddleA * this, int __in_chrg, void * * __vtt_parm) */

void MiddleA_dtor_MiddleA_vtt(MiddleA *this_ptr,int __in_chrg,void **__vtt_parm)

{
 undefined8 ppuVar1;
 _func_int_varargs *p_Var2;
 undefined8 ppuVar3;
 
 ppuVar1 = (undefined8)&PTR_func_00105920;
 if (__in_chrg == 0) {
 ppuVar1 = *(undefined8*)__vtt_parm;
 }
 this_ptr->_vptr_MiddleA = (_func_int_varargs **)ppuVar1;
 ppuVar3 = (undefined8)&PTR_func_00105958;
 p_Var2 = (_func_int_varargs *)0x10;
 if (__in_chrg == 0) {
 ppuVar3 = ((undefined8*)__vtt_parm)[1];
 p_Var2 = ((_func_int_varargs **)ppuVar1)[-3];
 }
 *(undefined8*)((long)&this_ptr->_vptr_MiddleA + (long)p_Var2) = ppuVar3;
 return;
}



/* Function: ~MiddleA @ 00102cb0 */

/* DWARF original prototype: void ~MiddleA(MiddleA * this, void * * __vtt_parm) */

void MiddleA_dtor_MiddleA_vtt_wrapper(MiddleA *this_ptr,void **__vtt_parm)

{
 MiddleA_dtor_MiddleA_vtt(this_ptr,0,__vtt_parm);
 return;
}



/* Function: ~MiddleB @ 00102cbe */

/* DWARF original prototype: void ~MiddleB(MiddleB * this, int __in_chrg, void * * __vtt_parm) */

void MiddleB_dtor_MiddleB_vtt(MiddleB *this_ptr,int __in_chrg,void **__vtt_parm)

{
 undefined8 ppuVar1;
 _func_int_varargs *p_Var2;
 undefined8 ppuVar3;
 
 ppuVar1 = (undefined8)&PTR_func_00105998;
 if (__in_chrg == 0) {
 ppuVar1 = *(undefined8*)__vtt_parm;
 }
 this_ptr->_vptr_MiddleB = (_func_int_varargs **)ppuVar1;
 ppuVar3 = (undefined8)&PTR_func_001059d0;
 p_Var2 = (_func_int_varargs *)0x10;
 if (__in_chrg == 0) {
 ppuVar3 = ((undefined8*)__vtt_parm)[1];
 p_Var2 = ((_func_int_varargs **)ppuVar1)[-3];
 }
 *(undefined8*)((long)&this_ptr->_vptr_MiddleB + (long)p_Var2) = ppuVar3;
 return;
}



/* Function: ~MiddleB @ 00102cf0 */

/* DWARF original prototype: void ~MiddleB(MiddleB * this, void * * __vtt_parm) */

void MiddleB_dtor_MiddleB_vtt_wrapper(MiddleB *this_ptr,void **__vtt_parm)

{
 MiddleB_dtor_MiddleB_vtt(this_ptr,0,__vtt_parm);
 return;
}



/* Function: template_max<int> @ 00102cfe */

int template_max_int(int a,int b)

{
 if (b <= a) {
 b = a;
 }
 return b;
}



/* Function: template_max<double> @ 00102d0a */

double template_max_double(double a,double b)

{
 if (a <= b) {
 a = b;
 }
 return a;
}



/* Function: template_swap<int> @ 00102d13 */

void template_swap_int(int *a,int *b)

{
 int iVar1;
 
 iVar1 = *a;
 *a = *b;
 *b = iVar1;
 return;
}



/* Function: Container @ 00102d20 */

/* DWARF original prototype: void Container(Container<int> * this) */

void Container_int_ctor(Container_int *this_ptr)

{
 this_ptr->size = 0;
 return;
}



/* Function: push @ 00102d2c */

/* DWARF original prototype: void push(Container<int> * this, int value) */

void Container_int_push(Container_int *this_ptr,int value)

{
 int iVar1;
 
 iVar1 = this_ptr->size;
 if (iVar1 < 10) {
 this_ptr->size = iVar1 + 1;
 this_ptr->data[iVar1] = value;
 }
 return;
}



/* Function: get @ 00102d44 */

/* DWARF original prototype: int get(Container<int> * this, int idx) */

int Container_int_get(Container_int *this_ptr,int idx)

{
 int iVar1;
 
 iVar1 = 0;
 if ((-1 < idx) && (iVar1 = 0, idx < this_ptr->size)) {
 iVar1 = this_ptr->data[idx];
 }
 return iVar1;
}



/* Function: getSize @ 00102d5a */

/* DWARF original prototype: int getSize(Container<int> * this) */

int Container_int_getSize(Container_int *this_ptr)

{
 return this_ptr->size;
}



/* Function: Container @ 00102d62 */

/* DWARF original prototype: void Container(Container<double> * this) */

void Container_double_ctor(Container_double *this_ptr)

{
 this_ptr->size = 0;
 return;
}



/* Function: push @ 00102d6e */

/* DWARF original prototype: void push(Container<double> * this, double value) */

void Container_double_push(Container_double *this_ptr,double value)

{
 int iVar1;
 
 iVar1 = this_ptr->size;
 if (iVar1 < 10) {
 this_ptr->size = iVar1 + 1;
 this_ptr->data[iVar1] = value;
 }
 return;
}



/* Function: get @ 00102d88 */

/* DWARF original prototype: double get(Container<double> * this, int idx) */

double Container_double_get(Container_double *this_ptr,int idx)

{
 double dVar1;
 
 dVar1 = 0.0;
 if ((-1 < idx) && (idx < this_ptr->size)) {
 dVar1 = this_ptr->data[idx];
 }
 return dVar1;
}



/* Function: getSize @ 00102da2 */

/* DWARF original prototype: int getSize(Container<double> * this) */

int Container_double_getSize(Container_double *this_ptr)

{
 return this_ptr->size;
}



/* Function: ~unique_ptr @ 00102daa */

/* DWARF original prototype: void ~unique_ptr(unique_ptr<int,_std::default_delete<int>_> * this, int
 __in_chrg) */

void
unique_ptr_int_dtor
 (unique_ptr_int *this_ptr,int __in_chrg)

{
 __uniq_ptr_data_int _Var1;
 
 /* Unresolved local var: int * * __ptr@[???] */
 _Var1 = (this_ptr->_M_t)._M_t;
 if (_Var1 != (__uniq_ptr_data_int)0x0) {
 operator_delete((void *)_Var1,4);
 return;
 }
 return;
}



/* Function: ~unique_ptr @ 00102dc2 */

/* DWARF original prototype: void ~unique_ptr(unique_ptr<int_[],_std::default_delete<int_[]>_> *
 this, int __in_chrg) */

void
unique_ptr_int_array_dtor
 (unique_ptr_int_array *this_ptr,int __in_chrg)

{
 __uniq_ptr_data_int_array _Var1;
 
 /* Unresolved local var: int * * __ptr@[???] */
 _Var1 = (this_ptr->_M_t)._M_t;
 if (_Var1 != (__uniq_ptr_data_int_array)0x0) {
 operator_delete_array((void *)_Var1);
 return;
 }
 return;
}



/* Function: ~DiamondDerived @ 00102dd4 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this, int __in_chrg, void * *
 __vtt_parm) */

void
DiamondDerived_dtor_DiamondDerived_vtt(DiamondDerived *this_ptr,int __in_chrg,void **__vtt_parm)

{
 undefined8 ppuVar1;
 undefined8 ppuVar2;
 _func_int_varargs *p_Var3;
 
 ppuVar1 = (undefined8)&PTR_func_00105b08;
 if (__in_chrg == 0) {
 ppuVar1 = *(undefined8*)__vtt_parm;
 }
 (this_ptr->super_MiddleA)._vptr_MiddleA = (_func_int_varargs **)ppuVar1;
 ppuVar2 = (undefined8)&PTR_func_00105b70;
 p_Var3 = (_func_int_varargs *)0x20;
 if (__in_chrg == 0) {
 ppuVar2 = ((undefined8*)__vtt_parm)[5];
 p_Var3 = ((_func_int_varargs **)ppuVar1)[-3];
 }
 *(undefined8*)(p_Var3 + (long)&(this_ptr->super_MiddleA)._vptr_MiddleA) = ppuVar2;
 ppuVar1 = (undefined8)&PTR_func_00105b38;
 if (__in_chrg == 0) {
 ppuVar1 = ((undefined8*)__vtt_parm)[6];
 }
 *(undefined8*)&(this_ptr->super_MiddleA).field_0x10 = ppuVar1;
 ppuVar1 = (undefined8)&PTR_construction_vtable_24__00105ad0;
 if (__in_chrg == 0) {
 ppuVar1 = ((undefined8*)__vtt_parm)[3];
 }
 MiddleB_dtor_MiddleB_vtt((MiddleB *)&(this_ptr->super_MiddleA).field_0x10, __in_chrg, __vtt_parm);
 ppuVar1 = (undefined8)&PTR_construction_vtable_24__00105ac0;
 if (__in_chrg == 0) {
 ppuVar1 = ((undefined8*)__vtt_parm)[1];
 }
 MiddleA_dtor_MiddleA_vtt(&this_ptr->super_MiddleA, __in_chrg, __vtt_parm);
 return;
}



/* Function: ~DiamondDerived @ 00102e5e */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this) */

void DiamondDerived_dtor_DiamondDerived(DiamondDerived *this_ptr)

{
 DiamondDerived_dtor_DiamondDerived_vtt(this_ptr,2,(void **)0x0);
 return;
}



/* Function: ~DiamondDerived @ 00102e6e */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_dtor_DiamondDerived_nonvirtual_thunk(DiamondDerived *this_ptr)

{
 DiamondDerived_dtor_DiamondDerived((DiamondDerived *)&this_ptr[-1].field_0x20);
 return;
}



/* Function: ~DiamondDerived @ 00102e78 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_dtor_DiamondDerived_thunk(DiamondDerived *this_ptr)

{
 DiamondDerived_dtor_DiamondDerived((DiamondDerived *)
 ((long)&(this_ptr->super_MiddleA)._vptr_MiddleA +
 (long)(this_ptr->super_MiddleA)._vptr_MiddleA[-4]));
 return;
}



/* Function: ~DiamondDerived @ 00102e86 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this) */

void DiamondDerived_dtor_DiamondDerived_deleting(DiamondDerived *this_ptr)

{
 DiamondDerived_dtor_DiamondDerived(this_ptr);
 operator_delete(this_ptr,0x30);
 return;
}



/* Function: ~DiamondDerived @ 00102eab */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_dtor_DiamondDerived_nonvirtual_thunk2(DiamondDerived *this_ptr)

{
 DiamondDerived_dtor_DiamondDerived_deleting((DiamondDerived *)&this_ptr[-1].field_0x20);
 return;
}



/* Function: ~DiamondDerived @ 00102eb5 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_dtor_DiamondDerived_thunk2(DiamondDerived *this_ptr)

{
 DiamondDerived_dtor_DiamondDerived_deleting((DiamondDerived *)
 ((long)&(this_ptr->super_MiddleA)._vptr_MiddleA +
 (long)(this_ptr->super_MiddleA)._vptr_MiddleA[-4]));
 return;
}



/* Function: ~DiamondDerived @ 00102ec2 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this, void * * __vtt_parm) */

void DiamondDerived_dtor_DiamondDerived_vtt_wrapper(DiamondDerived *this_ptr,void **__vtt_parm)

{
 DiamondDerived_dtor_DiamondDerived_vtt(this_ptr,0,__vtt_parm);
 return;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 87 */
