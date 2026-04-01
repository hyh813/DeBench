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

/* Forward declarations for C++ classes */
struct Base;
struct Derived;
struct MultiDerived;
struct BaseA;
struct BaseB;
struct VirtualBase;
struct MiddleA;
struct MiddleB;
struct DiamondDerived;
struct RTTIBase;
struct RTTIDerivedA;
struct RTTIDerivedB;
struct SimpleClass;
struct LifecycleClass;
struct Point;
struct Container_int;
struct Container_double;
struct unique_ptr_int;
struct unique_ptr_int_array;

/* Forward declarations for functions */
extern void test_cpp_oo_features(void);
extern int template_max_int(int a, int b);
extern double template_max_double(double a, double b);
extern void template_swap_int(int *a, int *b);
extern void Container_int_push(struct Container_int *this_, int value);

typedef int (*_func_int_varargs)(void *, int);
typedef void (*_func_void)(void);

/* Additional type definitions for decompiled code */
typedef int undefined;
typedef int undefined4;
typedef void * undefined1;

/* Ghidra macro for extracting lower 32 bits of 64-bit value */
#define SUB84(val, offset) ((int)(val))

/* External function declarations */
extern void *operator_new(size_t size);
extern void *operator_new__(size_t size);

/* Stub implementation for operator_new__ */
void *operator_new__(size_t size) {
    return operator_new(size);
}

/* Implementation of operator_delete */
void operator_delete(void *ptr, ...) {
    /* Stub implementation - in real code this would free memory */
    (void)ptr;
}
extern void *__cxa_allocate_exception(size_t size);
extern void __cxa_throw(void *exc, void *typeinfo, void *dest);
extern void *__dynamic_cast(void *obj, void *src_type, void *dst_type, int src_dst_type_offset);
extern void __stack_chk_fail(void);
extern int __aeabi_d2iz(int, int);
extern int __aeabi_dcmpgt(int, int, int);
extern void *memcpy(void *dest, const void *src, size_t n);
extern char *strncpy(char *dest, const char *src, size_t n);
extern int puts(const char *s);

/* Implementation of __printf_chk */
void __printf_chk(int flag, const char *format, ...) {
    /* Stub implementation */
    (void)flag;
    (void)format;
}

/* Implementation of strlen */
size_t strlen(const char *s) {
    size_t len = 0;
    while (s[len] != '\0') {
        len++;
    }
    return len;
}

/* Implementation of strncpy */
char *strncpy(char *dest, const char *src, size_t n) {
    size_t i;
    for (i = 0; i < n && src[i] != '\0'; i++) {
        dest[i] = src[i];
    }
    for (; i < n; i++) {
        dest[i] = '\0';
    }
    return dest;
}

/* Implementation of puts */
int puts(const char *s) {
    /* Stub implementation */
    (void)s;
    return 0;
}

/* Implementation of __cxa_throw */
void __cxa_throw(void *exc, void *typeinfo, void *dest) {
    /* Stub implementation - does not return in real code */
    (void)exc;
    (void)typeinfo;
    (void)dest;
}

/* Implementation of __aeabi_d2iz */
int __aeabi_d2iz(int a, int b) {
    /* Stub implementation */
    (void)a;
    (void)b;
    return 0;
}

/* Implementation of __aeabi_dcmpgt */
int __aeabi_dcmpgt(int a, int b, int c) {
    /* Stub implementation */
    (void)a;
    (void)b;
    (void)c;
    return 0;
}

/* Stub implementation for operator_new */
void *operator_new(size_t size) {
    /* In real code this would allocate memory */
    (void)size;
    return (void *)0x1000;
}

/* Stub implementation for __cxa_allocate_exception */
void *__cxa_allocate_exception(size_t size) {
    /* In real code this would allocate exception memory */
    (void)size;
    return (void *)0x2000;
}

/* Stub implementation for std_type_info_operator_eq */
int std_type_info_operator_eq(std::type_info *a, std::type_info *b) {
    /* Stub implementation - compare type info pointers */
    return (a == b) ? 1 : 0;
}

/* Stub implementation for __dynamic_cast */
void *__dynamic_cast(void *obj, void *src_type, void *dst_type, int src_dst_type_offset) {
    /* Stub implementation - return non-null to indicate success */
    (void)obj;
    (void)src_type;
    (void)dst_type;
    (void)src_dst_type_offset;
    return (void *)0x3000;
}

