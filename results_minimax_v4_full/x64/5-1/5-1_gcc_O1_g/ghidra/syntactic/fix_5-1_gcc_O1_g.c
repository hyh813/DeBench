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

/* Global vtable pointers - these are referenced in the binary */
void *PTR_virtual_func_001059a0 = 0;
void *PTR_virtual_func_001059d0 = 0;
void *PTR__RTTIDerivedA_00105ba0 = 0;
void *PTR__RTTIDerivedB_00105bc8 = 0;
void *PTR__RTTIBase_00105bd0 = 0;

/* String constants referenced in the binary */
const char *DAT_00103018 = "C++ Features Test\n";
const char *DAT_0010303c = "Member function test: %d\n";
const char *DAT_0010305a = "Constructor test: %d\n";
const char *DAT_00103076 = "Virtual function test: %d\n";
const char *DAT_00103092 = "Multiple inheritance test: %d\n";
const char *DAT_001030ae = "Diamond inheritance test: %d\n";
const char *DAT_001030cb = "Operator overload test: %d\n";
const char *DAT_001030e7 = "Template function test: %d\n";
const char *DAT_00103103 = "Template class test: %d\n";
const char *DAT_0010311f = "Lambda test: %d\n";
const char *DAT_0010313b = "Exception test: %d\n";
const char *DAT_00103158 = "Smart pointer test: %d\n";
const char *DAT_00103175 = "RTTI test: %d\n";

/* Standard library function declarations */
int strcmp(const char *s1, const char *s2);
size_t strlen(const char *s);
int puts(const char *s);
void __stack_chk_fail(void);

/* GCC built-in functions */
void __stack_chk_fail(void) __attribute__((noreturn));

/* Memory allocation operators */
void *operator_new(size_t size);
void operator_delete(void *ptr);
void operator_delete(void *ptr, unsigned long size);
void operator_delete_array(void *ptr);
void operator_delete_array(void *ptr, unsigned long size);

/* C++ exception handling */
void *__cxa_allocate_exception(size_t thrown_size);
void __cxa_throw(void * thrown_exception, void * type_info, void (*dest) (void *));
void *__cxa_begin_catch(void *);
void __cxa_end_catch(void);

/* RTTI */
void *__dynamic_cast(const void *src_ptr, const void *src_type, const void *dst_type, ptrdiff_t src2dst);

/* Formatted output */
int __printf_chk(int flag, const char *format, ...);

/* Struct definitions */

/* Forward declarations for structs */
/* Note: These are defined as typedefs later, so we just need placeholder typedefs */
typedef struct Derived Derived;
typedef struct MultiDerived MultiDerived;
typedef struct MiddleA MiddleA;
typedef struct MiddleB MiddleB;
typedef struct DiamondDerived DiamondDerived;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;

/* SimpleClass - used in test_cpp_member_func */
typedef struct {
    char name[32];
} SimpleClass;

/* Base class with virtual function */
typedef struct Base {
    void **_vptr_Base;
} Base;

/* Derived class with virtual function (defined above) */
/* MultiDerived - multiple inheritance (defined above) */
/* MiddleA class (defined above) */
/* MiddleB class (defined above) */
/* DiamondDerived - diamond inheritance (defined above) */

/* Forward declarations - removed invalid C++ syntax declarations that cause C compilation errors */

/* Template class forward declarations */
typedef struct {
    int size;
    int data[10];
} Container_int;

typedef struct {
    int size;
    double data[10];
} Container_double;

/* Container_int methods */
void Container_int_Container(Container_int *self);
void Container_int_push(Container_int *self, int value);
int Container_int_get(Container_int *self, int idx);
int Container_int_getSize(Container_int *self);

/* Container_double methods */
void Container_double_Container(Container_double *self);
void Container_double_push(Container_double *self, double value);
double Container_double_get(Container_double *self, int idx);
int Container_double_getSize(Container_double *self);

/* Derived class with virtual function */
typedef struct Derived {
    Base super_Base;
    int multiplier;
} Derived;

/* MultiDerived - multiple inheritance */
typedef struct MultiDerived {
    Base super_Base;
    int multiplier;
    int field_0xc;
    void *_vptr_BaseB;
    int funcA_val;
    int funcB_val;
} MultiDerived;

