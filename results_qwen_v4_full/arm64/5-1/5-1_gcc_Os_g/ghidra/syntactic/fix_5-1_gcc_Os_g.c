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
typedef unsigned int uint;
typedef unsigned long ulong;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Forward declarations for C++ classes */
typedef unsigned int undefined;
typedef unsigned int undefined4;
typedef unsigned long long undefined8;
typedef unsigned char undefined1;
typedef void (*code)(void);
typedef void (*_func_int_varargs)(void);
typedef _func_int_varargs *vtable_ptr;
typedef struct Base Base;
typedef struct Derived Derived;
typedef struct SimpleClass SimpleClass;
typedef struct DiamondDerived DiamondDerived;
typedef struct MultiDerived MultiDerived;
typedef struct BaseA BaseA;
typedef struct BaseB BaseB;
typedef struct VirtualBase VirtualBase;
typedef struct MiddleA MiddleA;
typedef struct MiddleB MiddleB;
typedef struct RTTIBase RTTIBase;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;
typedef struct Point Point;
typedef struct LifecycleClass LifecycleClass;
typedef struct Container_int Container_int;
typedef struct Container_double Container_double;

/* Struct definitions */
struct Base {
    void **_vptr_Base;
};

struct Derived {
    Base super_Base;
    int multiplier;
};

struct SimpleClass {
    char name[32];
};

struct BaseA {
    void **_vptr_BaseA;
};

struct BaseB {
    void **_vptr_BaseB;
};

struct VirtualBase {
    void **_vptr_VirtualBase;
    int data;
};

struct MiddleA {
    void **_vptr_MiddleA;
    VirtualBase super_VirtualBase;
    int dataA;
    undefined8 field_0x10;
};

struct MiddleB {
    void **_vptr_MiddleB;
    int dataB;
    undefined8 field_0x10;
};

struct DiamondDerived {
    MiddleA super_MiddleA;
    undefined _32_8_[8];
    undefined _40_4_[4];
    undefined field_0x20[16];
};

struct MultiDerived {
    BaseA super_BaseA;
    BaseB super_BaseB;
    Base super_Base;
};

struct RTTIBase {
    undefined data[8];
};

struct RTTIDerivedA {
    RTTIBase super_RTTIBase;
};

struct RTTIDerivedB {
    RTTIBase super_RTTIBase;
};

struct Point {
    int x;
    int y;
};

struct LifecycleClass {
    int data;
};

struct Container_int {
    int size;
    int data[10];
};

struct Container_double {
    int size;
    double data[10];
};

/* unique_ptr type definitions */
typedef struct { void *_M_t; } unique_ptr_int_default_delete;
typedef struct { void *_M_t; } unique_ptr_int_array_default_delete;

/* Stack protection globals */
extern long ___stack_chk_guard;
extern long __stack_chk_guard;

/* std namespace forward declarations */
typedef struct std_ios_base_Init std_ios_base_Init;
typedef struct std___ioinit std___ioinit;

/* std namespace C-compatible wrappers */
extern void std_ios_base_Init_Init(struct std___ioinit *this);
extern void std_ios_base_Init__Init(struct std___ioinit *this);
extern void std_ios_base_Init__Init_1(struct std___ioinit *this);

/* External pointer declarations */
extern void *PTR_virtual_func_00113868;
extern void *PTR_virtual_func_00113898;
extern void *PTR_func_00113ac8;
extern void *PTR_func_00113af8;
extern void *PTR_func_00113b30;
extern void *PTR__RTTIDerivedA_00113b58;
extern void *PTR__RTTIDerivedB_00113b80;
extern void *PTR_func_001138e0;
extern void *PTR_func_00113918;
extern void *PTR_func_00113958;
extern void *PTR_func_00113990;
extern void *PTR_PTR_00113a90;
extern void *PTR_PTR_00113a80;

/* Operator new/delete declarations */
extern void *operator_new(size_t);
extern void operator_new__(size_t);
extern void operator_delete(void *ptr, size_t size);

/* Template function declarations */
extern int template_max_int(int a, int b);
extern double template_max_double(double a, double b);
extern void template_swap_int(int *a, int *b);
extern void Container_int_push(struct Container_int *this, int value);

/* unique_ptr destructor declarations */
extern void std_unique_ptr_int_default_delete__unique_ptr(unique_ptr_int_default_delete *this, int __in_chrg);
extern void std_unique_ptr_int_array_default_delete__unique_ptr(unique_ptr_int_array_default_delete *this, int __in_chrg);

