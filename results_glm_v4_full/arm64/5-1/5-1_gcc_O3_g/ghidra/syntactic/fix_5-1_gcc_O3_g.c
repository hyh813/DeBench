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

/* Decompiler artifact types */
typedef unsigned int undefined4;
typedef unsigned long long undefined8;
typedef void undefined;
typedef void (*code)(void);

/* Forward declarations for missing types */
struct Base;
struct Derived;
struct MultiDerived;
struct DiamondDerived;
struct MiddleA;
struct MiddleB;
struct RTTIDerivedA;
struct RTTIDerivedB;
struct RTTIBase;
struct LifecycleClass;
struct SimpleClass;

/* LifecycleClass definition for static member access */
struct LifecycleClass {
    int dummy;
};
typedef struct LifecycleClass LifecycleClass;

/* SimpleClass - has a name field */
struct SimpleClass {
    char name[32];
};
typedef struct SimpleClass SimpleClass;

/* Base class - has virtual function table pointer */
struct Base {
    void **_vptr_Base;
};
typedef struct Base Base;

/* Derived class - inherits from Base */
struct Derived {
    void **_vptr_Base;
    int multiplier;
};
typedef struct Derived Derived;

/* MultiDerived class - multiple inheritance */
struct MultiDerived {
    struct Base super_BaseA;
    void **_vptr_MultiDerived;
    struct Base super_BaseB;
};
typedef struct MultiDerived MultiDerived;

/* DiamondDerived class - diamond inheritance */
struct DiamondDerived {
    struct {
        void **_vptr_MiddleA;
        int dataA;
    } super_MiddleA;
    struct {
        void **_vptr_MiddleB;
        int dataB;
    } super_MiddleB;
    int field_0x20;
};
typedef struct DiamondDerived DiamondDerived;

/* MiddleA class */
struct MiddleA {
    void **_vptr_MiddleA;
    int dataA;
};
typedef struct MiddleA MiddleA;

/* MiddleB class */
struct MiddleB {
    void **_vptr_MiddleB;
    int dataB;
};
typedef struct MiddleB MiddleB;

/* RTTIBase class */
struct RTTIBase {
    void **_vptr_RTTIBase;
};
typedef struct RTTIBase RTTIBase;

/* RTTIDerivedA class */
struct RTTIDerivedA {
    void **_vptr_RTTIDerivedA;
};
typedef struct RTTIDerivedA RTTIDerivedA;

/* RTTIDerivedB class */
struct RTTIDerivedB {
    void **_vptr_RTTIDerivedB;
};
typedef struct RTTIDerivedB RTTIDerivedB;

/* Container<int> template class */
struct Container_int {
    int size;
    int data[10];
};
typedef struct Container_int Container_int;

/* Container<double> template class */
struct Container_double {
    int size;
    double data[10];
};
typedef struct Container_double Container_double;

/* External vtable pointers */
extern void *PTR__RTTIDerivedA_00112c28;
extern void *PTR__RTTIDerivedB_00112c50;

/* External declarations for stack canary and other globals */
extern unsigned long ___stack_chk_guard;
extern char completed_0;
extern void __dso_handle;
extern void __ioinit;
extern int LifecycleClass_instance_count;
#define LifecycleClass::instance_count LifecycleClass_instance_count

/* CRT function declarations */
void deregister_tm_clones(void);

/* C++ runtime function declarations */
void *__cxa_allocate_exception(size_t thrown_size);
void __cxa_throw(void *thrown_exception, void *type_info, void *dest);
int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle);
void __cxa_finalize(void *dso_handle);
void *__dynamic_cast(void *src_ptr, void *src_type, void *dest_type, int src2dest_offset);
void __stack_chk_fail(long offset, unsigned long *guard, int value, long extra);

/* std::ios_base::Init function declarations */
void std_ios_base_Init_Init(void *obj);
void std_ios_base_Init_dtor(void *obj);

/* Operator new/delete declarations */
void *operator_new(size_t size);
void operator_delete(void *ptr, size_t size);

/* Standard library function declarations */
int puts(const char *s);
int __printf_chk(int flag, const char *format, ...);
char *strncpy(char *dest, const char *src, size_t n);
size_t strlen(const char *s);
int strcmp(const char *s1, const char *s2);

