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

/* Define undefined types */
typedef void undefined;
typedef int undefined4;

/* C++ RTTI type_info structure */
typedef struct type_info {
    const char *_name;
} type_info;

/* Forward declarations and function pointer types */
typedef int (*_func_int_varargs)(void *, int);
typedef int (*code)(void *);

/* Class/Struct definitions */
typedef struct SimpleClass {
    char name[32];
} SimpleClass;

typedef struct Base {
    _func_int_varargs **_vptr_Base;
} Base;

typedef struct Derived {
    Base super_Base;
    int multiplier;
} Derived;

typedef struct MultiDerived {
    Base super_BaseA;
    Base super_BaseB;
} MultiDerived;

typedef struct MiddleA {
    _func_int_varargs **_vptr_MiddleA;
    int _8_4_;
    int dataA;
} MiddleA;

typedef struct MiddleB {
    _func_int_varargs **_vptr_MiddleB;
    int dataB;
} MiddleB;

typedef struct DiamondDerived {
    MiddleA super_MiddleA;
    int _16_4_;
    MiddleB super_MiddleB;
    int _20_4_;
    int field_0x10;
} DiamondDerived;

typedef struct RTTIDerivedA {
    void *_vptr_RTTIDerivedA;
} RTTIDerivedA;

typedef struct RTTIDerivedB {
    void *_vptr_RTTIDerivedB;
} RTTIDerivedB;

typedef struct LifecycleClass {
    int field0;
} LifecycleClass;

int LifecycleClass_instance_count = 0;

/* Forward declarations */
int DiamondDerived_func(DiamondDerived *obj);
int template_max_int(int a, int b);
double template_max_double(double a, double b);
void template_swap_int(int *a, int *b);
int Base_virtual_func(Base *self, int x);
char *Base_getName(Base *self);
void Base_deleting_destructor(Base *self, int __in_chrg);
int Derived_virtual_func(Derived *self, int x);
char *Derived_getName(Derived *self);
int MultiDerived_funcA(MultiDerived *self);
int MultiDerived_funcB(MultiDerived *self);
int MultiDerived_funcB_thunk(MultiDerived *self);

typedef struct Container_int {
    int size;
    int data[10];
} Container_int;

typedef struct Container_double {
    int size;
    double data[10];
} Container_double;

/* Function declarations */
void __stack_chk_fail_local(void);
void builtin_strncpy(char *dest, const char *src, size_t n);
size_t strlen(const char *s);
int strcmp(const char *s1, const char *s2);
void puts(const char *s);
int __printf_chk(int __flag, const char *__fmt, ...) __attribute__((__format__(__printf__, 2, 3)));
void std_ios_base_Init_Init(void *obj);
void std_ios_base_Init_destructor(void *obj);
int ROUND(double x);
void *__dynamic_cast(void *obj, void *src_type, void *dest_type, int src2dst, int __static_type);
int *__dynamic_cast_int(void *obj, void *src_type, void *dest_type, int ptr);
void *operator_new(size_t size);
void *operator_new__(size_t size);
void operator_delete(void *ptr);
void operator_delete__(void *ptr, int __in_chrg);
void *__cxa_allocate_exception(size_t size);
void __cxa_throw(void *obj, void *type, void *dest);
void __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle);
void __stack_chk_fail(void);

/* Global variables */
extern unsigned long __stack_chk_guard;
extern _func_int_varargs *PTR_virtual_func_00014cd4;
extern _func_int_varargs *PTR_virtual_func_00014cec;
extern int DiamondDerived_vtable[];
extern int PTR__RTTIDerivedA_00014dd4;
extern int PTR__RTTIDerivedB_00014de8;
extern int RTTIBase_typeinfo;
extern int RTTIDerivedA_typeinfo;
extern int RTTIDerivedB_typeinfo;
extern type_info int_typeinfo;
extern void *std___ioinit;
extern void *__dso_handle;
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
 (*(code *)(undefined *)0x0)();
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
 
 (void)in_GS_OFFSET;
 iVar1 = *(int *)(&__stack_chk_guard + 0);
 builtin_strncpy(obj.name,"Test",5);
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
 *(int *)((int)pvVar1 + 4) = 10;
 *(int *)((int)pvVar1 + 8) = 0x14;
 *(int *)((int)pvVar1 + 0xc) = 0x1e;
 *(int *)((int)pvVar1 + 0x10) = 0x28;
 iVar2 = LifecycleClass_instance_count + 0x15;
 LifecycleClass_instance_count = LifecycleClass_instance_count + 1;
 operator_delete__(pvVar1, 0);
 LifecycleClass_instance_count = LifecycleClass_instance_count + -1;
 return LifecycleClass_instance_count * 1000 + iVar2;
}