/* C++ exception handling functions */
extern void *__cxa_allocate_exception(size_t);
extern void __cxa_throw(void *exception, void *tinfo, void *dest);
extern int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle);
extern void __cxa_finalize(void *dso_handle);
extern void *__dynamic_cast(void *obj, void *src_type, void *dst_type, int src_ptr);

/* CRT stub functions */
extern void deregister_tm_clones(void);
extern void register_tm_clones(void);

/* Stack protection functions */
extern void __stack_chk_fail(void);

/* String functions */
extern char *strncpy(char *dest, const char *src, size_t n);
extern size_t strlen(const char *s);
extern int strcmp(const char *s1, const char *s2);
extern int puts(const char *s);
extern int __printf_chk(int flag, const char *format, ...);

/* Global variables */
extern char completed_0;
extern void *__dso_handle;
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

/* Forward declarations */
extern void test_cpp_oo_features(void);

/* DiamondDerived function forward declaration */
extern int DiamondDerived_func(DiamondDerived *this);

/* Destructor forward declarations */
extern void MiddleA_destructor(MiddleA *this);
extern void MiddleA_destructor_1(MiddleA *this, int __in_chrg, void **__vtt_parm);
extern void MiddleA_destructor_2(MiddleA *this, void **__vtt_parm);
extern void MiddleB_destructor(MiddleB *this);
extern void MiddleB_destructor_1(MiddleB *this, int __in_chrg, void **__vtt_parm);
extern void MiddleB_destructor_2(MiddleB *this, void **__vtt_parm);
extern void MultiDerived_destructor(MultiDerived *this, int __in_chrg);
extern void MultiDerived_destructor_1(MultiDerived *this);
extern void DiamondDerived_destructor(DiamondDerived *this, int __in_chrg, void **__vtt_parm);
extern void DiamondDerived_destructor_1(DiamondDerived *this);
extern void DiamondDerived_destructor_2(DiamondDerived *this, void **__vtt_parm);
extern void DiamondDerived_destructor_6(DiamondDerived *this, int __in_chrg, void **__vtt_parm);
extern void DiamondDerived_destructor_7(DiamondDerived *this);

/* std namespace objects */
extern struct std___ioinit std___ioinit_obj;

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/5-1/5-1_gcc_Os_g
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

int test_cpp_exception(void)

{
 undefined4 *puVar1;
 
 /* Unresolved local var: int result@[???] */
 puVar1 = (undefined4 *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* WARNING: Subroutine does not return */
 /* try { // try from 0010182c to 0010182f has its CatchHandler @ 00101830 */
 __cxa_throw(puVar1,(void *)0,0);
}



/* Function: main @ 001018d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 001018e8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _GLOBAL__sub_I__Z20test_cpp_member_funcv(void)

{
 std_ios_base_Init_Init(&std___ioinit_obj);
 __cxa_atexit((void (*)(void *))std_ios_base_Init__Init,&std___ioinit_obj,&__dso_handle);
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
 if (lVar1 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return (int)sVar2 + 0x125c;
}



/* Function: test_cpp_constructor @ 00101ac0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_constructor(void)

{
 extern int LifecycleClass_instance_count;
 /* Unresolved local var: int result@[???]
 Unresolved local var: LifecycleClass obj@[???] */
 return LifecycleClass_instance_count * 0x3e9 + 0x15;
}



/* Function: call_virtual_func @ 00101ad8 */

int call_virtual_func(Base *obj,int x)

{
 int iVar1;
 
 /* WARNING: Could not recover jumptable at 0x00101ae4. Too many branches */
 /* WARNING: Treating indirect jump as call */
 iVar1 = ((code *)(*(long *)obj->_vptr_Base))(obj,(ulong)x);
 return iVar1;
}



/* Function: test_cpp_virtual_func @ 00101ae8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_virtual_func(void)

{
 long lVar1;
 int iVar2;
 int iVar3;
 Base base;
 Derived derived;
 
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: Base * pb@[???]
 Unresolved local var: Base * pd@[???]
 Unresolved local var: int r3@[???]
 Unresolved local var: int r4@[???] */
 lVar1 = ___stack_chk_guard;
 base._vptr_Base = (void **)PTR_virtual_func_00113868;
 derived.super_Base._vptr_Base = (void **)PTR_virtual_func_00113898;
 derived.multiplier = 3;
 iVar2 = call_virtual_func(&base,5);
 iVar3 = call_virtual_func(&derived.super_Base,5);
 iVar3 = iVar2 + 0x15 + iVar3;
 if (lVar1 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return iVar3;
}



/* Function: test_cpp_multiple_inheritance @ 00101b78 */

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



