#include <string.h>

/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;

typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Ghidra-specific types */
typedef void undefined;
typedef unsigned char undefined1;
typedef unsigned short undefined2;
typedef unsigned int undefined4;
typedef unsigned long long undefined8;
typedef void (*code)(void);

/* Forward declarations for C++ classes */
typedef struct Base Base;
typedef struct Derived Derived;
typedef struct MultiDerived MultiDerived;
typedef struct VirtualBase VirtualBase;
typedef struct MiddleA MiddleA;
typedef struct MiddleB MiddleB;
typedef struct DiamondDerived DiamondDerived;
typedef struct RTTIBase RTTIBase;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;
typedef struct LifecycleClass LifecycleClass;
typedef struct Init Init;
typedef struct Container_int Container_int;
typedef struct Container_double Container_double;
typedef struct unique_ptr_int unique_ptr_int;
typedef struct unique_ptr_int_array unique_ptr_int_array;

/* Forward declarations for MiddleA and MiddleB functions */
int __thiscall MiddleA_func(MiddleA *self);
int __thiscall MiddleB_func(MiddleB *self);
int __thiscall MiddleA_destructor(MiddleA *self);
int __thiscall MiddleB_destructor(MiddleB *self);

/* Forward declarations for unique_ptr destructors */
void unique_ptr_int_array_destructor(unique_ptr_int_array *_this);
void unique_ptr_int_destructor(unique_ptr_int *_this);

/* Type for pointer with 0x8 offset in vtable */
typedef void **pointer_____offset_0x8___;

/* Forward declarations for typeinfo objects */
extern const void *typeinfo_int;

/* Forward declarations for virtual table pointers */
extern void *PTR_virtual_func_00015c58;
extern void *PTR_virtual_func_00015c70;
extern void *PTR_func_00015d88;
extern void *PTR_func_00015dbc;
extern void *PTR_func_00015da0;
extern void *PTR_func_00015c94;
extern void *PTR_func_00015cb0;
extern void *PTR_func_00015cd0;
extern void *PTR_func_00015cec;
extern void *PTR__RTTIDerivedA_00015dd0;
extern void *PTR__RTTIDerivedB_00015de4;
extern void *typeinfo_RTITIBase;
extern const void *typeinfo_RTTIDerivedA;
extern const void *typeinfo_RTTIDerivedB;

/* Forward declarations for std::ios_base::Init */
extern void Init_Init(Init *);
extern void Init_destructor(Init *);
extern Init __ioinit;

/* Wrapper for Init_destructor with correct signature for __cxa_atexit */
static void Init_destructor_wrapper(void *arg) {
    Init_destructor((Init *)arg);
}

/* Forward declarations for operator new/delete */
void *operator_new(size_t size);
void *operator_new__(size_t size);
void operator_delete(void *ptr, size_t size);
void operator_delete__(void *ptr);

/* Forward declarations for template functions */
int template_max_int(int param_1, int param_2);
double template_max_double(double param_1, double param_2);
void template_swap_int(int *param_1, int *param_2);

/* Forward declarations for Container template functions */
void Container_int_Container(Container_int *_this);
void Container_int_push(Container_int *_this, int param_1);
undefined4 Container_int_get(Container_int *_this, int param_1);
undefined4 Container_int_getSize(Container_int *_this);

/* Forward declarations for C++ exception handling */
void *__cxa_allocate_exception(size_t thrown_size);
void __cxa_throw(void *thrown_exception, void *tinfo, void *dest);

/* Forward declaration for C++ atexit */
int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle);

/* Forward declaration for __dso_handle */
extern void *__dso_handle;

/* Forward declaration for _Unwind_Resume */
void _Unwind_Resume(void *exception_object);

/* Forward declaration for test_cpp_oo_features */
void test_cpp_oo_features(void);

/* Forward declaration for __dynamic_cast */
void *__dynamic_cast(void *ptr, void *src, void *dst, int src2dst_offset);

/* Forward declaration for stack checking */
void __stack_chk_fail_local(void);

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/5-1/5-1_gcc_Os_no_g
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