/* Typeinfo declarations */
extern const void int_typeinfo;
extern const void RTTIBase_typeinfo;
extern const void RTTIDerivedA_typeinfo;
extern const void RTTIDerivedB_typeinfo;
#define int::typeinfo int_typeinfo
#define RTTIBase::typeinfo RTTIBase_typeinfo
#define RTTIDerivedA::typeinfo RTTIDerivedA_typeinfo
#define RTTIDerivedB::typeinfo RTTIDerivedB_typeinfo

/* External data declarations for string constants */
extern const char DAT_00101ba0[];
extern const char DAT_00101bc8[];
extern const char DAT_00101be8[];
extern const char DAT_00101c08[];
extern const char DAT_00101c28[];
extern const char DAT_00101c48[];
extern const char DAT_00101c68[];
extern const char DAT_00101c88[];
extern const char DAT_00101ca8[];
extern const char DAT_00101cc8[];
extern const char DAT_00101ce8[];
extern const char DAT_00101d08[];
extern const char DAT_00101d28[];

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/5-1/5-1_gcc_O3_g
 * Processor: AARCH64
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */




/* Forward declarations for test functions */
void test_cpp_oo_features(void);
int test_cpp_exception(void);
int test_cpp_rtti(void);

/* Additional stack_chk_fail declaration with proper signature */
void __stack_chk_fail(void);

/* Forward declarations for template functions */
int template_max_int(int a, int b);
double template_max_double(double a, double b);
void template_swap_int(int *a, int *b);

/* Template function implementations */
int template_max_int(int a, int b)

{
 if (a < b) {
 a = b;
 }
 return a;
}

double template_max_double(double a, double b)

{
 if (a <= b) {
 a = b;
 }
 return a;
}

void template_swap_int(int *a,int *b)

{
 int iVar1;
 
 iVar1 = *a;
 *a = *b;
 *b = iVar1;
 return;
}

/* Function: FUN_00100eb0 @ 00100eb0 */

void FUN_00100eb0(void)

{
 (*(code *)(undefined *)0x0)();
 return;
}



/* Function: test_cpp_exception @ 00101040 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_exception(void)

{
 undefined4 *puVar1;
 
 /* Unresolved local var: int result@[???] */
 puVar1 = (undefined4 *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* WARNING: Subroutine does not return */
 /* try { // try from 0010106c to 0010106f has its CatchHandler @ 00101070 */
 __cxa_throw(puVar1,&int::typeinfo,0);
}



/* Function: main @ 00101120 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 00101140 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _GLOBAL__sub_I__Z20test_cpp_member_funcv(void)

{
 std_ios_base_Init_Init(&__ioinit);
 __cxa_atexit(std_ios_base_Init_dtor,&__ioinit,&__dso_handle);
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */




/* Function: FUN_0010123c @ 0010123c */

void FUN_0010123c(void)

{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: test_cpp_member_func @ 001012a0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_member_func(void)

{
 long lVar1;
 char *__s;
 size_t sVar2;
 SimpleClass obj;
 
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int r3@[???] */
 lVar1 = ___stack_chk_guard;
 __s = strncpy(obj.name,"Test",0x1f);
 obj.name[0x1f] = '\0';
 sVar2 = strlen(__s);
 if (lVar1 - ___stack_chk_guard == 0) {
 return (int)sVar2 + 0x125c;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(sVar2(&___stack_chk_guard,0,lVar1 - ___stack_chk_guard);
}



/* Function: test_cpp_constructor @ 00101310 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_constructor(void)

{
 /* Unresolved local var: int result@[???]
 Unresolved local var: LifecycleClass obj@[???] */
 return LifecycleClass::instance_count * 0x3e9 + 0x15;
}



/* Function: call_virtual_func @ 00101330 */

int call_virtual_func(Base *obj,int x)

{
 int iVar1;
 
 /* WARNING: Could not recover jumptable at 0x0010133c. Too many branches */
 /* WARNING: Treating indirect jump as call */
 iVar1 = (**obj->_vptr_Base)(obj,(ulong)(uint)x);
 return iVar1;
}



/* Function: test_cpp_virtual_func @ 00101340 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_virtual_func(void)

{
 /* Unresolved local var: Base base@[???]
 Unresolved local var: Derived derived@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: Base * pb@[???]
 Unresolved local var: Base * pd@[???]
 Unresolved local var: int r3@[???]
 Unresolved local var: int r4@[???] */
 return 0x2a;
}



/* Function: test_cpp_multiple_inheritance @ 00101350 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_multiple_inheritance(void)

{
 /* Unresolved local var: MultiDerived obj@[???]
 Unresolved local var: BaseA * pa@[???]
 Unresolved local var: BaseB * pb@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int ptr_equal@[???] */
 return 0x47;
}