/* Function: test_cpp_operator_overload @ 00101b80 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_operator_overload(void)

{
 /* Unresolved local var: Point p1@[???]
 Unresolved local var: Point p2@[???]
 Unresolved local var: Point p3@[???]
 Unresolved local var: bool eq@[???] */
 return 0x16;
}



/* Function: test_cpp_template_func @ 00101b88 */

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
 Unresolved local var: double r2@[???] */
 local_8 = ___stack_chk_guard;
 iVar1 = template_max_int(3,7);
 dVar2 = template_max_double(2.5,1.5);
 a = 10;
 b = 0x14;
 template_swap_int(&a,&b);
 iVar1 = (int)dVar2 + iVar1 + a + b;
 if (local_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return iVar1;
}



/* Function: test_cpp_template_class @ 00101c30 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_class(void)

{
 int iVar1;
 long lVar2;
 Container_int int_container;
 
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: Container<double> double_container@[???]
 Unresolved local var: double r3@[???] */
 lVar2 = ___stack_chk_guard;
 int_container.size = 1;
 int_container.data[0] = 10;
 Container_int_push(&int_container,0x14);
 Container_int_push(&int_container,0x1e);
 iVar1 = int_container.data[0];
 if (int_container.size < 1) {
 iVar1 = 0;
 }
 if (lVar2 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return int_container.size + iVar1 + 3;
}



/* Function: test_cpp_lambda @ 00101cc0 */

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



/* Function: test_cpp_rtti @ 00101cc8 */

/* WARNING: Removing unreachable block (ram,0x00101d68) */
/* WARNING: Removing unreachable block (ram,0x00101d74) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_rtti(void)

{
 char cVar1;
 int iVar2;
 long *plVar3;
 long *plVar4;
 long lVar5;
 size_t sVar6;
 int iVar7;
 char *__s1;
 long lVar8;
 
 /* Unresolved local var: RTTIBase * obj1@[???]
 Unresolved local var: RTTIBase * obj2@[???]
 Unresolved local var: int result@[???] */
 extern void *RTTIBase_typeinfo;
 extern void *RTTIDerivedA_typeinfo;
 extern void *RTTIDerivedB_typeinfo;
 plVar3 = (long *)operator_new(8);
 *plVar3 = (long)(uintptr_t)&PTR__RTTIDerivedA_00113b58;
 plVar4 = (long *)operator_new(8);
 lVar8 = *plVar3;
 *plVar4 = (long)(uintptr_t)&PTR__RTTIDerivedB_00113b80;
 __s1 = *(char **)((long)*(void **)(lVar8 + -8) + 8);
 cVar1 = *__s1;
 if (__s1 == (char *)"12RTTIDerivedA") {
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
 /* Unresolved local var: RTTIDerivedA * derivedA@[???] */
 lVar5 = (long)__dynamic_cast(plVar3,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0);
 if (lVar5 != 0) {
 iVar2 = iVar7 + 0x78;
 }
 /* Unresolved local var: RTTIDerivedB * derivedB@[???] */
 lVar5 = (long)__dynamic_cast(plVar4,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo,0);
 if (lVar5 != 0) {
 iVar2 = iVar2 + 200;
 }
 if (cVar1 == '*') {
 __s1 = __s1 + 1;
 }
 sVar6 = strlen(__s1);
 (*(void (*)(void *))(*(long *)(lVar8 + 8)))(plVar3);
 (*(void (*)(void *))(*(long *)(*plVar4 + 8)))(plVar4);
 return iVar2 + (int)sVar6;
}



/* Function: test_cpp_smart_ptr @ 00101e24 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_smart_ptr(void)

{
 long lVar1;
 int iVar1;
 int __in_chrg;
 int __in_chrg_00;
 unique_ptr_int_default_delete ptr1;
 unique_ptr_int_default_delete ptr2;
 unique_ptr_int_array_default_delete arr;
 
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: anon_struct_1_0_00000001_for__M_head_impl deleter@[???]
 Unresolved local var: unique_ptr<int,_test_cpp_smart_ptr()::<lambda(int*)>_>
 ptr3@[???]
 Unresolved local var: int r3@[???] */
 lVar1 = ___stack_chk_guard;
 ptr2._M_t = operator_new(4);
 ptr1._M_t = (void *)0x0;
 *(undefined4 *)ptr2._M_t = 200;
  /* try { // try from 00101e68 to 00101e6b has its CatchHandler @ 00101ec8 */
 arr._M_t = operator_new__(0x14);
 {
  undefined8 *temp_ptr = (undefined8 *)arr._M_t;
  temp_ptr[0] = 0x200000001;
  temp_ptr[1] = 0x400000003;
  ((undefined4 *)arr._M_t)[4] = 5;
 }
 std_unique_ptr_int_array_default_delete__unique_ptr(&arr,1);
 std_unique_ptr_int_default_delete__unique_ptr(&ptr2,1);
 std_unique_ptr_int_default_delete__unique_ptr(&ptr1,1);
 iVar1 = 0x2bf;
 if (lVar1 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return iVar1;
}