/* Function: test_cpp_exception @ 000112d0 */

/* WARNING: Function: __x86.get_pc_thunk.si replaced with injection: get_pc_thunk_si */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_exception() */

void test_cpp_exception(void)

{
 undefined4 *puVar1;
 
 puVar1 = (undefined4 *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* WARNING: Subroutine does not return */
 /* try { // try from 00011303 to 00011307 has its CatchHandler @ 00011308 */
 __cxa_throw(puVar1,&typeinfo_int,0);
}



/* Function: main @ 000113c2 */

int main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: _GLOBAL__sub_I_test_cpp_member_func @ 000113d5 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

void _GLOBAL__sub_I_test_cpp_member_func(void)

{
	Init_Init(&__ioinit);
 __cxa_atexit(Init_destructor_wrapper,&__ioinit,&__dso_handle);
 return;
}




/* CRT stub function _start removed by preprocessor */




/* Function: __i686.get_pc_thunk.bx @ 0001144c */

/* WARNING: This is an inlined function */

undefined4 __i686_get_pc_thunk_bx(void)

{
 undefined4 unaff_retaddr;
 
 return unaff_retaddr;
}



/* Function: __x86.get_pc_thunk.bx @ 00011450 */

/* WARNING: This is an inlined function */

undefined4 __x86_get_pc_thunk_bx(void)

{
 undefined4 unaff_retaddr;
 
 return unaff_retaddr;
}




/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: __x86.get_pc_thunk.dx @ 00011589 */

/* WARNING: This is an inlined function */

undefined4 __x86_get_pc_thunk_dx(void)

{
 undefined4 unaff_retaddr;
 
 return unaff_retaddr;
}



/* Function: __x86.get_pc_thunk.di @ 0001158d */

/* WARNING: This is an inlined function */

undefined4 __x86_get_pc_thunk_di(void)

{
 undefined4 unaff_retaddr;
 
 return unaff_retaddr;
}



/* Function: test_cpp_member_func @ 00011591 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

int test_cpp_member_func(void)

{
 size_t sVar1;
 int iVar2;
 int in_GS_OFFSET;
 char local_30 [31];
 undefined1 local_11;
 int local_10;
 
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 strncpy(local_30,"Test",0x1f);
 local_11 = 0;
 sVar1 = __builtin_strlen(local_30);
 iVar2 = sVar1 + 0x125c;
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar2 = __stack_chk_fail_local();
 }
 return iVar2;
}



/* Function: test_cpp_constructor @ 000115f1 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_constructor() */

int test_cpp_constructor(void)

{
 return 0x15;
}



/* Function: call_virtual_func @ 0001160d */

/* call_virtual_func(Base*, int) */

int call_virtual_func(Base *param_1,int param_2)

{
 /* WARNING: Could not recover jumptable at 0x0001161f. Too many branches */
 /* WARNING: Treating indirect jump as call */
 return (*(int (**)(Base *, int))**(void **)param_1)(param_1, param_2);
}



/* Function: test_cpp_virtual_func @ 00011621 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_virtual_func() */

int test_cpp_virtual_func(void)

{
 int iVar1;
 int iVar2;
 int in_GS_OFFSET;
 undefined **local_1c;
 undefined **local_18;
 undefined4 local_14;
 int local_10;
 
	local_10 = *(int *)(in_GS_OFFSET + 0x14);
	local_1c = (void **)&PTR_virtual_func_00015c58;
	local_18 = (void **)&PTR_virtual_func_00015c70;
 local_14 = 3;
	iVar1 = (*(int (**)(Base *, int))**(void **)local_1c)((Base *)local_1c, 5);
	iVar2 = (*(int (**)(Base *, int))**(void **)local_18)((Base *)local_18, 5);
 iVar2 = iVar1 + 0x15 + iVar2;
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar2 = __stack_chk_fail_local();
 }
 return iVar2;
}



/* Function: test_cpp_multiple_inheritance @ 0001168f */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_multiple_inheritance() */

undefined4 test_cpp_multiple_inheritance(void)

{
 return 0x47;
}



