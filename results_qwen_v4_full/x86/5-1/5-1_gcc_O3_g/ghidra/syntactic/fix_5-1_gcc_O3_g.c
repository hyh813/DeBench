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
typedef void (*code)(void);
typedef unsigned int undefined4;
typedef struct _func_int_varargs {
    int _m_data;
} _func_int_varargs;

/* Helper macro for rounding */
#define ROUND(x) ((int)((x) + 0.5))

/* Struct definitions for C++ classes */
typedef struct SimpleClass {
    char name[32];
} SimpleClass;

typedef struct Base {
    void *_vptr_Base;
} Base;

typedef struct Derived {
    void *_vptr_Derived;
    int multiplier;
} Derived;

typedef struct MultiDerived {
    Base super_BaseA;
    Base super_BaseB;
} MultiDerived;

typedef struct MiddleA {
    void *_vptr_MiddleA;
    int dataA;
} MiddleA;

typedef struct MiddleB {
    void *_vptr_MiddleB;
    int dataB;
} MiddleB;

typedef struct DiamondDerived {
    MiddleA super_MiddleA;
    MiddleB super_MiddleB;
} DiamondDerived;

typedef struct RTTIBase {
    void *_vptr_RTTIBase;
} RTTIBase;

typedef struct RTTIDerivedA {
    void *_vptr_RTTIDerivedA;
} RTTIDerivedA;

typedef struct RTTIDerivedB {
    void *_vptr_RTTIDerivedB;
} RTTIDerivedB;

typedef struct LifecycleClass {
    int instance_count;
} LifecycleClass;

typedef struct Container_int {
    int data[10];
    int size;
} Container_int;

typedef struct Container_double {
    double data[10];
    int size;
} Container_double;

/* Global variables */
extern int LifecycleClass_instance_count;
#define LifecycleClass_instance_count LifecycleClass_instance_count

/* RTTI typeinfo variables */
extern void *RTTIBase_typeinfo;
extern void *RTTIDerivedA_typeinfo;
extern void *RTTIDerivedB_typeinfo;
extern void *PTR__RTTIDerivedA_00014e48;
extern void *PTR__RTTIDerivedB_00014e5c;

/* External function declarations */
extern void *operator_new(size_t size);
extern void operator_delete(void *ptr, size_t size);
extern size_t strlen(const char *s);
extern int strcmp(const char *s1, const char *s2);
extern void *memcpy(void *dest, const void *src, size_t n);
extern int printf(const char *format, ...);
extern int puts(const char *s);
extern void __stack_chk_fail(void);
extern void __stack_chk_fail_local(void);
extern void *__cxa_allocate_exception(size_t size);
extern void __cxa_throw(void *exc, void *type, void *dest);
extern int __cxa_atexit(void (*func)(void *), void *arg, void *dso);
extern void *__dynamic_cast(void *obj, void *src_type, void *dst_type, int src2dst);
extern void test_cpp_oo_features(void);
extern int __printf_chk(int flag, const char *format, ...);

/* External data declarations */
extern char DAT_00013018[];
extern char DAT_0001303c[];
extern char DAT_0001305a[];
extern char DAT_00013076[];
extern char DAT_00013092[];
extern char DAT_000130ae[];
extern char DAT_000130cb[];
extern char DAT_000130e7[];
extern char DAT_00013103[];
extern char DAT_0001311f[];
extern char DAT_0001313b[];
extern char DAT_00013158[];
extern char DAT_00013175[];

/* Forward declarations for template functions */
extern int template_max_int(int a, int b);
extern double template_max_double(double a, double b);
extern void template_swap_int(int *a, int *b);

/* Helper function for string copy */
extern char *builtin_strncpy(char *dest, const char *src, size_t n);

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/5-1/5-1_gcc_O3_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00011030 @ 00011030 */

void FUN_00011030(void)

{
 ((code)0x0)();
 return;
}



/* Function: test_cpp_exception @ 00011270 */

/* WARNING: Function: __x86.get_pc_thunk.si replaced with injection: get_pc_thunk_si */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_exception(void)

