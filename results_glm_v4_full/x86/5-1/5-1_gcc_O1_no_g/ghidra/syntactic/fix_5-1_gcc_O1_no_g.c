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
#ifndef NULL
#define NULL ((void *)0)
#endif

/* Additional type definitions for Ghidra decompilation */
typedef unsigned char undefined;
typedef uint16_t undefined2;
typedef uint32_t undefined4;
typedef uint64_t undefined8;
typedef int (*code)(void *);

/* Forward declarations for C++ classes (as opaque structs) */
typedef struct Base Base;
typedef struct Derived Derived;
typedef struct MultiDerived MultiDerived;
typedef struct MiddleA MiddleA;
typedef struct MiddleB MiddleB;
typedef struct DiamondDerived DiamondDerived;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;
typedef struct Init Init;
typedef struct LifecycleClass LifecycleClass;
typedef struct std__ioinit std__ioinit;
typedef struct __dso_handle __dso_handle;
typedef struct Container_int Container_int;
typedef struct Container_double Container_double;

/* C++ class definitions (decompiled structure) */
struct Container_int {
    int size;
    int data[10];
};

struct Container_double {
    int size;
    double data[10];
};

struct RTTIDerivedA {
    void *vtable;
};

struct RTTIDerivedB {
    void *vtable;
};

struct DiamondDerived {
    void *vtable;
    int member;
};

struct MiddleA {
    void *vtable;
    int member;
};

struct MiddleB {
    void *vtable;
    int member;
};

struct Derived {
    void *vtable;
    int multiplier;
};

struct MultiDerived {
    void *vtable;
};

/* Forward declarations for external variables */
extern void *PTR_virtual_func_00014cd4;
extern void *PTR_virtual_func_00014cec;
extern void *PTR__RTTIDerivedA_00014dd4;
extern void *PTR__RTTIDerivedB_00014de8;
extern char DAT_00012008[];
extern char DAT_00012018[];
extern char DAT_0001203c[];
extern char DAT_0001205a[];
extern char DAT_00012076[];
extern char DAT_00012092[];
extern char DAT_000120ae[];
extern char DAT_000120cb[];
extern char DAT_000120e7[];
extern char DAT_00012103[];
extern char DAT_0001211f[];
extern char DAT_0001213b[];
extern char DAT_00012158[];
extern char DAT_00012175[];

/* Global variables for C++ static members and RTTI */
extern int LifecycleClass_instance_count;
extern void *int_typeinfo;
extern void *RTTIBase_typeinfo;

/* Forward declarations for functions */
void __stack_chk_fail_local(void);
void __stack_chk_fail(void);
int DiamondDerived_func_thunk(DiamondDerived *self);
int DiamondDerived_func_nv_thunk(DiamondDerived *self);
int call_virtual_func(Base *param_1, int param_2);
int template_max_int(int param_1, int param_2);
double template_max_double(double param_1, double param_2);
void template_swap_int(int *, int *);
void *operator_new__(size_t);
void operator_delete__(void *);
void operator_delete(void *, size_t);
void *operator_new(size_t);
void builtin_strncpy(char *, const char *, size_t);
size_t strlen(const char *);
int strcmp(const char *, const char *);
int puts(const char *);
int __printf_chk(int, const char *, ...);
double ROUND(double);
void *__cxa_allocate_exception(size_t);
void __cxa_throw(void *, void *, void (*)(void *));
void *__dynamic_cast(const void *, const void *, const void *, ptrdiff_t);
void std_ios_base_Init_Init(Init *);
void std_ios_base_Init_d_Init(Init *);
int __cxa_atexit(void (*)(void *), void *, void *);
void LifecycleClass_instance_count_getter(void);

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/5-1/5-1_gcc_O1_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00011030 @ 00011030 */

void FUN_00011030(void)

{
 (*(code *)(undefined *)0x0)(NULL);
 return;
}




/* CRT stub function _start removed by preprocessor */




/* Function: __i686.get_pc_thunk.bx @ 000112dc */

/* WARNING: This is an inlined function */

void __i686_get_pc_thunk_bx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.bx @ 000112e0 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_bx(void)

{
 return;
}




/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: __x86.get_pc_thunk.dx @ 00011419 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_dx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.di @ 0001141d */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_di(void)

{
 return;
}



