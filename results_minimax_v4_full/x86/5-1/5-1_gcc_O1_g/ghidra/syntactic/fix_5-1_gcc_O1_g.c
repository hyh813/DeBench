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

/* Stack canary offset for x86 */
#define in_GS_OFFSET 0x14

/* Calling convention specifier - used in function declarations */
/* Note: __thiscall is a compiler-specific calling convention used by MSVC */
/* For gcc, we define it to nothing (but keep it for decompilation readability) */
#define __thiscall

/* Declare missing standard functions */
void __stack_chk_fail_local(void);

/* SimpleClass definition */
struct SimpleClass {
    char name[32];
};

/* Base class definition */
struct Base {
    void** _vptr_Base;
};

/* Derived class definition */
struct Derived {
    struct Base super_Base;
    int multiplier;
};

/* MiddleA class definition */
struct MiddleA {
    void** _vptr_MiddleA;
    int dataA;
    int _8_4_;
};

/* MiddleB class definition */
struct MiddleB {
    void** _vptr_MiddleB;
    int dataB;
};

/* MultiDerived class definition */
struct MultiDerived {
    struct Derived super_BaseB;
    int funcA_val;
    int funcB_val;
};

/* DiamondDerived class definition */
struct DiamondDerived {
    struct MiddleA super_MiddleA;
    struct MiddleB super_MiddleB;
    int _16_4_;
    int _20_4_;
    void** vtable;
};

/* Container template class definition */
struct Container_int {
    int size;
    int data[10];
};

struct Container_double {
    int size;
    double data[10];
};

/* RTTI type info structures */
struct type_info {
    char* name;
};

struct RTTIBase {
    static struct type_info typeinfo;
};

struct RTTIDerivedA {
    static struct type_info typeinfo;
    int getType();
};

struct RTTIDerivedB {
    static struct type_info typeinfo;
    int getType();
};

/* LifecycleClass for static member */
struct LifecycleClass {
    static int instance_count;
};
int LifecycleClass::instance_count = 0;

/* Virtual function pointer type */
typedef int (*_func_int_varargs)(void*, int, ...);

/* Global variables for vtables */
extern void* PTR_virtual_func_00014cd4;
extern void* PTR_virtual_func_00014cec;
extern void* PTR__RTTIDerivedA_00014dd4;
extern void* PTR__RTTIDerivedB_00014de8;

/* Data strings */
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

/* Declare __stack_chk_fail from glibc */
void __stack_chk_fail(void);

/* Function: FUN_00011030 @ 00011030 */

void FUN_00011030(void)

{
 /* This was a call through null function pointer - replaced with no-op */
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
 #define in_GS_OFFSET 0x14
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



/* Function: test_cpp_constructor @ 000114b5 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_constructor(void)

{
 void *pvVar1;
 int iVar2;
 
 /* Unresolved local var: LifecycleClass obj@[???] */
 pvVar1 = operator_new(0x14);
 /* Unresolved local var: size_t i@[???] */
 *(undefined4 *)((int)pvVar1 + 4) = 10;
 *(undefined4 *)((int)pvVar1 + 8) = 0x14;
 *(undefined4 *)((int)pvVar1 + 0xc) = 0x1e;
 *(undefined4 *)((int)pvVar1 + 0x10) = 0x28;
 iVar2 = LifecycleClass::instance_count + 0x15;
 LifecycleClass::instance_count = LifecycleClass::instance_count + 1;
 operator_delete__(pvVar1);
 LifecycleClass::instance_count = LifecycleClass::instance_count + -1;
 return LifecycleClass::instance_count * 1000 + iVar2;
}



/* Function: call_virtual_func @ 00011523 */

/* WARNING: Unknown calling convention */

int call_virtual_func(Base *obj,int x)

