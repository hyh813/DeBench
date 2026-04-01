#include <string.h>
#include <stdio.h>
#include <stddef.h>
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
typedef unsigned int undefined4;

typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* std::default_delete template for smart pointers */
namespace std {
  template<typename T>
  struct default_delete {
    void operator()(T* p) const { if(p) delete p; }
  };
  
  template<typename T>
  struct default_delete<T[]> {
    void operator()(T* p) const { if(p) delete[] p; }
  };
}

/* Concrete types for unique_ptr internals */
typedef void* _Tuple_impl_int_ptr;
typedef void* _Tuple_impl_int_array_ptr;

typedef struct {
  _Tuple_impl_int_ptr super__Tuple_impl_0;
} __uniq_ptr_impl_int;

typedef struct {
  _Tuple_impl_int_array_ptr super__Tuple_impl_0;
} __uniq_ptr_impl_int_array;

typedef struct {
  __uniq_ptr_impl_int super___uniq_ptr_impl;
} __uniq_ptr_data_int;

typedef struct {
  __uniq_ptr_impl_int_array super___uniq_ptr_impl;
} __uniq_ptr_data_int_array;

typedef struct {
  __uniq_ptr_data_int _M_t;
} unique_ptr_int;

typedef struct {
  __uniq_ptr_data_int_array _M_t;
} unique_ptr_int_array;

/* Function pointer type for virtual functions */
typedef int (*_func_int_varargs)(void*, ...);

/* Forward declarations for diamond inheritance classes */
typedef struct DiamondDerived DiamondDerived;
typedef struct MiddleA MiddleA;
typedef struct MiddleB MiddleB;
typedef struct VirtualBase VirtualBase;
typedef struct MultiDerived MultiDerived;

/* SimpleClass definition */
typedef struct {
  char name[32];
} SimpleClass;

/* LifecycleClass definition */
typedef struct {
  int dummy;
} LifecycleClass;

/* Container_int definition */
typedef struct {
  int size;
  int data[10];
} Container_int;

/* Container_double definition */
typedef struct {
  int size;
  double data[10];
} Container_double;

int template_max_int(int a, int b);
double template_max_double(double a, double b);
void template_swap_int(int *a, int *b);
void Container_int_push(Container_int *, int value);

/* Forward declarations for unique_ptr destructors */
void unique_ptr_int_destructor(unique_ptr_int *ptr, int __in_chrg);
void unique_ptr_int_array_destructor(unique_ptr_int_array *ptr, int __in_chrg);

/* MiddleA struct definition */
typedef struct MiddleA {
  _func_int_varargs **_vptr_MiddleA;
  _func_int_varargs **field_0x8;
  int dataA;
} MiddleA;

/* MiddleB struct definition */
typedef struct MiddleB {
  _func_int_varargs **_vptr_MiddleB;
  _func_int_varargs **field_0x8;
  int dataB;
} MiddleB;

/* VirtualBase struct definition */
typedef struct VirtualBase {
  _func_int_varargs **_vptr_VirtualBase;
} VirtualBase;

/* Forward declarations for DiamondDerived and related functions */
int DiamondDerived_func(DiamondDerived *self);
void DiamondDerived_destructor(DiamondDerived *self);
int VirtualBase_func(VirtualBase *self);
void VirtualBase_destructor(VirtualBase *self, int __in_chrg);
int MiddleA_func(MiddleA *self);
void MiddleA_destructor(MiddleA *self, int __in_chrg, void **__vtt_parm);
int MiddleB_func(MiddleB *self);
void MiddleB_destructor(MiddleB *self, int __in_chrg, void **__vtt_parm);

/* DiamondDerived struct definition */
typedef struct DiamondDerived {
  _func_int_varargs **_vptr_DiamondDerived;
  int _8_4_;
  int _c_4_;
  int _10_4_;
  int _14_4_;
  int _16_4_;
  int _1a_4_;
  int _20_4_;
  MiddleA super_MiddleA;
  MiddleB super_MiddleB;
} DiamondDerived;

/* MultiDerived struct definition */
typedef struct MultiDerived {
  _func_int_varargs **_vptr_BaseA;
  int field_0x4;
  _func_int_varargs **_vptr_BaseB;
  int field_0xc;
  int field_0x10;
} MultiDerived;

/* RTTI type declarations */
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;

/* External type info symbols */
extern void* RTTIBase_typeinfo;
extern void* RTTIDerivedA_typeinfo;
extern void* RTTIDerivedB_typeinfo;

/* ROUND macro for rounding doubles to integers */
#define ROUND(x) ((int)(x + 0.5))

extern int LifecycleClass_instance_count;

/* RTTI type info structure */
typedef struct {
  const char* name;
  void* type_info;
} RTTIBase;

typedef struct RTTIDerivedA {
  RTTIBase base;
  int dummy;
} RTTIDerivedA;

typedef struct RTTIDerivedB {
  RTTIBase base;
  int dummy;
} RTTIDerivedB;

/* Base class definition */
typedef struct Base {
  _func_int_varargs **_vptr_Base;
  int multiplier;
} Base;