{
 int *puVar1;
 
 puVar1 = (int *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* WARNING: Subroutine does not return */
 /* try { // try from 000112a3 to 000112a7 has its CatchHandler @ 000112a8 */
 __cxa_throw(puVar1,(void *)0,(void *)0);
}



/* Function: main @ 00011380 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 000113a0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _GLOBAL__sub_I__Z20test_cpp_member_funcv(void)

{
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

int test_cpp_member_func(void)

{
 int iVar1;
 size_t sVar2;
 int in_GS_OFFSET;
 SimpleClass obj;
 
 iVar1 = *(int *)(in_GS_OFFSET + 0x14);
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



/* Function: test_cpp_constructor @ 00011600 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_constructor(void)

{
 /* Unresolved local var: LifecycleClass obj@[???] */
 return LifecycleClass_instance_count * 0x3e9 + 0x15;
}



/* Function: call_virtual_func @ 00011620 */

int call_virtual_func(Base *obj,int x)

{
 int iVar1;
 
 /* WARNING: Could not recover jumptable at 0x0001162e. Too many branches */
 /* WARNING: Treating indirect jump as call */
 iVar1 = ((int (*)(void))(*(void **)obj->_vptr_Base))();
 return iVar1;
}



/* Function: test_cpp_virtual_func @ 00011630 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_virtual_func(void)

{
 return 0x2a;
}



/* Function: test_cpp_multiple_inheritance @ 00011640 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_multiple_inheritance(void)

{
 return 0x47;
}



/* Function: test_cpp_diamond_inheritance @ 00011650 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_diamond_inheritance(void)

{
 return 0x28a;
}



/* Function: test_cpp_operator_overload @ 00011660 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_operator_overload(void)

{
 return 0x16;
}



/* Function: test_cpp_template_func @ 00011670 */

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



/* Function: test_cpp_template_class @ 00011720 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_class(void)

{
 return 0x10;
}



/* Function: test_cpp_lambda @ 00011730 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_lambda(void)

{
 return 0x55;
}



/* Function: test_cpp_smart_ptr @ 00011740 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_smart_ptr(void)

{
 return 0x2bf;
}



/* Function: test_cpp_rtti @ 00011750 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Removing unreachable block (ram,0x000117ef) */
/* WARNING: Removing unreachable block (ram,0x000117f8) */
/* WARNING: Removing unreachable block (ram,0x0001180b) */
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
 
 piVar2 = (int *)operator_new(4);
 *(void **)piVar2 = PTR__RTTIDerivedA_00014e48;
 piVar3 = (int *)operator_new(4);
 *(void **)piVar3 = PTR__RTTIDerivedB_00014e5c;
 iVar1 = (int)(uintptr_t)((void **)(piVar2))[0];
 __s1 = (char *)((uintptr_t)((void **)(piVar2))[-1]) + 4;
 if (__s1 == "12RTTIDerivedA") {
 iVar4 = 0x1e;
 }
 else if (*__s1 == '*') {
 iVar4 = 0x14;
 }
 else {
 iVar4 = strcmp(__s1,"12RTTIDerivedA");
 iVar4 = (-(unsigned int)(iVar4 == 0) & 10) + 0x14;
 }
 /* Unresolved local var: RTTIDerivedA * derivedA@[???] */
 iVar5 = __dynamic_cast(piVar2,RTTIBase_typeinfo,RTTIDerivedA_typeinfo,0);
 /* Unresolved local var: RTTIDerivedB * derivedB@[???] */
 if (iVar5 != 0) {
 iVar4 = iVar4 + 100;
 }
 iVar5 = __dynamic_cast(piVar3,RTTIBase_typeinfo,RTTIDerivedB_typeinfo,0);
 if (iVar5 != 0) {
 iVar4 = iVar4 + 200;
 }
 sVar6 = strlen(__s1 + (*__s1 == '*'));
 ((void (*)(int *))(*(code **)(iVar1 + 4)))(piVar2);
 ((void (*)(int *))(*(code **)(*piVar3 + 4)))(piVar3);
 return iVar4 + sVar6;
}