/* MiddleA class */
typedef struct MiddleA {
    void **_vptr_MiddleA;
    int dataA;
} MiddleA;

/* MiddleB class */
typedef struct MiddleB {
    void **_vptr_MiddleB;
    int dataB;
} MiddleB;

/* DiamondDerived - diamond inheritance */
typedef struct DiamondDerived {
    MiddleA super_MiddleA;
    void *field_0x20;
    MiddleB super_MiddleB;
    int field_40;
} DiamondDerived;

/* RTTI type info */
struct type_info {
    int flags;
    const char *name;
    void *base_class;
    void *vtable;
    int size;
};

/* RTTI type info variables - defined as globals */
struct type_info RTTIBase_typeinfo = {0, "7Base", 0, 0, 8};
struct type_info RTTIDerivedA_typeinfo = {0, "12RTTIDerivedA", 0, 0, 8};
struct type_info RTTIDerivedB_typeinfo = {0, "12RTTIDerivedB", 0, 0, 8};
struct type_info int_typeinfo = {0, "3int", 0, 0, 4};

/* RTTI classes */
typedef struct RTTIDerivedA {
    struct type_info typeinfo;
    int value;
} RTTIDerivedA;

typedef struct RTTIDerivedB {
    struct type_info typeinfo;
    int value;
} RTTIDerivedB;

/* LifecycleClass for constructor test */
typedef struct {
    int field_4;
    int field_8;
    int field_c;
    int field_10;
} LifecycleClass;

/* Static member definition */
int LifecycleClass_instance_count = 0;

/* LifecycleClass methods */
void LifecycleClass_Constructor(LifecycleClass *self) {
    self->field_4 = 0;
    self->field_8 = 10;
    self->field_c = 0x14;
    self->field_10 = 0x1e;
    LifecycleClass_instance_count++;
}

void LifecycleClass_Destructor(LifecycleClass *self) {
    LifecycleClass_instance_count--;
}

/* Template Container class */
typedef struct {
    int size;
    union {
        int data_i[10];
        double data_d[10];
    } data;
} Container_int;

typedef struct {
    int size;
    double data[10];
} Container_double;

/* Function pointer types for virtual calls */
typedef int (*_func_int_varargs)(void);

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x64/5-1/5-1_gcc_O1_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00102020 @ 00102020 */

void FUN_00102020(void)