/* Function: test_cpp_operator_overload @ 00011699 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_operator_overload() */

undefined4 test_cpp_operator_overload(void)

{
 return 0x16;
}



/* Function: test_cpp_template_func @ 000116a3 */

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
	iVar1 = (int)(dVar2 + 0.5) + iVar1 + local_18 + local_14;
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar1 = __stack_chk_fail_local();
 }
 return iVar1;
}



/* Function: test_cpp_template_class @ 00011735 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_class() */

int test_cpp_template_class(void)

{
 int iVar1;
 int in_GS_OFFSET;
 int local_3c [10];
 int local_14;
 int local_10;
 
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
	local_14 = 1;
	local_3c[0] = 10;
	Container_int_push((Container_int *)local_3c, 10);
	Container_int_push((Container_int *)local_3c, 20);
 iVar1 = 0;
 if (0 < local_14) {
 iVar1 = local_3c[0];
 }
 iVar1 = local_14 + 3 + iVar1;
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar1 = __stack_chk_fail_local();
 }
 return iVar1;
}



/* Function: test_cpp_lambda @ 00011797 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_lambda() */

undefined4 test_cpp_lambda(void)

{
 return 0x55;
}



/* Function: test_cpp_rtti @ 000117a1 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Removing unreachable block (ram,0x00011836) */
/* WARNING: Removing unreachable block (ram,0x0001183b) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_rtti() */

int test_cpp_rtti(void)

{
 int iVar1;
 int *piVar2;
 int *piVar3;
 int iVar4;
 size_t sVar5;
	uint32_t uVar6;
	int iVar7;
	char *__s1;
	pointer_____offset_0x8___ *ppuVar8;
 
	uVar6 = 10;
	piVar2 = (int *)operator_new(4);
	*piVar2 = (int)(intptr_t)&PTR__RTTIDerivedA_00015dd0;
	piVar3 = (int *)operator_new(4);
	*piVar3 = (int)(intptr_t)&PTR__RTTIDerivedB_00015de4;
	iVar1 = *piVar2;
	{
		char *typeinfo_ptr = (char *)(iVar1 + -4);
		__s1 = *(char **)((void **)typeinfo_ptr + 1);
	}
	if ((__s1 != "12RTTIDerivedA") && (uVar6 = 0, *__s1 != '*')) {
	iVar4 = strcmp(__s1,"12RTTIDerivedA");
	uVar6 = -(uint32_t)(iVar4 == 0) & 10;
	}
	iVar7 = uVar6 + 0x14;
	ppuVar8 = (void ***)&typeinfo_RTITIBase;
	__dynamic_cast(piVar2,typeinfo_RTITIBase,typeinfo_RTTIDerivedA,0);
	__dynamic_cast(piVar3,typeinfo_RTITIBase,typeinfo_RTTIDerivedB,0);
 if (*__s1 == '*') {
 __s1 = __s1 + 1;
 }
 sVar5 = __builtin_strlen(__s1);
 iVar7 = sVar5 + iVar7;
	;
	;
 return iVar7;
}



/* Function: test_cpp_smart_ptr @ 000118c9 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr() */

undefined4 test_cpp_smart_ptr(void)

{
 undefined4 uVar1;
 int in_GS_OFFSET;
 undefined4 local_2c;
 undefined4 *local_28;
 undefined4 *local_24;
 int local_20;
 
	local_20 = *(int *)(in_GS_OFFSET + 0x14);
 local_28 = (undefined4 *)operator_new(4);
 local_2c = 0;
 *local_28 = 200;
 /* try { // try from 00011918 to 0001191c has its CatchHandler @ 0001196e */
 local_24 = (undefined4 *)operator_new__(0x14);
 *local_24 = 1;
	local_24[1] = 2;
	local_24[2] = 3;
	local_24[3] = 4;
	local_24[4] = 5;
	unique_ptr_int_array_destructor((unique_ptr_int_array *)&local_24);
	unique_ptr_int_destructor((unique_ptr_int *)&local_28);
	unique_ptr_int_destructor((unique_ptr_int *)&local_2c);
	if (local_20 != *(int *)(in_GS_OFFSET + 0x14)) {
	uVar1 = __stack_chk_fail_local();
	/* catch() { ... } // from try @ 00011918 with catch @ 0001196e */
	unique_ptr_int_destructor((unique_ptr_int *)&local_28);
	unique_ptr_int_destructor((unique_ptr_int *)&local_2c);
 /* WARNING: Subroutine does not return */
 _Unwind_Resume(uVar1);
 }
 return 0x2bf;
}



