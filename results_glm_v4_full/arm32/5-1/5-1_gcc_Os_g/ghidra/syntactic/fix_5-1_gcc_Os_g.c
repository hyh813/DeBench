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

/* Basic undefined types for decompiler output */
typedef unsigned int undefined4;
typedef unsigned char undefined;
typedef unsigned char undefined1;
typedef unsigned short undefined2;

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/5-1/5-1_gcc_Os_g
 * Processor: ARM
 * Compiler Spec: default
 */

/* Type for function pointers */
typedef int (*_func_int_varargs)();
typedef void (*code)();

/* Forward declarations for C++ classes */
typedef struct Base Base;
typedef struct Derived Derived;
typedef struct LifecycleClass LifecycleClass;

/* LifecycleClass structure definition */
struct LifecycleClass {
    int instance_count;
};

/* Global static instance count for LifecycleClass */
static int LifecycleClass_static_instance_count = 0;

/* Base structure definition */
struct Base {
    _func_int_varargs **_vptr_Base;
};

/* Derived structure definition */
struct Derived {
    struct Base super_Base;
    int multiplier;
};

/* SimpleClass structure definition */
struct SimpleClass {
    char name[32];
};

typedef struct SimpleClass SimpleClass;
typedef struct BaseA BaseA;
typedef struct BaseB BaseB;

struct BaseA {
    _func_int_varargs **_vptr_BaseA;
};

struct BaseB {
    _func_int_varargs **_vptr_BaseB;
};

struct MultiDerived {
    struct BaseA super_BaseA;
    struct BaseB super_BaseB;
};

typedef struct MultiDerived MultiDerived;
typedef struct VirtualBase VirtualBase;
typedef struct MiddleA MiddleA;
typedef struct MiddleB MiddleB;
typedef struct DiamondDerived DiamondDerived;
typedef struct RTTIBase RTTIBase;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;
typedef struct VirtualBase VirtualBase;
typedef struct Point Point;
typedef struct Container_int Container_int;
typedef struct Container_double Container_double;
typedef struct unique_ptr_int unique_ptr_int;
typedef struct unique_ptr_int_array unique_ptr_int_array;
typedef struct Container_double Container_double;


/* unique_ptr_int structure definition */
struct unique_ptr_int {
    struct {
        struct {
            struct {
                void *super__Tuple_impl_0;
            } _M_t;
        } super___uniq_ptr_impl_int;
    } _M_t;
};

/* unique_ptr_int_array structure definition */
struct unique_ptr_int_array {
    struct {
        struct {
            struct {
                int *super__Tuple_impl_0;
            } _M_t;
        } super___uniq_ptr_impl_int_array;
    } _M_t;
};

/* Container_int structure definition */
struct Container_int {
    int size;
    int data[10];
};

/* Container_double structure definition */
struct Container_double {
    int size;
    double data[10];
};

/* MiddleA structure definition */
struct MiddleA {
    _func_int_varargs **_vptr_MiddleA;
    int dataA;
    void *field_0x8;
};

/* MiddleB structure definition */
struct MiddleB {
    _func_int_varargs **_vptr_MiddleB;
    int dataB;
    void *field_0x8;
};

/* DiamondDerived structure definition */
struct DiamondDerived {
    struct MiddleA super_MiddleA;
    int _16_4_;
    int _20_4_;
    void *field_0x10;  /* Overlapping field for MiddleB */
};

/* VirtualBase structure definition */
struct VirtualBase {
    _func_int_varargs **_vptr_VirtualBase;
};

/* Type for function pointers */
typedef int (*_func_int_varargs)();
typedef void (*code)();

/* Function declarations for missing functions */
void *operator_new(size_t size);
int template_max_int(int a, int b);
double template_max_double(double a, double b);
void template_swap_int(int *a, int *b);
void Container_int_push(Container_int *obj, int value);
void Container_double_push(Container_double *obj, double value);
void *std_unique_ptr_int_destructor(unique_ptr_int *obj, int __in_chrg);
void *std_unique_ptr_int_array_destructor(unique_ptr_int_array *obj, int __in_chrg);
int DiamondDerived_func(DiamondDerived *obj);
void *DiamondDerived_destructor(DiamondDerived *obj, int __in_chrg, void **__vtt_parm);
void *DiamondDerived_destructor1(DiamondDerived *obj, int __in_chrg, void **__vtt_parm);
void *DiamondDerived_destructor2(DiamondDerived *obj);
void *MiddleA_destructor(MiddleA *this_param, int __in_chrg, void **__vtt_parm);
void *MiddleB_destructor(MiddleB *this_param, int __in_chrg, void **__vtt_parm);
void *MiddleA_destructor1(MiddleA *this_param);
void *MiddleB_destructor1(MiddleB *this);