{
 int iVar1;
 
 iVar1 = ((int (*)(Base*, int))(*obj->_vptr_Base))(obj,x);
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
 #define in_GS_OFFSET 0x14
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
 #define in_GS_OFFSET 0x14
 DiamondDerived obj;
 
 iVar1 = *(int *)(in_GS_OFFSET + 0x14);
 obj.super_MiddleA._vptr_MiddleA = (_func_int_varargs **)(DiamondDerived::vtable + 0xc);
 obj._16_4_ = 0x14dc0;
 obj.super_MiddleA._8_4_ = 0x14da4;
 obj._20_4_ = 0x32;
 iVar2 = DiamondDerived_func((DiamondDerived *)&obj.field_0x10);
 obj._20_4_ = 100;
 iVar3 = DiamondDerived::func((DiamondDerived *)&obj.field_0x10);
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
 #define in_GS_OFFSET 0x14
 double dVar2;
 int a;
 int b;
 int local_10;
 
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 iVar1 = template_max<int>(3,7);
 dVar2 = template_max<double>(2.5,1.5);
 a = 10;
 b = 0x14;
 template_swap<int>(&a,&b);
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
 __cxa_throw(puVar1,&int::typeinfo,0);
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
 uint uVar7;
 
 piVar2 = operator_new(4);
 *piVar2 = (int)&PTR__RTTIDerivedA_00014dd4;
 piVar3 = operator_new(4);
 *piVar3 = (int)&PTR__RTTIDerivedB_00014de8;
 iVar1 = *piVar2;
 __s1 = *(char **)(*(int *)(iVar1 + -4) + 4);
 uVar7 = 10;
 if ((__s1 != "12RTTIDerivedA") && (uVar7 = 0, *__s1 != '*')) {
 iVar4 = strcmp(__s1,"12RTTIDerivedA");
 uVar7 = -(uint)(iVar4 == 0) & 10;
 }
 /* Unresolved local var: RTTIDerivedA * derivedA@[???] */
 iVar5 = __dynamic_cast(piVar2,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
 iVar4 = uVar7 + 0x14;
 if (iVar5 != 0) {
 iVar4 = uVar7 + 0x78;
 }
 /* Unresolved local var: RTTIDerivedB * derivedB@[???] */
 iVar5 = __dynamic_cast(piVar3,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
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
 
 puts(&DAT_00012018);
 iVar1 = test_cpp_member_func();
 __printf_chk(1,&DAT_0001203c,iVar1);
 iVar1 = test_cpp_constructor();
 __printf_chk(1,&DAT_0001205a,iVar1);
 iVar1 = test_cpp_virtual_func();
 __printf_chk(1,&DAT_00012076,iVar1);
 iVar1 = test_cpp_multiple_inheritance();
 __printf_chk(1,&DAT_00012092,iVar1);
 iVar1 = test_cpp_diamond_inheritance();
 __printf_chk(1,&DAT_000120ae,iVar1);
 __printf_chk(1,&DAT_000120cb,0x16);
 iVar1 = test_cpp_template_func();
 __printf_chk(1,&DAT_000120e7,iVar1);
 __printf_chk(1,&DAT_00012103,0x10);
 __printf_chk(1,&DAT_0001211f,0x55);
 iVar1 = test_cpp_exception();
 __printf_chk(1,&DAT_0001213b,iVar1);
 iVar1 = test_cpp_smart_ptr();
 __printf_chk(1,&DAT_00012158,iVar1);
 iVar1 = test_cpp_rtti();
 __printf_chk(1,&DAT_00012175,iVar1);
 return;
}



/* Function: main @ 00011a75 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Calling convention specifier - removed for C compatibility */ 

/* Function declarations without __thiscall for C compatibility */
/* Note: Removed 'this' parameter as it's C++ specific - using first param instead */
int Base_virtual_func(Base *obj, int x);
char * Base_getName(Base *obj);
void Base_destructor(Base *obj);
int Derived_virtual_func(Derived *obj, int x);
char * Derived_getName(Derived *obj);
void Derived_destructor(Derived *obj);
int MultiDerived_funcA(MultiDerived *obj);
int MultiDerived_funcB(MultiDerived *obj);
int MiddleA_func(MiddleA *obj);
int MiddleB_func(MiddleB *obj);
int DiamondDerived_func(DiamondDerived *obj);
int RTTIDerivedA_getType(RTTIDerivedA *obj);
int RTTIDerivedB_getType(RTTIDerivedB *obj);
void RTTIDerivedA_destructor(RTTIDerivedA *obj);
void RTTIDerivedB_destructor(RTTIDerivedB *obj);
void DiamondDerived_destructor(DiamondDerived *obj, void **__vtt_parm);
void MultiDerived_destructor(MultiDerived *obj);

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _GLOBAL__sub_I__Z20test_cpp_member_funcv(void)

{
 std::ios_base::Init::Init(&std::__ioinit);
 __cxa_atexit(std::ios_base::Init::~Init,&std::__ioinit,&__dso_handle);
 return;
}



/* Function: virtual_func @ 00011ac8 */

/* DWARF original prototype: int virtual_func(Base * this, int x) */

int Base_virtual_func(Base *obj, int x)

{
 return x + 1;
}



/* Function: getName @ 00011ad4 */

/* DWARF original prototype: char * getName(Base * this) */

char * Base_getName(Base *this)

{
 return "Base";
}



/* Function: ~Base @ 00011aea */

/* DWARF original prototype: void ~Base(Base * this, int __in_chrg) */

void Base_destructor(Base *this)

{
 return;
}



/* Function: virtual_func @ 00011af0 */

/* DWARF original prototype: int virtual_func(Derived * this, int x) */

int Derived_virtual_func(Derived *this,int x)

{
 return x * this->multiplier;
}



/* Function: getName @ 00011b02 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: char * getName(Derived * this) */

char * Derived_getName(Derived *this)

{
 return "Derived";
}



/* Function: funcA @ 00011b18 */

/* DWARF original prototype: int funcA(MultiDerived * this) */

int MultiDerived_funcA(MultiDerived *this)

{
 return 0x1e;
}



/* Function: funcB @ 00011b22 */

/* DWARF original prototype: int funcB(MultiDerived * this) */

int MultiDerived_funcB(MultiDerived *this)

{
 return 0x28;
}



/* Function: funcB @ 00011b2c */

/* non-virtual thunk to MultiDerived::funcB() */

int MultiDerived_funcB_thunk(MultiDerived *this)

{
 return 0x28;
}



/* Function: func @ 00011b36 */

/* DWARF original prototype: int func(MiddleA * this) */

int MiddleA_func(MiddleA *this)

{
 return *(int *)((int)&this->dataA + (int)this->_vptr_MiddleA[-3]) + 0x96;
}



/* Function: func @ 00011b4d */

/* virtual thunk to MiddleA::func() */

int MiddleA_func_thunk(MiddleA *this)

{
 _func_int_varargs *p_Var1;
 
 p_Var1 = (_func_int_varargs *)((int)&this->_vptr_MiddleA + (int)this->_vptr_MiddleA[-3]);
 return *(int *)(p_Var1 + *(int *)(*(int *)p_Var1 + -0xc) + 4) + 0x96;
}



/* Function: func @ 00011b6a */

/* DWARF original prototype: int func(MiddleB * this) */

int MiddleB_func(MiddleB *this)

{
 return *(int *)((int)&this->dataB + (int)this->_vptr_MiddleB[-3]) + 200;
}



/* Function: func @ 00011b81 */

/* virtual thunk to MiddleB::func() */

int MiddleB_func(MiddleB *this)

{
 _func_int_varargs *p_Var1;
 
 p_Var1 = (_func_int_varargs *)((int)&this->_vptr_MiddleB + (int)this->_vptr_MiddleB[-3]);
 return *(int *)(p_Var1 + *(int *)(*(int *)p_Var1 + -0xc) + 4) + 200;
}



/* Function: func @ 00011b9e */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: int func(DiamondDerived * this) */

int DiamondDerived_func(DiamondDerived *this)

{
 return *(int *)((int)this + *(int *)(*(int *)&this[-1].field_0x10 + -0xc) + -4) + 0xfa;
}



/* Function: func @ 00011bb5 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::func() */

int DiamondDerived_func_thunk(DiamondDerived *this)

{
 _func_int_varargs *p_Var1;
 
 p_Var1 = (_func_int_varargs *)
 ((int)&(this->super_MiddleA)._vptr_MiddleA + (int)(this->super_MiddleA)._vptr_MiddleA[-3]
 );
 return *(int *)(p_Var1 + *(int *)(*(int *)p_Var1 + -0xc) + 4) + 0xfa;
}



/* Function: func @ 00011bd1 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::func() */

int DiamondDerived_func_nonvirtual(DiamondDerived *this)

{
 return *(int *)((int)this + *(int *)(*(int *)&this[-1].field_0x10 + -0xc) + -4) + 0xfa;
}



/* Function: getType @ 00011bea */

/* DWARF original prototype: int getType(RTTIDerivedA * this) */

int RTTIDerivedA_getType(RTTIDerivedA *this)

{
 return 1;
}



/* Function: getType @ 00011bf4 */

/* DWARF original prototype: int getType(RTTIDerivedB * this) */

int RTTIDerivedB_getType(RTTIDerivedB *this)

{
 return 2;
}



/* Function: ~RTTIDerivedB @ 00011bfe */

/* DWARF original prototype: void ~RTTIDerivedB(RTTIDerivedB * this, int __in_chrg) */

void RTTIDerivedB_destructor(RTTIDerivedB *this)

{
 return;
}



/* Function: ~RTTIDerivedA @ 00011c04 */

/* DWARF original prototype: void ~RTTIDerivedA(RTTIDerivedA * this, int __in_chrg) */

void RTTIDerivedA_destructor(RTTIDerivedA *this)

{
 return;
}



/* Function: ~DiamondDerived @ 00011c0a */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this, int __in_chrg, void * *
 __vtt_parm) */

void DiamondDerived_destructor_variation1(DiamondDerived *this)

{
 return;
}



/* Function: ~DiamondDerived @ 00011c0f */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 return;
}