/* Derived class definition */
typedef struct Derived {
  _func_int_varargs **_vptr_Base;
  int multiplier;
} Derived;

/* Stack check declaration */
extern void __stack_chk_fail(void);

/* Virtual function table pointer declarations */
extern _func_int_varargs *PTR_virtual_func_00015c58;
extern _func_int_varargs *PTR_virtual_func_00015c70;
extern void *PTR__RTTIDerivedA_00015dd0;
extern void *PTR__RTTIDerivedB_00015de4;
extern void *RTTIBase_typeinfo;
extern void *PTR_func_00015da0;
extern void *PTR_func_00015dbc;
extern void *PTR_func_00015c94;
extern void *PTR_func_00015cb0;
extern void *PTR_func_00015cd0;
extern void *PTR_func_00015cec;
extern void *PTR_func_00015d88;
extern void *PTR_construction_vtable_12__00015d6c;
extern void *PTR_construction_vtable_12__00015d64;

/* String data declarations */
extern char DAT_0001301a;
extern char DAT_0001303e;
extern char DAT_0001305c;
extern char DAT_00013078;
extern char DAT_00013094;
extern char DAT_000130b0;
extern char DAT_000130cd;
extern char DAT_000130e9;
extern char DAT_00013105;
extern char DAT_00013121;
extern char DAT_0001313d;
extern char DAT_0001315a;
extern char DAT_00013177;

/* Memory allocation/deallocation functions */
extern void* operator_new(size_t size);
extern void operator_delete(void* ptr, size_t size);
extern void operator_delete_(void* ptr);
extern void* __cxa_allocate_exception(size_t size);
extern void __cxa_throw(void* thrown_exception, void* type_info, void* dest);
extern void* __dynamic_cast(void* src_ptr, void* src_type, void* dst_type, int src2dst_offset, void* dst_type2);
extern void _Unwind_Resume(void* exception_object);

void __stack_chk_fail_local(void) { __stack_chk_fail(); }

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/5-1/5-1_gcc_Os_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00011030 @ 00011030 */
void test_cpp_oo_features(void);

void FUN_00011030(void)

{
 ((void (*)(void))0x0)();
 return;
}



/* Function: test_cpp_exception @ 000112d0 */

/* WARNING: Function: __x86.get_pc_thunk.si replaced with injection: get_pc_thunk_si */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_exception(void)

{
 int *puVar1;
 
 puVar1 = (int *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* WARNING: Subroutine does not return */
 /* try { // try from 00011303 to 00011307 has its CatchHandler @ 00011308 */
 __cxa_throw(puVar1,0,0);
}



/* Function: main @ 000113c2 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 000113d5 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _GLOBAL__sub_I__Z20test_cpp_member_funcv(void)

{
 /* std::ios_base::Init::Init(&std::__ioinit); */
 /* __cxa_atexit(std::ios_base::Init::~Init,&std::__ioinit,&__dso_handle); */
 return;
}




/* CRT stub function _start removed by preprocessor */




/* Function: __i686.get_pc_thunk.bx @ 0001144c */

/* WARNING: This is an inlined function */

void __i686_get_pc_thunk_bx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.bx @ 00011450 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_bx(void)

{
 return;
}




/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: __x86.get_pc_thunk.dx @ 00011589 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_dx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.di @ 0001158d */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_di(void)

{
 return;
}



/* Function: test_cpp_member_func @ 00011591 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_member_func(void)

{
 int iVar1;
 size_t sVar2;
 int iVar3;
 int in_GS_OFFSET;
 SimpleClass obj;
 
 iVar1 = *(int *)(in_GS_OFFSET + 0x14);
 strncpy(obj.name,"Test",0x1f);
 obj.name[0x1f] = '\0';
 sVar2 = strlen(obj.name);
 iVar3 = sVar2 + 0x125c;
 if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 iVar3 = 0;
 }
 return iVar3;
}



/* Function: test_cpp_constructor @ 000115f1 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_constructor(void)

{
 LifecycleClass obj;
 return LifecycleClass_instance_count * 0x3e9 + 0x15;
}



/* Function: call_virtual_func @ 0001160d */

int call_virtual_func(Base *obj,int x)

{
 int iVar1;
 _func_int_varargs vfunc;
 
 /* WARNING: Could not recover jumptable at 0x0001161f. Too many branches */
 /* WARNING: Treating indirect jump as call */
 vfunc = (_func_int_varargs)(*obj->_vptr_Base);
 iVar1 = vfunc(obj, x);
 return iVar1;
}



/* Function: test_cpp_virtual_func @ 00011621 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_virtual_func(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int in_GS_OFFSET;
 Base base;
 Derived derived;
 
 iVar1 = *(int *)(in_GS_OFFSET + 0x14);
 derived.multiplier = 3;
 base._vptr_Base = &PTR_virtual_func_00015c58;
 derived._vptr_Base = &PTR_virtual_func_00015c70;
 iVar2 = call_virtual_func(&base,5);
 call_virtual_func((Base *)&derived,5);
 iVar3 = iVar2 + 0x15 + iVar3;
 if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 iVar3 = 0;
 }
 return iVar3;
}



/* Function: test_cpp_multiple_inheritance @ 0001168f */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_multiple_inheritance(void)