/* Virtual function table pointer declarations */
extern _func_int_varargs *PTR_virtual_func_00011af0;
extern _func_int_varargs *PTR_virtual_func_00011b08;
extern _func_int_varargs *PTR_func_00011c20;
extern _func_int_varargs *PTR_func_00011c38;
extern _func_int_varargs *PTR_func_00011c54;
extern _func_int_varargs *PTR_func_00011b2c;
extern _func_int_varargs *PTR_func_00011b48;
extern _func_int_varargs *PTR_func_00011b68;
extern _func_int_varargs *PTR_func_00011b84;
extern int DAT_00011bfc;
extern int DAT_00011c04;
extern void *PTR__RTTIDerivedA_00011c68;
extern void *PTR__RTTIDerivedB_00011c7c;
extern char DAT_00011866[];
extern char DAT_0001188a[];
extern char DAT_000118a8[];
extern char DAT_000118c4[];
extern char DAT_000118e0[];
extern char DAT_000118fc[];
extern char DAT_00011919[];
extern char DAT_00011935[];
extern char DAT_00011951[];
extern char DAT_0001196d[];
extern char DAT_00011989[];
extern char DAT_000119a6[];
extern char DAT_000119c3[];
void *operator_new__(size_t size);
size_t strlen(const char *s);
void *__cxa_allocate_exception(size_t thrown_size);
void __cxa_throw(void *thrown_exception, void *tinfo, void *dest);
void operator_delete(void *ptr);
void operator_delete(void *ptr, size_t size);
void operator_delete__(void *ptr);
char *strncpy(char *dest, const char *src, size_t n);
int __printf_chk(int flag, const char *format, ...);
int puts(const char *s);
void __stack_chk_fail(void);
int __aeabi_d2iz(undefined4 a, undefined4 b);
int __aeabi_dcmpgt(double a, double b);
void *__dynamic_cast(void *ptr, void *src, void *dst, int offset);
void test_cpp_oo_features(void);

/* Basic undefined types for decompiler output */
typedef unsigned int undefined4;
typedef unsigned char undefined;
typedef unsigned char undefined1;
typedef unsigned short undefined2;

/* RTTI typeinfo forward reference */
typedef struct type_info type_info;


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_000109bc @ 000109bc */

void FUN_000109bc(void)

{
 (*(code *)(undefined *)0x0)();
 return;
}



/* Function: test_cpp_exception @ 00010b08 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_exception(void)

{
 uint32_t *puVar1;
 
 /* Unresolved local var: int result@[???] */
 puVar1 = (uint32_t *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* WARNING: Subroutine does not return */
 __cxa_throw(puVar1,0,0);
}



/* Function: main @ 00010bbc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 00010bcc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _GLOBAL__sub_I__Z20test_cpp_member_funcv(void)

{
 /* std::ios_base::Init::Init(&std::__ioinit); */
 /* __aeabi_atexit(&std::__ioinit,std::ios_base::Init::~Init,&__dso_handle); */
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: test_cpp_member_func @ 00010cf4 */

/* WARNING: Removing unreachable block (ram,0x00010d44) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_member_func(void)

{
 size_t sVar1;
 SimpleClass obj;
 
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int r3@[???] */
 strncpy(obj.name,"Test",0x1f);
 obj.name[0x1f] = '\0';
 sVar1 = strlen(obj.name);
 return sVar1 + 0x125c;
}



/* Function: test_cpp_constructor @ 00010d60 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_constructor(void)

{
 /* Unresolved local var: int result@[???]
 Unresolved local var: LifecycleClass obj@[???] */
 return LifecycleClass_static_instance_count * 0x3e9 + 0x15;
}



/* Function: call_virtual_func @ 00010d7c */

int call_virtual_func(Base *obj,int x)

{
 int iVar1;
 
 /* WARNING: Could not recover jumptable at 0x00010d84. Too many branches */
 /* WARNING: Treating indirect jump as call */
 iVar1 = (**obj->_vptr_Base)();
 return iVar1;
}



/* Function: test_cpp_virtual_func @ 00010d88 */

/* WARNING: Removing unreachable block (ram,0x00010df0) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_virtual_func(void)

{
 int iVar1;
 int iVar2;
 Base base;
 Derived derived;
 
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: Base * pb@[???]
 Unresolved local var: Base * pd@[???]
 Unresolved local var: int r3@[???]
 Unresolved local var: int r4@[???] */
 base._vptr_Base = (_func_int_varargs **)&PTR_virtual_func_00011af0;
 derived.super_Base._vptr_Base = (_func_int_varargs **)&PTR_virtual_func_00011b08;
 derived.multiplier = 3;
 iVar1 = call_virtual_func(&base,5);
 iVar2 = call_virtual_func(&derived.super_Base,5);
 return iVar1 + 0x15 + iVar2;
}



/* Function: test_cpp_multiple_inheritance @ 00010e08 */

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



/* Function: test_cpp_operator_overload @ 00010e10 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_operator_overload(void)

{
 /* Unresolved local var: Point p1@[???]
 Unresolved local var: Point p2@[???]
 Unresolved local var: Point p3@[???]
 Unresolved local var: bool eq@[???] */
 return 0x16;
}