/* Function: ~DiamondDerived @ 00011c14 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 return;
}



/* Function: ~MultiDerived @ 00011c1a */

/* DWARF original prototype: void ~MultiDerived(MultiDerived * this, int __in_chrg) */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this,int __in_chrg)

{
 return;
}



/* Function: ~MultiDerived @ 00011c1f */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
 return;
}



/* Function: ~Derived @ 00011c24 */

/* DWARF original prototype: void ~Derived(Derived * this, int __in_chrg) */

void __thiscall Derived::~Derived(Derived *this,int __in_chrg)

{
 return;
}



/* Function: ~Base @ 00011c2a */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DWARF original prototype: void ~Base(Base * this, int __in_chrg) */

void __thiscall Base::~Base(Base *this,int __in_chrg)

{
 operator_delete(this,4);
 return;
}



/* Function: ~Derived @ 00011c4e */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DWARF original prototype: void ~Derived(Derived * this, int __in_chrg) */

void __thiscall Derived::~Derived(Derived *this,int __in_chrg)

{
 operator_delete(this,8);
 return;
}



/* Function: ~MultiDerived @ 00011c72 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DWARF original prototype: void ~MultiDerived(MultiDerived * this, int __in_chrg) */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this,int __in_chrg)

{
 operator_delete(this,0x10);
 return;
}