{
 return 0x47;
}



/* Function: test_cpp_operator_overload @ 00011699 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_operator_overload(void)

{
 return 0x16;
}



/* Function: test_cpp_template_func @ 000116a3 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_func(void)

{
 int iVar1;
 int in_GS_OFFSET;
 double dVar2;
 int a;
 int b;
 int local_10;
 
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 iVar1 = template_max_int(3,7);
 dVar2 = template_max_double(2.5,1.5);
 a = 10;
 b = 0x14;
 template_swap_int(&a,&b);
 iVar1 = (int)ROUND(dVar2) + iVar1 + a + b;
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 iVar1 = 0;
 }
 return iVar1;
}



/* Function: test_cpp_template_class @ 00011735 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_class(void)

{
 int iVar1;
 int iVar2;
 int in_GS_OFFSET;
 Container_int int_container;
 
 iVar1 = *(int *)(in_GS_OFFSET + 0x14);
 int_container.size = 1;
 int_container.data[0] = 10;
 Container_int_push(&int_container,0x14);
 Container_int_push(&int_container,0x1e);
 iVar2 = 0;
 if (0 < int_container.size) {
 iVar2 = int_container.data[0];
 }
 iVar2 = int_container.size + 3 + iVar2;
 if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 iVar2 = 0;
 }
 return iVar2;
}



/* Function: test_cpp_lambda @ 00011797 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_lambda(void)

{
 return 0x55;
}



/* Function: test_cpp_rtti @ 000117a1 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Removing unreachable block (ram,0x00011836) */
/* WARNING: Removing unreachable block (ram,0x0001183b) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_rtti(void)

{
 int iVar1;
 int *piVar2;
 int *piVar3;
 int iVar4;
 size_t sVar5;
 uint uVar6;
 int iVar7;
 char *__s1;
 void **ppuVar8;
 
 uVar6 = 10;
 piVar2 = (int *)operator_new(4);
 *(void **)piVar2 = &PTR__RTTIDerivedA_00015dd0;
 piVar3 = (int *)operator_new(4);
 *(void **)piVar3 = &PTR__RTTIDerivedB_00015de4;
 iVar1 = *piVar2;
 __s1 = *(char **)(*(int *)(iVar1 + -4) + 4);
 if ((__s1 != "12RTTIDerivedA") && (uVar6 = 0, *__s1 != '*')) {
 iVar4 = strcmp(__s1,"12RTTIDerivedA");
 uVar6 = -(uint)(iVar4 == 0) & 10;
 }
 iVar7 = uVar6 + 0x14;
 /* Unresolved local var: RTTIDerivedA * derivedA@[???] */
 ppuVar8 = (void **)&RTTIBase_typeinfo;
 iVar4 = (__dynamic_cast(piVar2,ppuVar8,&RTTIDerivedA_typeinfo,0,0) != (void *)0);
 if (iVar4 != 0) {
 iVar7 = uVar6 + 0x78;
 }
 /* Unresolved local var: RTTIDerivedB * derivedB@[???] */
 iVar4 = (__dynamic_cast(piVar3,ppuVar8,&RTTIDerivedB_typeinfo,0,0) != (void *)0);
 if (iVar4 != 0) {
 iVar7 = iVar7 + 200;
 }
 if (*__s1 == '*') {
 __s1 = __s1 + 1;
 }
 sVar5 = strlen(__s1);
 iVar7 = sVar5 + iVar7;
 ((void (*)(void *))(*(int *)(iVar1 + 4)))(piVar2);
 ((void (*)(void *))(*(int *)(*piVar3 + 4)))(piVar3);
 return iVar7;
}



/* Function: test_cpp_smart_ptr @ 000118c9 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_smart_ptr(void)

{
 int iVar1;
 int uVar2;
 int in_GS_OFFSET;
 int in_stack_ffffffa8;
 int in_stack_ffffffb8;
 unique_ptr_int ptr1;
 unique_ptr_int ptr2;
 unique_ptr_int_array arr;
 int *arr_ptr;
 
 iVar1 = *(int *)(in_GS_OFFSET + 0x14);
 ptr2._M_t.super___uniq_ptr_impl.super__Tuple_impl_0 = (void *)operator_new(4);
 ptr1._M_t.super___uniq_ptr_impl.super__Tuple_impl_0 = (void *)0x0;
 *(int *)ptr2._M_t.super___uniq_ptr_impl.super__Tuple_impl_0 = 200;
 /* try { // try from 00011918 to 0001191c has its CatchHandler @ 0001196e */
 arr_ptr = (int *)operator_new(0x14);
 arr._M_t.super___uniq_ptr_impl.super__Tuple_impl_0 = arr_ptr;
 arr_ptr[0] = 1;
 arr_ptr[1] = 2;
 arr_ptr[2] = 3;
 arr_ptr[3] = 4;
 arr_ptr[4] = 5;
 unique_ptr_int_array_destructor(&arr,in_stack_ffffffb8);
 unique_ptr_int_destructor(&ptr2,in_stack_ffffffb8);
 unique_ptr_int_destructor(&ptr1,in_stack_ffffffb8);
 if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 /* catch() { ... } // from try @ 00011918 with catch @ 0001196e */
 unique_ptr_int_destructor(&ptr2,in_stack_ffffffa8);
 unique_ptr_int_destructor(&ptr1,in_stack_ffffffa8);
 /* WARNING: Subroutine does not return */
 _Unwind_Resume(&uVar2);
 }
 return 0x2bf;
}



