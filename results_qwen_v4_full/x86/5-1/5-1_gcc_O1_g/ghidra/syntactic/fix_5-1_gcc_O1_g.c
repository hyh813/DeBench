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
typedef int undefined4;

/* Forward declarations and struct definitions */
typedef void (*_func_int_varargs)(void);
extern int PTR_virtual_func_00014cd4;
extern int PTR_virtual_func_00014cec;
extern void* PTR__RTTIDerivedA_00014dd4;
extern void* PTR__RTTIDerivedB_00014de8;
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

typedef struct {
 char name[32];
} SimpleClass;

typedef struct {
 int instance_count;
} LifecycleClass;
static int LifecycleClass_instance_count = 0;

typedef struct Base {
 _func_int_varargs **_vptr_Base;
} Base;

typedef struct Derived {
 Base super_Base;
 int multiplier;
} Derived;

typedef struct MiddleA {
 _func_int_varargs **_vptr_MiddleA;
 int dataA;
} MiddleA;

typedef struct MiddleB {
 _func_int_varargs **_vptr_MiddleB;
 int dataB;
} MiddleB;

typedef struct DiamondDerived {
 MiddleA super_MiddleA;
 int _16_4_;
 int _20_4_;
 int field_0x10;
} DiamondDerived;
static int DiamondDerived_vtable[10];

typedef struct MultiDerived {
 Base super_BaseA;
 Base super_BaseB;
} MultiDerived;

typedef struct RTTIBase {
 int typeinfo;
} RTTIBase;
int RTTIBase_typeinfo = 0;

typedef struct RTTIDerivedA {
 int typeinfo;
} RTTIDerivedA;
int RTTIDerivedA_typeinfo = 0;

typedef struct RTTIDerivedB {
 int typeinfo;
} RTTIDerivedB;
int RTTIDerivedB_typeinfo = 0;

typedef struct {
 int size;
 int data[10];
} Container_int;

typedef struct {
 int size;
 double data[10];
} Container_double;

/* Function declarations */
void __stack_chk_fail_local(void);
void __stack_chk_fail(void);
size_t strlen(const char *s);
int strcmp(const char *s1, const char *s2);
char *strncpy(char *dest, const char *src, size_t n);
int puts(const char *s);
int __printf_chk(int flag, const char *format, ...);
void *operator_new(size_t size);
void *operator_new__(size_t size);
void operator_delete(void *ptr, size_t size);
void operator_delete__(void *ptr);
void *__cxa_allocate_exception(size_t size);
void __cxa_throw(void *exc, void *typeinfo, void *dest);
int ghidra_custom_dyn_cast(int *src, int target_typeinfo);
int template_max_int(int a, int b);
double template_max_double(double a, double b);
void template_swap_int(int *a, int *b);
int DiamondDerived_func(DiamondDerived *obj);
int DiamondDerived_func_thunk(DiamondDerived *obj);
int DiamondDerived_func_nonvirtual_thunk(DiamondDerived *obj);

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/5-1/5-1_gcc_O1_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00011030 @ 00011030 */

void FUN_00011030(void)