/* Function: ~MultiDerived @ 00011c95 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* non-virtual thunk to MultiDerived::~MultiDerived() */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
 operator_delete(&this[-1].super_BaseB,0x10);
 return;
}



/* Function: ~RTTIDerivedA @ 00011cbc */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DWARF original prototype: void ~RTTIDerivedA(RTTIDerivedA * this, int __in_chrg) */

void __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this,int __in_chrg)

{
 operator_delete(this,4);
 return;
}



/* Function: ~RTTIDerivedB @ 00011ce0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DWARF original prototype: void ~RTTIDerivedB(RTTIDerivedB * this, int __in_chrg) */

void __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this,int __in_chrg)

{
 operator_delete(this,4);
 return;
}



/* Function: ~DiamondDerived @ 00011d04 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this, int __in_chrg, void * *
 __vtt_parm) */

void __thiscall
DiamondDerived::~DiamondDerived(DiamondDerived *this,int __in_chrg,void **__vtt_parm)

{
 operator_delete(this,0x18);
 return;
}



/* Function: ~DiamondDerived @ 00011d27 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 operator_delete((_func_int_varargs *)
 ((int)&(this->super_MiddleA)._vptr_MiddleA +
 (int)(this->super_MiddleA)._vptr_MiddleA[-4]),0x18);
 return;
}



/* Function: ~DiamondDerived @ 00011d50 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 operator_delete(&this[-1].field_0x10,0x18);
 return;
}



/* Function: template_max<int> @ 00011d77 */