/* Function: test_cpp_diamond_inheritance @ 0001199d */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */

int test_cpp_diamond_inheritance(void)

{
 int iVar1;
 int iVar2 = 0;
 int iVar3;
 int in_GS_OFFSET;
 DiamondDerived obj;
 
 iVar1 = *(int *)(in_GS_OFFSET + 0x14);
 obj._20_4_ = 0x32;
 obj._20_4_ = 0x32;
 obj.super_MiddleA.field_0x8 = (_func_int_varargs **)&PTR_func_00015da0;
 obj._16_4_ = (int)&PTR_func_00015dbc;
 iVar2 = DiamondDerived_func(&obj);
 obj._20_4_ = 100;
 iVar3 = DiamondDerived_func(&obj);
 iVar3 = iVar3 + iVar2;
 DiamondDerived_destructor(&obj);
 if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar3 = __stack_chk_fail_local();
 }
 return iVar3;
}



/* Function: test_cpp_oo_features @ 00011a22 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */

void test_cpp_oo_features(void)

{
 int iVar1;
 
 puts(&DAT_0001301a);
 iVar1 = test_cpp_member_func();
 __printf_chk(1,&DAT_0001303e,iVar1);
 iVar1 = test_cpp_constructor();
 __printf_chk(1,&DAT_0001305c,iVar1);
 iVar1 = test_cpp_virtual_func();
 __printf_chk(1,&DAT_00013078,iVar1);
 iVar1 = test_cpp_multiple_inheritance();
 __printf_chk(1,&DAT_00013094,iVar1);
 iVar1 = test_cpp_diamond_inheritance();
 __printf_chk(1,&DAT_000130b0,iVar1);
 iVar1 = test_cpp_operator_overload();
 __printf_chk(1,&DAT_000130cd,iVar1);
 iVar1 = test_cpp_template_func();
 __printf_chk(1,&DAT_000130e9,iVar1);
 iVar1 = test_cpp_template_class();
 __printf_chk(1,&DAT_00013105,iVar1);
 iVar1 = test_cpp_lambda();
 __printf_chk(1,&DAT_00013121,iVar1);
 iVar1 = test_cpp_exception();
 __printf_chk(1,&DAT_0001313d,iVar1);
 iVar1 = test_cpp_smart_ptr();
 __printf_chk(1,&DAT_0001315a,iVar1);
 iVar1 = test_cpp_rtti();
 __printf_chk(1,&DAT_00013177,iVar1);
 return;
}



/* Function: virtual_func @ 00011b66 */

/* DWARF original prototype: int virtual_func(Base * this, int x) */

int Base_virtual_func(Base *this,int x)

{
 return x + 1;
}



/* Function: getName @ 00011b74 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: char * getName(Base * this) */

char * Base_getName(Base *this)

{
 return "Base";
}



/* Function: ~Base @ 00011b8a */

/* DWARF original prototype: void ~Base(Base * this, int __in_chrg) */

void __thiscall Base_destructor_vtable(Base *this,int __in_chrg)

{
 return;
}



/* Function: virtual_func @ 00011b90 */

/* DWARF original prototype: int virtual_func(Derived * this, int x) */

int __thiscall Derived_virtual_func(Derived *this,int x)

{
 return x * this->multiplier;
}



/* Function: getName @ 00011ba4 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: char * getName(Derived * this) */

char * __thiscall Derived_getName(Derived *this)

{
 return "Derived";
}



/* Function: funcA @ 00011bba */

/* DWARF original prototype: int funcA(MultiDerived * this) */

int __thiscall MultiDerived_funcA(MultiDerived *this)

{
 return 0x1e;
}



/* Function: funcB @ 00011bc4 */

/* DWARF original prototype: int funcB(MultiDerived * this) */

int __thiscall MultiDerived_funcB(MultiDerived *this)

{
 return 0x28;
}



/* Function: funcB @ 00011bce */

/* non-virtual thunk to MultiDerived::funcB() */

uint32_t __thiscall MultiDerived_funcB_thunk(MultiDerived *this)

{
 return 0x28;
}



/* Function: func @ 00011bd8 */

/* DWARF original prototype: int func(VirtualBase * this) */

int VirtualBase_func(VirtualBase *self)

{
  return 100;
}



/* Function: ~VirtualBase @ 00011be2 */

/* DWARF original prototype: void ~VirtualBase(VirtualBase * this, int __in_chrg) */

void __thiscall VirtualBase_destructor(VirtualBase *self,int __in_chrg)

{
  return;
}



/* Function: func @ 00011be8 */

/* DWARF original prototype: int func(MiddleA * this) */

int MiddleA_func(MiddleA *this)