{
 /* Empty stub - was likely a jump to NULL */
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: test_cpp_member_func @ 00102369 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_member_func(void)

{
 long lVar1;
 size_t sVar2;
 long in_FS_OFFSET;
 SimpleClass obj;
 
 lVar1 = *(long *)(in_FS_OFFSET + 0x28);
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
 if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
 return (int)sVar2 + 0x125c;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: test_cpp_constructor @ 001023de */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_constructor(void)

{
 int iVar1;
 void *pvVar2;
 
 /* Unresolved local var: LifecycleClass obj@[???] */
 pvVar2 = operator_new(0x14);
 /* Unresolved local var: size_t i@[???] */
 *(undefined4 *)((long)pvVar2 + 4) = 10;
 *(undefined4 *)((long)pvVar2 + 8) = 0x14;
 *(undefined4 *)((long)pvVar2 + 0xc) = 0x1e;
 *(undefined4 *)((long)pvVar2 + 0x10) = 0x28;
 iVar1 = LifecycleClass_instance_count + 0x15;
 LifecycleClass_instance_count = LifecycleClass_instance_count + 1;
 operator_delete(pvVar2);
 LifecycleClass_instance_count = LifecycleClass_instance_count + -1;
 return LifecycleClass_instance_count * 1000 + iVar1;
}



/* Function: call_virtual_func @ 0010243c */

int call_virtual_func(Base *obj,int x)

{
 int iVar1;
 
 iVar1 = (**obj->_vptr_Base)();
 return iVar1;
}



/* Function: test_cpp_virtual_func @ 0010244e */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_virtual_func(void)

{
 long lVar1;
 int iVar2;
 int iVar3;
 long in_FS_OFFSET;
 Base base;
 Derived derived;
 
 lVar1 = *(long *)(in_FS_OFFSET + 0x28);
 base._vptr_Base = (void **)&PTR_virtual_func_001059a0;
 derived.super_Base._vptr_Base = (void **)&PTR_virtual_func_001059d0;
 derived.multiplier = 3;
 iVar2 = call_virtual_func(&base,5);
 iVar3 = call_virtual_func(&derived.super_Base,5);
 if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
 return iVar2 + 0x15 + iVar3;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: test_cpp_multiple_inheritance @ 001024c6 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_multiple_inheritance(void)

{
 return 0x47;
}



/* Function: test_cpp_diamond_inheritance @ 001024d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_diamond_inheritance(void)

{
 long lVar1;
 int iVar2;
 int iVar3;
 long in_FS_OFFSET;
 DiamondDerived obj;
 
 lVar1 = *(long *)(in_FS_OFFSET + 0x28);
 obj.super_MiddleA._vptr_MiddleA = (_func_int_varargs **)(0x105ba0 + 0x18);
 /* obj._32_8_ = 0x105b78; */
 /* obj._16_8_ = 0x105b40; */
 obj.field_40 = 0x32;
 iVar2 = DiamondDerived_func((DiamondDerived *)&obj.field_0x20);
 obj.field_40 = 100;
 iVar3 = DiamondDerived_func((DiamondDerived *)&obj.field_0x20);
 if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
 return iVar3 + iVar2;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: test_cpp_operator_overload @ 0010254c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_operator_overload(void)

{
 return 0x16;
}



/* Function: test_cpp_template_func @ 00102556 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_func(void)

{
 int iVar1;
 long in_FS_OFFSET;
 double dVar2;
 int a;
 int b;
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 iVar1 = template_max_int(3,7);
 dVar2 = template_max_double(2.5,1.5);
 a = 10;
 b = 0x14;
 template_swap_int(&a,&b);
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return (int)dVar2 + iVar1 + a + b;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: test_cpp_template_class @ 001025e5 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_class(void)

{
 return 0x10;
}



/* Function: test_cpp_lambda @ 001025ef */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_lambda(void)

{
 return 0x55;
}



/* Function: test_cpp_exception @ 001025f9 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_exception(void)

{
 undefined4 *puVar1;
 
 puVar1 = (undefined4 *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* WARNING: Subroutine does not return */
 /* try { // try from 00102620 to 00102624 has its CatchHandler @ 00102625 */
 __cxa_throw(puVar1, &int_typeinfo, 0);
}



/* Function: test_cpp_smart_ptr @ 001026d1 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_smart_ptr(void)

{
 return 0x2bf;
}



/* Function: test_cpp_rtti @ 001026db */

/* WARNING: Removing unreachable block (ram,0x00102769) */
/* WARNING: Removing unreachable block (ram,0x0010276e) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_rtti(void)

{
 long lVar1;
 char *__s1;
 int iVar2;
 long *plVar3;
 long *plVar4;
 long lVar5;
 size_t sVar6;
 uint uVar7;
 
 plVar3 = operator_new(8);
 *plVar3 = (long)&PTR__RTTIDerivedA_00105ba0;
 plVar4 = operator_new(8);
 *plVar4 = (long)&PTR__RTTIDerivedB_00105bc8;
 lVar1 = *plVar3;
 __s1 = *(char **)(*(long *)(lVar1 + -8) + 8);
 uVar7 = 10;
 if ((__s1 != "12RTTIDerivedA") && (uVar7 = 0, *__s1 != '*')) {
 iVar2 = strcmp(__s1,"12RTTIDerivedA");
 uVar7 = -(uint)(iVar2 == 0) & 10;
 }
 /* Unresolved local var: RTTIDerivedA * derivedA@[???] */
 lVar5 = __dynamic_cast(plVar3,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0);
 iVar2 = uVar7 + 0x14;
 if (lVar5 != 0) {
 iVar2 = uVar7 + 0x78;
 }
 /* Unresolved local var: RTTIDerivedB * derivedB@[???] */
 lVar5 = __dynamic_cast(plVar4,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
 if (lVar5 != 0) {
 iVar2 = iVar2 + 200;
 }
 sVar6 = strlen(__s1 + (*__s1 == '*'));
 (**(code **)(lVar1 + 8))(plVar3);
 (**(code **)(*plVar4 + 8))(plVar4);
 return iVar2 + (int)sVar6;
}



/* Function: test_cpp_oo_features @ 00102801 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */

void test_cpp_oo_features(void)

{
 int iVar1;
 
 puts(DAT_00103018);
 iVar1 = test_cpp_member_func();
 __printf_chk(1,DAT_0010303c,iVar1);
 iVar1 = test_cpp_constructor();
 __printf_chk(1,DAT_0010305a,iVar1);
 iVar1 = test_cpp_virtual_func();
 __printf_chk(1,DAT_00103076,iVar1);
 iVar1 = test_cpp_multiple_inheritance();
 __printf_chk(1,DAT_00103092,iVar1);
 iVar1 = test_cpp_diamond_inheritance();
 __printf_chk(1,DAT_001030ae,iVar1);
 __printf_chk(1,DAT_001030cb,0x16);
 iVar1 = test_cpp_template_func();
 __printf_chk(1,DAT_001030e7,iVar1);
 __printf_chk(1,DAT_00103103,0x10);
 __printf_chk(1,DAT_0010311f,0x55);
 iVar1 = test_cpp_exception();
 __printf_chk(1,DAT_0010313b,iVar1);
 iVar1 = test_cpp_smart_ptr();
 __printf_chk(1,DAT_00103158,iVar1);
 iVar1 = test_cpp_rtti();
 __printf_chk(1,DAT_00103175,iVar1);
 return;
}



/* Function: main @ 00102970 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 00102987 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _GLOBAL__sub_I__Z20test_cpp_member_funcv(void)

{
 std::ios_base::Init::Init(&std::__ioinit);
 __cxa_atexit(std::ios_base::Init::~Init,&std::__ioinit,&__dso_handle);
 return;
}



/* Function: virtual_func @ 001029b4 */

/* DWARF original prototype: int virtual_func(Base * this, int x) */

int Base_virtual_func(Base *this,int x)

{
 return x + 1;
}



/* Function: getName @ 001029bc */

/* DWARF original prototype: char * getName(Base * this) */

char * Base_getName(Base *this)

{
 return "Base";
}



/* Function: ~Base @ 001029c8 */

/* DWARF original prototype: void ~Base(Base * this, int __in_chrg) */

void Base_destructor(Base *this, int __in_chrg)

{
 return;
}



/* Function: virtual_func @ 001029ce */

/* DWARF original prototype: int virtual_func(Derived * this, int x) */

int Derived_virtual_func(Derived *this, int x)

{
 return x * this->multiplier;
}



/* Function: getName @ 001029da */

/* DWARF original prototype: char * getName(Derived * this) */

char * Derived_getName(Derived *this)

{
 return "Derived";
}



/* Function: funcA @ 001029e6 */

/* DWARF original prototype: int funcA(MultiDerived * this) */

int MultiDerived_funcA(MultiDerived *this)

{
 return 0x1e;
}



/* Function: funcB @ 001029f0 */

/* DWARF original prototype: int funcB(MultiDerived * this) */

int MultiDerived_funcB(MultiDerived *this)

{
 return 0x28;
}



/* Function: funcB @ 001029fa */

/* non-virtual thunk to MultiDerived::funcB() */

undefined8 __thiscall MultiDerived::funcB(MultiDerived *this)

{
 return 0x28;
}



/* Function: func @ 00102a04 */

/* DWARF original prototype: int func(MiddleA * this) */

int MiddleA_func(MiddleA *this)

{
 return *(int *)((long)&this->dataA + (long)this->_vptr_MiddleA[-3]) + 0x96;
}



/* Function: func @ 00102a19 */

/* virtual thunk to MiddleA::func() */

int MiddleA_func_thunk(MiddleA *this)

{
 _func_int_varargs *p_Var1;
 
 p_Var1 = (_func_int_varargs *)((long)&this->_vptr_MiddleA + (long)this->_vptr_MiddleA[-3]);
 return *(int *)(p_Var1 + *(long *)(*(long *)p_Var1 + -0x18) + 8) + 0x96;
}



/* Function: func @ 00102a36 */

/* DWARF original prototype: int func(MiddleB * this) */

int MiddleB_func(MiddleB *this)

{
 return *(int *)((long)&this->dataB + (long)this->_vptr_MiddleB[-3]) + 200;
}



/* Function: func @ 00102a4b */

/* virtual thunk to MiddleB::func() */

int MiddleB_func_thunk(MiddleB *this)

{
 _func_int_varargs *p_Var1;
 
 p_Var1 = (_func_int_varargs *)((long)&this->_vptr_MiddleB + (long)this->_vptr_MiddleB[-3]);
 return *(int *)(p_Var1 + *(long *)(*(long *)p_Var1 + -0x18) + 8) + 200;
}



/* Function: func @ 00102a68 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: int func(DiamondDerived * this) */

int DiamondDerived_func(DiamondDerived *this)



/* Function: func @ 00102a7d */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::func() */

int DiamondDerived_func_thunk(DiamondDerived *this)

{
 _func_int_varargs *p_Var1;
 
 p_Var1 = (_func_int_varargs *)
 ((long)&(this->super_MiddleA)._vptr_MiddleA +
 (long)(this->super_MiddleA)._vptr_MiddleA[-3]);
 return *(int *)(p_Var1 + *(long *)(*(long *)p_Var1 + -0x18) + 8) + 0xfa;
}



/* Function: func @ 00102a99 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::func() */

int DiamondDerived_func_nonvirtual(DiamondDerived *this)

{
 return *(int *)((long)this + *(long *)(*(long *)&this[-1].field_0x20 + -0x18) + -8) + 0xfa;
}



/* Function: getType @ 00102ab0 */

/* DWARF original prototype: int getType(RTTIDerivedA * this) */

int RTTIDerivedA_getType(RTTIDerivedA *this)

{
 return 1;
}



/* Function: getType @ 00102aba */

/* DWARF original prototype: int getType(RTTIDerivedB * this) */

int __thiscall RTTIDerivedB::getType(RTTIDerivedB *this)

{
 return 2;
}



/* Function: ~RTTIDerivedB @ 00102ac4 */

/* DWARF original prototype: void ~RTTIDerivedB(RTTIDerivedB * this, int __in_chrg) */

void __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this,int __in_chrg)

{
 return;
}



/* Function: ~RTTIDerivedA @ 00102aca */

/* DWARF original prototype: void ~RTTIDerivedA(RTTIDerivedA * this, int __in_chrg) */

void __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this,int __in_chrg)