/* Function: test_cpp_diamond_inheritance @ 0001199d */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_diamond_inheritance() */

int test_cpp_diamond_inheritance(void)

{
 int iVar1;
 int iVar2;
 int in_GS_OFFSET;
 undefined **local_38 [2];
 undefined **local_30;
 undefined **local_28;
 undefined4 local_24;
 int local_20;
 
 local_38[0] = &PTR_func_00015d88;
 local_20 = *(int *)(in_GS_OFFSET + 0x14);
 local_28 = &PTR_func_00015dbc;
 local_30 = &PTR_func_00015da0;
	local_24 = 0x32;
	iVar1 = DiamondDerived_func((DiamondDerived *)&local_28);
	local_24 = 100;
	iVar2 = DiamondDerived_func((DiamondDerived *)&local_28);
	iVar2 = iVar2 + iVar1;
	DiamondDerived_destructor((DiamondDerived *)local_38);
	if (local_20 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar2 = __stack_chk_fail_local();
 }
 return iVar2;
}



/* Function: test_cpp_oo_features @ 00011a22 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_oo_features() */

void test_cpp_oo_features(void)

{
 undefined4 uVar1;
 undefined4 extraout_ECX;
 undefined4 extraout_ECX_00;
 undefined8 uVar2;
 
 puts(&DAT_0001301a);
 uVar1 = test_cpp_member_func();
 __printf_chk(1,&DAT_0001303e,uVar1);
 uVar1 = test_cpp_constructor();
 __printf_chk(1,&DAT_0001305c,uVar1);
 uVar2 = test_cpp_virtual_func();
 __printf_chk(1,&DAT_00013078,uVar2);
 uVar1 = test_cpp_multiple_inheritance();
 __printf_chk(1,&DAT_00013094,uVar1);
 uVar1 = test_cpp_diamond_inheritance();
 __printf_chk(1,&DAT_000130b0,uVar1);
 uVar1 = test_cpp_operator_overload();
 __printf_chk(1,&DAT_000130cd,uVar1);
 uVar1 = test_cpp_template_func();
 __printf_chk(1,&DAT_000130e9,uVar1,extraout_ECX);
 uVar1 = test_cpp_template_class();
 __printf_chk(1,&DAT_00013105,uVar1);
 uVar1 = test_cpp_lambda();
 __printf_chk(1,&DAT_00013121,uVar1);
 uVar2 = test_cpp_exception();
 __printf_chk(1,&DAT_0001313d,uVar2);
 uVar1 = test_cpp_smart_ptr();
 __printf_chk(1,&DAT_0001315a,uVar1,extraout_ECX_00);
 uVar2 = test_cpp_rtti();
 __printf_chk(1,&DAT_00013177,uVar2);
 return;
}



/* Function: virtual_func @ 00011b66 */

/* Base::virtual_func(int) */

int __thiscall Base_virtual_func(Base *self,int param_1)

{
 return param_1 + 1;
}



/* Function: getName @ 00011b74 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* Base::getName() const */

undefined * __thiscall Base_getName(Base *self)

{
 return &DAT_00013008;
}



/* Function: ~Base @ 00011b8a */

/* Base::~Base() */

void __thiscall Base_destructor_simple(Base *self)

{
 return;
}



/* Function: virtual_func @ 00011b90 */

/* Derived::virtual_func(int) */

int __thiscall Derived_virtual_func(Derived *self,int param_1)

{
 return param_1 * *(int *)(self + 4);
}



/* Function: getName @ 00011ba4 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* Derived::getName() const */