{
  return *(int *)((int)&this->dataA + (int)this->_vptr_MiddleA[-3]) + 0x96;
}



/* Function: func @ 00011c02 */

/* virtual thunk to MiddleA::func() */

int __thiscall MiddleA_func_virtual_thunk(MiddleA *this)

{
 return MiddleA_func((MiddleA *)((int)&this->_vptr_MiddleA + (int)this->_vptr_MiddleA[-3]));
}



/* Function: func @ 00011c16 */

/* DWARF original prototype: int func(MiddleB * this) */

int MiddleB_func(MiddleB *this)

{
  return *(int *)((int)&this->dataB + (int)this->_vptr_MiddleB[-3]) + 200;
}



/* Function: func @ 00011c30 */

/* virtual thunk to MiddleB::func() */

int MiddleB_func_virtual_thunk(MiddleB *this)

{
 return MiddleB_func((MiddleB *)((int)&this->_vptr_MiddleB + (int)this->_vptr_MiddleB[-3]));
}



/* Function: func @ 00011c44 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: int func(DiamondDerived * this) */

int DiamondDerived_func(DiamondDerived *this)

{
 return *(int *)((int)&(this->super_MiddleA).dataA + (int)(this->super_MiddleA)._vptr_MiddleA[-3])
 + 0xfa;
}



/* Function: func @ 00011c5e */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::func() */

int DiamondDerived_func_virtual_thunk(DiamondDerived *this)

{
 return DiamondDerived_func((DiamondDerived *)
 ((int)&(this->super_MiddleA)._vptr_MiddleA + (int)(this->super_MiddleA)._vptr_MiddleA[-3]));
}



/* Function: func @ 00011c71 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::func() */

int DiamondDerived_func_nonvirtual_thunk(DiamondDerived *this)

{
 return DiamondDerived_func((DiamondDerived *)&this[-1].field_0x10);
}



/* Function: ~MiddleA @ 00011c7c */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */

void MiddleA_destructor_vtable_set(MiddleA *self, int __in_chrg)

{
 self->_vptr_MiddleA = (_func_int_varargs **)&PTR_func_00015c94;
 *(void ***)&self->field_0x8 = &PTR_func_00015cb0;
 return;
}



/* Function: ~MiddleA @ 00011ca1 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* virtual thunk to MiddleA::~MiddleA() */

void MiddleA_destructor_virtual_thunk(MiddleA *self, int __in_chrg)

{
 _func_int_varargs *p_Var1;
 
 p_Var1 = (_func_int_varargs *)((int)&self->_vptr_MiddleA + (int)self->_vptr_MiddleA[-4]);
 *(void ***)p_Var1 = &PTR_func_00015c94;
 *(void ***)(p_Var1 + 8) = &PTR_func_00015cb0;
 return;
}



/* Function: ~MiddleB @ 00011ccc */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk.dx */

void __thiscall MiddleB_destructor_vtable_set(MiddleB *self, int __in_chrg, void **__vtt_parm)

{
 self->_vptr_MiddleB = (_func_int_varargs **)&PTR_func_00015cd0;
 *(void ***)&self->field_0x8 = &PTR_func_00015cec;
 return;
}



/* Function: ~MiddleB @ 00011cf1 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk.dx */
/* virtual thunk to MiddleB::~MiddleB() */

void __thiscall MiddleB_destructor_virtual_thunk(MiddleB *self, int __in_chrg, void **__vtt_parm)

{
 _func_int_varargs *p_Var1;
 
 p_Var1 = (_func_int_varargs *)((int)&self->_vptr_MiddleB + (int)self->_vptr_MiddleB[-4]);
 *(void ***)p_Var1 = &PTR_func_00015cd0;
 *(void ***)(p_Var1 + 8) = &PTR_func_00015cec;
 return;
}



/* Function: getType @ 00011d1c */

/* DWARF original prototype: int getType(RTTIDerivedA * this) */

int __thiscall RTTIDerivedA_getType(RTTIDerivedA *this)

{
 return 1;
}



/* Function: getType @ 00011d26 */

/* DWARF original prototype: int getType(RTTIDerivedB * this) */

int __thiscall RTTIDerivedB_getType(RTTIDerivedB *this)

{
 return 2;
}



/* Function: ~RTTIDerivedB @ 00011d30 */

/* DWARF original prototype: void ~RTTIDerivedB(RTTIDerivedB * this, int __in_chrg) */

void __thiscall RTTIDerivedB_destructor(RTTIDerivedB *this,int __in_chrg)

{
 return;
}



/* Function: ~RTTIDerivedA @ 00011d36 */

/* DWARF original prototype: void ~RTTIDerivedA(RTTIDerivedA * this, int __in_chrg) */

void __thiscall RTTIDerivedA_destructor(RTTIDerivedA *this,int __in_chrg)

{
 return;
}



/* Function: ~MultiDerived @ 00011d3c */

/* DWARF original prototype: void ~MultiDerived(MultiDerived * this, int __in_chrg) */

void __thiscall MultiDerived_destructor(MultiDerived *this,int __in_chrg)

{
 return;
}