/* Function: test_cpp_oo_features @ 000118c0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_cpp_oo_features(void)

{
 int iVar1;
 size_t sVar2;
 int iVar3;
 int in_GS_OFFSET;
 double dVar4;
 int a;
 int b;
 SimpleClass obj;
 
 iVar1 = *(int *)(in_GS_OFFSET + 0x14);
 puts(DAT_00013018);
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int r3@[???] */
 obj.name[0x1e] = '\0';
 obj.name[0x1c] = '\0';
 obj.name[0x1d] = '\0';
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
 obj.name[0x1f] = '\0';
 sVar2 = strlen(obj.name);
 __printf_chk(1,DAT_0001303c,sVar2 + 0x125c);
 /* Unresolved local var: int result@[???] */
 __printf_chk(1,DAT_0001305a,LifecycleClass_instance_count * 0x3e9 + 0x15);
 __printf_chk(1,DAT_00013076,0x2a);
 __printf_chk(1,DAT_00013092,0x47);
 __printf_chk(1,DAT_000130ae,0x28a);
 __printf_chk(1,DAT_000130cb,0x16);
 /* Unresolved local var: int r1@[???]
 Unresolved local var: double r2@[???] */
 iVar3 = template_max_int(3,7);
 dVar4 = template_max_double(2.5,1.5);
 a = 10;
 b = 0x14;
 template_swap_int(&a,&b);
 __printf_chk(1,DAT_000130e7,(int)ROUND(dVar4) + iVar3 + a + b);
 __printf_chk(1,DAT_00013103,0x10);
 __printf_chk(1,DAT_0001311f,0x55);
 iVar3 = test_cpp_exception();
 __printf_chk(1,DAT_0001313b,iVar3);
 __printf_chk(1,DAT_00013158,0x2bf);
 iVar3 = test_cpp_rtti();
 __printf_chk(1,DAT_00013175,iVar3);
 if (iVar1 == *(int *)(in_GS_OFFSET + 0x14)) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: virtual_func @ 00011ae0 */

/* DWARF original prototype: int virtual_func(Base * this, int x) */

int Base_virtual_func(Base *this_ptr,int x)

{
 return x + 1;
}



/* Function: getName @ 00011af0 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: char * getName(Base * this) */

char * Base_getName(Base *this_ptr)

{
 return "Base";
}



/* Function: ~Base @ 00011b10 */

/* DWARF original prototype: void ~Base(Base * this, int __in_chrg) */

void Base_destructor(Base *this_ptr,int __in_chrg)

{
 return;
}



/* Function: virtual_func @ 00011b20 */

/* DWARF original prototype: int virtual_func(Derived * this, int x) */

int Derived_virtual_func(Derived *this_ptr,int x)

{
 return x * this_ptr->multiplier;
}



/* Function: getName @ 00011b40 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: char * getName(Derived * this) */

char * Derived_getName(Derived *this_ptr)

{
 return "Derived";
}



/* Function: funcA @ 00011b60 */

/* DWARF original prototype: int funcA(MultiDerived * this) */

int MultiDerived_funcA(MultiDerived *this_ptr)

{
 return 0x1e;
}



/* Function: funcB @ 00011b70 */

/* DWARF original prototype: int funcB(MultiDerived * this) */

int MultiDerived_funcB(MultiDerived *this_ptr)

{
 return 0x28;
}



/* Function: funcB @ 00011b80 */

/* non-virtual thunk to MultiDerived::funcB() */

undefined4 MultiDerived_funcB_thunk(MultiDerived *this_ptr)

{
 return 0x28;
}



/* Function: func @ 00011b90 */

/* DWARF original prototype: int func(MiddleA * this) */

int MiddleA_func(MiddleA *this_ptr)

{
 return *(int *)((int)&this_ptr->dataA + (int)this_ptr->_vptr_MiddleA[-3]) + 0x96;
}



/* Function: func @ 00011bb0 */

/* virtual thunk to MiddleA::func() */

int MiddleA_func_thunk(MiddleA *this_ptr)

{
 _func_int_varargs *p_Var1;
 int *vptr = (int *)((uintptr_t)(this_ptr->_vptr_MiddleA));
 
 p_Var1 = (_func_int_varargs *)((char*)&this_ptr->_vptr_MiddleA + vptr[-3]);
 return *(int *)(p_Var1 + *(int *)(*(int *)p_Var1 + -0xc) + 4) + 0x96;
}



/* Function: func @ 00011bd0 */

/* DWARF original prototype: int func(MiddleB * this) */

int MiddleB_func(MiddleB *this_ptr)

{
 return *(int *)((int)&this_ptr->dataB + (int)this_ptr->_vptr_MiddleB[-3]) + 200;
}



/* Function: func @ 00011bf0 */

/* virtual thunk to MiddleB::func() */

int MiddleB_func_thunk(MiddleB *this_ptr)

{
 _func_int_varargs *p_Var1;
 int *vptr = (int *)((uintptr_t)(this_ptr->_vptr_MiddleB));
 
 p_Var1 = (_func_int_varargs *)((char*)&this_ptr->_vptr_MiddleB + vptr[-3]);
 return *(int *)(p_Var1 + *(int *)(*(int *)p_Var1 + -0xc) + 4) + 200;
}