char * __thiscall Derived_getName(Derived *self)

{
 return "Derived";
}



/* Function: funcA @ 00011bba */

/* MultiDerived::funcA() */

undefined4 MultiDerived_funcA(void)

{
	return 0x1e;
}



/* Function: funcB @ 00011bc4 */

/* MultiDerived::funcB() */

undefined4 MultiDerived_funcB(void)

{
	return 0x28;
}



/* Function: funcB @ 00011bce */

/* non-virtual thunk to MultiDerived::funcB() */

undefined4 __thiscall MultiDerived_funcB_thunk(MultiDerived *this)

{
	return 0x28;
}



/* Function: func @ 00011bd8 */

/* VirtualBase::func() */

undefined4 VirtualBase_func(void)

{
	return 100;
}



/* Function: ~VirtualBase @ 00011be2 */

/* VirtualBase::~VirtualBase() */

void __thiscall VirtualBase_destructor(VirtualBase *self)

{
	return;
}



/* Function: func @ 00011be8 */

/* MiddleA::func() */

int __thiscall MiddleA_func(MiddleA *self)

{
	return *(int *)((char *)self + *(int *)(*(int *)self + -0xc) + 4) + 0x96;
}



/* Function: func @ 00011c02 */

/* virtual thunk to MiddleA::func() */

int __thiscall MiddleA_func_vthunk(MiddleA *self)

{
	return MiddleA_func((MiddleA *)((char *)self + *(int *)(*(int *)self + -0xc)));
}



/* Function: func @ 00011c16 */

/* MiddleB::func() */

int __thiscall MiddleB_func(MiddleB *self)

{
	return *(int *)((char *)self + *(int *)(*(int *)self + -0xc) + 4) + 200;
}



/* Function: func @ 00011c30 */

/* virtual thunk to MiddleB::func() */

int __thiscall MiddleB_func_vthunk(MiddleB *self)

{
	return MiddleB_func((MiddleB *)((char *)self + *(int *)(*(int *)self + -0xc)));
}



/* Function: func @ 00011c44 */

/* DiamondDerived::func() */

int __thiscall DiamondDerived_func(DiamondDerived *self)

{
	return *(int *)(self + *(int *)(*(int *)self + -0xc) + 4) + 0xfa;
}



/* Function: func @ 00011c5e */

/* virtual thunk to DiamondDerived::func() */
int __thiscall DiamondDerived_func_vthunk(DiamondDerived *self)
{
	return DiamondDerived_func((DiamondDerived *)((char *)self + *(int *)(*(int *)self + -0xc)));
}



/* Function: func @ 00011c71 */

/* non-virtual thunk to DiamondDerived::func() */

void __thiscall DiamondDerived_func_nthunk(DiamondDerived *self)

{
	DiamondDerived_func((DiamondDerived *)((char *)self + -8));
}



/* Function: ~MiddleA @ 00011c7c */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* MiddleA::~MiddleA() */

int __thiscall MiddleA_destructor(MiddleA *self)

{
	*(void ***)self = &PTR_func_00015c94;
	*(void ***)((char *)self + 8) = &PTR_func_00015cb0;
	return 0;
}



/* Function: ~MiddleA @ 00011ca1 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* virtual thunk to MiddleA::~MiddleA() */

void __thiscall MiddleA_destructor_vthunk(MiddleA *self)

{
	int iVar1;
	
	iVar1 = *(int *)(*(int *)self + -0x10);
	*(undefined ***)((char *)self + iVar1) = &PTR_func_00015c94;
	*(undefined ***)((char *)self + iVar1 + 8) = &PTR_func_00015cb0;
}



/* Function: ~MiddleB @ 00011ccc */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* MiddleB::~MiddleB() */

int __thiscall MiddleB_destructor(MiddleB *self)

{
	*(void ***)self = &PTR_func_00015cd0;
	*(void ***)((char *)self + 8) = &PTR_func_00015cec;
	return 0;
}



/* Function: ~MiddleB @ 00011cf1 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* virtual thunk to MiddleB::~MiddleB() */

void __thiscall MiddleB_destructor_vthunk(MiddleB *self)