/* Function: ~MultiDerived @ 00011d41 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void __thiscall MultiDerived_destructor_nonvirtual_thunk(MultiDerived *this)

{
 return;
}



/* Function: ~Derived @ 00011d46 */

/* DWARF original prototype: void ~Derived(Derived * this, int __in_chrg) */

void __thiscall Derived_destructor(Derived *this,int __in_chrg)

{
 return;
}



/* Function: ~Base @ 00011d4c */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DWARF original prototype: void ~Base(Base * this, int __in_chrg) */

void __thiscall Base_destructor_full(Base *this,int __in_chrg)

{
 operator_delete(this,4);
 return;
}



/* Function: ~Derived @ 00011d74 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DWARF original prototype: void ~Derived(Derived * this, int __in_chrg) */

void __thiscall Derived_destructor_delete(Derived *this,int __in_chrg)

{
 operator_delete(this,8);
 return;
}



/* Function: ~MultiDerived @ 00011d9c */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DWARF original prototype: void ~MultiDerived(MultiDerived * this, int __in_chrg) */

void __thiscall MultiDerived_destructor_delete(MultiDerived *this,int __in_chrg)

{
 operator_delete(this,0x10);
 return;
}



/* Function: ~MultiDerived @ 00011dc4 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void __thiscall MultiDerived_destructor_delete_nonvirtual_thunk(MultiDerived *this)

{
 int in_stack_00000008;
 
 MultiDerived_destructor((MultiDerived *)&this[-1].super_BaseB,in_stack_00000008);
 return;
}



/* Function: ~VirtualBase @ 00011dd0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DWARF original prototype: void ~VirtualBase(VirtualBase * this, int __in_chrg) */

void __thiscall VirtualBase_destructor_delete(VirtualBase *this,int __in_chrg)

{
 operator_delete(this,8);
 return;
}



/* Function: ~RTTIDerivedB @ 00011df8 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DWARF original prototype: void ~RTTIDerivedB(RTTIDerivedB * this, int __in_chrg) */

void __thiscall RTTIDerivedB_destructor_delete(RTTIDerivedB *this,int __in_chrg)

{
 operator_delete(this,4);
 return;
}



/* Function: ~RTTIDerivedA @ 00011e20 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DWARF original prototype: void ~RTTIDerivedA(RTTIDerivedA * this, int __in_chrg) */

void __thiscall RTTIDerivedA_destructor_delete(RTTIDerivedA *this,int __in_chrg)

{
 operator_delete(this,4);
 return;
}



/* Function: ~MiddleA @ 00011e48 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DWARF original prototype: void ~MiddleA(MiddleA * this) */

void __thiscall MiddleA_destructor_full(MiddleA *this)

{
 this->_vptr_MiddleA = (_func_int_varargs **)&PTR_func_00015c94;
 *(void ***)&this->field_0x8 = &PTR_func_00015cb0;
 operator_delete(this,0x10);
 return;
}



/* Function: ~MiddleA @ 00011e7f */

/* virtual thunk to MiddleA::~MiddleA() */

void __thiscall MiddleA_destructor_full_virtual_thunk(MiddleA *this)

{
 MiddleA_destructor_full((MiddleA *)((int)&this->_vptr_MiddleA + (int)this->_vptr_MiddleA[-4]));
 return;
}



/* Function: ~MiddleB @ 00011e92 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DWARF original prototype: void ~MiddleB(MiddleB * this) */

void __thiscall MiddleB_destructor_full(MiddleB *this)

{
 this->_vptr_MiddleB = (_func_int_varargs **)&PTR_func_00015cd0;
 *(void ***)&this->field_0x8 = &PTR_func_00015cec;
 operator_delete(this,0x10);
 return;
}



/* Function: ~MiddleB @ 00011ec9 */

/* virtual thunk to MiddleB::~MiddleB() */

void __thiscall MiddleB_destructor_full_virtual_thunk(MiddleB *this)

{
 MiddleB_destructor_full((MiddleB *)((int)&this->_vptr_MiddleB + (int)this->_vptr_MiddleB[-4]));
 return;
}



/* Function: ~MiddleA @ 00011edc */

/* WARNING: Function: __x86.get_pc_thunk.cx replaced with injection: get_pc_thunk_cx */
/* DWARF original prototype: void ~MiddleA(MiddleA * this, int __in_chrg, void * * __vtt_parm) */

void __thiscall MiddleA_destructor_vtt(MiddleA *this,int __in_chrg,void **__vtt_parm)

{
 void **ppuVar1;
 _func_int_varargs *p_Var2;
 void **ppuVar3;
 
 ppuVar1 = &PTR_func_00015c94;
 if (__in_chrg == 0) {
 ppuVar1 = *__vtt_parm;
 }
 this->_vptr_MiddleA = (_func_int_varargs **)ppuVar1;
 if (__in_chrg == 0) {
 ppuVar3 = __vtt_parm[1];
 p_Var2 = ((_func_int_varargs **)ppuVar1)[-3];
 }
 else {
 ppuVar3 = &PTR_func_00015cb0;
 p_Var2 = (_func_int_varargs *)0x8;
 }
 *(void ***)((int)&this->_vptr_MiddleA + (int)p_Var2) = ppuVar3;
 return;
}