/* WARNING: Unknown calling convention */

int template_max<int>(int a,int b)

{
 if (a < b) {
 a = b;
 }
 return a;
}



/* Function: template_max<double> @ 00011d89 */

/* WARNING: Unknown calling convention */

double template_max<double>(double a,double b)

{
 if (a <= b) {
 a = b;
 }
 return a;
}



/* Function: template_swap<int> @ 00011d9c */

/* WARNING: Unknown calling convention */

void template_swap<int>(int *a,int *b)

{
 int iVar1;
 
 iVar1 = *a;
 *a = *b;
 *b = iVar1;
 return;
}



/* Function: Container @ 00011db4 */

/* DWARF original prototype: void Container(Container<int> * this) */

void Container_int_Container(Container_int *this)

{
 this->size = 0;
 return;
}

/* Provide operator new/delete declarations */
void* operator_new(size_t size);
void operator_delete(void* ptr);
void operator_delete(void* ptr, size_t size);

/* Provide template functions - use different names for different types */
int template_max_int(int a, int b);
double template_max_double(double a, double b);
void template_swap_int(int *a, int *b);



/* Function: push @ 00011dc4 */

/* DWARF original prototype: void push(Container<int> * this, int value) */

void Container_int_push(Container_int *this,int value)

{
 int iVar1;
 
 iVar1 = this->size;
 if (iVar1 < 10) {
 this->size = iVar1 + 1;
 this->data[iVar1] = value;
 }
 return;
}



/* Function: get @ 00011de2 */

/* DWARF original prototype: int get(Container<int> * this, int idx) */

int Container_int_get(Container_int *obj,int idx)

{
 int iVar1;
 
 iVar1 = 0;
 if ((-1 < idx) && (idx < this->size)) {
 iVar1 = this->data[idx];
 }
 return iVar1;
}



/* Function: getSize @ 00011e02 */

/* DWARF original prototype: int getSize(Container<int> * this) */

int __thiscall Container<int>::getSize(Container<int> *this)

{
 return this->size;
}



/* Function: Container @ 00011e0e */

/* DWARF original prototype: void Container(Container<double> * this) */

void __thiscall Container<double>::Container(Container<double> *this)

{
 this->size = 0;
 return;
}



/* Function: push @ 00011e1e */

/* DWARF original prototype: void push(Container<double> * this, double value) */

void __thiscall Container<double>::push(Container<double> *this,double value)

{
 int iVar1;
 
 iVar1 = this->size;
 if (iVar1 < 10) {
 this->size = iVar1 + 1;
 this->data[iVar1] = value;
 }
 return;
}



/* Function: get @ 00011e40 */

/* DWARF original prototype: double get(Container<double> * this, int idx) */

double __thiscall Container<double>::get(Container<double> *this,int idx)

{
 if (idx < 0) {
 return 0.0;
 }
 if (this->size <= idx) {
 return 0.0;
 }
 return this->data[idx];
}



/* Function: getSize @ 00011e60 */

/* DWARF original prototype: int getSize(Container<double> * this) */

int __thiscall Container<double>::getSize(Container<double> *this)

{
 return this->size;
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