/* Function: test_cpp_diamond_inheritance @ 00101360 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_diamond_inheritance(void)

{
 /* Unresolved local var: DiamondDerived obj@[???]
 Unresolved local var: VirtualBase * pb@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 return 0x28a;
}



/* Function: test_cpp_operator_overload @ 00101370 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_operator_overload(void)

{
 /* Unresolved local var: Point p1@[???]
 Unresolved local var: Point p2@[???]
 Unresolved local var: Point p3@[???]
 Unresolved local var: bool eq@[???] */
 return 0x16;
}



/* Function: test_cpp_template_func @ 00101380 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_func(void)

{
 int iVar1;
 double dVar2;
 int a;
 int b;
 long local_8;
 
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 local_8 = ___stack_chk_guard;
 iVar1 = template_max_int(3,7);
 dVar2 = template_max_double(2.5,1.5);
 a = 10;
 b = 0x14;
 template_swap_int(&a,&b);
 if (local_8 == ___stack_chk_guard) {
 return (int)dVar2 + iVar1 + a + b;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: test_cpp_template_class @ 00101420 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_class(void)

{
 /* Unresolved local var: Container<int> int_container@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: Container<double> double_container@[???]
 Unresolved local var: double r3@[???] */
 return 0x10;
}



/* Function: test_cpp_lambda @ 00101430 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_lambda(void)

{
 /* Unresolved local var: int capture_by_value@[???]
 Unresolved local var: int capture_by_ref@[???]
 Unresolved local var: anon_struct_16_2_484633fb lambda1@[???]
 Unresolved local var: anon_struct_1_0_00000001 lambda2@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 return 0x55;
}



/* Function: test_cpp_smart_ptr @ 00101440 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_smart_ptr(void)

{
 /* Unresolved local var: unique_ptr<int,_std::default_delete<int>_> ptr1@[???]
 Unresolved local var: unique_ptr<int,_std::default_delete<int>_> ptr2@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: unique_ptr<int_[],_std::default_delete<int_[]>_>
 arr@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: anon_struct_1_0_00000001_for__M_head_impl deleter@[???]
 Unresolved local var: unique_ptr<int,_test_cpp_smart_ptr()::<lambda(int*)>_>
 ptr3@[???]
 Unresolved local var: int r3@[???] */
 return 0x2bf;
}



/* Function: test_cpp_rtti @ 00101450 */