{
 ((void (*)(void))0)();
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

int test_cpp_member_func(void)

{
 int iVar1;
 size_t sVar2;
 int in_GS_OFFSET;
 SimpleClass obj;
 
 iVar1 = *(int *)(in_GS_OFFSET + 0x14);
 strncpy(obj.name,"Test",5);
 obj.name[5] = '\0';
 obj.name[6] = '\0';
 obj.name[7] = '\0';
 obj.name[8] = '\0';
 obj.name[9] = '\0';
 obj.name[10] = '\0';
 obj.name[0xb] = '\0';
 obj.name[0xc] = '\0';
 obj.name[0xd] = '\0';
 obj.name[0xe] = '\0';
 obj.name[0xf] = '\0';
 obj.name[0x10] = '\0';
 obj.name[0x11] = '\0';
 obj.name[0x12] = '\0';
 obj.name[0x13] = '\0';
 obj.name[0x14] = '\0';
 obj.name[0x15] = '\0';
 obj.name[0x16] = '\0';
 obj.name[0x17] = '\0';
 obj.name[0x18] = '\0';
 obj.name[0x19] = '\0';
 obj.name[0x1a] = '\0';
 obj.name[0x1b] = '\0';
 obj.name[0x1c] = '\0';
 obj.name[0x1d] = '\0';
 obj.name[0x1e] = '\0';
 obj.name[0x1f] = '\0';
 sVar2 = strlen(obj.name);
 if (iVar1 == *(int *)(in_GS_OFFSET + 0x14)) {
 return sVar2 + 0x125c;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: test_cpp_constructor @ 000114b5 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_constructor(void)

{
 void *pvVar1;
 int iVar2;
 
 /* Unresolved local var: LifecycleClass obj@[???] */
 pvVar1 = operator_new__(0x14);
 /* Unresolved local var: size_t i@[???] */
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

/* WARNING: Unknown calling convention */

int call_virtual_func(Base *obj,int x)

{
 int iVar1;
 
 iVar1 = (**obj->_vptr_Base)(obj,x);
 return iVar1;
}



/* Function: test_cpp_virtual_func @ 0001153b */

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
 base._vptr_Base = (_func_int_varargs **)&PTR_virtual_func_00014cd4;
 derived.super_Base._vptr_Base = (_func_int_varargs **)&PTR_virtual_func_00014cec;
 iVar2 = call_virtual_func(&base,5);
 iVar3 = call_virtual_func(&derived.super_Base,5);
 if (iVar1 == *(int *)(in_GS_OFFSET + 0x14)) {
 return iVar2 + 0x15 + iVar3;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: test_cpp_multiple_inheritance @ 000115b1 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_multiple_inheritance(void)

{
 return 0x47;
}



/* Function: test_cpp_diamond_inheritance @ 000115bb */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */

int test_cpp_diamond_inheritance(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int in_GS_OFFSET;
 DiamondDerived obj;
 
 iVar1 = *(int *)(in_GS_OFFSET + 0x14);
 obj.super_MiddleA._vptr_MiddleA = (_func_int_varargs **)(DiamondDerived_vtable + 0xc);
 obj._16_4_ = 0x14dc0;
 obj._20_4_ = 0x32;
 iVar2 = DiamondDerived_func(&obj);
 obj._20_4_ = 100;
 iVar3 = DiamondDerived_func(&obj);
 if (iVar1 == *(int *)(in_GS_OFFSET + 0x14)) {
 return iVar3 + iVar2;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: test_cpp_operator_overload @ 00011634 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_operator_overload(void)

{
 return 0x16;
}



/* Function: test_cpp_template_func @ 0001163e */

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
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return (int)dVar2 + iVar1 + a + b;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: test_cpp_template_class @ 000116e2 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_class(void)

{
 return 0x10;
}



/* Function: test_cpp_lambda @ 000116ec */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_lambda(void)

{
 return 0x55;
}



/* Function: test_cpp_exception @ 000116f6 */

/* WARNING: Function: __x86.get_pc_thunk.si replaced with injection: get_pc_thunk_si */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_exception(void)

{
 undefined4 *puVar1;
 
 puVar1 = (undefined4 *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* WARNING: Subroutine does not return */
 /* try { // try from 00011729 to 0001172d has its CatchHandler @ 0001172e */
 __cxa_throw(puVar1,(void*)0,(void*)0);
 return 0;
}



/* Function: test_cpp_smart_ptr @ 00011806 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_smart_ptr(void)

{
 return 0x2bf;
}



/* Function: test_cpp_rtti @ 00011810 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Removing unreachable block (ram,0x000118a2) */
/* WARNING: Removing unreachable block (ram,0x000118a7) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_rtti(void)

{
 int iVar1;
 char *__s1;
 int *piVar2;
 int *piVar3;
 int iVar4;
 int iVar5;
 size_t sVar6;
 unsigned int uVar7;
 
 piVar2 = (int*)operator_new(4);
 *piVar2 = (int)PTR__RTTIDerivedA_00014dd4;
 piVar3 = (int*)operator_new(4);
 *piVar3 = (int)PTR__RTTIDerivedB_00014de8;
 iVar1 = *piVar2;
 __s1 = *(char **)(*(int *)(iVar1 + -4) + 4);
 uVar7 = 10;
 if ((__s1 != "12RTTIDerivedA") && (uVar7 = 0, *__s1 != '*')) {
 iVar4 = strcmp(__s1,"12RTTIDerivedA");
 uVar7 = -(unsigned int)(iVar4 == 0) & 10;
 }
	/* Unresolved local var: RTTIDerivedA * derivedA@[???] */
	iVar5 = ghidra_custom_dyn_cast(piVar2,RTTIDerivedA_typeinfo);
	iVar4 = uVar7 + 0x14;
	if (iVar5 != 0) {
	iVar4 = uVar7 + 0x78;
	}
	/* Unresolved local var: RTTIDerivedB * derivedB@[???] */
	iVar5 = ghidra_custom_dyn_cast(piVar3,RTTIDerivedB_typeinfo);
 if (iVar5 != 0) {
 iVar4 = iVar4 + 200;
 }
 sVar6 = strlen(__s1 + (*__s1 == '*'));
 operator_delete__(piVar2);
 operator_delete__(piVar3);
 return iVar4 + sVar6;
}



/* Function: test_cpp_oo_features @ 0001193a */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */

void test_cpp_oo_features(void)

{
 int iVar1;
 
 puts(DAT_00012018);
 iVar1 = test_cpp_member_func();
 __printf_chk(1,DAT_0001203c,iVar1);
 iVar1 = test_cpp_constructor();
 __printf_chk(1,DAT_0001205a,iVar1);
 iVar1 = test_cpp_virtual_func();
 __printf_chk(1,DAT_00012076,iVar1);
 iVar1 = test_cpp_multiple_inheritance();
 __printf_chk(1,DAT_00012092,iVar1);
 iVar1 = test_cpp_diamond_inheritance();
 __printf_chk(1,DAT_000120ae,iVar1);
 __printf_chk(1,DAT_000120cb,0x16);
 iVar1 = test_cpp_template_func();
 __printf_chk(1,DAT_000120e7,iVar1);
 __printf_chk(1,DAT_00012103,0x10);
 __printf_chk(1,DAT_0001211f,0x55);
 iVar1 = test_cpp_exception();
 __printf_chk(1,DAT_0001213b,iVar1);
 iVar1 = test_cpp_smart_ptr();
 __printf_chk(1,DAT_00012158,iVar1);
 iVar1 = test_cpp_rtti();
 __printf_chk(1,DAT_00012175,iVar1);
 return;
}



/* Function: main @ 00011a75 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 00011a8b */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _GLOBAL__sub_I__Z20test_cpp_member_funcv(void)

{
 return;
}



/* Function: virtual_func @ 00011ac8 */

/* DWARF original prototype: int virtual_func(Base * this, int x) */

int Base_virtual_func(Base *obj,int x)

{
 return x + 1;
}



/* Function: getName @ 00011ad4 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: char * getName(Base * this) */

char * Base_getName(Base *obj)

{
 return "Base";
}



/* Function: ~Base @ 00011aea */

/* DWARF original prototype: void ~Base(Base * this, int __in_chrg) */

void Base_destructor(Base *obj,int __in_chrg)

{
 return;
}



/* Function: virtual_func @ 00011af0 */

/* DWARF original prototype: int virtual_func(Derived * this, int x) */

int Derived_virtual_func(Derived *obj,int x)

{
 return x * obj->multiplier;
}



/* Function: getName @ 00011b02 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: char * getName(Derived * this) */

char * Derived_getName(Derived *obj)

{
 return "Derived";
}



/* Function: funcA @ 00011b18 */

/* DWARF original prototype: int funcA(MultiDerived * this) */

int MultiDerived_funcA(MultiDerived *obj)

{
 return 0x1e;
}



/* Function: funcB @ 00011b22 */

/* DWARF original prototype: int funcB(MultiDerived * this) */

int MultiDerived_funcB(MultiDerived *obj)

{
 return 0x28;
}



/* Function: funcB @ 00011b2c */

/* non-virtual thunk to MultiDerived::funcB() */

undefined4 MultiDerived_funcB_nonvirtual_thunk(MultiDerived *obj)

{
 return 0x28;
}



/* Function: func @ 00011b36 */

/* DWARF original prototype: int func(MiddleA * this) */

int MiddleA_func(MiddleA *obj)

{
 return *(int *)((int)&obj->dataA + (int)obj->_vptr_MiddleA[-3]) + 0x96;
}



/* Function: func @ 00011b4d */

/* virtual thunk to MiddleA::func() */

int MiddleA_func_thunk(MiddleA *obj)

{
 _func_int_varargs *p_Var1;
 
 p_Var1 = (_func_int_varargs *)((int)&obj->_vptr_MiddleA + (int)obj->_vptr_MiddleA[-3]);
 return *(int *)(p_Var1 + *(int *)(*(int *)p_Var1 + -0xc) + 4) + 0x96;
}



/* Function: func @ 00011b6a */

/* DWARF original prototype: int func(MiddleB * this) */

int MiddleB_func(MiddleB *obj)

{
 return *(int *)((int)&obj->dataB + (int)obj->_vptr_MiddleB[-3]) + 200;
}



/* Function: func @ 00011b81 */

/* virtual thunk to MiddleB::func() */

int MiddleB_func_thunk(MiddleB *obj)

{
 _func_int_varargs *p_Var1;
 
 p_Var1 = (_func_int_varargs *)((int)&obj->_vptr_MiddleB + (int)obj->_vptr_MiddleB[-3]);
 return *(int *)(p_Var1 + *(int *)(*(int *)p_Var1 + -0xc) + 4) + 200;
}



/* Function: func @ 00011b9e */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: int func(DiamondDerived * this) */

int DiamondDerived_func(DiamondDerived *obj)

{
 return *(int *)((int)&(obj->super_MiddleA).dataA + (int)(obj->super_MiddleA)._vptr_MiddleA[-3])
 + 0xfa;
}



/* Function: func @ 00011bb5 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::func() */

int DiamondDerived_func_thunk(DiamondDerived *obj)

{
 _func_int_varargs *p_Var1;
 
 p_Var1 = (_func_int_varargs *)
 ((int)&(obj->super_MiddleA)._vptr_MiddleA + (int)(obj->super_MiddleA)._vptr_MiddleA[-3]
 );
 return *(int *)(p_Var1 + *(int *)(*(int *)p_Var1 + -0xc) + 4) + 0xfa;
}



/* Function: func @ 00011bd1 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::func() */

int DiamondDerived_func_nonvirtual_thunk(DiamondDerived *obj)

{
 return *(int *)((int)obj + *(int *)(*(int *)&obj[-1].field_0x10 + -0xc) + -4) + 0xfa;
}



/* Function: getType @ 00011bea */

/* DWARF original prototype: int getType(RTTIDerivedA * this) */

int RTTIDerivedA_getType(RTTIDerivedA *obj)

{
 return 1;
}



/* Function: getType @ 00011bf4 */

/* DWARF original prototype: int getType(RTTIDerivedB * this) */

int RTTIDerivedB_getType(RTTIDerivedB *obj)

{
 return 2;
}







































/* Function: ~Derived @ 00011c4e */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DWARF original prototype: void ~Derived(Derived * this, int __in_chrg) */

void Derived_destructor(Derived *obj,int __in_chrg)

{
 operator_delete(obj,8);
 return;
}



/* Function: ~MultiDerived @ 00011c72 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DWARF original prototype: void ~MultiDerived(MultiDerived * this, int __in_chrg) */

void MultiDerived_destructor(MultiDerived *obj,int __in_chrg)

{
 operator_delete(obj,0x10);
 return;
}



/* Function: ~MultiDerived @ 00011c95 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* non-virtual thunk to MultiDerived::~MultiDerived() */

void MultiDerived_destructor_nonvirtual_thunk(MultiDerived *obj)

{
 operator_delete(&obj[-1].super_BaseB,0x10);
 return;
}



/* Function: ~RTTIDerivedA @ 00011cbc */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DWARF original prototype: void ~RTTIDerivedA(RTTIDerivedA * this, int __in_chrg) */

void RTTIDerivedA_destructor(RTTIDerivedA *obj,int __in_chrg)

{
 operator_delete(obj,4);
 return;
}



/* Function: ~RTTIDerivedB @ 00011ce0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DWARF original prototype: void ~RTTIDerivedB(RTTIDerivedB * this, int __in_chrg) */

void RTTIDerivedB_destructor(RTTIDerivedB *obj,int __in_chrg)

{
 operator_delete(obj,4);
 return;
}



/* Function: ~DiamondDerived @ 00011d04 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this, int __in_chrg, void * *
 __vtt_parm) */

void DiamondDerived_destructor(DiamondDerived *obj,int __in_chrg,void **__vtt_parm)

{
 operator_delete(obj,0x18);
 return;
}



/* Function: ~DiamondDerived @ 00011d27 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_destructor_thunk(DiamondDerived *obj)

{
 operator_delete((_func_int_varargs *)
 ((int)&(obj->super_MiddleA)._vptr_MiddleA +
 (int)(obj->super_MiddleA)._vptr_MiddleA[-4]),0x18);
 return;
}



/* Function: ~DiamondDerived @ 00011d50 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_destructor_nonvirtual_thunk(DiamondDerived *obj)

{
 operator_delete(&obj[-1].field_0x10,0x18);
 return;
}



/* Function: template_max_int @ 00011d77 */

/* WARNING: Unknown calling convention */

int template_max_int(int a,int b)

{
 if (a < b) {
 a = b;
 }
 return a;
}



/* Function: template_max_double @ 00011d89 */

/* WARNING: Unknown calling convention */

double template_max_double(double a,double b)

{
 if (a <= b) {
 a = b;
 }
 return a;
}



/* Function: template_swap_int @ 00011d9c */

/* WARNING: Unknown calling convention */

void template_swap_int(int *a,int *b)

{
 int iVar1;
 
 iVar1 = *a;
 *a = *b;
 *b = iVar1;
 return;
}

int ghidra_custom_dyn_cast(int *src, int target_typeinfo)
{
 (void)src;
 (void)target_typeinfo;
 return 1;
}



/* Function: Container @ 00011db4 */

/* DWARF original prototype: void Container(Container_int * this) */

void Container_int_Container(Container_int *obj)

{
 obj->size = 0;
 return;
}



/* Function: push @ 00011dc4 */

/* DWARF original prototype: void push(Container_int * this, int value) */

void Container_int_push(Container_int *obj,int value)

{
 int iVar1;
 
 iVar1 = obj->size;
 if (iVar1 < 10) {
 obj->size = iVar1 + 1;
 obj->data[iVar1] = value;
 }
 return;
}



/* Function: get @ 00011de2 */

/* DWARF original prototype: int get(Container_int * this, int idx) */

int Container_int_get(Container_int *obj,int idx)

{
 int iVar1;
 
 iVar1 = 0;
 if ((-1 < idx) && (idx < obj->size)) {
 iVar1 = obj->data[idx];
 }
 return iVar1;
}



/* Function: getSize @ 00011e02 */

/* DWARF original prototype: int getSize(Container_int * this) */

int Container_int_getSize(Container_int *obj)

{
 return obj->size;
}



/* Function: Container @ 00011e0e */

/* DWARF original prototype: void Container(Container_double * this) */

void Container_double_Container(Container_double *obj)

{
 obj->size = 0;
 return;
}



/* Function: push @ 00011e1e */

/* DWARF original prototype: void push(Container_double * this, double value) */

void Container_double_push(Container_double *obj,double value)

{
 int iVar1;
 
 iVar1 = obj->size;
 if (iVar1 < 10) {
 obj->size = iVar1 + 1;
 obj->data[iVar1] = value;
 }
 return;
}



/* Function: get @ 00011e40 */

/* DWARF original prototype: double get(Container_double * this, int idx) */

double Container_double_get(Container_double *obj,int idx)

{
 if (idx < 0) {
 return 0.0;
 }
 if (obj->size <= idx) {
 return 0.0;
 }
 return obj->data[idx];
}



/* Function: getSize @ 00011e60 */

/* DWARF original prototype: int getSize(Container_double * this) */

int Container_double_getSize(Container_double *obj)

{
 return obj->size;
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