{
 return;
}



/* Function: ~DiamondDerived @ 00102ad0 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this, int __in_chrg, void * *
 __vtt_parm) */

void __thiscall
DiamondDerived::~DiamondDerived(DiamondDerived *this,int __in_chrg,void **__vtt_parm)

{
 return;
}



/* Function: ~DiamondDerived @ 00102ad5 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 return;
}



/* Function: ~DiamondDerived @ 00102ada */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 return;
}



/* Function: ~MultiDerived @ 00102ae0 */

/* DWARF original prototype: void ~MultiDerived(MultiDerived * this, int __in_chrg) */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this,int __in_chrg)

{
 return;
}



/* Function: ~MultiDerived @ 00102ae5 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
 return;
}



/* Function: ~Derived @ 00102aea */

/* DWARF original prototype: void ~Derived(Derived * this, int __in_chrg) */

void __thiscall Derived::~Derived(Derived *this,int __in_chrg)

{
 return;
}



/* Function: ~Base @ 00102af0 */

/* DWARF original prototype: void ~Base(Base * this, int __in_chrg) */

void __thiscall Base::~Base(Base *this,int __in_chrg)

{
 operator_delete(this,8);
 return;
}



/* Function: ~Derived @ 00102b08 */

/* DWARF original prototype: void ~Derived(Derived * this, int __in_chrg) */