/* Function: call_virtual_func @ 00011523 */

/* WARNING: Unknown calling convention */

int call_virtual_func(Base *obj,int x)
{
 int iVar1;
 int (*vfunc)(Base *, int);
 
 vfunc = (int (*)(Base *, int))(**(_func_int_varargs **)obj->_vptr_Base);
 iVar1 = vfunc(obj, x);
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
 obj.super_MiddleA._vptr_MiddleA = (_func_int_varargs **)((int)DiamondDerived_vtable + 0xc);
 obj._16_4_ = 0x14dc0;
 obj.super_MiddleA._8_4_ = 0x14da4;
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
 return (int)ROUND(dVar2) + iVar1 + a + b;
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
 __cxa_throw(puVar1,&int_typeinfo,(void *)0);
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
 
 piVar2 = (int *)operator_new(4);
 *piVar2 = (int)&PTR__RTTIDerivedA_00014dd4;
 piVar3 = (int *)operator_new(4);
 *piVar3 = (int)&PTR__RTTIDerivedB_00014de8;
 iVar1 = *piVar2;
 __s1 = *(char **)(*(int *)(iVar1 + -4) + 4);
 uVar7 = 10;
 if ((__s1 != "12RTTIDerivedA") && (uVar7 = 0, *__s1 != '*')) {
 iVar4 = strcmp(__s1,"12RTTIDerivedA");
 uVar7 = -(unsigned int)(iVar4 == 0) & 10;
 }
 /* Unresolved local var: RTTIDerivedA * derivedA@[???] */
 iVar5 = *(int *)__dynamic_cast(piVar2,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0,0);
 iVar4 = uVar7 + 0x14;
 if (iVar5 != 0) {
 iVar4 = uVar7 + 0x78;
 }
 /* Unresolved local var: RTTIDerivedB * derivedB@[???] */
 iVar5 = *(int *)__dynamic_cast(piVar3,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo,0,0);
 if (iVar5 != 0) {
 iVar4 = iVar4 + 200;
 }
 sVar6 = strlen(__s1 + (*__s1 == '*'));
 (**(code **)(iVar1 + 4))(piVar2);
 (**(code **)(*piVar3 + 4))(piVar3);
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
 std_ios_base_Init_Init(&std___ioinit);
 __cxa_atexit(std_ios_base_Init_destructor,&std___ioinit,&__dso_handle);
 return;
}



/* Function: virtual_func @ 00011ac8 */
/* DWARF original prototype: int virtual_func(Base * this, int x) */

int Base_virtual_func(Base *self,int x)
{
 return x + 1;
}



/* Function: getName @ 00011ad4 */
/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: char * getName(Base * self) */

char * Base_getName(Base *self)
{
 return "Base";
}



/* Function: ~Base @ 00011aea */
/* DWARF original prototype: void ~Base(Base * this, int __in_chrg) */

void Base_destructor(Base *self,int __in_chrg)
{
 return;
}



/* Function: virtual_func @ 00011af0 */
/* DWARF original prototype: int virtual_func(Derived * this, int x) */

int Derived_virtual_func(Derived *self,int x)
{
 return x * self->multiplier;
}



/* Function: getName @ 00011b02 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: char * getName(Derived * self) */

char * Derived_getName(Derived *self)

{
 return "Derived";
}



/* Function: funcA @ 00011b18 */

/* DWARF original prototype: int funcA(MultiDerived * self) */

int MultiDerived_funcA(MultiDerived *self)

{
 return 0x1e;
}



/* Function: funcB @ 00011b22 */

/* DWARF original prototype: int funcB(MultiDerived * self) */

int MultiDerived_funcB(MultiDerived *self)

{
 return 0x28;
}



/* Function: funcB @ 00011b2c */

/* non-virtual thunk to MultiDerived::funcB() */

int MultiDerived_funcB_thunk(MultiDerived *self)

{
 return 0x28;
}



/* Function: func @ 00011b36 */

/* DWARF original prototype: int func(MiddleA * self) */

int MiddleA_func(MiddleA *self)

{
 return *(int *)((int)&self->dataA + (int)self->_vptr_MiddleA[-3]) + 0x96;
}



/* Function: func @ 00011b4d */

/* virtual thunk to MiddleA::func() */

int MiddleA_func_thunk(MiddleA *self)