{
	int iVar1;
	
	*(int *)(*(int *)self + -0x10);
	*(void ***)((char *)self + *(int *)(*(int *)self + -0x10)) = &PTR_func_00015cd0;
	*(void ***)((char *)self + *(int *)(*(int *)self + -0x10) + 8) = &PTR_func_00015cec;
}



/* Function: getType @ 00011d1c */

/* RTTIDerivedA::getType() const */

undefined4 RTTIDerivedA_getType(void)

{
	return 1;
}



/* Function: getType @ 00011d26 */

/* RTTIDerivedB::getType() const */

undefined4 RTTIDerivedB_getType(void)

{
	return 2;
}



/* Function: ~RTTIDerivedB @ 00011d30 */

/* RTTIDerivedB::~RTTIDerivedB() */

void __thiscall RTTIDerivedB_destructor(RTTIDerivedB *self)

{
}



/* Function: ~RTTIDerivedA @ 00011d36 */

/* RTTIDerivedA::~RTTIDerivedA() */

void __thiscall RTTIDerivedA_destructor(RTTIDerivedA *self)

{
}



/* Function: ~MultiDerived @ 00011d3c */

/* MultiDerived::~MultiDerived() */

void __thiscall MultiDerived_destructor(MultiDerived *self)

{
}



/* Function: ~MultiDerived @ 00011d41 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void __thiscall MultiDerived_destructor_nthunk(MultiDerived *self)
{
}



/* Function: ~Derived @ 00011d46 */

/* Derived::~Derived() */

void __thiscall Derived_destructor_simple(Derived *self)

{
	return;
}



/* Function: ~Base @ 00011d4c */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* Base::~Base() */

void __thiscall Base_destructor(Base *self)

{
	operator_delete(self,4);
	return;
}



/* Function: ~Derived @ 00011d74 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* Derived::~Derived() */

void __thiscall Derived_destructor2(Derived *self)

{
	operator_delete(self,8);
	return;
}



/* Function: ~MultiDerived @ 00011d9c */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* MultiDerived::~MultiDerived() */

void __thiscall MultiDerived_destructor2(MultiDerived *self)

{
	operator_delete(self,0x10);
	return;
}



/* Function: ~MultiDerived @ 00011dc4 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void __thiscall MultiDerived_destructor2_nthunk(MultiDerived *self)

{
	MultiDerived_destructor2((MultiDerived *)((char *)self + -8));
}



/* Function: ~VirtualBase @ 00011dd0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* VirtualBase::~VirtualBase() */

void __thiscall VirtualBase_destructor2(VirtualBase *self)

{
	operator_delete(self,8);
	return;
}



/* Function: ~RTTIDerivedB @ 00011df8 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* RTTIDerivedB::~RTTIDerivedB() */

void __thiscall RTTIDerivedB_destructor2(RTTIDerivedB *self)

{
	operator_delete(self,4);
	return;
}



/* Function: ~RTTIDerivedA @ 00011e20 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* RTTIDerivedA::~RTTIDerivedA() */

void __thiscall RTTIDerivedA_destructor2(RTTIDerivedA *self)

{
	operator_delete(self,4);
	return;
}



/* Function: ~MiddleA @ 00011e48 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* MiddleA::~MiddleA() */

void __thiscall MiddleA_destructor2(MiddleA *self)

{
	*(undefined ***)self = &PTR_func_00015c94;
	*(undefined ***)((char *)self + 8) = &PTR_func_00015cb0;
	operator_delete(self,0x10);
	return;
}



/* Function: ~MiddleA @ 00011e7f */

/* virtual thunk to MiddleA::~MiddleA() */

void __thiscall MiddleA_destructor2_vthunk(MiddleA *self)

{
	*(undefined ***)self = &PTR_func_00015c94;
	*(undefined ***)((char *)self + 8) = &PTR_func_00015cb0;
	operator_delete(self,0x10);
}



/* Function: ~MiddleB @ 00011e92 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* MiddleB::~MiddleB() */

void __thiscall MiddleB_destructor2(MiddleB *self)