/* Function: ~MiddleA @ 00011f26 */

/* DWARF original prototype: void ~MiddleA(MiddleA * this, void * * __vtt_parm) */

void __thiscall MiddleA_destructor_vtt_only(MiddleA *this,void **__vtt_parm)

{
 MiddleA_destructor(this,0,__vtt_parm);
 return;
}



/* Function: ~MiddleB @ 00011f42 */

/* WARNING: Function: __x86.get_pc_thunk.cx replaced with injection: get_pc_thunk_cx */
/* DWARF original prototype: void ~MiddleB(MiddleB * this, int __in_chrg, void * * __vtt_parm) */

void __thiscall MiddleB_destructor_vtt(MiddleB *this,int __in_chrg,void **__vtt_parm)

{
 void **ppuVar1;
 _func_int_varargs *p_Var2;
 void **ppuVar3;
 
 ppuVar1 = &PTR_func_00015cd0;
 if (__in_chrg == 0) {
 ppuVar1 = *__vtt_parm;
 }
 this->_vptr_MiddleB = (_func_int_varargs **)ppuVar1;
 if (__in_chrg == 0) {
 ppuVar3 = __vtt_parm[1];
 p_Var2 = ((_func_int_varargs **)ppuVar1)[-3];
 }
 else {
 ppuVar3 = &PTR_func_00015cec;
 p_Var2 = (_func_int_varargs *)0x8;
 }
 *(void ***)((int)&this->_vptr_MiddleB + (int)p_Var2) = ppuVar3;
 return;
}



/* Function: ~MiddleB @ 00011f8c */

/* DWARF original prototype: void ~MiddleB(MiddleB * this, void * * __vtt_parm) */

void __thiscall MiddleB_destructor_vtt_only(MiddleB *this,void **__vtt_parm)

{
 MiddleB_destructor(this,0,__vtt_parm);
 return;
}



/* Function: template_max<int> @ 00011fa8 */

/* WARNING: Unknown calling convention */

int template_max_int(int a,int b)

{
 if (a < b) {
 a = b;
 }
 return a;
}



/* Function: template_max<double> @ 00011fbc */

double template_max_double(double a,double b)

{
 if (a <= b) {
 a = b;
 }
 return a;
}



/* Function: template_swap<int> @ 00011fd5 */

/* WARNING: Unknown calling convention */

void template_swap_int(int *a,int *b)

{
 int iVar1;
 
 iVar1 = *a;
 *a = *b;
 *b = iVar1;
 return;
}



/* Function: Container @ 00011fee */

/* DWARF original prototype: void Container(Container_int * this) */

void __thiscall Container_int_Constructor(Container_int *this)

{
 this->size = 0;
 return;
}



/* Function: push @ 00012002 */

/* DWARF original prototype: void push(Container_int * this, int value) */

void __thiscall Container_int_push(Container_int *this,int value)

{
 int iVar1;
 
 iVar1 = this->size;
 if (iVar1 < 10) {
 this->size = iVar1 + 1;
 this->data[iVar1] = value;
 }
 return;
}



/* Function: get @ 00012022 */

/* DWARF original prototype: int get(Container_int * this, int idx) */

int __thiscall Container_int_get(Container_int *this,int idx)

{
 int iVar1;
 
 iVar1 = 0;
 if ((-1 < idx) && (idx < this->size)) {
 iVar1 = this->data[idx];
 }
 return iVar1;
}



/* Function: getSize @ 00012040 */

/* DWARF original prototype: int getSize(Container_int * this) */

int __thiscall Container_int_getSize(Container_int *this)

{
 return this->size;
}



/* Function: Container @ 00012050 */

/* DWARF original prototype: void Container(Container_double * this) */

void __thiscall Container_double_Constructor(Container_double *this)

{
 this->size = 0;
 return;
}



/* Function: push @ 00012064 */

/* DWARF original prototype: void push(Container_double * this, double value) */

void __thiscall Container_double_push(Container_double *this,double value)

{
 int iVar1;
 
 iVar1 = this->size;
 if (iVar1 < 10) {
 this->size = iVar1 + 1;
 this->data[iVar1] = value;
 }
 return;
}



/* Function: get @ 00012088 */

/* DWARF original prototype: double get(Container_double * this, int idx) */

double __thiscall Container_double_get(Container_double *this,int idx)

{
 double dVar1;
 
 dVar1 = 0.0;
 if ((-1 < idx) && (idx < this->size)) {
 dVar1 = this->data[idx];
 }
 return dVar1;
}



/* Function: getSize @ 000120a8 */

/* DWARF original prototype: int getSize(Container_double * this) */

int __thiscall Container_double_getSize(Container_double *this)

{
 return this->size;
}



/* Function: ~unique_ptr @ 000120b8 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DWARF original prototype: void ~unique_ptr(unique_ptr_int_default_delete_int_ * this, int
 __in_chrg) */

void __thiscall unique_ptr_int_destructor(unique_ptr_int *this,int __in_chrg)