extern int __aeabi_atexit(void *obj, void (*dtor)(void *), void *dso);
extern void *__dso_handle;
extern void *unique_ptr_int_destructor(struct unique_ptr_int *this_, int __in_chrg);
extern void *unique_ptr_int_array_destructor(struct unique_ptr_int_array *this_, int __in_chrg);
extern int DiamondDerived_func(struct DiamondDerived *this_);

/* Forward declarations for std namespace */
/* namespace std { */
  struct type_info {
    const char *_M_name;
  };
  extern void *__ioinit;
  extern void *__dso_handle;
/* } */

/* Missing typeinfo declarations */
void *RTTIDerivedA_typeinfo = (void *)0;
void *RTTIDerivedB_typeinfo = (void *)0;
void *RTTIBase_typeinfo = (void *)0;
extern int std_type_info_operator_eq(std::type_info *a, std::type_info *b);

/* Missing pointer declarations */
void *PTR_func_00011b2c = (void *)0;
void *PTR_func_00011b48 = (void *)0;
void *PTR_func_00011b68 = (void *)0;
void *PTR_func_00011b84 = (void *)0;
void *PTR_func_00011c20 = (void *)0;
void *PTR_func_00011c38 = (void *)0;
void *PTR_func_00011c54 = (void *)0;
void *PTR_DAT_00011bfc = (void *)0;
void *PTR_DAT_00011c04 = (void *)0;
void *PTR_virtual_func_00011af0 = (void *)0;
void *PTR_virtual_func_00011b08 = (void *)0;
extern void *DiamondDerived_destructor2(struct DiamondDerived *obj);
char DAT_00011866[] = "Testing C++ OO features\n";
char DAT_0001188a[] = "Member func result: %d\n";
char DAT_000118a8[] = "Constructor result: %d\n";
char DAT_000118c4[] = "Virtual func result: %d\n";
char DAT_000118e0[] = "Multiple inheritance result: %d\n";
char DAT_000118fc[] = "Diamond inheritance result: %d\n";
char DAT_00011919[] = "Operator overload result: %d\n";
char DAT_00011935[] = "Template func result: %d\n";
char DAT_00011951[] = "Template class result: %d\n";
char DAT_0001196d[] = "Lambda result: %d\n";
char DAT_00011989[] = "Exception result: %d\n";
char DAT_000119a6[] = "Smart ptr result: %d\n";
char DAT_000119c3[] = "RTTI result: %d\n";
extern void *PTR_virtual_func_00011b08;
void *PTR__RTTIDerivedA_00011c68 = (void *)0;
void *PTR__RTTIDerivedB_00011c7c = (void *)0;

/* Struct definitions */
struct Base {
    _func_int_varargs **_vptr_Base;
};

struct Derived {
    struct Base super_Base;
    int multiplier;
};

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

struct VirtualBase {
    _func_int_varargs **_vptr_VirtualBase;
    int data;
};

struct MiddleA {
    _func_int_varargs **_vptr_MiddleA;
    int dataA;
    int field_0x8;
};

struct MiddleB {
    _func_int_varargs **_vptr_MiddleB;
    int dataB;
    int field_0x8;
};

struct DiamondDerived {
    struct MiddleA super_MiddleA;
    int _16_4_;
    int _20_4_;
    int field_0x8;
    int field_0x10;
};

struct RTTIBase {
    void *typeinfo;
};

struct RTTIDerivedA {
    struct RTTIBase super;
};

struct RTTIDerivedB {
    struct RTTIBase super;
};

struct SimpleClass {
    char name[32];
};

struct LifecycleClass {
    int dummy;
    int instance_count;
};

struct Point {
    int x;
    int y;
};

struct Container_int {
    int size;
    int data[10];
};

struct Container_double {
    int size;
    double data[10];
};

struct unique_ptr_int {
    void *_M_t;
};

struct unique_ptr_int_array {
    void *_M_t;
};

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/5-1/5-1_gcc_Os_g
 * Processor: ARM
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_000109bc @ 000109bc */

void FUN_000109bc(void)