/* WARNING: Removing unreachable block (ram,0x001014fc) */
/* WARNING: Removing unreachable block (ram,0x00101508) */
/* WARNING: Removing unreachable block (ram,0x00101510) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_rtti(void)

{
 int iVar1;
 int iVar2;
 long *plVar3;
 long *plVar4;
 long lVar5;
 size_t sVar6;
 char *__s1;
 long lVar7;
 char cVar8;
 
 /* Unresolved local var: RTTIBase * obj1@[???]
 Unresolved local var: RTTIBase * obj2@[???]
 Unresolved local var: int result@[???] */
 plVar3 = operator_new(8);
 *plVar3 = (long)&PTR__RTTIDerivedA_00112c28;
 plVar4 = operator_new(8);
 lVar7 = *plVar3;
 __s1 = *(char **)(*(long *)(lVar7 + -8) + 8);
 *plVar4 = (long)&PTR__RTTIDerivedB_00112c50;
 if (__s1 == "12RTTIDerivedA") {
 cVar8 = '1';
 iVar2 = 0x1e;
 }
 else {
 cVar8 = *__s1;
 if (cVar8 == '*') {
 iVar2 = 0x14;
 }
 else {
 iVar1 = strcmp(__s1,"12RTTIDerivedA");
 iVar2 = 0x14;
 if (iVar1 == 0) {
 iVar2 = 0x1e;
 }
 }
 }
 /* Unresolved local var: RTTIDerivedA * derivedA@[???] */
 lVar5 = __dynamic_cast(plVar3,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
 iVar1 = iVar2 + 100;
 if (lVar5 == 0) {
 iVar1 = iVar2;
 }
 /* Unresolved local var: RTTIDerivedB * derivedB@[???] */
 lVar5 = __dynamic_cast(plVar4,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
 iVar2 = iVar1 + 200;
 if (lVar5 == 0) {
 iVar2 = iVar1;
 }
 if (cVar8 == '*') {
 __s1 = __s1 + 1;
 }
 sVar6 = strlen(__s1);
 (**(code **)(lVar7 + 8))(plVar3);
 (**(code **)(*plVar4 + 8))(plVar4);
 return iVar2 + (int)sVar6;
}



/* Function: test_cpp_oo_features @ 001015f0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_cpp_oo_features(void)

{
 long lVar1;
 int iVar2;
 size_t sVar3;
 double dVar4;
 int a;
 int b;
 SimpleClass obj;
 int _cpp_result;
 int r1;
 int r2;
 double r2_dbl;
 int result;
 int LifecycleClass_obj;
 
 lVar1 = ___stack_chk_guard;
 puts(&DAT_00101ba0);
 strncpy(obj.name,"Test",0x1f);
 obj.name[0x1f] = '\0';
 sVar3 = strlen(obj.name);
 __printf_chk(1,&DAT_00101bc8,(int)sVar3 + 0x125c);
 iVar2 = LifecycleClass_instance_count * 0x3e9 + 0x15;
 __printf_chk(1,&DAT_00101be8,iVar2);
 __printf_chk(1,&DAT_00101c08,0x2a);
 __printf_chk(1,&DAT_00101c28,0x47);
 __printf_chk(1,&DAT_00101c48,0x28a);
 __printf_chk(1,&DAT_00101c68,0x16);
 iVar2 = template_max_int(3,7);
 dVar4 = template_max_double(2.5,1.5);
 a = 10;
 b = 0x14;
 template_swap_int(&a,&b);
 __printf_chk(1,&DAT_00101c88,(int)dVar4 + iVar2 + a + b);
 __printf_chk(1,&DAT_00101ca8,0x10);
 __printf_chk(1,&DAT_00101cc8,0x55);
 iVar2 = test_cpp_exception();
 __printf_chk(1,&DAT_00101ce8,iVar2);
 __printf_chk(1,&DAT_00101d08,0x2bf);
 iVar2 = test_cpp_rtti();
 if (lVar1 - ___stack_chk_guard == 0) {
 __printf_chk(1,&DAT_00101d28);
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}

/* Function: virtual_func @ 001017d0 */

/* DWARF original prototype: int virtual_func(Base * this, int x) */

int __thiscall Base::virtual_func(Base *this,int x)

{
 return x + 1;
}



/* Function: getName @ 001017e0 */

/* DWARF original prototype: char * getName(Base * this) */

char * __thiscall Base::getName(Base *this)

{
 return "Base";
}



/* Function: ~Base @ 001017f0 */

/* DWARF original prototype: void ~Base(Base * this, int __in_chrg) */

void __thiscall Base::~Base(Base *this,int __in_chrg)

{
 return;
}



/* Function: virtual_func @ 00101800 */

/* DWARF original prototype: int virtual_func(Derived * this, int x) */

int __thiscall Derived::virtual_func(Derived *this,int x)

{
 return x * this->multiplier;
}



/* Function: getName @ 00101810 */

/* DWARF original prototype: char * getName(Derived * this) */

char * __thiscall Derived::getName(Derived *this)

{
 return "Derived";
}



/* Function: funcA @ 00101820 */

/* DWARF original prototype: int funcA(MultiDerived * this) */

int __thiscall MultiDerived::funcA(MultiDerived *this)

{
 return 0x1e;
}



/* Function: funcB @ 00101830 */

/* DWARF original prototype: int funcB(MultiDerived * this) */

int __thiscall MultiDerived::funcB(MultiDerived *this)

{
 return 0x28;
}



/* Function: funcB @ 00101840 */

/* non-virtual thunk to MultiDerived::funcB() */

undefined8 __thiscall MultiDerived::funcB(MultiDerived *this)

{
 return 0x28;
}



/* Function: func @ 00101850 */

/* DWARF original prototype: int func(MiddleA * this) */

int __thiscall MiddleA::func(MiddleA *this)

{
 return *(int *)((long)&this->dataA + (long)this->_vptr_MiddleA[-3]) + 0x96;
}



/* Function: func @ 00101870 */

/* virtual thunk to MiddleA::func() */

int __thiscall MiddleA::func(MiddleA *this)

{
 return *(int *)((long)&this->dataA +
 (long)(this->_vptr_MiddleA[-3] +
 *(long *)(*(long *)((long)&this->_vptr_MiddleA +
 (long)this->_vptr_MiddleA[-3]) + -0x18))) + 0x96;
}



/* Function: func @ 001018a0 */

/* DWARF original prototype: int func(MiddleB * this) */

int __thiscall MiddleB::func(MiddleB *this)

{
 return *(int *)((long)&this->dataB + (long)this->_vptr_MiddleB[-3]) + 200;
}



/* Function: func @ 001018c0 */

/* virtual thunk to MiddleB::func() */

int __thiscall MiddleB::func(MiddleB *this)

{
 return *(int *)((long)&this->dataB +
 (long)(this->_vptr_MiddleB[-3] +
 *(long *)(*(long *)((long)&this->_vptr_MiddleB +
 (long)this->_vptr_MiddleB[-3]) + -0x18))) + 200;
}



/* Function: func @ 001018f0 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: int func(DiamondDerived * this) */

int __thiscall DiamondDerived::func(DiamondDerived *this)

{
 return *(int *)((long)&(this->super_MiddleA).dataA + (long)(this->super_MiddleA)._vptr_MiddleA[-3]
 ) + 0xfa;
}



/* Function: func @ 00101910 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::func() */

int __thiscall DiamondDerived::func(DiamondDerived *this)

{
 _func_int_varargs *p_Var1;
 
 p_Var1 = (this->super_MiddleA)._vptr_MiddleA[-3];
 return *(int *)((long)&(this->super_MiddleA).dataA +
 (long)(p_Var1 + *(long *)(*(long *)((long)&(this->super_MiddleA)._vptr_MiddleA +
 (long)p_Var1) + -0x18))) + 0xfa;
}



/* Function: func @ 00101934 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::func() */

int __thiscall DiamondDerived::func(DiamondDerived *this)

{
 return *(int *)((long)this + *(long *)(*(long *)&this[-1].field_0x20 + -0x18) + -8) + 0xfa;
}



/* Function: getType @ 00101950 */

/* DWARF original prototype: int getType(RTTIDerivedA * this) */

int __thiscall RTTIDerivedA::getType(RTTIDerivedA *this)

{
 return 1;
}



/* Function: getType @ 00101960 */

/* DWARF original prototype: int getType(RTTIDerivedB * this) */

int __thiscall RTTIDerivedB::getType(RTTIDerivedB *this)

{
 return 2;
}



/* Function: ~RTTIDerivedB @ 00101970 */

/* DWARF original prototype: void ~RTTIDerivedB(RTTIDerivedB * this, int __in_chrg) */

void __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this,int __in_chrg)