void __thiscall Derived::~Derived(Derived *this,int __in_chrg)

{
 operator_delete(this,0x10);
 return;
}



/* Function: ~MultiDerived @ 00102b20 */

/* DWARF original prototype: void ~MultiDerived(MultiDerived * this, int __in_chrg) */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this,int __in_chrg)

{
 operator_delete(this,0x20);
 return;
}



/* Function: ~MultiDerived @ 00102b37 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
 operator_delete(&this[-1].super_BaseB,0x20);
 return;
}



/* Function: ~RTTIDerivedA @ 00102b52 */

/* DWARF original prototype: void ~RTTIDerivedA(RTTIDerivedA * this, int __in_chrg) */

void __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this,int __in_chrg)

{
 operator_delete(this,8);
 return;
}



/* Function: ~RTTIDerivedB @ 00102b6a */

/* DWARF original prototype: void ~RTTIDerivedB(RTTIDerivedB * this, int __in_chrg) */

void __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this,int __in_chrg)

{
 operator_delete(this,8);
 return;
}



/* Function: ~DiamondDerived @ 00102b82 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this, int __in_chrg, void * *
 __vtt_parm) */

void __thiscall
DiamondDerived::~DiamondDerived(DiamondDerived *this,int __in_chrg,void **__vtt_parm)