{
	*(undefined ***)self = &PTR_func_00015cd0;
	*(undefined ***)((char *)self + 8) = &PTR_func_00015cec;
	operator_delete(self,0x10);
	return;
}



/* Function: ~MiddleB @ 00011ec9 */

/* virtual thunk to MiddleB::~MiddleB() */

void __thiscall MiddleB_destructor2_vthunk(MiddleB *self)

{
	*(undefined ***)self = &PTR_func_00015cd0;
	*(undefined ***)((char *)self + 8) = &PTR_func_00015cec;
	operator_delete(self,0x10);
}



/* Function: ~MiddleA @ 00011edc */

/* WARNING: Function: __x86.get_pc_thunk.cx replaced with injection: get_pc_thunk_cx */
/* MiddleA::~MiddleA() */

int __thiscall MiddleA_deleting_destructor(MiddleA *self, int delete_flag)

{
	if (delete_flag != 0) {
		MiddleA_destructor2(self);
		operator_delete(self, 0x10);
	}
}



/* Function: ~MiddleA @ 00011f26 */

/* MiddleA::~MiddleA() */

void __thiscall MiddleA_deleting_destructor_wrapper(MiddleA *self)

{
	MiddleA_deleting_destructor(self, 0);
}



/* Function: ~MiddleB @ 00011f42 */

/* WARNING: Function: __x86.get_pc_thunk.cx replaced with injection: get_pc_thunk_cx */
/* MiddleB::~MiddleB() */

int __thiscall MiddleB_deleting_destructor(MiddleB *self, int delete_flag)

{
	if (delete_flag != 0) {
		MiddleB_destructor2(self);
		operator_delete(self, 0x10);
	}
}



/* Function: ~MiddleB @ 00011f8c */

/* MiddleB::~MiddleB() */

void __thiscall MiddleB_deleting_destructor_wrapper(MiddleB *self)

{
	MiddleB_deleting_destructor(self, 0);
}



/* Function: template_max<int> @ 00011fa8 */

/* int template_max<int>(int, int) */

int template_max_int(int param_1,int param_2)

{
	if (param_1 < param_2) {
	param_1 = param_2;
	}
	return param_1;
}



/* Function: template_max<double> @ 00011fbc */

/* double template_max<double>(double, double) */

double template_max_double(double param_1,double param_2)

{
	if (param_1 <= param_2) {
	param_1 = param_2;
	}
	return param_1;
}



/* Function: template_swap<int> @ 00011fd5 */

/* void template_swap<int>(int&, int&) */

void template_swap_int(int *param_1,int *param_2)

{
	int iVar1;
	
	iVar1 = *param_1;
	*param_1 = *param_2;
	*param_2 = iVar1;
	return;
}



/* Function: Container @ 00011fee */

/* Container<int>::Container() */

void __thiscall Container_int_Container(Container_int *self)

{
	*(undefined4 *)(self + 0x28) = 0;
	return;
}



/* Function: push @ 00012002 */

/* Container<int>::push(int) */

void __thiscall Container_int_push(Container_int *self,int param_1)

{
	int iVar1;
	
	iVar1 = *(int *)(self + 0x28);
	if (iVar1 < 10) {
	*(int *)(self + 0x28) = iVar1 + 1;
	*(int *)(self + iVar1 * 4) = param_1;
	}
	return;
}



/* Function: get @ 00012022 */

/* Container<int>::get(int) const */

undefined4 __thiscall Container_int_get(Container_int *self,int param_1)

{
	undefined4 uVar1;
	
	uVar1 = 0;
	if ((-1 < param_1) && (param_1 < *(int *)(self + 0x28))) {
	uVar1 = *(undefined4 *)(self + param_1 * 4);
	}
	return uVar1;
}



/* Function: getSize @ 00012040 */

/* Container<int>::getSize() const */

undefined4 __thiscall Container_int_getSize(Container_int *self)

{
	return *(undefined4 *)(self + 0x28);
}



/* Function: Container @ 00012050 */

/* Container<double>::Container() */

void __thiscall Container_double_Container(Container_double *self)