/* Function: test_cpp_member_func @ 00011421 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

int test_cpp_member_func(void)

{
 size_t sVar1;
 int in_GS_OFFSET;
 char local_30 [32];
 int local_10;
 
 in_GS_OFFSET = 0;
 local_10 = 0;
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



/* Function: test_cpp_constructor @ 000114b5 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
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
 iVar2 = LifecycleClass_instance_count + 0x15;
 LifecycleClass_instance_count = LifecycleClass_instance_count + 1;
 operator_delete__(pvVar1);
 LifecycleClass_instance_count = LifecycleClass_instance_count + -1;
 return LifecycleClass_instance_count * 1000 + iVar2;
}



/* Function: call_virtual_func @ 00011523 */

/* call_virtual_func(Base*, int) */

int call_virtual_func(Base *param_1,int param_2)

{
 void **vtable = *(void ***)param_1;
 int (*vfunc)(Base *, int) = (int (*)(Base *, int))vtable[0];
 return vfunc((Base *)vtable, param_2);
}

/* Function: test_cpp_virtual_func @ 0001153b */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_virtual_func() */

int test_cpp_virtual_func(void)

{
 int iVar1;
 int iVar2;
 int in_GS_OFFSET;
 void **local_1c;
 void **local_18;
 undefined4 local_14;
 int local_10;
 
 in_GS_OFFSET = *(int *)__builtin_frame_address(0);
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 local_1c = &PTR_virtual_func_00014cd4;
 local_18 = &PTR_virtual_func_00014cec;
 local_14 = 3;
call_virtual_func((Base *)local_1c,5);
	call_virtual_func((Base *)local_18,5);
	if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
	return 0x15 + 0x15;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: test_cpp_multiple_inheritance @ 000115b1 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_multiple_inheritance() */

undefined4 test_cpp_multiple_inheritance(void)

{
 return 0x47;
}



/* Function: test_cpp_diamond_inheritance @ 000115bb */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_diamond_inheritance() */

int test_cpp_diamond_inheritance(void)

{
 int iVar1;
 int iVar2;
 int in_GS_OFFSET;
 undefined4 local_18;
 undefined4 local_14;
 int local_10;
 
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 local_18 = 0x14dc0;
 local_14 = 0x32;
iVar1 = DiamondDerived_func_thunk((DiamondDerived *)&local_18);
	local_14 = 100;
	iVar2 = DiamondDerived_func_thunk((DiamondDerived *)&local_18);
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return iVar2 + iVar1;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: test_cpp_operator_overload @ 00011634 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_operator_overload() */

undefined4 test_cpp_operator_overload(void)

{
 return 0x16;
}



/* Function: test_cpp_template_func @ 0001163e */

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



/* Function: test_cpp_template_class @ 000116e2 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_class() */

undefined4 test_cpp_template_class(void)

{
 return 0x10;
}



/* Function: test_cpp_lambda @ 000116ec */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_lambda() */

undefined4 test_cpp_lambda(void)

{
 return 0x55;
}



/* Function: test_cpp_exception @ 000116f6 */

/* WARNING: Function: __x86.get_pc_thunk.si replaced with injection: get_pc_thunk_si */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_exception() */

void test_cpp_exception(void)

{
 undefined4 *puVar1;
 
 puVar1 = (undefined4 *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* WARNING: Subroutine does not return */
 /* try { // try from 00011729 to 0001172d has its CatchHandler @ 0001172e */
 __cxa_throw(puVar1,int_typeinfo,0);
}



/* Function: test_cpp_smart_ptr @ 00011806 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr() */

undefined4 test_cpp_smart_ptr(void)

{
 return 0x2bf;
}



/* Function: test_cpp_rtti @ 00011810 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Removing unreachable block (ram,0x000118a2) */
/* WARNING: Removing unreachable block (ram,0x000118a7) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_rtti() */

int test_cpp_rtti(void)

{
 int iVar1;
 char *s1;
 int *piVar2;
 int *piVar3;
 int iVar4;
 int iVar5;
 size_t sVar6;
 unsigned int uVar7;
 
 piVar2 = (int *)operator_new(4);
 *piVar2 = (int)&PTR__RTTIDerivedA_00014dd4;
 piVar3 = (int *)operator_new(4);
 *piVar3 = (int)&PTR__RTTIDerivedB_00014de8;
iVar1 = *piVar2;
	s1 = *(char **)(*(int *)(iVar1 - 4) + 4);
	uVar7 = 10;
	if ((s1 != "12RTTIDerivedA") && (uVar7 = 0, *s1 != '*')) {
	iVar4 = strcmp(s1,"12RTTIDerivedA");
	uVar7 = -(unsigned int)(iVar4 == 0) & 10;
	}
iVar5 = (int)(intptr_t)__dynamic_cast(piVar2, RTTIBase_typeinfo, PTR__RTTIDerivedA_00014dd4, 0);
	iVar4 = uVar7 + 0x14;
	if (iVar5 != 0) {
	iVar4 = uVar7 + 0x78;
	}
	iVar5 = (int)(intptr_t)__dynamic_cast(piVar3, RTTIBase_typeinfo, PTR__RTTIDerivedB_00014de8, 0);
	if (iVar5 != 0) {
	iVar4 = iVar4 + 200;
	}
	sVar6 = strlen((*s1 == '*') ? (s1 + 1) : s1);
	((void (*)(void *))*(void **)(iVar1 + 4))(piVar2);
	((void (*)(void *))*((void **)*piVar3 + 4))(piVar3);
	return iVar4 + sVar6;
}



/* Function: test_cpp_oo_features @ 0001193a */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_oo_features() */

void test_cpp_oo_features(void)

{
 undefined4 uVar1;
 
 puts(DAT_00012018);
 uVar1 = test_cpp_member_func();
 __printf_chk(1,DAT_0001203c,uVar1);
 uVar1 = test_cpp_constructor();
 __printf_chk(1,DAT_0001205a,uVar1);
 uVar1 = test_cpp_virtual_func();
 __printf_chk(1,DAT_00012076,uVar1);
 uVar1 = test_cpp_multiple_inheritance();
 __printf_chk(1,DAT_00012092,uVar1);
 uVar1 = test_cpp_diamond_inheritance();
 __printf_chk(1,DAT_000120ae,uVar1);
 __printf_chk(1,DAT_000120cb,0x16);
 uVar1 = test_cpp_template_func();
 __printf_chk(1,DAT_000120e7,uVar1);
 __printf_chk(1,DAT_00012103,0x10);
 __printf_chk(1,DAT_0001211f,0x55);
test_cpp_exception();
	__printf_chk(1,DAT_0001213b,0);
 uVar1 = test_cpp_smart_ptr();
 __printf_chk(1,DAT_00012158,uVar1);
 uVar1 = test_cpp_rtti();
 __printf_chk(1,DAT_00012175,uVar1);
 return;
}



/* Function: main @ 00011a75 */

int main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: _GLOBAL__sub_I_test_cpp_member_func @ 00011a8b */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

void _GLOBAL__sub_I_test_cpp_member_func(void)

{
std_ios_base_Init_Init((Init *)&std__ioinit);
	__cxa_atexit((void (*)(void *))std_ios_base_Init_d_Init,&std__ioinit,&__dso_handle);
 return;
}



/* Function: virtual_func @ 00011ac8 */

/* Base::virtual_func(int) - converted to C */

int Base_virtual_func(Base *self,int param_1)

{
 return param_1 + 1;
}



/* Function: getName @ 00011ad4 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk.ax */
/* Base::getName() const - converted to C */

void *Base_getName(Base *self)

{
 return &DAT_00012008;
}



/* Function: ~Base @ 00011aea */

/* Base::~Base() - converted to C */

void Base_destructor(Base *self)

{
 return;
}



/* Function: virtual_func @ 00011af0 */

/* Derived::virtual_func(int) - converted to C */

int Derived_virtual_func(Derived *self,int param_1)

{
 return param_1 * *(int *)(self + 4);
}



/* Function: getName @ 00011b02 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* Derived::getName() const */

char * Derived_getName(Derived *self)

{
 return "Derived";
}



/* Function: funcA @ 00011b18 */

/* MultiDerived::funcA() - converted to C */

int MultiDerived_funcA(void)

{
 return 0x1e;
}



/* Function: funcB @ 00011b22 */

/* MultiDerived::funcB() - converted to C */

int MultiDerived_funcB(void)

{
 return 0x28;
}



/* Function: funcB @ 00011b2c */

/* non-virtual thunk to MultiDerived::funcB() - converted to C */

int MultiDerived_funcB_thunk(void)

{
 return 0x28;
}



/* Function: func @ 00011b36 */

/* MiddleA::func() - converted to C */

int MiddleA_func(MiddleA *self)

{
	return *(int *)((char *)self + *(int *)(*(int *)((char *)self) + -0xc) + 4) + 0x96;
}



/* Function: func @ 00011b4d */

/* virtual thunk to MiddleA::func() - converted to C */

int MiddleA_func_thunk(MiddleA *self)

{
	char *adj_self;
	int offset1;
	int offset2;
	adj_self = (char *)self + *(int *)(*(int *)((char *)self) + -0xc);
	offset1 = *(int *)(*(int *)((char *)adj_self) + -0xc);
	return *(int *)((char *)self + offset1 + 4) + 0x96;
}



/* Function: func @ 00011b6a */

/* MiddleB::func() - converted to C */

int MiddleB_func(MiddleB *self)

{
	return *(int *)((char *)self + *(int *)(*(int *)((char *)self) + -0xc) + 4) + 200;
}



/* Function: func @ 00011b81 */

/* virtual thunk to MiddleB::func() - converted to C */

int MiddleB_func_thunk(MiddleB *self)

{
	char *adj_self;
	int offset1;
	int offset2;
	adj_self = (char *)self + *(int *)(*(int *)((char *)self) + -0xc);
	offset1 = *(int *)(*(int *)((char *)adj_self) + -0xc);
	return *(int *)((char *)self + offset1 + 4) + 200;
}



/* Function: func @ 00011b9e */

/* DiamondDerived::func() - converted to C */

int DiamondDerived_func(DiamondDerived *self)

{
	return *(int *)((char *)self + *(int *)(*(int *)((char *)self) + -0xc) + 4) + 0xfa;
}



/* Function: func @ 00011bb5 */

/* virtual thunk to DiamondDerived::func() - converted to C */

int DiamondDerived_func_thunk(DiamondDerived *self)

{
 return *(int *)((char *)self + *(int *)(*(int *)((char *)self + -8) + -0xc) + -4) + 0xfa;
}



/* Function: func @ 00011bd1 */

/* non-virtual thunk to DiamondDerived::func() */

int DiamondDerived_func_nv_thunk(DiamondDerived *self)

{
 return *(int *)((char *)self + *(int *)(*(int *)((char *)self + -8) + -0xc) + -4) + 0xfa;
}



/* Function: getType @ 00011bea */

/* RTTIDerivedA::getType() const - converted to C */

int RTTIDerivedA_getType(void)

{
 return 1;
}



/* Function: getType @ 00011bf4 */

/* RTTIDerivedB::getType() const - converted to C */

int RTTIDerivedB_getType(void)

{
 return 2;
}



/* Function: ~RTTIDerivedB @ 00011bfe */

/* RTTIDerivedB::~RTTIDerivedB() - converted to C */

void RTTIDerivedB_destructor(RTTIDerivedB *self)

{
 return;
}



/* Function: ~RTTIDerivedA @ 00011c04 */

/* RTTIDerivedA::~RTTIDerivedA() - converted to C */

void RTTIDerivedA_destructor(RTTIDerivedA *self)

{
 return;
}



/* Function: ~DiamondDerived @ 00011c0a */

/* DiamondDerived::~DiamondDerived() - converted to C */

void DiamondDerived_destructor(DiamondDerived *self)

{
 return;
}



/* Function: ~DiamondDerived @ 00011c0f */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() - converted to C */

void DiamondDerived_destructor_thunk1(DiamondDerived *self)

{
 return;
}



/* Function: ~DiamondDerived @ 00011c14 */

/* virtual thunk to DiamondDerived::~DiamondDerived() - converted to C */

void DiamondDerived_destructor_thunk2(DiamondDerived *self)

{
 return;
}



/* Function: ~MultiDerived @ 00011c1a */

/* MultiDerived::~MultiDerived() - converted to C */

void MultiDerived_destructor(MultiDerived *self)

{
 return;
}



/* Function: ~MultiDerived @ 00011c1f */

/* non-virtual thunk to MultiDerived::~MultiDerived() - converted to C */

void MultiDerived_destructor_thunk(MultiDerived *self)

{
 return;
}



/* Function: ~Derived @ 00011c24 */

/* Derived::~Derived() - converted to C */

void Derived_destructor(Derived *self)

{
 return;
}



/* Function: ~Base @ 00011c2a */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk.bx */
/* Base::~Base() - converted to C */

void Base_destructor_with_delete(Base *self)

{
 operator_delete(self, 0);
 return;
}



/* Function: ~Derived @ 00011c4e */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk.bx */
/* Derived::~Derived() - converted to C */

void Derived_destructor_with_delete(Derived *self)

{
 operator_delete__(self);
 return;
}



/* Function: ~MultiDerived @ 00011c72 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk.bx */
/* MultiDerived::~MultiDerived() - converted to C */

void MultiDerived_destructor_with_delete(MultiDerived *self)

{
 operator_delete__(self);
 return;
}



/* Function: ~MultiDerived @ 00011c95 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk.bx */
/* non-virtual thunk to MultiDerived::~MultiDerived() - converted to C */

void MultiDerived_destructor_thunk_with_delete(MultiDerived *self)

{
 operator_delete__(self + -8);
 return;
}



/* Function: ~RTTIDerivedA @ 00011cbc */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk.bx */
/* RTTIDerivedA::~RTTIDerivedA() - converted to C */

void RTTIDerivedA_destructor_with_delete(RTTIDerivedA *self)

{
 operator_delete__(self);
 return;
}



/* Function: ~RTTIDerivedB @ 00011ce0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk.bx */
/* RTTIDerivedB::~RTTIDerivedB() - converted to C */

void RTTIDerivedB_destructor_with_delete(RTTIDerivedB *self)

{
 operator_delete__(self);
 return;
}



/* Function: ~DiamondDerived @ 00011d04 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk.bx */
/* DiamondDerived::~DiamondDerived() - converted to C */

void DiamondDerived_destructor_with_delete(DiamondDerived *self)

{
 operator_delete__(self);
 return;
}



/* Function: ~DiamondDerived @ 00011d27 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk.bx */
/* virtual thunk to DiamondDerived::~DiamondDerived() - converted to C */

void DiamondDerived_destructor_thunk_with_delete(DiamondDerived *self)

{
 operator_delete__((void *)((int)self + *(int *)(*(int *)self + -0x10)));
 return;
}



/* Function: ~DiamondDerived @ 00011d50 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk.bx */
/* non-virtual thunk to DiamondDerived::~DiamondDerived() - converted to C */

void DiamondDerived_destructor_thunk2_with_delete(DiamondDerived *self)

{
 operator_delete__((void *)((int)self + -8));
 return;
}



/* Function: template_max<int> @ 00011d77 */

/* int template_max<int>(int, int) - converted to C */

int template_max_int(int param_1,int param_2)

{
 if (param_1 < param_2) {
 param_1 = param_2;
 }
 return param_1;
}



/* Function: template_max<double> @ 00011d89 */

/* double template_max<double>(double, double) - converted to C */

double template_max_double(double param_1,double param_2)

{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}



/* Function: template_swap<int> @ 00011d9c */

/* void template_swap<int>(int&, int&) - converted to C */

void template_swap_int(int *param_1,int *param_2)

{
 int iVar1;
 
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}



/* Function: Container @ 00011db4 */

/* Container<int>::Container() - converted to C */

void Container_int_Constructor(Container_int *self)
{
 self->size = 0;
 return;
}



/* Function: push @ 00011dc4 */

/* Container<int>::push(int) - converted to C */

void Container_int_push(Container_int *self,int param_1)
{
 int iVar1;
 
 iVar1 = self->size;
 if (iVar1 < 10) {
 self->size = iVar1 + 1;
 self->data[iVar1] = param_1;
 }
 return;
}



/* Function: get @ 00011de2 */

/* Container<int>::get(int) const - converted to C */

int Container_int_get(Container_int *self,int param_1)
{
 int uVar1;
 
 uVar1 = 0;
 if ((-1 < param_1) && (param_1 < self->size)) {
 uVar1 = self->data[param_1];
 }
 return uVar1;
}



/* Function: getSize @ 00011e02 */

/* Container<int>::getSize() const - converted to C */

int Container_int_getSize(Container_int *self)
{
 return self->size;
}



/* Function: Container @ 00011e0e */

/* Container<double>::Container() - converted to C */

void Container_double_Constructor(Container_double *self)

{
 *(undefined4 *)(self + 0x50) = 0;
 return;
}



/* Function: push @ 00011e1e */

/* Container<double>::push(double) - converted to C */

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



/* Function: get @ 00011e40 */

/* Container<double>::get(int) const - converted to C */

double Container_double_get(Container_double *self,int param_1)

{
 if (param_1 < 0) {
 return 0.0;
 }
 if (*(int *)(self + 0x50) <= param_1) {
 return 0.0;
 }
 return *(double *)(self + param_1 * 8);
}



/* Function: getSize @ 00011e60 */

/* Container<double>::getSize() const - converted to C */

int Container_double_getSize(Container_double *self)

{
 return *(int *)(self + 0x50);
}



/* Function: __x86.get_pc_thunk.ax @ 00011e6c */

/* WARNING: This is an inlined function */

undefined4 __x86_get_pc_thunk_ax(void)

{
 undefined4 unaff_retaddr;
 
 return unaff_retaddr;
}



/* Function: __x86.get_pc_thunk.si @ 00011e70 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_si(void)

{
 return;
}



/* Function: __stack_chk_fail_local @ 00011e80 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void __stack_chk_fail_local(void)

{
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}




/* CRT stub function __do_global_ctors_aux removed by preprocessor */





/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 76 */