/* Function: test_cpp_template_func @ 00010e18 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_func(void)

{
 int iVar1;
 undefined4 extraout_r0;
 int iVar2;
 undefined4 extraout_r1;
 double a_00;
 double b_00;
 int a;
 int b;
 int local_14;
 
 /* Unresolved local var: int r1@[???]
 Unresolved local var: double r2@[???] */
 local_14 = 0;
 iVar1 = template_max_int(3,7);
  iVar2 = __aeabi_d2iz(template_max_double(a_00,b_00), extraout_r1);
 a = 10;
 b = 0x14;
 template_swap_int(&a,&b);
 iVar2 = __aeabi_d2iz(extraout_r0, extraout_r1);
 if (local_14 != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return iVar2 + iVar1 + a + b;
}



/* Function: test_cpp_template_class @ 00010ec0 */

/* WARNING: Removing unreachable block (ram,0x00010f30) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_class(void)

{
 Container_int int_container;
 
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: Container_double double_container@[???]
 Unresolved local var: double r3@[???] */
 int_container.size = 1;
 int_container.data[0] = 10;
 Container_int_push(&int_container,0x14);
 Container_int_push(&int_container,0x1e);
 if (int_container.size < 1) {
 int_container.data[0] = 0;
 }
 return int_container.size + int_container.data[0] + 3;
}



/* Function: test_cpp_lambda @ 00010f40 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_lambda(void)

{
 /* Unresolved local var: int capture_by_value@[???]
 Unresolved local var: int capture_by_ref@[???]
 Unresolved local var: anon_struct_8_2_35feab7f lambda1@[???]
 Unresolved local var: anon_struct_1_0_00000001 lambda2@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 return 0x55;
}



/* Function: test_cpp_rtti @ 00010f48 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_rtti(void)

{
 int *piVar1;
 int *piVar2;
 int iVar3;
 int iVar4;
 char *__s;
 size_t sVar5;
 int iVar6;
 
 /* Unresolved local var: RTTIBase * obj1@[???]
 Unresolved local var: RTTIBase * obj2@[???]
 Unresolved local var: int result@[???] */
 piVar1 = (int *)(intptr_t)operator_new(4);
 *piVar1 = (intptr_t)&PTR__RTTIDerivedA_00011c68;
 piVar2 = (int *)(intptr_t)operator_new(4);
 *piVar2 = (intptr_t)&PTR__RTTIDerivedB_00011c7c;
 iVar3 = 1; /* std::type_info::operator== stubbed */
 if (iVar3 == 0) {
 iVar3 = 0;
 }
 else {
 iVar3 = 10;
 }
 iVar4 = 1; /* std::type_info::operator== stubbed */
 /* Unresolved local var: RTTIDerivedA * derivedA@[???] */
 if (iVar4 != 0) {
 iVar3 = iVar3 + 0x14;
 }
 iVar4 = (int)__dynamic_cast(piVar1,0,0,0); /* RTTIBase::typeinfo, RTTIDerivedA::typeinfo stubbed */
 /* Unresolved local var: RTTIDerivedB * derivedB@[???] */
 if (iVar4 != 0) {
 iVar3 = iVar3 + 100;
 }
 iVar4 = (int)__dynamic_cast(piVar2,0,0,0); /* RTTIBase::typeinfo, RTTIDerivedB::typeinfo stubbed */
 iVar6 = *(int *)(*(int *)(*(int *)piVar1 + -4) + 4);
 if (iVar4 != 0) {
 iVar3 = iVar3 + 200;
 }
 __s = *(char **)(*(int *)(iVar6 + -4) + 4);
 if (*__s == '*') {
 __s = __s + 1;
 }
 sVar5 = strlen(__s);
 (**(code **)(iVar6 + 4))(piVar1);
 (**(code **)(*piVar2 + 4))(piVar2);
 return iVar3 + sVar5;
}



/* Function: test_cpp_smart_ptr @ 00011038 */

/* WARNING: Removing unreachable block (ram,0x000110c0) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_smart_ptr(void)

{
 int __in_chrg;
 int __in_chrg_00;
 unique_ptr_int ptr1;
 unique_ptr_int ptr2;
 unique_ptr_int_array arr;
 
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: anon_struct_1_0_00000001_for__M_head_impl deleter@[???]
 Unresolved local var: unique_ptr_int_for_lambda ptr3@[???]
 Unresolved local var: int r3@[???] */
 ptr2._M_t.super___uniq_ptr_impl_int._M_t.
 super__Tuple_impl_0 =
 operator_new(4);
 *(undefined4 *)
 ptr2._M_t.super___uniq_ptr_impl_int._M_t.
 super__Tuple_impl_0 = 200;
 ptr1._M_t.super___uniq_ptr_impl_int._M_t.
 super__Tuple_impl_0 =
 0x0;
 arr._M_t.super___uniq_ptr_impl_int_array._M_t.
 super__Tuple_impl_0 =
 (int *)operator_new__(0x14);
 *(uint32_t *)
 arr._M_t.super___uniq_ptr_impl_int_array._M_t.
 super__Tuple_impl_0 = 1;
 *(undefined4 *)
 ((int)arr._M_t.super___uniq_ptr_impl_int_array._M_t.
 super__Tuple_impl_0 + 4) = 2;
 *(undefined4 *)
 ((int)arr._M_t.super___uniq_ptr_impl_int_array._M_t.
 super__Tuple_impl_0 + 8) = 3;
 *(undefined4 *)
 ((int)arr._M_t.super___uniq_ptr_impl_int_array._M_t.
 super__Tuple_impl_0 + 0xc) = 4;
 *(undefined4 *)
 ((int)arr._M_t.super___uniq_ptr_impl_int_array._M_t.
 super__Tuple_impl_0 + 0x10) = 5;
 std_unique_ptr_int_array_destructor(&arr,0);
 std_unique_ptr_int_destructor(&ptr2,0);
 std_unique_ptr_int_destructor(&ptr1,0);
 return 0x2bf;
}