{
 _func_int_varargs *p_Var1;
 
 p_Var1 = (_func_int_varargs *)((int)&self->_vptr_MiddleA + (int)self->_vptr_MiddleA[-3]);
 return *(int *)(p_Var1 + *(int *)(*(int *)p_Var1 + -0xc) + 4) + 0x96;
}



/* Function: func @ 00011b6a */

/* DWARF original prototype: int func(MiddleB * self) */

int MiddleB_func(MiddleB *self)

{
 return *(int *)((int)&self->dataB + (int)self->_vptr_MiddleB[-3]) + 200;
}



/* Function: func @ 00011b81 */

/* virtual thunk to MiddleB::func() */

int MiddleB_func_thunk(MiddleB *self)

{
 _func_int_varargs *p_Var1;
 
 p_Var1 = (_func_int_varargs *)((int)&self->_vptr_MiddleB + (int)self->_vptr_MiddleB[-3]);
 return *(int *)(p_Var1 + *(int *)(*(int *)p_Var1 + -0xc) + 4) + 200;
}



/* Function: func @ 00011b9e */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: int func(DiamondDerived * self) */

int DiamondDerived_func(DiamondDerived *self)

{
 return *(int *)((int)&(self->super_MiddleA).dataA + (int)(self->super_MiddleA)._vptr_MiddleA[-3])
 + 0xfa;
}



/* Function: func @ 00011bb5 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::func() */

int DiamondDerived_func_thunk(DiamondDerived *self)

{
 _func_int_varargs *p_Var1;
 
 p_Var1 = (_func_int_varargs *)
 ((int)&(self->super_MiddleA)._vptr_MiddleA + (int)(self->super_MiddleA)._vptr_MiddleA[-3]
 );
 return *(int *)(p_Var1 + *(int *)(*(int *)p_Var1 + -0xc) + 4) + 0xfa;
}



/* Function: func @ 00011bd1 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::func() */

int DiamondDerived_func_thunk2(DiamondDerived *self)

{
 return *(int *)((int)self + *(int *)(*(int *)&self[-1].field_0x10 + -0xc) + -4) + 0xfa;
}



/* Function: getType @ 00011bea */

/* DWARF original prototype: int getType(RTTIDerivedA * self) */

int RTTIDerivedA_getType(RTTIDerivedA *self)

{
 return 1;
}



/* Function: getType @ 00011bf4 */

/* DWARF original prototype: int getType(RTTIDerivedB * self) */

int RTTIDerivedB_getType(RTTIDerivedB *self)

{
 return 2;
}



/* Function: ~RTTIDerivedB @ 00011bfe */

/* DWARF original prototype: void ~RTTIDerivedB(RTTIDerivedB * self, int __in_chrg) */

void RTTIDerivedB_destructor(RTTIDerivedB *self,int __in_chrg)

{
  return;
}



/* Function: ~RTTIDerivedA @ 00011c04 */

/* DWARF original prototype: void ~RTTIDerivedA(RTTIDerivedA * self, int __in_chrg) */

void RTTIDerivedA_destructor(RTTIDerivedA *self,int __in_chrg)

{
  return;
}



/* Function: ~DiamondDerived @ 00011c0a */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * self, int __in_chrg, void * *
 __vtt_parm) */

void
DiamondDerived_destructor_vtt(DiamondDerived *self,int __in_chrg,void **__vtt_parm)

{
  return;
}



/* Function: ~DiamondDerived @ 00011c0f */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_destructor_thunk1(DiamondDerived *self)

{
  return;
}



/* Function: ~DiamondDerived @ 00011c14 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_destructor_thunk2(DiamondDerived *self)

{
  return;
}



/* Function: ~MultiDerived @ 00011c1a */

/* DWARF original prototype: void ~MultiDerived(MultiDerived * self, int __in_chrg) */

void MultiDerived_destructor(MultiDerived *self,int __in_chrg)

{
  return;
}



/* Function: ~MultiDerived @ 00011c1f */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void MultiDerived_destructor_thunk1(MultiDerived *self)

{
  return;
}



/* Function: ~Derived @ 00011c24 */

/* DWARF original prototype: void ~Derived(Derived * self, int __in_chrg) */

void Derived_destructor(Derived *self,int __in_chrg)

{
  return;
}



/* Function: ~Base @ 00011c2a */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DWARF original prototype: void ~Base(Base * this, int __in_chrg) */

void Base_destructor2(Base *self,int __in_chrg)

{
  operator_delete__(self, __in_chrg);
  return;
}