/* Function: func @ 00011c10 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: int func(DiamondDerived * this) */

int DiamondDerived_func(DiamondDerived *this_ptr)

{
 return *(int *)((int)&(this_ptr->super_MiddleA).dataA + (int)(this_ptr->super_MiddleA)._vptr_MiddleA[-3])
 + 0xfa;
}



/* Function: func @ 00011c30 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::func() */

int DiamondDerived_func_thunk(DiamondDerived *this_ptr)

{
 _func_int_varargs *p_Var1;
 int *vptr = (int *)(uintptr_t)(this_ptr->super_MiddleA)._vptr_MiddleA;
 
 p_Var1 = (_func_int_varargs *)
 ((int)&(this_ptr->super_MiddleA)._vptr_MiddleA + (int)vptr[-3]
 );
 return *(int *)(p_Var1 + *(int *)(*(int *)p_Var1 + -0xc) + 4) + 0xfa;
}



/* Function: func @ 00011c50 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::func() */

int DiamondDerived_func_thunk2(DiamondDerived *this_ptr)

{
 return *(int *)((int)this_ptr + *(int *)(*(int *)&this_ptr[-1].super_MiddleB + -0xc) + -4) + 0xfa;
}



/* Function: getType @ 00011c70 */

/* DWARF original prototype: int getType(RTTIDerivedA * this) */

int RTTIDerivedA_getType(RTTIDerivedA *this_ptr)

{
 return 1;
}



/* Function: getType @ 00011c80 */

/* DWARF original prototype: int getType(RTTIDerivedB * this) */

int RTTIDerivedB_getType(RTTIDerivedB *this_ptr)

{
 return 2;
}



/* Function: ~RTTIDerivedB @ 00011c90 */

/* DWARF original prototype: void ~RTTIDerivedB(RTTIDerivedB * this, int __in_chrg) */

void RTTIDerivedB_destructor(RTTIDerivedB *this_ptr,int __in_chrg)

{
 return;
}



/* Function: ~RTTIDerivedA @ 00011ca0 */

/* DWARF original prototype: void ~RTTIDerivedA(RTTIDerivedA * this, int __in_chrg) */

void RTTIDerivedA_destructor(RTTIDerivedA *this_ptr,int __in_chrg)

{
 return;
}



/* Function: ~DiamondDerived @ 00011cb0 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this, int __in_chrg, void * *
 __vtt_parm) */

void DiamondDerived_destructor(DiamondDerived *this_ptr,int __in_chrg,void *__vtt_parm)

{
 return;
}



/* Function: ~DiamondDerived @ 00011cc0 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_destructor_thunk(DiamondDerived *this_ptr)

{
 return;
}



/* Function: ~DiamondDerived @ 00011cd0 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_destructor_thunk2(DiamondDerived *this_ptr)

{
 return;
}



/* Function: ~MultiDerived @ 00011ce0 */

/* DWARF original prototype: void ~MultiDerived(MultiDerived * this, int __in_chrg) */

void MultiDerived_destructor(MultiDerived *this_ptr,int __in_chrg)

{
 return;
}



/* Function: ~MultiDerived @ 00011cf0 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void MultiDerived_destructor_thunk(MultiDerived *this_ptr)

{
 return;
}



/* Function: ~Derived @ 00011d00 */

/* DWARF original prototype: void ~Derived(Derived * this, int __in_chrg) */

void Derived_destructor(Derived *this_ptr,int __in_chrg)

{
 return;
}



/* Function: ~Base @ 00011d10 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DWARF original prototype: void ~Base(Base * this, int __in_chrg) */

void Base_destructor_impl(Base *this_ptr,int __in_chrg)

{
 operator_delete(this_ptr,4);
 return;
}



/* Function: ~Derived @ 00011d40 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DWARF original prototype: void ~Derived(Derived * this, int __in_chrg) */

void Derived_destructor_impl(Derived *this_ptr,int __in_chrg)

{
 operator_delete(this_ptr,8);
 return;
}



/* Function: ~MultiDerived @ 00011d70 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DWARF original prototype: void ~MultiDerived(MultiDerived * this, int __in_chrg) */

void MultiDerived_destructor_impl(MultiDerived *this_ptr,int __in_chrg)

{
 operator_delete((void *)this_ptr,0x10);
 return;
}