{
 operator_delete(this,0x30);
 return;
}



/* Function: ~DiamondDerived @ 00102b99 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 operator_delete((_func_int_varargs *)
 ((long)&(this->super_MiddleA)._vptr_MiddleA +
 (long)(this->super_MiddleA)._vptr_MiddleA[-4]),0x30);
 return;
}



/* Function: ~DiamondDerived @ 00102bb7 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 operator_delete(&this[-1].field_0x20,0x30);
 return;
}



/* Function: template_max<int> @ 00102bd2 */

int template_max_int(int a, int b)

{
 if (b <= a) {
 b = a;
 }
 return b;
}



/* Function: template_max<double> @ 00102bde */

double template_max_double(double a, double b)

{
 if (a <= b) {
 a = b;
 }
 return a;
}



/* Function: template_swap<int> @ 00102be7 */

void template_swap_int(int *a, int *b)

{
 int iVar1;
 
 iVar1 = *a;
 *a = *b;
 *b = iVar1;
 return;
}



/* Function: Container @ 00102bf4 */

/* DWARF original prototype: void Container(Container<int> * this) */

void __thiscall Container_int_Container(Container_int *self)

{
 self->size = 0;
 return;
}



/* Function: push @ 00102c00 */

/* DWARF original prototype: void push(Container<int> * this, int value) */

void __thiscall Container_int_push(Container_int *self, int value)

{
 int iVar1;
 
 iVar1 = self->size;
 if (iVar1 < 10) {
 self->size = iVar1 + 1;
 self->data[iVar1] = value;
 }
 return;
}



/* Function: get @ 00102c18 */

/* DWARF original prototype: int get(Container<int> * this, int idx) */

int __thiscall Container_int_get(Container_int *self, int idx)

{
 int iVar1;
 
 iVar1 = 0;
 if ((-1 < idx) && (idx < self->size)) {
 iVar1 = self->data[idx];
 }
 return iVar1;
}



/* Function: getSize @ 00102c34 */

/* DWARF original prototype: int getSize(Container<int> * this) */

int __thiscall Container_int_getSize(Container_int *self)

{
 return self->size;
}



/* Function: Container @ 00102c3c */

/* DWARF original prototype: void Container(Container<double> * this) */

void __thiscall Container_double_Container(Container_double *self)

{
 self->size = 0;
 return;
}



/* Function: push @ 00102c48 */

/* DWARF original prototype: void push(Container<double> * this, double value) */

void __thiscall Container_double_push(Container_double *self, double value)

{
 int iVar1;
 
 iVar1 = self->size;
 if (iVar1 < 10) {
 self->size = iVar1 + 1;
 self->data[iVar1] = value;
 }
 return;
}



/* Function: get @ 00102c62 */

/* DWARF original prototype: double get(Container<double> * this, int idx) */

double __thiscall Container_double_get(Container_double *self, int idx)

{
 double dVar1;
 
 dVar1 = 0.0;
 if ((-1 < idx) && (idx < self->size)) {
 dVar1 = self->data[idx];
 }
 return dVar1;
}



/* Function: getSize @ 00102c7e */

/* DWARF original prototype: int getSize(Container<double> * this) */

int __thiscall Container_double_getSize(Container_double *self)

{
 return self->size;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 68 */