{
 void *_Var1;
 
 _Var1 = (this->_M_t).super___uniq_ptr_impl._M_t.super__Tuple_impl_0;
 if (_Var1 != (void *)0x0) {
 operator_delete(_Var1,4);
 }
 return;
}



/* Function: ~unique_ptr @ 000120e8 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DWARF original prototype: void ~unique_ptr(unique_ptr_int_array_default_delete_int_array_ *
 this, int __in_chrg) */

void __thiscall unique_ptr_int_array_destructor(unique_ptr_int_array *this,int __in_chrg)

{
 void *_Var1;
 
 _Var1 = (this->_M_t).super___uniq_ptr_impl._M_t.super__Tuple_impl_0;
 if (_Var1 != (void *)0x0) {
 operator_delete_(_Var1);
 }
 return;
}



/* Function: ~DiamondDerived @ 00012116 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this, int __in_chrg, void * *
 __vtt_parm) */

void __thiscall
DiamondDerived_destructor_vtt(DiamondDerived *this,int __in_chrg,void **__vtt_parm)

{
 void **ppuVar1;
 void **ppuVar2;
 _func_int_varargs *p_Var3;
 
 ppuVar1 = &PTR_func_00015d88;
 if (__in_chrg == 0) {
 ppuVar1 = *__vtt_parm;
 }
 (this->super_MiddleA)._vptr_MiddleA = (_func_int_varargs **)ppuVar1;
 if (__in_chrg == 0) {
 ppuVar2 = __vtt_parm[5];
 p_Var3 = ((_func_int_varargs **)ppuVar1)[-3];
 }
 else {
 ppuVar2 = &PTR_func_00015dbc;
 p_Var3 = (_func_int_varargs *)0x10;
 }
 *(void ***)(p_Var3 + (int)&(this->super_MiddleA)._vptr_MiddleA) = ppuVar2;
 ppuVar1 = &PTR_func_00015da0;
 if (__in_chrg == 0) {
 ppuVar1 = __vtt_parm[6];
 }
 *(void ***)&(this->super_MiddleA).field_0x8 = ppuVar1;
 ppuVar1 = &PTR_construction_vtable_12__00015d6c;
 if (__in_chrg == 0) {
 ppuVar1 = __vtt_parm + 3;
 }
 MiddleB_destructor((MiddleB *)&(this->super_MiddleA).field_0x8,ppuVar1);
 ppuVar1 = &PTR_construction_vtable_12__00015d64;
 if (__in_chrg == 0) {
 ppuVar1 = __vtt_parm + 1;
 }
 MiddleA_destructor(&this->super_MiddleA,ppuVar1);
 return;
}



/* Function: ~DiamondDerived @ 000121b0 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this) */

void __thiscall DiamondDerived_destructor(DiamondDerived *this)
{
 DiamondDerived_destructor_vtt(this,1,(void **)0x0);
 return;
}



/* Function: ~DiamondDerived @ 000121cb */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived_destructor_nonvirtual_thunk(DiamondDerived *this)
{
 DiamondDerived_destructor((DiamondDerived *)&this[-1].field_0x10);
 return;
}



/* Function: ~DiamondDerived @ 000121d6 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived_destructor_virtual_thunk(DiamondDerived *this)
{
 DiamondDerived_destructor((DiamondDerived *)
 ((int)&(this->super_MiddleA)._vptr_MiddleA +
 (int)(this->super_MiddleA)._vptr_MiddleA[-4]));
 return;
}



/* Function: ~DiamondDerived @ 000121ea */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this) */

void __thiscall DiamondDerived_destructor_delete(DiamondDerived *this)
{
 DiamondDerived_destructor(this);
 operator_delete(this,0x18);
 return;
}



/* Function: ~DiamondDerived @ 0001221e */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived_destructor_nonvirtual_thunk_2(DiamondDerived *this)
{
 DiamondDerived_destructor((DiamondDerived *)&this[-1].field_0x10);
 return;
}



/* Function: ~DiamondDerived @ 00012229 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived_destructor_virtual_thunk_2(DiamondDerived *this)
{
 DiamondDerived_destructor((DiamondDerived *)
 ((int)&(this->super_MiddleA)._vptr_MiddleA +
 (int)(this->super_MiddleA)._vptr_MiddleA[-4]));
 return;
}



/* Function: ~DiamondDerived @ 0001223c */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this, void * * __vtt_parm) */

void __thiscall DiamondDerived_destructor_vtt_only(DiamondDerived *this,void **__vtt_parm)
{
 DiamondDerived_destructor_vtt(this,0,__vtt_parm);
 return;
}



/* Function: __x86.get_pc_thunk.ax @ 00012258 */

/* WARNING: This is an inlined function */

undefined4 __x86_get_pc_thunk_ax(void)

{
 undefined4 unaff_retaddr;
 
 return unaff_retaddr;
}



/* Function: __x86.get_pc_thunk.cx @ 0001225c */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_cx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.si @ 00012260 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_si(void)

{
 return;
}



/* Function: __stack_chk_fail_local @ 00012270 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void __stack_chk_fail_local(void)

{
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}




/* CRT stub function __do_global_ctors_aux removed by preprocessor */





/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 96 */