/* Function: ~MultiDerived @ 00011da0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* non-virtual thunk to MultiDerived::~MultiDerived() */

void MultiDerived_destructor_thunk_impl(MultiDerived *this_ptr)

{
 operator_delete(this_ptr,0x10);
 return;
}



/* Function: ~RTTIDerivedB @ 00011dd0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DWARF original prototype: void ~RTTIDerivedB(RTTIDerivedB * this, int __in_chrg) */

void RTTIDerivedB_destructor_impl(RTTIDerivedB *this_ptr,int __in_chrg)

{
 operator_delete(this_ptr,4);
 return;
}



/* Function: ~RTTIDerivedA @ 00011e00 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DWARF original prototype: void ~RTTIDerivedA(RTTIDerivedA * this, int __in_chrg) */

void RTTIDerivedA_destructor_impl(RTTIDerivedA *this_ptr,int __in_chrg)

{
 operator_delete(this_ptr,4);
 return;
}



/* Function: ~DiamondDerived @ 00011e30 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this, int __in_chrg, void *
 __vtt_parm) */

void DiamondDerived_destructor_impl(DiamondDerived *this_ptr,int __in_chrg,void *__vtt_parm)

{
 operator_delete(this_ptr,0x18);
 return;
}



/* Function: ~DiamondDerived @ 00011e60 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_destructor_thunk_impl(DiamondDerived *this_ptr)

{
 int *vptr = (int *)((uintptr_t)(this_ptr->super_MiddleA)._vptr_MiddleA);
 int offset = vptr[-4];
 char *ptr = (char *)((uintptr_t)this_ptr + offset);
 operator_delete(ptr,0x18);
 return;
}



/* Function: ~DiamondDerived @ 00011e90 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_destructor_thunk2_impl(DiamondDerived *this_ptr)

{
 operator_delete(this_ptr,0x18);
 return;
}



/* Function: template_max_int @ 00011ec0 */

/* WARNING: Unknown calling convention */

int template_max_int(int a,int b)

{
 if (a < b) {
 a = b;
 }
 return a;
}



/* Function: template_max_double @ 00011ee0 */

/* WARNING: Unknown calling convention */

double template_max_double(double a,double b)

{
 if (a <= b) {
 a = b;
 }
 return a;
}



/* Function: template_swap_int @ 00011f00 */

/* WARNING: Unknown calling convention */

void template_swap_int(int *a,int *b)

{
 int iVar1;
 
 iVar1 = *a;
 *a = *b;
 *b = iVar1;
 return;
}



/* Function: Container_int @ 00011f20 */

/* DWARF original prototype: void Container(Container<int> * this) */

void Container_int_Constructor(Container_int *this_ptr)

{
 this_ptr->size = 0;
 return;
}



/* Function: push @ 00011f30 */

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



/* Function: get @ 00011f50 */

/* DWARF original prototype: int get(Container<int> * this, int idx) */

int Container_int_get(Container_int *this_ptr,int idx)

{
 if ((-1 < idx) && (idx < this_ptr->size)) {
 return this_ptr->data[idx];
 }
 return 0;
}



/* Function: getSize @ 00011f80 */

/* DWARF original prototype: int getSize(Container<int> * this) */

int Container_int_getSize(Container_int *this_ptr)

{
 return this_ptr->size;
}



/* Function: Container_double @ 00011f90 */

/* DWARF original prototype: void Container(Container<double> * this) */

void Container_double_Constructor(Container_double *this_ptr)

{
 this_ptr->size = 0;
 return;
}



/* Function: push @ 00011fa0 */

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



/* Function: get @ 00011fd0 */

/* DWARF original prototype: double get(Container<double> * this, int idx) */

double Container_double_get(Container_double *this_ptr,int idx)

{
 if ((-1 < idx) && (idx < this_ptr->size)) {
 return this_ptr->data[idx];
 }
 return 0.0;
}



/* Function: getSize @ 00012000 */

/* DWARF original prototype: int getSize(Container<double> * this) */

int Container_double_getSize(Container_double *this_ptr)

{
 return this_ptr->size;
}



/* Function: __x86.get_pc_thunk.ax @ 0001200c */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_ax(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.si @ 00012010 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_si(void)

{
 return;
}



/* Function: __stack_chk_fail_local @ 00012020 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void __stack_chk_fail_local(void)

{
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}




/* CRT stub function __do_global_ctors_aux removed by preprocessor */





/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 76 */