/* Function: ~Derived @ 00011c4e */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DWARF original prototype: void ~Derived(Derived * this, int __in_chrg) */

void Derived_deleting_destructor(Derived *self,int __in_chrg)

{
  operator_delete__(self, __in_chrg);
  return;
}



/* Function: ~MultiDerived @ 00011c72 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DWARF original prototype: void ~MultiDerived(MultiDerived * this, int __in_chrg) */

void MultiDerived_deleting_destructor(MultiDerived *self,int __in_chrg)

{
  operator_delete__(self, __in_chrg);
  return;
}



/* Function: ~MultiDerived @ 00011c95 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* non-virtual thunk to MultiDerived::~MultiDerived() */

void MultiDerived_deleting_destructor_thunk(MultiDerived *self)

{
  operator_delete__(self, 1);
  return;
}



/* Function: ~RTTIDerivedA @ 00011cbc */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DWARF original prototype: void ~RTTIDerivedA(RTTIDerivedA * this, int __in_chrg) */

void RTTIDerivedA_deleting_destructor(RTTIDerivedA *self,int __in_chrg)

{
  operator_delete__((void *)self, __in_chrg);
  return;
}



/* Function: ~RTTIDerivedB @ 00011ce0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DWARF original prototype: void ~RTTIDerivedB(RTTIDerivedB * this, int __in_chrg) */

void RTTIDerivedB_deleting_destructor(RTTIDerivedB *self,int __in_chrg)

{
  operator_delete__((void *)self, __in_chrg);
  return;
}



/* Function: ~DiamondDerived @ 00011d04 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this, int __in_chrg, void * *
 __vtt_parm) */

void
DiamondDerived_deleting_destructor(DiamondDerived *self,int __in_chrg,void **__vtt_parm)

{
  operator_delete__(self, __in_chrg);
  return;
}



/* Function: ~DiamondDerived @ 00011d27 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_deleting_destructor_thunk1(DiamondDerived *self)

{
  operator_delete__((_func_int_varargs *)
  ((int)&(self->super_MiddleA)._vptr_MiddleA +
  (int)(self->super_MiddleA)._vptr_MiddleA[-4]), 1);
  return;
}



/* Function: ~DiamondDerived @ 00011d50 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_deleting_destructor_thunk2(DiamondDerived *self)

{
  operator_delete__(self, 1);
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



/* Function: Container_int_Constructor @ 00011db4 */

/* DWARF original prototype: void Container(Container<int> * this) */

void Container_int_Constructor(Container_int *self)

{
  self->size = 0;
  return;
}



/* Function: Container_int_push @ 00011dc4 */

/* DWARF original prototype: void push(Container<int> * self, int value) */

void Container_int_push(Container_int *self,int value)

{
  int iVar1;
  
  iVar1 = self->size;
  if (iVar1 < 10) {
    self->size = iVar1 + 1;
    self->data[iVar1] = value;
  }
  return;
}



/* Function: Container_int_get @ 00011de2 */

/* DWARF original prototype: int get(Container<int> * self, int idx) */

int Container_int_get(Container_int *self,int idx)

{
  int iVar1;
  
  iVar1 = 0;
  if ((-1 < idx) && (idx < self->size)) {
    iVar1 = self->data[idx];
  }
  return iVar1;
}



/* Function: Container_int_getSize @ 00011e02 */

/* DWARF original prototype: int getSize(Container<int> * self) */

int Container_int_getSize(Container_int *self)

{
  return self->size;
}



/* Function: Container_double_Constructor @ 00011e0e */

/* DWARF original prototype: void Container(Container<double> * self) */

void Container_double_Constructor(Container_double *self)

{
  self->size = 0;
  return;
}



/* Function: Container_double_push @ 00011e1e */

/* DWARF original prototype: void push(Container<double> * self, double value) */

void Container_double_push(Container_double *self,double value)

{
  int iVar1;
  
  iVar1 = self->size;
  if (iVar1 < 10) {
    self->size = iVar1 + 1;
    self->data[iVar1] = value;
  }
  return;
}



/* Function: Container_double_get @ 00011e40 */

/* DWARF original prototype: double get(Container<double> * self, int idx) */

double Container_double_get(Container_double *self,int idx)

{
  if (idx < 0) {
    return 0.0;
  }
  if (self->size <= idx) {
    return 0.0;
  }
  return self->data[idx];
}



/* Function: Container_double_getSize @ 00011e60 */

/* DWARF original prototype: int getSize(Container<double> * self) */

int Container_double_getSize(Container_double *self)

{
  return self->size;
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