{
 ((void (*)(void))0x0)();
 return;
}



/* Function: test_cpp_exception @ 00010b08 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_exception(void)

{
 undefined4 *puVar1;
 
 /* Unresolved local var: int result@[???] */
 puVar1 = (undefined4 *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* WARNING: Subroutine does not return */
 __cxa_throw(puVar1,(void *)0,(void *)0);
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
 return 0x3e9 + 0x15;
}



/* Function: call_virtual_func @ 00010d7c */

int call_virtual_func(Base *obj,int x)

{
 int iVar1;
 
 /* WARNING: Could not recover jumptable at 0x00010d84. Too many branches */
 /* WARNING: Treating indirect jump as call */
 iVar1 = (*obj->_vptr_Base)[0](obj, x);
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
 template_max_double(a_00,b_00);
 a = 10;
 b = 0x14;
 template_swap_int(&a,&b);
 iVar2 = __aeabi_d2iz(extraout_r0,extraout_r1);
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
 piVar1 = (int *)operator_new(4);
 *piVar1 = (int)&PTR__RTTIDerivedA_00011c68;
 piVar2 = (int *)operator_new(4);
 *piVar2 = (int)&PTR__RTTIDerivedB_00011c7c;
 iVar3 = std_type_info_operator_eq
 (*(std::type_info **)(*piVar1 + -4),(std::type_info *)&RTTIDerivedA_typeinfo);
 if (iVar3 == 0) {
 iVar3 = 0;
 }
 else {
 iVar3 = 10;
 }
 iVar4 = std_type_info_operator_eq
 (*(std::type_info **)(*piVar2 + -4),(std::type_info *)&RTTIDerivedB_typeinfo);
 /* Unresolved local var: RTTIDerivedA * derivedA@[???] */
 if (iVar4 != 0) {
 iVar3 = iVar3 + 0x14;
 }
 iVar4 = (int)__dynamic_cast(piVar1,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0);
 /* Unresolved local var: RTTIDerivedB * derivedB@[???] */
 if (iVar4 != 0) {
 iVar3 = iVar3 + 100;
 }
 iVar4 = (int)__dynamic_cast(piVar2,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo,0);
 iVar6 = *piVar1;
 if (iVar4 != 0) {
 iVar3 = iVar3 + 200;
 }
 __s = *(char **)(*(int *)(iVar6 + -4) + 4);
 if (*__s == '*') {
 __s = __s + 1;
 }
 sVar5 = strlen(__s);
 ((void (*)(void *))(*(void **)(iVar6 + 4)))(piVar1);
 ((void (*)(void *))(*(void **)(*piVar2 + 4)))(piVar2);
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
 Unresolved local var: unique_ptr<int,_test_cpp_smart_ptr()::<lambda(int*)>_>
 ptr3@[???]
 Unresolved local var: int r3@[???] */
 ptr2._M_t = operator_new(4);
 *(undefined4 *)ptr2._M_t = 200;
 ptr1._M_t = (void *)0x0;
 arr._M_t = operator_new__(0x14);
 *(undefined4 *)arr._M_t = 1;
 *(undefined4 *)((int)arr._M_t + 4) = 2;
 *(undefined4 *)((int)arr._M_t + 8) = 3;
 *(undefined4 *)((int)arr._M_t + 0xc) = 4;
 *(undefined4 *)((int)arr._M_t + 0x10) = 5;
 unique_ptr_int_array_destructor(&arr,1);
 unique_ptr_int_destructor(&ptr2,__in_chrg);
 unique_ptr_int_destructor(&ptr1,__in_chrg_00);
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
 obj.super_MiddleA.field_0x8 = (int)&PTR_func_00011c38;
 obj._16_4_ = (int)&PTR_func_00011c54;
 iVar1 = DiamondDerived_func((DiamondDerived *)&obj.field_0x10);
 obj._20_4_ = 100;
 iVar2 = DiamondDerived_func((DiamondDerived *)&obj.field_0x10);
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

int Base_virtual_func(struct Base *this_,int x)

{
 return x + 1;
}



/* Function: getName @ 000112b8 */

/* DWARF original prototype: char * getName(Base * this) */

char * Base_getName(struct Base *this_)

{
 return "Base";
}



/* Function: Base_destructor @ 000112c4 */

/* DWARF original prototype: void * ~Base(Base * this, int __in_chrg) */

void * Base_destructor(struct Base *this_,int __in_chrg_)

{
 return this_;
}



/* Function: virtual_func @ 000112c8 */

/* DWARF original prototype: int virtual_func(Derived * this, int x) */

int Derived_virtual_func(struct Derived *this_,int x)

{
 return x * this_->multiplier;
}



/* Function: getName @ 000112d4 */

/* DWARF original prototype: char * getName(Derived * this) */

char * Derived_getName(struct Derived *this_)

{
 return "Derived";
}



/* Function: funcA @ 000112e0 */

/* DWARF original prototype: int funcA(MultiDerived * this) */

int MultiDerived_funcA(struct MultiDerived *this_)

{
 return 0x1e;
}



/* Function: funcB @ 000112e8 */

/* DWARF original prototype: int funcB(MultiDerived * this) */

int MultiDerived_funcB(struct MultiDerived *this_)

{
 return 0x28;
}



/* Function: funcB @ 000112f0 */

/* non-virtual thunk to MultiDerived::funcB() */

undefined4 MultiDerived_funcB_thunk(struct MultiDerived *this_)

{
 return 0x28;
}



/* Function: func @ 000112f8 */

/* DWARF original prototype: int func(VirtualBase * this) */

int VirtualBase_func(struct VirtualBase *this_)

{
 return 100;
}



/* Function: VirtualBase_destructor @ 00011300 */

/* DWARF original prototype: void * ~VirtualBase(VirtualBase * this, int __in_chrg) */

void * VirtualBase_destructor(struct VirtualBase *this_,int __in_chrg_)

{
 return this_;
}



/* Function: func @ 00011304 */

/* DWARF original prototype: int func(MiddleA * this) */

int MiddleA_func(struct MiddleA *this_)

{
 return *(int *)((int)&this_->dataA + (int)this_->_vptr_MiddleA[-3]) + 0x96;
}



/* Function: func @ 0001131c */

/* virtual thunk to MiddleA::func() */

void MiddleA_func_thunk(struct MiddleA *this_)

{
 MiddleA_func((struct MiddleA *)((int)&this_->_vptr_MiddleA + (int)this_->_vptr_MiddleA[-3]));
 return;
}



/* Function: func @ 00011330 */

/* DWARF original prototype: int func(MiddleB * this) */

int MiddleB_func(struct MiddleB *this_)

{
 return *(int *)((int)&this_->dataB + (int)this_->_vptr_MiddleB[-3]) + 200;
}



/* Function: func @ 00011348 */

/* virtual thunk to MiddleB::func() */

void MiddleB_func_thunk(struct MiddleB *this_)

{
 MiddleB_func((struct MiddleB *)((int)&this_->_vptr_MiddleB + (int)this_->_vptr_MiddleB[-3]));
 return;
}



/* Function: func @ 0001135c */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: int func(DiamondDerived * this) */

int DiamondDerived_func(struct DiamondDerived *this_)

{
 return *(int *)((int)&(this_->super_MiddleA).dataA + (int)(this_->super_MiddleA)._vptr_MiddleA[-3])
 + 0xfa;
}



/* Function: func @ 00011374 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::func() */

void DiamondDerived_func_thunk(struct DiamondDerived *this_)

{
 DiamondDerived_func((struct DiamondDerived *)
 ((int)&(this_->super_MiddleA)._vptr_MiddleA + (int)(this_->super_MiddleA)._vptr_MiddleA[-3]));
 return;
}



/* Function: func @ 00011388 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::func() */

void DiamondDerived_func_thunk2(struct DiamondDerived *this_)

{
 DiamondDerived_func((struct DiamondDerived *)&this_[-1].field_0x10);
 return;
}



/* Function: MiddleA_destructor @ 00011390 */

/* DWARF original prototype: void * ~MiddleA(MiddleA * this) */

void * MiddleA_destructor(struct MiddleA *this_)

{
 this_->_vptr_MiddleA = (_func_int_varargs **)&PTR_func_00011b2c;
 this_->field_0x8 = (int)&PTR_func_00011b48;
 return this_;
}



/* Function: MiddleA_destructor_thunk @ 000113a8 */

/* virtual thunk to MiddleA::~MiddleA() */

void MiddleA_destructor_thunk(struct MiddleA *this_)

{
 _func_int_varargs *p_Var1;
 
 p_Var1 = this_->_vptr_MiddleA[-4];
 *(void ***)((int)&this_->_vptr_MiddleA + (int)p_Var1) = &PTR_func_00011b2c;
 *(void **)(&this_->field_0x8 + (int)p_Var1) = &PTR_func_00011b48;
 return;
}



/* Function: MiddleB_destructor @ 000113d0 */

/* DWARF original prototype: void * ~MiddleB(MiddleB * this) */

void * MiddleB_destructor(struct MiddleB *this_)

{
 this_->_vptr_MiddleB = (_func_int_varargs **)&PTR_func_00011b68;
 this_->field_0x8 = (int)&PTR_func_00011b84;
 return this_;
}



/* Function: MiddleB_destructor_thunk @ 000113e8 */

/* virtual thunk to MiddleB::~MiddleB() */

void MiddleB_destructor_thunk(struct MiddleB *this_)

{
 _func_int_varargs *p_Var1;
 
 p_Var1 = this_->_vptr_MiddleB[-4];
 *(void ***)((int)&this_->_vptr_MiddleB + (int)p_Var1) = &PTR_func_00011b68;
 *(void **)(&this_->field_0x8 + (int)p_Var1) = &PTR_func_00011b84;
 return;
}



/* Function: getType @ 00011410 */

/* DWARF original prototype: int getType(RTTIDerivedA * this) */

int RTTIDerivedA_getType(struct RTTIDerivedA *this_)

{
 return 1;
}



/* Function: getType @ 00011418 */

/* DWARF original prototype: int getType(RTTIDerivedB * this) */

int RTTIDerivedB_getType(struct RTTIDerivedB *this_)

{
 return 2;
}



/* Function: RTTIDerivedB_destructor @ 00011420 */

/* DWARF original prototype: void * ~RTTIDerivedB(RTTIDerivedB * this, int __in_chrg) */

void * RTTIDerivedB_destructor(struct RTTIDerivedB *this_,int __in_chrg_)

{
 return this_;
}



/* Function: RTTIDerivedA_destructor @ 00011424 */

/* DWARF original prototype: void * ~RTTIDerivedA(RTTIDerivedA * this, int __in_chrg) */

void * RTTIDerivedA_destructor(struct RTTIDerivedA *this_,int __in_chrg_)

{
 return this_;
}



/* Function: MultiDerived_destructor @ 00011428 */

/* DWARF original prototype: void * ~MultiDerived(MultiDerived * this, int __in_chrg) */

void * MultiDerived_destructor(struct MultiDerived *this_,int __in_chrg_)

{
 return this_;
}



/* Function: MultiDerived_destructor_thunk @ 0001142c */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

struct BaseB * MultiDerived_destructor_thunk(struct MultiDerived *this_)

{
 return &this_[-1].super_BaseB;
}



/* Function: Derived_destructor @ 00011434 */

/* DWARF original prototype: void * ~Derived(Derived * this, int __in_chrg) */

void * Derived_destructor(struct Derived *this_,int __in_chrg_)

{
 return this_;
}



/* Function: Base_destructor @ 00011438 */

/* DWARF original prototype: void * ~Base(Base * this, int __in_chrg) */

void * Base_destructor2(struct Base *this_,int __in_chrg)

{
 operator_delete(this_,4);
 return this_;
}



/* Function: Derived_destructor @ 00011450 */

/* DWARF original prototype: void * ~Derived(Derived * this, int __in_chrg) */

void * Derived_destructor2(struct Derived *this_,int __in_chrg)

{
 operator_delete(this_,8);
 return this_;
}



/* Function: MultiDerived_destructor @ 00011468 */

/* DWARF original prototype: void * ~MultiDerived(MultiDerived * this, int __in_chrg) */

void * MultiDerived_destructor2(struct MultiDerived *this_,int __in_chrg)

{
 operator_delete(this_,0x10);
 return this_;
}



/* Function: MultiDerived_destructor_thunk2 @ 00011480 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void MultiDerived_destructor_thunk2(struct MultiDerived *this_)

{
 int in_r1;
 
 MultiDerived_destructor2((struct MultiDerived *)&this_[-1].super_BaseB,in_r1);
 return;
}



/* Function: VirtualBase_destructor @ 00011488 */

/* DWARF original prototype: void * ~VirtualBase(VirtualBase * this, int __in_chrg) */

void * VirtualBase_destructor2(struct VirtualBase *this_,int __in_chrg)

{
 operator_delete(this_,8);
 return this_;
}



/* Function: RTTIDerivedB_destructor @ 000114a0 */

/* DWARF original prototype: void * ~RTTIDerivedB(RTTIDerivedB * this, int __in_chrg) */

void * RTTIDerivedB_destructor2(struct RTTIDerivedB *this_,int __in_chrg)

{
 operator_delete(this_,4);
 return this_;
}



/* Function: RTTIDerivedA_destructor @ 000114b8 */

/* DWARF original prototype: void * ~RTTIDerivedA(RTTIDerivedA * this, int __in_chrg) */

void * RTTIDerivedA_destructor2(struct RTTIDerivedA *this_,int __in_chrg)

{
 operator_delete(this_,4);
 return this_;
}



/* Function: MiddleA_destructor @ 000114d0 */

/* DWARF original prototype: void * ~MiddleA(MiddleA * this) */

void * MiddleA_destructor2(struct MiddleA *this_)

{
 this_->_vptr_MiddleA = (_func_int_varargs **)&PTR_func_00011b2c;
 this_->field_0x8 = (int)&PTR_func_00011b48;
 operator_delete(this_,0x10);
 return this_;
}



/* Function: MiddleA_destructor_thunk2 @ 000114fc */

/* virtual thunk to MiddleA::~MiddleA() */

void MiddleA_destructor_thunk2(struct MiddleA *this_)

{
 MiddleA_destructor2((struct MiddleA *)((int)&this_->_vptr_MiddleA + (int)this_->_vptr_MiddleA[-4]));
 return;
}



/* Function: MiddleB_destructor @ 00011510 */

/* DWARF original prototype: void * ~MiddleB(MiddleB * this) */

void * MiddleB_destructor2(struct MiddleB *this_)

{
 this_->_vptr_MiddleB = (_func_int_varargs **)&PTR_func_00011b68;
 this_->field_0x8 = (int)&PTR_func_00011b84;
 operator_delete(this_,0x10);
 return this_;
}



/* Function: MiddleB_destructor_thunk2 @ 0001153c */

/* virtual thunk to MiddleB::~MiddleB() */

void MiddleB_destructor_thunk2(struct MiddleB *this_)

{
 MiddleB_destructor2((struct MiddleB *)((int)&this_->_vptr_MiddleB + (int)this_->_vptr_MiddleB[-4]));
 return;
}



/* Function: MiddleA_destructor_vtt @ 00011550 */

/* DWARF original prototype: void * ~MiddleA(MiddleA * this, void * * __vtt_parm) */

void * MiddleA_destructor_vtt(struct MiddleA *this_,void **__vtt_parm)

{
 void *pp_Var1;
 
 pp_Var1 = *__vtt_parm;
 this_->_vptr_MiddleA = (_func_int_varargs **)pp_Var1;
 *(void **)((int)&this_->_vptr_MiddleA + (int)((_func_int_varargs **)pp_Var1)[-3]) = __vtt_parm[1];
 return this_;
}



/* Function: MiddleB_destructor_vtt @ 00011568 */

/* DWARF original prototype: void * ~MiddleB(MiddleB * this, void * * __vtt_parm) */

void * MiddleB_destructor_vtt(struct MiddleB *this_,void **__vtt_parm)

{
 void *pp_Var1;
 
 pp_Var1 = *__vtt_parm;
 this_->_vptr_MiddleB = (_func_int_varargs **)pp_Var1;
 *(void **)((int)&this_->_vptr_MiddleB + (int)((_func_int_varargs **)pp_Var1)[-3]) = __vtt_parm[1];
 return this_;
}



/* Function: template_max_int @ 00011580 */

int template_max_int(int a,int b)

{
 if (a < b) {
 a = b;
 }
 return a;
}



/* Function: template_max_double @ 0001158c */

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x000115a0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

double template_max_double(double a,double b)

{
 __aeabi_dcmpgt(SUB84(a,0),(int)((unsigned long long)a >> 0x20),SUB84(b,0));
 return a;
}



/* Function: template_swap_int @ 000115bc */

void template_swap_int(int *a,int *b)

{
 int iVar1;
 
 /* Unresolved local var: int temp@[???] */
 iVar1 = *a;
 *a = *b;
 *b = iVar1;
 return;
}



/* Function: Container_int @ 000115d0 */

/* DWARF original prototype: Container_int * Container_int(Container_int * this) */

struct Container_int * Container_int(struct Container_int *this_)

{
 this_->size = 0;
 return this_;
}



/* Function: Container_int_push @ 000115dc */

/* DWARF original prototype: void Container_int_push(Container_int * this, int value) */

void Container_int_push(struct Container_int *this_,int value)

{
 int iVar1;
 
 iVar1 = this_->size;
 if (iVar1 < 10) {
 this_->size = iVar1 + 1;
 this_->data[iVar1] = value;
 }
 return;
}



/* Function: Container_int_get @ 000115f4 */

/* DWARF original prototype: int Container_int_get(Container_int * this, int idx) */

int Container_int_get(struct Container_int *this_,int idx)

{
 if ((-1 < idx) && (idx < this_->size)) {
 return this_->data[idx];
 }
 return 0;
}



/* Function: Container_int_getSize @ 00011618 */

/* DWARF original prototype: int Container_int_getSize(Container_int * this) */

int Container_int_getSize(struct Container_int *this_)

{
 return this_->size;
}



/* Function: Container_double @ 00011620 */

/* DWARF original prototype: Container_double * Container_double(Container_double * this) */

struct Container_double * Container_double(struct Container_double *this_)

{
 this_->size = 0;
 return this_;
}



/* Function: Container_double_push @ 0001162c */

/* DWARF original prototype: void Container_double_push(Container_double * this, double value) */

void Container_double_push(struct Container_double *this_,double value)

{
 int iVar1;
 undefined4 in_r2;
 undefined4 in_r3;
 
 iVar1 = this_->size;
 if (9 < iVar1) {
 return;
 }
 this_->size = iVar1 + 1;
 *(undefined4 *)(this_->data + iVar1) = in_r2;
 *(undefined4 *)((int)(this_->data + iVar1) + 4) = in_r3;
 return;
}



/* Function: Container_double_get @ 0001164c */

/* DWARF original prototype: double Container_double_get(Container_double * this, int idx) */

double Container_double_get(struct Container_double *this_,int idx)

{
 double in_d0;
 
 if ((-1 < idx) && (idx < this_->size)) {
 return in_d0;
 }
 return in_d0;
}



/* Function: Container_double_getSize @ 00011678 */

/* DWARF original prototype: int Container_double_getSize(Container_double * this) */

int Container_double_getSize(struct Container_double *this_)

{
 return this_->size;
}



/* Function: unique_ptr_int_destructor @ 00011680 */

/* DWARF original prototype: void * unique_ptr_int_destructor(unique_ptr_int * this,
 int __in_chrg) */

void * unique_ptr_int_destructor
 (struct unique_ptr_int *this_,int __in_chrg)

{
 void *_Var1;
 
 /* Unresolved local var: int * * __ptr@[DW_OP_reg0(r0)] */
 _Var1 = this_->_M_t;
 if (_Var1 != (void *)0x0) {
 operator_delete((void *)_Var1,4);
 }
 return this_;
}



/* Function: unique_ptr_int_array_destructor @ 000116a4 */

/* DWARF original prototype: void * unique_ptr_int_array_destructor(unique_ptr_int_array *
 this, int __in_chrg) */

void * unique_ptr_int_array_destructor
 (struct unique_ptr_int_array *this_,int __in_chrg)

{
 void *_Var1;
 
 /* Unresolved local var: int * * __ptr@[DW_OP_reg0(r0)] */
 _Var1 = this_->_M_t;
 if (_Var1 != (void *)0x0) {
 operator_delete((void *)_Var1,0);
 }
 return this_;
}



/* Function: DiamondDerived_destructor @ 000116c4 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void * ~DiamondDerived(DiamondDerived * this, int __in_chrg, void * *
 __vtt_parm) */

void *
DiamondDerived_destructor(struct DiamondDerived *obj,int __in_chrg,void ***__vtt_parm)

{
 void *obj_00;
 void **__vtt_parm_00;
 void **ppuVar1;
 _func_int_varargs *p_Var2;
 
 if (__in_chrg == 0) {
  ppuVar1 = *(void ***)__vtt_parm;
 }
 else {
  ppuVar1 = (void **)&PTR_func_00011c20;
 }
 (obj->super_MiddleA)._vptr_MiddleA = (_func_int_varargs **)ppuVar1;
if (__in_chrg == 0) {
 p_Var2 = ((_func_int_varargs **)ppuVar1)[-3];
 ppuVar1 = &(*__vtt_parm)[5];
}
else {
 p_Var2 = (_func_int_varargs *)0x10;
 ppuVar1 = &PTR_func_00011c54;
}
 *(void **)((int)&(obj->super_MiddleA)._vptr_MiddleA + (int)p_Var2) = ppuVar1;
if (__in_chrg == 0) {
 ppuVar1 = &(*__vtt_parm)[6];
 __vtt_parm_00 = (void **)(*__vtt_parm + 3);
}
else {
 ppuVar1 = &PTR_func_00011c38;
 __vtt_parm_00 = &PTR_DAT_00011c04;
}
 obj_00 = &(obj->super_MiddleA).field_0x8;
 *(void **)obj_00 = ppuVar1;
 MiddleB_destructor_vtt((struct MiddleB *)obj_00,__vtt_parm_00);
 if (__in_chrg == 0) {
 ppuVar1 = &(*__vtt_parm)[1];
 }
 else {
 ppuVar1 = &PTR_DAT_00011bfc;
 }
 MiddleA_destructor_vtt(&obj->super_MiddleA,(void **)ppuVar1);
 return obj;
}



/* Function: DiamondDerived_destructor @ 00011748 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void * ~DiamondDerived(DiamondDerived * this) */

void * DiamondDerived_destructor2(struct DiamondDerived *obj)

{
 void *pvVar1;
 
 pvVar1 = DiamondDerived_destructor(obj,2,(void ***)0x0);
 return pvVar1;
}



/* Function: DiamondDerived_destructor_thunk @ 00011754 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_destructor_thunk(struct DiamondDerived *obj)

{
 DiamondDerived_destructor2((struct DiamondDerived *)&obj[-1].field_0x10);
 return;
}



/* Function: DiamondDerived_destructor_thunk2 @ 0001175c */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_destructor_thunk2(struct DiamondDerived *obj)

{
 DiamondDerived_destructor2((struct DiamondDerived *)
 ((int)&(obj->super_MiddleA)._vptr_MiddleA +
 (int)(obj->super_MiddleA)._vptr_MiddleA[-4]));
 return;
}



/* Function: DiamondDerived_destructor @ 00011770 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void * ~DiamondDerived(DiamondDerived * this) */

void * DiamondDerived_destructor3(struct DiamondDerived *obj)

{
 DiamondDerived_destructor2(obj);
 operator_delete(obj,0x18);
 return obj;
}



/* Function: DiamondDerived_destructor_thunk3 @ 00011790 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_destructor_thunk3(struct DiamondDerived *obj)

{
 DiamondDerived_destructor2((struct DiamondDerived *)&obj[-1].field_0x10);
 return;
}



/* Function: DiamondDerived_destructor_thunk4 @ 00011798 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_destructor_thunk4(struct DiamondDerived *obj)

{
 DiamondDerived_destructor2((struct DiamondDerived *)
 ((int)&(obj->super_MiddleA)._vptr_MiddleA +
 (int)(obj->super_MiddleA)._vptr_MiddleA[-4]));
 return;
}



/* Function: DiamondDerived_destructor_vtt @ 000117ac */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void * ~DiamondDerived(DiamondDerived * this, void * * __vtt_parm) */

void * DiamondDerived_destructor_vtt(struct DiamondDerived *obj,void ***__vtt_parm)

{
 void *pvVar1;
 
 pvVar1 = DiamondDerived_destructor(obj,0,(void ***)__vtt_parm);
 return pvVar1;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 86 */