{
	*(undefined4 *)(self + 0x50) = 0;
	return;
}



/* Function: push @ 00012064 */

/* Container<double>::push(double) */

void __thiscall Container_double_push(Container_double *self,double param_1)

{
	int iVar1;
	
	iVar1 = *(int *)(self + 0x50);
	if (iVar1 < 10) {
	*(int *)(self + 0x50) = iVar1 + 1;
	*(double *)(self + iVar1 * 8) = param_1;
	}
	return;
}



/* Function: get @ 00012088 */

/* Container<double>::get(int) const */

longdouble __thiscall Container_double_get(Container_double *self,int param_1)

{
	longdouble lVar1;
	
	lVar1 = (longdouble)0;
	if ((-1 < param_1) && (param_1 < *(int *)(self + 0x50))) {
	lVar1 = (longdouble)*(double *)(self + param_1 * 8);
	}
	return lVar1;
}



/* Function: getSize @ 000120a8 */

/* Container<double>::getSize() const */

undefined4 __thiscall Container_double_getSize(Container_double *self)

{
	return *(undefined4 *)(self + 0x50);
}



/* Function: ~unique_ptr @ 000120b8 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* std::unique_ptr<int, std::default_delete<int> >::~unique_ptr() */

void
unique_ptr_int_destructor
 (unique_ptr_int *self)

{
	if (*(void **)self != (void *)0x0) {
		operator_delete(*(void **)self,4);
	}
	return;
}



/* Function: ~unique_ptr @ 000120e8 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* std::unique_ptr<int [], std::default_delete<int []> >::~unique_ptr() */

void
unique_ptr_int_array_destructor
 (unique_ptr_int_array *self)

{
	if (*(void **)self != (void *)0x0) {
		operator_delete__(*(void **)self);
	}
	return;
}



/* Function: ~DiamondDerived @ 00012116 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DiamondDerived::~DiamondDerived() */

int __thiscall DiamondDerived_deleting_destructor(DiamondDerived *self, int delete_flag)

{
	MiddleB_destructor((MiddleB *)((char *)self + 8));
	MiddleA_destructor((MiddleA *)self);
	if (delete_flag != 0) {
		operator_delete(self, 0x18);
	}
}



/* Function: ~DiamondDerived @ 000121b0 */

/* DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived_deleting_destructor_wrapper(DiamondDerived *self)

{
	DiamondDerived_deleting_destructor(self);
	return;
}



/* Function: ~DiamondDerived @ 000121cb */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived_deleting_destructor_nthunk(DiamondDerived *self)

{
	DiamondDerived_deleting_destructor_wrapper((DiamondDerived *)((char *)self + -8));
}



/* Function: ~DiamondDerived @ 000121d6 */

/* virtual thunk to DiamondDerived::~DiamondDerived() */
void __thiscall DiamondDerived_deleting_destructor_vthunk(DiamondDerived *self)
{
	DiamondDerived_deleting_destructor_wrapper((DiamondDerived *)((char *)self + *(int *)(*(int *)self + -0x10)));
}



/* Function: ~DiamondDerived @ 000121ea */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived_destructor(DiamondDerived *self)

{
	DiamondDerived_deleting_destructor(self, 0);
	operator_delete(self,0x18);
	return;
}



/* Function: ~DiamondDerived @ 0001221e */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */
void __thiscall DiamondDerived_destructor_nthunk(DiamondDerived *self)
{
	DiamondDerived_destructor((DiamondDerived *)((char *)self + -8));
}



/* Function: ~DiamondDerived @ 00012229 */

/* virtual thunk to DiamondDerived::~DiamondDerived() */
void __thiscall DiamondDerived_destructor_vthunk(DiamondDerived *self)
{
	DiamondDerived_destructor_wrapper((DiamondDerived *)((char *)self + *(int *)(*(int *)self + -0x10)));
}



/* Function: ~DiamondDerived @ 0001223c */

/* DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived_destructor3(DiamondDerived *self)

{
	DiamondDerived_deleting_destructor(self, 0);
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