/* Function: test_cpp_diamond_inheritance @ 000110ec */

/* WARNING: Removing unreachable block (ram,0x00011164) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */

int test_cpp_diamond_inheritance(void)

{
 int iVar1;
 int iVar2;
 DiamondDerived obj;
 
 /* Unresolved local var: VirtualBase * pb@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 obj.super_MiddleA._vptr_MiddleA = (_func_int_varargs **)&PTR_func_00011c20;
 obj._20_4_ = 0x32;
 obj.super_MiddleA.field_0x8 = (void *)&PTR_func_00011c38;
 obj._16_4_ = (int)&PTR_func_00011c54;
	iVar1 = DiamondDerived_func((DiamondDerived *)&obj);
	obj._20_4_ = 100;
 iVar2 = DiamondDerived_func((DiamondDerived *)&obj);
 DiamondDerived_destructor2(&obj);
 return iVar1 + iVar2;
}



/* Function: test_cpp_oo_features @ 0001117c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */

void test_cpp_oo_features(void)

{
 int iVar1;
 
 puts(DAT_00011866);
 iVar1 = test_cpp_member_func();
 __printf_chk(1,DAT_0001188a,iVar1);
 iVar1 = test_cpp_constructor();
 __printf_chk(1,DAT_000118a8,iVar1);
 iVar1 = test_cpp_virtual_func();
 __printf_chk(1,DAT_000118c4,iVar1);
 iVar1 = test_cpp_multiple_inheritance();
 __printf_chk(1,DAT_000118e0,iVar1);
 iVar1 = test_cpp_diamond_inheritance();
 __printf_chk(1,DAT_000118fc,iVar1);
 iVar1 = test_cpp_operator_overload();
 __printf_chk(1,DAT_00011919,iVar1);
 iVar1 = test_cpp_template_func();
 __printf_chk(1,DAT_00011935,iVar1);
 iVar1 = test_cpp_template_class();
 __printf_chk(1,DAT_00011951,iVar1);
 iVar1 = test_cpp_lambda();
 __printf_chk(1,DAT_0001196d,iVar1);
 iVar1 = test_cpp_exception();
 __printf_chk(1,DAT_00011989,iVar1);
 iVar1 = test_cpp_smart_ptr();
 __printf_chk(1,DAT_000119a6,iVar1);
 iVar1 = test_cpp_rtti();
 __printf_chk(1,DAT_000119c3,iVar1);
 return;
}



/* Function: virtual_func @ 000112b0 */

/* DWARF original prototype: int virtual_func(Base * this, int x) */

int Base_virtual_func(Base *this_param,int x)

{
 return x + 1;
}



/* Function: getName @ 000112b8 */

/* DWARF original prototype: char * getName(Base * this) */

char * Base_getName(Base *this_param)

{
 return "Base";
}



/* Function: ~Base @ 000112c4 */

/* DWARF original prototype: void * ~Base(Base * this, int __in_chrg) */

void * Base_destructor(Base *this_param,int __in_chrg)

{
 return this;
}



/* Function: virtual_func @ 000112c8 */

/* DWARF original prototype: int virtual_func(Derived * this_param, int x) */

int Derived_virtual_func(Derived *this_param,int x)

{
 return x * this_param->multiplier;
}



/* Function: getName @ 000112d4 */

/* DWARF original prototype: char * getName(Derived * this_param) */

char * Derived_getName(Derived *this_param)

{
 return "Derived";
}



/* Function: funcA @ 000112e0 */

/* DWARF original prototype: int funcA(MultiDerived * this_param) */

int MultiDerived_funcA(MultiDerived *this_param)

{
 return 0x1e;
}



/* Function: funcB @ 000112e8 */

/* DWARF original prototype: int funcB(MultiDerived * this_param) */

int MultiDerived_funcB(MultiDerived *this_param)

{
 return 0x28;
}



/* Function: funcB @ 000112f0 */

/* non-virtual thunk to MultiDerived::funcB() */

undefined4 MultiDerived_funcB_nonvirtual_thunk(MultiDerived *this_param)

{
 return 0x28;
}



/* Function: func @ 000112f8 */

/* DWARF original prototype: int func(VirtualBase * this_param) */

int VirtualBase_func(VirtualBase *this_param)

{
 return 100;
}



/* Function: ~VirtualBase @ 00011300 */

/* DWARF original prototype: void * ~VirtualBase(VirtualBase * this, int __in_chrg) */

void * VirtualBase_destructor(VirtualBase *this_param,int __in_chrg)

{
 return this;
}



/* Function: func @ 00011304 */

/* DWARF original prototype: int func(MiddleA * this_param) */

int MiddleA_func(MiddleA *this_param)

{
 return *(int *)((int)&this_param->dataA + (int)((intptr_t)this_param->_vptr_MiddleA[-3])) + 0x96;
}



/* Function: func @ 0001131c */
/* virtual thunk to MiddleA::func() */

int MiddleA_func_virtual_thunk(MiddleA *this_param)

{
	MiddleA *adjusted = (MiddleA *)((int)&this_param->_vptr_MiddleA + (int)this_param->_vptr_MiddleA[-3]);
	return MiddleA_func(adjusted);
}



/* Function: func @ 00011330 */

/* DWARF original prototype: int func(MiddleB * this_param) */

int MiddleB_func(MiddleB *this_param)

{
 return *(int *)((int)&this_param->dataB + (int)((intptr_t)this_param->_vptr_MiddleB[-3])) + 200;
}



/* Function: func @ 00011348 */
/* virtual thunk to MiddleB::func() */

int MiddleB_func_virtual_thunk(MiddleB *this_param)

{
	MiddleB *adjusted = (MiddleB *)((int)&this_param->_vptr_MiddleB + (int)this_param->_vptr_MiddleB[-3]);
	return MiddleB_func(adjusted);
}



/* Function: func @ 0001135c */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: int func(DiamondDerived * this_param) */

int DiamondDerived_func(DiamondDerived *this_param)

{
 return *(int *)((int)&(this_param->super_MiddleA).dataA + (int)((intptr_t)(this_param->super_MiddleA)._vptr_MiddleA[-3]))
 + 0xfa;
}



/* Function: func @ 00011374 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::func() */

void DiamondDerived_func_virtual_thunk(DiamondDerived *this_param)

{
 DiamondDerived_func((DiamondDerived *)
 ((int)&(this_param->super_MiddleA)._vptr_MiddleA + (int)((intptr_t)(this_param->super_MiddleA)._vptr_MiddleA[-3])));
 return;
}



/* Function: func @ 00011388 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::func() */

void DiamondDerived_func_nonvirtual_thunk(DiamondDerived *this_param)

{
 DiamondDerived_func((DiamondDerived *)&((DiamondDerived *)this_param)[-1].field_0x10);
 return;
}



/* Function: ~MiddleA @ 00011390 */

/* DWARF original prototype: void * ~MiddleA(MiddleA * this_param) */

void * MiddleA_destructor1(MiddleA *this_param)

{
 this_param->_vptr_MiddleA = (_func_int_varargs **)&PTR_func_00011b2c;
 this_param->field_0x8 = (void *)&PTR_func_00011b48;
 return this_param;
}



/* Function: ~MiddleA @ 000113a8 */
/* virtual thunk to MiddleA::~MiddleA() */

void MiddleA_destructor_virtual_thunk(MiddleA *this_param)

{
 _func_int_varargs *p_Var1;
 MiddleA *adjusted;
 
 p_Var1 = this_param->_vptr_MiddleA[-4];
 adjusted = (MiddleA *)((int)&this_param->_vptr_MiddleA + (int)p_Var1);
 adjusted->_vptr_MiddleA = (_func_int_varargs **)&PTR_func_00011b2c;
 adjusted->field_0x8 = (void *)&PTR_func_00011b48;
 return;
}



/* Function: ~MiddleB @ 000113d0 */

/* DWARF original prototype: void * ~MiddleB(MiddleB * this_param) */

void * MiddleB_destructor1(MiddleB *this_param)

{
 this_param->_vptr_MiddleB = (_func_int_varargs **)&PTR_func_00011b68;
 this_param->field_0x8 = (void *)&PTR_func_00011b84;
 return this_param;
}



/* Function: ~MiddleB @ 000113e8 */
/* virtual thunk to MiddleB::~MiddleB() */

void MiddleB_destructor_virtual_thunk(MiddleB *this_param)

{
 _func_int_varargs *p_Var1;
 MiddleB *adjusted;
 
 p_Var1 = this_param->_vptr_MiddleB[-4];
 adjusted = (MiddleB *)((int)&this_param->_vptr_MiddleB + (int)p_Var1);
 adjusted->_vptr_MiddleB = (_func_int_varargs **)&PTR_func_00011b68;
 adjusted->field_0x8 = (void *)&PTR_func_00011b84;
 return;
}



/* Function: getType @ 00011410 */

/* DWARF original prototype: int getType(RTTIDerivedA * this) */

int RTTIDerivedA_getType(RTTIDerivedA *this_param)

{
 return 1;
}



/* Function: getType @ 00011418 */

/* DWARF original prototype: int getType(RTTIDerivedB * this) */

int RTTIDerivedB_getType(RTTIDerivedB *this_param)

{
 return 2;
}



/* Function: ~RTTIDerivedB @ 00011420 */

/* DWARF original prototype: void * ~RTTIDerivedB(RTTIDerivedB * this, int __in_chrg) */

void * RTTIDerivedB_destructor(RTTIDerivedB *this_param,int __in_chrg)

{
 return this;
}



/* Function: ~RTTIDerivedA @ 00011424 */

/* DWARF original prototype: void * ~RTTIDerivedA(RTTIDerivedA * this, int __in_chrg) */

void * RTTIDerivedA_destructor(RTTIDerivedA *this_param,int __in_chrg)

{
 return this;
}



/* Function: ~MultiDerived @ 00011428 */

/* DWARF original prototype: void * ~MultiDerived(MultiDerived * this, int __in_chrg) */

void * MultiDerived_destructor1(MultiDerived *this_param,int __in_chrg)

{
 return this;
}



/* Function: ~MultiDerived @ 0001142c */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

BaseB * MultiDerived_destructor_nonvirtual_thunk(MultiDerived *this_param)

{
 return &this_param[-1].super_BaseB;
}



/* Function: ~Derived @ 00011434 */

/* DWARF original prototype: void * ~Derived(Derived * this, int __in_chrg) */

void * Derived_destructor(Derived *this_param,int __in_chrg)

{
 return this;
}



/* Function: ~Base @ 00011438 */

/* DWARF original prototype: void * ~Base(Base * this, int __in_chrg) */

void * Base_deleting_destructor(Base *this_param,int __in_chrg)

{
 operator_delete(this_param);
 return this_param;
}



/* Function: ~Derived @ 00011450 */

/* DWARF original prototype: void * ~Derived(Derived * this, int __in_chrg) */

void * Derived_deleting_destructor(Derived *this_param,int __in_chrg)

{
 operator_delete(this_param);
 return this_param;
}



/* Function: ~MultiDerived @ 00011468 */

/* DWARF original prototype: void * ~MultiDerived(MultiDerived * this, int __in_chrg) */

void * MultiDerived_deleting_destructor(MultiDerived *this_param,int __in_chrg)

{
 operator_delete(this_param);
 return this_param;
}



/* Function: ~MultiDerived @ 00011480 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void MultiDerived_deleting_destructor_nonvirtual_thunk(MultiDerived *this_param)

{
 MultiDerived_deleting_destructor((MultiDerived *)&this_param[-1].super_BaseB,0);
 return;
}



/* Function: ~VirtualBase @ 00011488 */

/* DWARF original prototype: void * ~VirtualBase(VirtualBase * this, int __in_chrg) */

void * VirtualBase_deleting_destructor(VirtualBase *this_param,int __in_chrg)

{
 operator_delete(this_param);
 return this_param;
}



/* Function: ~RTTIDerivedB @ 000114a0 */

/* DWARF original prototype: void * ~RTTIDerivedB(RTTIDerivedB * this, int __in_chrg) */

void * RTTIDerivedB_deleting_destructor(RTTIDerivedB *this_param,int __in_chrg)

{
 operator_delete(this_param);
 return this_param;
}



/* Function: ~RTTIDerivedA @ 000114b8 */

/* DWARF original prototype: void * ~RTTIDerivedA(RTTIDerivedA * this, int __in_chrg) */

void * RTTIDerivedA_deleting_destructor(RTTIDerivedA *this_param,int __in_chrg)

{
 operator_delete(this_param);
 return this_param;
}



/* Function: ~MiddleA @ 000114d0 */

/* DWARF original prototype: void * ~MiddleA(MiddleA * this_param) */

void * MiddleA_deleting_destructor(MiddleA *this_param)

{
 this_param->_vptr_MiddleA = (_func_int_varargs **)&PTR_func_00011b2c;
 this_param->field_0x8 = (void *)&PTR_func_00011b48;
 operator_delete(this_param);
 return this_param;
}



/* Function: ~MiddleA @ 000114fc */

/* virtual thunk to MiddleA::~MiddleA() */

void MiddleA_destructor_virtual_thunk2(MiddleA *this_param)

{
 MiddleA_destructor((MiddleA *)((int)&this_param->_vptr_MiddleA + (int)this_param->_vptr_MiddleA[-4]), 1, (void **)0);
 return;
}



/* Function: ~MiddleB @ 00011510 */

/* DWARF original prototype: void * ~MiddleB(MiddleB * this_param) */

void * MiddleB_deleting_destructor(MiddleB *this_param)

{
	this_param->_vptr_MiddleB = (_func_int_varargs **)&PTR_func_00011b68;
	this_param->field_0x8 = (void *)&PTR_func_00011b84;
	operator_delete(this_param);
 return this_param;
}



/* Function: ~MiddleB @ 0001153c */
/* virtual thunk to MiddleB::~MiddleB() */

void MiddleB_destructor_virtual_thunk2(MiddleB *this_param)

{
 MiddleB *adjusted = (MiddleB *)((int)&this_param->_vptr_MiddleB + (int)this_param->_vptr_MiddleB[-4]);
 MiddleB_destructor(adjusted, 1, 0);
 return;
}



/* Function: ~MiddleA @ 00011550 */

/* DWARF original prototype: void * ~MiddleA(MiddleA * this_param, void * * __vtt_parm) */

void * MiddleA_destructor(MiddleA *this_param,int __in_chgr,void **__vtt_parm)

{
	_func_int_varargs **pp_Var1;
 
	pp_Var1 = (_func_int_varargs **)(void *)__vtt_parm;
	this_param->_vptr_MiddleA = (_func_int_varargs **)pp_Var1;
	*(void **)((int)&this_param->_vptr_MiddleA + (int)(long)(void *)pp_Var1[-3]) = (void *)__vtt_parm[1];
	return this_param;
}



/* Function: ~MiddleB @ 00011568 */

/* DWARF original prototype: void * ~MiddleB(MiddleB * this_param, void * * __vtt_parm) */

void * MiddleB_destructor(MiddleB *this_param,int __in_chgr,void **__vtt_parm)

{
 _func_int_varargs **pp_Var1;
 
 pp_Var1 = (_func_int_varargs **)(void *)__vtt_parm;
 this_param->_vptr_MiddleB = (_func_int_varargs **)pp_Var1;
 *(void **)((int)&this_param->_vptr_MiddleB + (int)(long)(void *)pp_Var1[-3]) = (void *)__vtt_parm[1];
 return this_param;
}



/* Function: template_max<int> @ 00011580 */

int template_max_int(int a,int b)

{
 if (a < b) {
 a = b;
 }
 return a;
}



/* Function: template_max<double> @ 0001158c */

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x000115a0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

double template_max_double(double a,double b)

{
 int cmp_result;
 cmp_result = __aeabi_dcmpgt(a, b);
 if (cmp_result == 0) {
 return b;
 }
 return a;
}



/* Function: template_swap<int> @ 000115bc */

void template_swap_int(int *a,int *b)

{
 int iVar1;
 
 /* Unresolved local var: int temp@[???] */
 iVar1 = *a;
 *a = *b;
 *b = iVar1;
 return;
}



/* Function: Container @ 000115d0 */

/* DWARF original prototype: Container_int * Container(Container_int * this) */

Container_int * Container_int_Constructor(Container_int *this_param)

{
 this_param->size = 0;
 return this_param;
}



/* Function: push @ 000115dc */

/* DWARF original prototype: void push(Container_int * this, int value) */

void Container_int_push(Container_int *this_param,int value)

{
 int iVar1;
 
 iVar1 = this_param->size;
	if (iVar1 < 10) {
 this_param->size = iVar1 + 1;
 this_param->data[iVar1] = value;
 }
 return;
}



/* Function: get @ 000115f4 */

/* DWARF original prototype: int get(Container_int * this, int idx) */

int Container_int_get(Container_int *this_param,int idx)

{
 if ((-1 < idx) && (idx < this_param->size)) {
 return this_param->data[idx];
 }
 return 0;
}



/* Function: getSize @ 00011618 */

/* DWARF original prototype: int getSize(Container_int * this) */

int Container_int_getSize(Container_int *this_param)

{
 return this_param->size;
}



/* Function: Container @ 00011620 */

/* DWARF original prototype: Container_double * Container(Container_double * this) */

Container_double * Container_double_Constructor(Container_double *this_param)

{
 this_param->size = 0;
 return this_param;
}



/* Function: push @ 0001162c */

/* DWARF original prototype: void push(Container_double * this, double value) */

void Container_double_push(Container_double *this_param,double value)

{
 int iVar1;
 undefined4 in_r2;
 undefined4 in_r3;
 
	iVar1 = this_param->size;
 if (9 < iVar1) {
 return;
 }
 this_param->size = iVar1 + 1;
 this_param->data[iVar1] = *(double *)&in_r2;
 return;
}



/* Function: get @ 0001164c */

/* DWARF original prototype: double get(Container_double * this_param, int idx) */

double Container_double_get(Container_double *this_param,int idx)

{
 if ((-1 < idx) && (idx < this_param->size)) {
 return this_param->data[idx];
 }
 return 0.0;
}



/* Function: getSize @ 00011678 */

/* DWARF original prototype: int getSize(Container_double * this_param) */

int Container_double_getSize(Container_double *this_param)

{
 return this_param->size;
}



/* Function: ~unique_ptr @ 00011680 */

/* DWARF original prototype: void * ~unique_ptr(unique_ptr_int * this,
 int __in_chrg) */

void *
std_unique_ptr_int_destructor
 (unique_ptr_int *this_param,int __in_chrg)

{
 void *_Var1;
 
 /* Unresolved local var: int * * __ptr@[DW_OP_reg0(r0)] */
 _Var1 = (this_param->_M_t).super___uniq_ptr_impl_int._M_t.
 super__Tuple_impl_0;
 if (_Var1 != (void *)0x0) {
 operator_delete(_Var1);
 }
 return this_param;
}



/* Function: ~unique_ptr @ 000116a4 */

/* DWARF original prototype: void * ~unique_ptr(unique_ptr_int_array *
 this, int __in_chrg) */

void *
std_unique_ptr_int_array_destructor
 (unique_ptr_int_array *this_param,int __in_chrg)

{
 void *_Var1;
 
 /* Unresolved local var: int * * __ptr@[DW_OP_reg0(r0)] */
 _Var1 = (this_param->_M_t).super___uniq_ptr_impl_int_array._M_t.
 super__Tuple_impl_0;
 if (_Var1 != (void *)0x0) {
 operator_delete__((void *)_Var1);
 }
 return this_param;
}



/* Function: ~DiamondDerived @ 000116c4 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void * ~DiamondDerived(DiamondDerived * this, int __in_chrg, void * *
 __vtt_parm) */

void *
DiamondDerived_destructor1(DiamondDerived *this_param,int __in_chrg,void **__vtt_parm)

{
 undefined1 *this_00;
 undefined **__vtt_parm_00;
 void **ppuVar1;
 _func_int_varargs *p_Var2;
 
 if (__in_chrg == 0) {
 ppuVar1 = *__vtt_parm;
 }
 else {
 ppuVar1 = (void **)&PTR_func_00011c20;
 }
 (this_param->super_MiddleA)._vptr_MiddleA = (_func_int_varargs **)ppuVar1;
	if (__in_chrg == 0) {
		p_Var2 = ((_func_int_varargs **)ppuVar1)[-3];
		ppuVar1 = (void **)(void *)__vtt_parm[5];
	}
	else {
		p_Var2 = (_func_int_varargs *)0x10;
		ppuVar1 = (void **)&PTR_func_00011c54;
	}
	*(_func_int_varargs ***)(p_Var2 + (int)&(this_param->super_MiddleA)._vptr_MiddleA) = (_func_int_varargs **)(void *)ppuVar1;
	if (__in_chrg == 0) {
 ppuVar1 = (void **)(void *)__vtt_parm[6];
 __vtt_parm_00 = (void **)__vtt_parm + 3;
 }
 else {
 ppuVar1 = (void **)&PTR_func_00011c38;
 __vtt_parm_00 = (void **)__vtt_parm + 3;
 }
	this_00 = &(this_param->super_MiddleA).field_0x8;
 *(void **)this_00 = (void *)(void *)ppuVar1;
	MiddleB_destructor((MiddleB *)&this_param->field_0x10, __in_chrg, __vtt_parm_00);
	if (__in_chrg == 0) {
 ppuVar1 = (void **)(void *)__vtt_parm + 1;
 }
 else {
 ppuVar1 = (void **)&PTR_func_00011bfc;
 }
	MiddleA_destructor(&this_param->super_MiddleA, __in_chrg, (void **)ppuVar1);
 return this_param;
}



/* Function: ~DiamondDerived @ 00011748 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void * ~DiamondDerived(DiamondDerived * this) */

void * DiamondDerived_destructor2(DiamondDerived *this_param)

{
 void *pvVar1;
 
 pvVar1 = DiamondDerived_destructor(this_param,2,(void **)0);
 return pvVar1;
}



/* Function: ~DiamondDerived @ 00011754 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_destructor_nonvirtual_thunk(DiamondDerived *this_param)

{
 DiamondDerived_destructor((DiamondDerived *)&this_param[-1].field_0x10);
 return;
}



/* Function: ~DiamondDerived @ 0001175c */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::~DiamondDerived() */

void * DiamondDerived_destructor_virtual_thunk(DiamondDerived *this_param)

{
 void *result;
 result = DiamondDerived_destructor((DiamondDerived *)
 ((int)&(this_param->super_MiddleA)._vptr_MiddleA +
 (int)(this_param->super_MiddleA)._vptr_MiddleA[-4]), 1, (void **)0);
 return result;
}



/* Function: ~DiamondDerived @ 00011770 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void * ~DiamondDerived(DiamondDerived * this) */

void * DiamondDerived_deleting_destructor(DiamondDerived *this_param)

{
 DiamondDerived_destructor(this_param,2,(void **)0);
 operator_delete(this_param,0x18);
 return this_param;
}



/* Function: ~DiamondDerived @ 00011790 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_deleting_destructor_nonvirtual_thunk(DiamondDerived *this_param)

{
 DiamondDerived_deleting_destructor((DiamondDerived *)&this_param[-1].field_0x10);
 return;
}



/* Function: ~DiamondDerived @ 00011798 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_deleting_destructor_virtual_thunk(DiamondDerived *this_param)

{
 DiamondDerived_deleting_destructor((DiamondDerived *)
 ((int)&(this_param->super_MiddleA)._vptr_MiddleA +
 (int)(this_param->super_MiddleA)._vptr_MiddleA[-4]));
 return;
}



/* Function: ~DiamondDerived @ 000117ac */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void * ~DiamondDerived(DiamondDerived * this, void * * __vtt_parm) */

void * DiamondDerived_destructor3(DiamondDerived *this_param,void **__vtt_parm)

{
 void *pvVar1;
 
 pvVar1 = DiamondDerived_destructor(this_param,0,__vtt_parm);
 return pvVar1;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 86 */