{
 return;
}



/* Function: ~RTTIDerivedA @ 00101980 */

/* DWARF original prototype: void ~RTTIDerivedA(RTTIDerivedA * this, int __in_chrg) */

void __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this,int __in_chrg)

{
 return;
}



/* Function: ~DiamondDerived @ 00101990 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this, int __in_chrg, void * *
 __vtt_parm) */

void __thiscall
DiamondDerived::~DiamondDerived(DiamondDerived *this,int __in_chrg,void **__vtt_parm)

{
 return;
}



/* Function: ~DiamondDerived @ 00101994 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 return;
}



/* Function: ~DiamondDerived @ 001019a0 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 return;
}



/* Function: ~MultiDerived @ 001019b0 */

/* DWARF original prototype: void ~MultiDerived(MultiDerived * this, int __in_chrg) */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this,int __in_chrg)

{
 return;
}



/* Function: ~MultiDerived @ 001019b4 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
 return;
}



/* Function: ~Derived @ 001019c0 */

/* DWARF original prototype: void ~Derived(Derived * this, int __in_chrg) */

void __thiscall Derived::~Derived(Derived *this,int __in_chrg)

{
 return;
}



/* Function: ~Base @ 001019d0 */

/* DWARF original prototype: void ~Base(Base * this, int __in_chrg) */