/* Function: test_cpp_diamond_inheritance @ 00101ef8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */

int test_cpp_diamond_inheritance(void)

{
 long lVar1;
 int iVar2;
 int iVar3;
 DiamondDerived obj;
 
 /* Unresolved local var: VirtualBase * pb@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 lVar1 = ___stack_chk_guard;
 *(void ***)((char *)&obj.super_MiddleA) = (void **)&PTR_func_00113ac8;
 *(undefined8 *)((char *)&obj + 32) = (undefined8)(uintptr_t)&PTR_func_00113b30;
 *(undefined8 *)((char *)&obj.super_MiddleA + 48) = (undefined8)(uintptr_t)&PTR_func_00113af8;
 obj._40_4_ = 0x32;
 iVar2 = DiamondDerived_func((DiamondDerived *)&obj.field_0x20);
 obj._40_4_ = 100;
 iVar3 = DiamondDerived_func((DiamondDerived *)&obj.field_0x20);
 DiamondDerived_destructor_7(&obj);
 if (lVar1 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return iVar2 + iVar3;
}



/* Function: test_cpp_oo_features @ 00101fa0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */

void test_cpp_oo_features(void)

{
 int iVar1;
 
 puts(&DAT_001025b2);
 iVar1 = test_cpp_member_func();
 __printf_chk(1,&DAT_001025d6,iVar1);
 iVar1 = test_cpp_constructor();
 __printf_chk(1,&DAT_001025f4,iVar1);
 iVar1 = test_cpp_virtual_func();
 __printf_chk(1,&DAT_00102610,iVar1);
 iVar1 = test_cpp_multiple_inheritance();
 __printf_chk(1,&DAT_0010262c,iVar1);
 iVar1 = test_cpp_diamond_inheritance();
 __printf_chk(1,&DAT_00102648,iVar1);
 iVar1 = test_cpp_operator_overload();
 __printf_chk(1,&DAT_00102665,iVar1);
 iVar1 = test_cpp_template_func();
 __printf_chk(1,&DAT_00102681,iVar1);
 iVar1 = test_cpp_template_class();
 __printf_chk(1,&DAT_0010269d,iVar1);
 iVar1 = test_cpp_lambda();
 __printf_chk(1,&DAT_001026b9,iVar1);
 iVar1 = test_cpp_exception();
 __printf_chk(1,&DAT_001026d5,iVar1);
 iVar1 = test_cpp_smart_ptr();
 __printf_chk(1,&DAT_001026f2,iVar1);
 iVar1 = test_cpp_rtti();
 __printf_chk(1,&DAT_0010270f,iVar1);
 return;
}



/* Function: virtual_func @ 001020d8 */

/* DWARF original prototype: int virtual_func(Base * this, int x) */

int Base_virtual_func(Base *this,int x)

{
 return x + 1;
}



/* Function: getName @ 001020e0 */

/* DWARF original prototype: char * getName(Base * this) */

char * Base_getName(Base *this)

{
 return "Base";
}



/* Function: ~Base @ 001020ec */

/* DWARF original prototype: void ~Base(Base * this, int __in_chrg) */

void Base_destructor_func(Base *this,int __in_chrg)

{
 (void)__in_chrg;
 return;
}



/* Function: virtual_func @ 001020f0 */

/* DWARF original prototype: int virtual_func(Derived * this, int x) */

int Derived_virtual_func(Derived *this,int x)

{
 return x * this->multiplier;
}



/* Function: getName @ 001020fc */

/* DWARF original prototype: char * getName(Derived * this) */

char * Derived_getName(Derived *this)

{
 return "Derived";
}



/* Function: funcA @ 00102108 */

/* DWARF original prototype: int funcA(MultiDerived * this) */

int MultiDerived_funcA(MultiDerived *this)

{
 return 0x1e;
}



/* Function: funcB @ 00102110 */

/* DWARF original prototype: int funcB(MultiDerived * this) */

int MultiDerived_funcB(MultiDerived *this)

{
 return 0x28;
}



/* Function: func @ 00102120 */

/* DWARF original prototype: int func(VirtualBase * this) */

int VirtualBase_func(VirtualBase *this)

{
 return 100;
}



/* Function: ~VirtualBase @ 00102128 */

/* DWARF original prototype: void ~VirtualBase(VirtualBase * this, int __in_chrg) */

void VirtualBase_destructor_func(VirtualBase *this,int __in_chrg)

{
 (void)__in_chrg;
 return;
}



/* Function declaration for func */
extern int func(void *this);

/* Function: func @ 0010212c */

/* DWARF original prototype: int func(MiddleA * this) */

int MiddleA_func(MiddleA *this)

{
 return *(int *)((long)&this->dataA + (long)this->_vptr_MiddleA[-3]) + 0x96;
}



/* Function: func @ 00102144 */

/* virtual thunk to MiddleA::func() */

int MiddleA_func_thunk(MiddleA *this)

{
 int iVar1;
 
 iVar1 = func((MiddleA *)((long)&this->_vptr_MiddleA + (long)this->_vptr_MiddleA[-3]));
 return iVar1;
}



/* Function: func @ 00102154 */

/* DWARF original prototype: int func(MiddleB * this) */

int MiddleB_func(MiddleB *this)

{
 return *(int *)((long)&this->dataB + (long)this->_vptr_MiddleB[-3]) + 200;
}



/* Function: func @ 0010216c */

/* virtual thunk to MiddleB::func() */

int MiddleB_func_thunk(MiddleB *this)

{
 int iVar1;
 
 iVar1 = func((MiddleB *)((long)&this->_vptr_MiddleB + (long)this->_vptr_MiddleB[-3]));
 return iVar1;
}



/* Function: func @ 0010217c */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: int func(DiamondDerived * this) */

int DiamondDerived_func(DiamondDerived *this)

{
 return *(int *)((long)&(this->super_MiddleA).dataA + (long)(this->super_MiddleA)._vptr_MiddleA[-3]
 ) + 0xfa;
}



/* Function: func @ 00102194 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::func() */

int DiamondDerived_func_thunk(DiamondDerived *this)

{
 int iVar1;
 
 iVar1 = func((DiamondDerived *)
 ((long)&(this->super_MiddleA)._vptr_MiddleA +
 (long)(this->super_MiddleA)._vptr_MiddleA[-3]));
 return iVar1;
}



/* Function: func @ 001021a4 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::func() */

int DiamondDerived_func_nonvirtual_thunk(DiamondDerived *this)

{
 int iVar1;
 
 iVar1 = func((DiamondDerived *)&this[-1].field_0x20);
 return iVar1;
}



/* Function: ~MiddleA @ 001021ac */

/* DWARF original prototype: void ~MiddleA(MiddleA * this) */

void MiddleA_destructor(MiddleA *this)

{
 this->_vptr_MiddleA = (void **)&PTR_func_001138e0;
 *(undefined8 *)((long)&this->field_0x10) = (undefined8)&PTR_func_00113918;
 return;
}



/* Function: ~MiddleA @ 001021c8 */

/* virtual thunk to MiddleA::~MiddleA() */

void MiddleA_destructor_3(MiddleA *this)

{
 void **p_Var1;
 
 p_Var1 = (void **)this->_vptr_MiddleA[-4];
 *(void ***)((long)&this->_vptr_MiddleA + (long)p_Var1) = (void **)&PTR_func_001138e0;
 *(undefined8 *)(&this->field_0x10 + (long)p_Var1) = (undefined8)&PTR_func_00113918;
 return;
}



/* Function: ~MiddleB @ 001021f0 */

/* DWARF original prototype: void ~MiddleB(MiddleB * this) */

void MiddleB_destructor(MiddleB *this)

{
 this->_vptr_MiddleB = (void **)&PTR_func_00113958;
 *(undefined8 *)((long)&this->field_0x10) = (undefined8)&PTR_func_00113990;
 return;
}



/* Function: ~MiddleB @ 0010220c */

/* virtual thunk to MiddleB::~MiddleB() */

void MiddleB_destructor_3(MiddleB *this)

{
 void **p_Var1;
 
 p_Var1 = (void **)this->_vptr_MiddleB[-4];
 *(void ***)((long)&this->_vptr_MiddleB + (long)p_Var1) = (void **)&PTR_func_00113958;
 *(undefined8 *)(&this->field_0x10 + (long)p_Var1) = (undefined8)&PTR_func_00113990;
 return;
}



/* Function: getType @ 00102234 */

/* DWARF original prototype: int getType(RTTIDerivedA * this) */

int RTTIDerivedA_getType(RTTIDerivedA *this)

{
 return 1;
}



/* Function: getType @ 0010223c */

/* DWARF original prototype: int getType(RTTIDerivedB * this) */

int RTTIDerivedB_getType(RTTIDerivedB *this)

{
 return 2;
}











/* Function: ~MultiDerived @ 0010224c */

/* DWARF original prototype: void ~MultiDerived(MultiDerived * this, int __in_chrg) */

void MultiDerived_destructor(MultiDerived *this,int __in_chrg)

{
 (void)__in_chrg;
 return;
}



/* Function: ~MultiDerived @ 00102250 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void MultiDerived_destructor_1(MultiDerived *this)

{
 return;
}



/* Function: ~Derived @ 00102254 */

/* DWARF original prototype: void ~Derived(Derived * this, int __in_chrg) */

void Derived_destructor(Derived *this,int __in_chrg)

{
 (void)__in_chrg;
 return;
}



/* Function: ~Base @ 00102258 */

/* DWARF original prototype: void ~Base(Base * this, int __in_chrg) */

void Base_destructor_func2(Base *this,int __in_chrg)

{
 (void)__in_chrg;
 operator_delete(this,8);
 return;
}



/* Function: ~Derived @ 00102260 */

/* DWARF original prototype: void ~Derived(Derived * this, int __in_chrg) */

void Derived_destructor_1(Derived *this,int __in_chrg)

{
 (void)__in_chrg;
 operator_delete(this,0x10);
 return;
}



/* Function: ~MultiDerived @ 00102268 */

/* DWARF original prototype: void ~MultiDerived(MultiDerived * this, int __in_chrg) */

void MultiDerived_destructor_2(MultiDerived *this,int __in_chrg)

{
 (void)__in_chrg;
 operator_delete(this,0x20);
 return;
}



/* Function: ~MultiDerived @ 00102270 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void MultiDerived_destructor_3(MultiDerived *this)

{
 int in_w1;
 
 MultiDerived_destructor_2((MultiDerived *)&this[-1].super_BaseB,in_w1);
 return;
}



/* Function: ~VirtualBase @ 00102278 */

/* DWARF original prototype: void ~VirtualBase(VirtualBase * this, int __in_chrg) */

void VirtualBase_destructor_func2(VirtualBase *this,int __in_chrg)

{
 (void)__in_chrg;
 operator_delete(this,0x10);
 return;
}











/* Function: ~MiddleA @ 00102290 */

/* DWARF original prototype: void ~MiddleA(MiddleA * this) */

void MiddleA_destructor_4(MiddleA *this)

{
 this->_vptr_MiddleA = (void **)&PTR_func_001138e0;
 *(undefined8 *)&this->field_0x10 = (undefined8)&PTR_func_00113918;
 operator_delete(this,0x20);
 return;
}



/* Function: ~MiddleA @ 001022b0 */

/* virtual thunk to MiddleA::~MiddleA() */

void MiddleA_destructor_5(MiddleA *this)

{
 MiddleA_destructor_3((MiddleA *)((long)&this->_vptr_MiddleA + (long)((void **)this->_vptr_MiddleA)[-4]));
 return;
}



/* Function: ~MiddleB @ 001022c0 */

/* DWARF original prototype: void ~MiddleB(MiddleB * this) */

void MiddleB_destructor_4(MiddleB *this)

{
 this->_vptr_MiddleB = (void **)&PTR_func_00113958;
 *(undefined8 *)&this->field_0x10 = (undefined8)&PTR_func_00113990;
 operator_delete(this,0x20);
 return;
}



/* Function: ~MiddleB @ 001022e0 */

/* virtual thunk to MiddleB::~MiddleB() */

void MiddleB_destructor_5(MiddleB *this)

{
 MiddleB_destructor_3((MiddleB *)((long)&this->_vptr_MiddleB + (long)((void **)this->_vptr_MiddleB)[-4]));
 return;
}



/* Function: ~MiddleA @ 001022f0 */

/* DWARF original prototype: void ~MiddleA(MiddleA * this, int __in_chrg, void * * __vtt_parm) */

void MiddleA_destructor_6(MiddleA *this,int __in_chrg,void **__vtt_parm)

{
 undefined8 uVar1;
 void **p_Var2;
 void **p_Var3;
 
 if (__in_chrg == 0) {
 p_Var3 = (void **)*__vtt_parm;
 }
 else {
 p_Var3 = (void **)&PTR_func_001138e0;
 }
 this->_vptr_MiddleA = (void **)p_Var3;
 if (__in_chrg == 0) {
 uVar1 = (undefined8)__vtt_parm[1];
 p_Var2 = ((void **)p_Var3)[-3];
 }
 else {
 p_Var2 = (void **)0x10;
 uVar1 = (undefined8)&PTR_func_00113918;
 }
 *(undefined8 *)((long)(char *)&this->field_0x10 + (long)p_Var2) = uVar1;
 return;
}



/* Function: ~MiddleA @ 0010232c */

/* DWARF original prototype: void ~MiddleA(MiddleA * this, void * * __vtt_parm) */

void MiddleA_destructor_7(MiddleA *this,void **__vtt_parm)

{
 MiddleA_destructor_6(this,0,__vtt_parm);
 return;
}



/* Function: ~MiddleB @ 00102338 */

/* DWARF original prototype: void ~MiddleB(MiddleB * this, int __in_chrg, void * * __vtt_parm) */

void MiddleB_destructor_6(MiddleB *this,int __in_chrg,void **__vtt_parm)

{
 undefined8 uVar1;
 void **p_Var2;
 void **p_Var3;
 
 if (__in_chrg == 0) {
 p_Var3 = (void **)*__vtt_parm;
 }
 else {
 p_Var3 = (void **)&PTR_func_00113958;
 }
 this->_vptr_MiddleB = (void **)p_Var3;
 if (__in_chrg == 0) {
 uVar1 = (undefined8)__vtt_parm[1];
 p_Var2 = ((void **)p_Var3)[-3];
 }
 else {
 p_Var2 = (void **)0x10;
 uVar1 = (undefined8)&PTR_func_00113990;
 }
 *(undefined8 *)((long)(char *)&this->field_0x10 + (long)p_Var2) = uVar1;
 return;
}



/* Function: ~MiddleB @ 00102374 */

/* DWARF original prototype: void ~MiddleB(MiddleB * this, void * * __vtt_parm) */

void MiddleB_destructor_7(MiddleB *this,void **__vtt_parm)

{
 MiddleB_destructor(this);
 return;
}



/* Function: template_max_int @ 00102380 */

int template_max_int(int a,int b)

{
 if (a < b) {
 a = b;
 }
 return a;
}



/* Function: template_max_double @ 0010238c */

double template_max_double(double a,double b)

{
 if (a <= b) {
 a = b;
 }
 return a;
}



/* Function: template_swap_int @ 00102398 */

void template_swap_int(int *a,int *b)

{
 int iVar1;
 
 /* Unresolved local var: int temp@[???] */
 iVar1 = *a;
 *a = *b;
 *b = iVar1;
 return;
}



/* Function: Container_int_Container @ 001023ac */

/* DWARF original prototype: void Container(Container<int> * this) */

void Container_int_constructor(Container_int *this)

{
 this->size = 0;
 return;
}



/* Function: Container_int_push @ 001023b4 */

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



/* Function: Container_int_get @ 001023d0 */

/* DWARF original prototype: int get(Container<int> * this, int idx) */

int Container_int_get(Container_int *this,int idx)

{
 int iVar1;
 
 if ((idx < 0) || (this->size <= idx)) {
 iVar1 = 0;
 }
 else {
 iVar1 = this->data[idx];
 }
 return iVar1;
}



/* Function: Container_int_getSize @ 001023f0 */

/* DWARF original prototype: int getSize(Container<int> * this) */

int Container_int_getSize(Container_int *this)

{
 return this->size;
}



/* Function: Container_double_Container @ 001023f8 */

/* DWARF original prototype: void Container(Container<double> * this) */

void Container_double_constructor(Container_double *this)

{
 this->size = 0;
 return;
}



/* Function: Container_double_push @ 00102400 */

/* DWARF original prototype: void push(Container<double> * this, double value) */

void Container_double_push(Container_double *this,double value)

{
 int iVar1;
 
 iVar1 = this->size;
 if (iVar1 < 10) {
 this->size = iVar1 + 1;
 this->data[iVar1] = value;
 }
 return;
}



/* Function: Container_double_get @ 0010241c */

/* DWARF original prototype: double get(Container<double> * this, int idx) */

double Container_double_get(Container_double *this,int idx)

{
 double dVar1;
 
 if ((idx < 0) || (this->size <= idx)) {
 dVar1 = 0.0;
 }
 else {
 dVar1 = this->data[idx];
 }
 return dVar1;
}



/* Function: Container_double_getSize @ 0010243c */

/* DWARF original prototype: int getSize(Container<double> * this) */

int Container_double_getSize(Container_double *this)

{
 return this->size;
}



/* Function: ~unique_ptr @ 00102444 */

/* DWARF original prototype: void ~unique_ptr(unique_ptr<int,_std::default_delete<int>_> * this, int
 __in_chrg) */

void std_unique_ptr_int_default_delete__unique_ptr
 (unique_ptr_int_default_delete *this,int __in_chrg)

{
 void *_Var1;
 
 /* Unresolved local var: int * * __ptr@[DW_OP_reg0(x0)] */
 _Var1 = (this->_M_t);
 if (_Var1 != (void *)0x0) {
 operator_delete(_Var1,4);
 return;
 }
 return;
}



/* Function: ~unique_ptr @ 00102458 */

/* DWARF original prototype: void ~unique_ptr(unique_ptr<int_[],_std::default_delete<int_[]>_> *
 this, int __in_chrg) */

void std_unique_ptr_int_array_default_delete__unique_ptr
 (unique_ptr_int_array_default_delete *this,int __in_chrg)

{
 void *_Var1;
 
 /* Unresolved local var: int * * __ptr@[DW_OP_reg0(x0)] */
 _Var1 = (this->_M_t);
 if (_Var1 != (void *)0x0) {
 operator_delete(_Var1,0x14);
 return;
 }
 return;
}



/* Function: ~DiamondDerived @ 00102468 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this, int __in_chrg, void * *
 __vtt_parm) */

void
DiamondDerived_destructor_6(DiamondDerived *this,int __in_chrg,void **__vtt_parm)

{
 undefined8 uVar1;
 void **p_Var2;
 void **p_Var3;
 
 if (__in_chrg == 0) {
 p_Var3 = (void **)*__vtt_parm;
 }
 else {
 p_Var3 = (void **)&PTR_func_00113ac8;
 }
 (this->super_MiddleA)._vptr_MiddleA = (void **)p_Var3;
 if (__in_chrg == 0) {
 p_Var2 = ((void **)p_Var3)[-3];
 uVar1 = (undefined8)__vtt_parm[5];
 }
 else {
 p_Var2 = (void **)0x20;
 uVar1 = (undefined8)&PTR_func_00113b30;
 }
 *(undefined8 *)((long)&(this->super_MiddleA)._vptr_MiddleA + (long)p_Var2) = uVar1;
 if (__in_chrg == 0) {
  uVar1 = (undefined8)__vtt_parm[6];
 }
 else {
  uVar1 = (undefined8)&PTR_func_00113af8;
 }
 *(undefined8 *)((long)&(this->super_MiddleA).field_0x10 + (long)p_Var2) = uVar1;
 MiddleB_destructor((MiddleB *)((char *)this + 0x30));
 MiddleA_destructor_6(&this->super_MiddleA,0,(void **)0x0);
 return;
 return;
}



/* Function: ~DiamondDerived @ 00102518 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this) */

void DiamondDerived_destructor_7(DiamondDerived *this)

{
 DiamondDerived_destructor_6(this,2,(void **)0x0);
 return;
}



/* Function: ~DiamondDerived @ 00102524 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_destructor_8(DiamondDerived *this)

{
 DiamondDerived_destructor_7((DiamondDerived *)&this[-1].field_0x20);
 return;
}



/* Function: ~DiamondDerived @ 0010252c */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_destructor_9(DiamondDerived *this)

{
 DiamondDerived_destructor_7((DiamondDerived *)
 ((long)&(this->super_MiddleA)._vptr_MiddleA +
 (long)(this->super_MiddleA)._vptr_MiddleA[-4]));
 return;
}



/* Function: ~DiamondDerived @ 0010253c */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this) */

void DiamondDerived_destructor_10(DiamondDerived *this)

{
 DiamondDerived_destructor_7(this);
 operator_delete(this,0x30);
 return;
}



/* Function: ~DiamondDerived @ 00102564 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_destructor_11(DiamondDerived *this)

{
 DiamondDerived_destructor_7((DiamondDerived *)&this[-1].field_0x20);
 return;
}



/* Function: ~DiamondDerived @ 0010256c */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_destructor_12(DiamondDerived *this)

{
 DiamondDerived_destructor_7((DiamondDerived *)
 ((long)&(this->super_MiddleA)._vptr_MiddleA +
 (long)(this->super_MiddleA)._vptr_MiddleA[-4]));
 return;
}



/* Function: ~DiamondDerived @ 0010257c */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this, void * * __vtt_parm) */

void DiamondDerived_destructor_13(DiamondDerived *this,void **__vtt_parm)

{
 DiamondDerived_destructor_6(this,0,__vtt_parm);
 return;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 89 */