void __thiscall Base::~Base(Base *this,int __in_chrg)

{
 operator_delete(this,8);
 return;
}



/* Function: ~Derived @ 001019e0 */

/* DWARF original prototype: void ~Derived(Derived * this, int __in_chrg) */

void __thiscall Derived::~Derived(Derived *this,int __in_chrg)

{
 operator_delete(this,0x10);
 return;
}



/* Function: ~MultiDerived @ 001019f0 */

/* DWARF original prototype: void ~MultiDerived(MultiDerived * this, int __in_chrg) */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this,int __in_chrg)

{
 operator_delete(this,0x20);
 return;
}



/* Function: ~MultiDerived @ 00101a00 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
 operator_delete(&this[-1].super_BaseB,0x20);
 return;
}



/* Function: ~RTTIDerivedB @ 00101a10 */

/* DWARF original prototype: void ~RTTIDerivedB(RTTIDerivedB * this, int __in_chrg) */

void __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this,int __in_chrg)

{
 operator_delete(this,8);
 return;
}



/* Function: ~RTTIDerivedA @ 00101a20 */

/* DWARF original prototype: void ~RTTIDerivedA(RTTIDerivedA * this, int __in_chrg) */

void __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this,int __in_chrg)

{
 operator_delete(this,8);
 return;
}



/* Function: ~DiamondDerived @ 00101a30 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this, int __in_chrg, void * *
 __vtt_parm) */

void __thiscall
DiamondDerived::~DiamondDerived(DiamondDerived *this,int __in_chrg,void **__vtt_parm)

{
 operator_delete(this,0x30);
 return;
}



/* Function: ~DiamondDerived @ 00101a40 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 operator_delete((_func_int_varargs *)
 ((long)&(this->super_MiddleA)._vptr_MiddleA +
 (long)(this->super_MiddleA)._vptr_MiddleA[-4]),0x30);
 return;
}



/* Function: ~DiamondDerived @ 00101a54 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 operator_delete(&this[-1].field_0x20,0x30);
 return;
}



/* Function: Container @ 00101aa0 */

/* DWARF original prototype: void Container(Container<int> * this) */

void __thiscall Container<int>::Container(Container<int> *this)

{
 this->size = 0;
 return;
}



/* Function: push @ 00101ab0 */

/* DWARF original prototype: void push(Container<int> * this, int value) */

void __thiscall Container<int>::push(Container<int> *this,int value)

{
 int iVar1;
 
 iVar1 = this->size;
 if (iVar1 < 10) {
 this->size = iVar1 + 1;
 this->data[iVar1] = value;
 }
 return;
}



/* Function: get @ 00101ad0 */

/* DWARF original prototype: int get(Container<int> * this, int idx) */

int __thiscall Container<int>::get(Container<int> *this,int idx)

{
 if ((-1 < idx) && (idx < this->size)) {
 return this->data[idx];
 }
 return 0;
}



/* Function: getSize @ 00101b00 */

/* DWARF original prototype: int getSize(Container<int> * this) */

int __thiscall Container<int>::getSize(Container<int> *this)

{
 return this->size;
}



/* Function: Container @ 00101b10 */

/* DWARF original prototype: void Container(Container<double> * this) */

void __thiscall Container<double>::Container(Container<double> *this)

{
 this->size = 0;
 return;
}



/* Function: push @ 00101b20 */

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



/* Function: get @ 00101b40 */

/* DWARF original prototype: double get(Container<double> * this, int idx) */

double __thiscall Container<double>::get(Container<double> *this,int idx)

{
 if ((-1 < idx) && (idx < this->size)) {
 return this->data[idx];
 }
 return 0.0;
}



/* Function: getSize @ 00101b60 */

/* DWARF original prototype: int getSize(Container<double> * this) */

int __thiscall Container<double>::getSize(Container<double> *this)

{
 return this->size;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 70 */
