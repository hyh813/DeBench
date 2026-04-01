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

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x64/5-1/5-1_gcc_O1_g
 * Processor: x86
 * Compiler Spec: gcc
 */

/* Forward declarations and missing function declarations */
void __stack_chk_fail(void);
void *operator_new(size_t);
void *operator_new__(size_t);
void operator_delete(void *, size_t);
void operator_delete__(void *);
char *builtin_strncpy(char *dest, const char *src, size_t n);
size_t strlen(const char *s);
int strcmp(const char *s1, const char *s2);
int puts(const char *s);
int __printf_chk(int flag, const char *format, ...);
void *__cxa_allocate_exception(size_t);
void __cxa_throw(void *exc, void *type, void *dest);
void *__dynamic_cast(void *src, void *src_type, void *dst_type, int src_ptrtype);
int template_max_int(int a, int b);
double template_max_double(double a, double b);
void template_swap_int(int *a, int *b);
int DiamondDerived_func(void *this_ptr);

/* Type definitions for decompiled code */
typedef int (*_func_int_varargs)(void);
typedef int undefined4;
typedef unsigned long undefined8;
typedef void (*code)(void);

struct SimpleClass {
 char name[32];
};

struct Base {
 _func_int_varargs **_vptr_Base;
};

struct Derived {
 struct Base super_Base;
 int multiplier;
};

struct MultiDerived {
 struct Base super_BaseA;
 struct Base super_BaseB;
};

struct MiddleA {
 _func_int_varargs **_vptr_MiddleA;
 int dataA;
};

struct MiddleB {
 _func_int_varargs **_vptr_MiddleB;
 int dataB;
};

struct DiamondDerived {
 struct MiddleA super_MiddleA;
 struct MiddleB super_MiddleB;
 int _32_8_;
 long _16_8_;
 int _40_4_;
 char field_0x20[16];
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

struct LifecycleClass {
 int instance_count;
};

struct Container_int {
 int size;
 int data[10];
};

struct Container_double {
 int size;
 double data[10];
};

/* Global variables */
int LifecycleClass_instance_count = 0;
long DiamondDerived_vtable[10];
void *PTR_virtual_func_001059a0;
void *PTR_virtual_func_001059d0;
void *PTR__RTTIDerivedA_00105ba0;
void *PTR__RTTIDerivedB_00105bc8;
struct RTTIBase RTTIBase_typeinfo;
struct RTTIBase RTTIDerivedA_typeinfo;
struct RTTIBase RTTIDerivedB_typeinfo;
char DAT_00103018[64];
char DAT_0010303c[64];
char DAT_0010305a[64];
char DAT_00103076[64];
char DAT_00103092[64];
char DAT_001030ae[64];
char DAT_001030cb[64];
char DAT_001030e7[64];
char DAT_00103103[64];
char DAT_0010311f[64];
char DAT_0010313b[64];
char DAT_00103158[64];
char DAT_00103175[64];

/* CRT stub function _init removed by preprocessor */

/* Stub implementations for external library functions */
void *operator_new__(size_t size)
{
 return operator_new(size);
}

void operator_delete__(void *ptr)
{
 operator_delete(ptr, 0);
}

void __stack_chk_fail(void)
{
 /* Stack check failure - just return to avoid crash */
 return;
}

int puts(const char *s)
{
 /* Stub implementation */
 return 0;
}

int strcmp(const char *s1, const char *s2)
{
 /* Stub implementation */
 return 0;
}

size_t strlen(const char *s)
{
 /* Stub implementation */
 size_t len = 0;
 while (s[len] != '\0') {
  len++;
 }
 return len;
}

void *operator_new(size_t size)
{
 /* Stub implementation - return a static buffer */
 static char buffer[4096];
 static size_t offset = 0;
 void *ptr = buffer + offset;
 offset += size;
 if (offset > sizeof(buffer)) {
  offset = 0;
 }
 return ptr;
}

void operator_delete(void *ptr, size_t size)
{
 /* Stub implementation - do nothing */
 (void)ptr;
 (void)size;
 return;
}

void *__cxa_allocate_exception(size_t size)
{
 /* Stub implementation - return a static buffer */
 static char exception_buffer[256];
 return exception_buffer;
}

int __printf_chk(int flag, const char *format, ...)
{
 /* Stub implementation */
 (void)flag;
 (void)format;
 return 0;
}

char *builtin_strncpy(char *dest, const char *src, size_t n)
{
 /* Stub implementation */
 size_t i;
 for (i = 0; i < n && src[i] != '\0'; i++) {
  dest[i] = src[i];
 }
 for (; i < n; i++) {
  dest[i] = '\0';
 }
 return dest;
}

void __cxa_throw(void *exc, void *type, void *dest)
{
 /* Stub implementation - just return to avoid crash */
 (void)exc;
 (void)type;
 (void)dest;
 return;
}

void *__dynamic_cast(void *src, void *src_type, void *dst_type, int src_ptrtype)
{
 /* Stub implementation - return src for simplicity */
 (void)src_type;
 (void)dst_type;
 (void)src_ptrtype;
 return src;
}




/* Function: FUN_00102020 @ 00102020 */

void FUN_00102020(void)

{
 ((void (*)(void))0x0)();
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
 pvVar2 = operator_new__(0x14);
 /* Unresolved local var: size_t i@[???] */
 *(undefined4 *)((long)pvVar2 + 4) = 10;
 *(undefined4 *)((long)pvVar2 + 8) = 20;
 *(undefined4 *)((long)pvVar2 + 0xc) = 30;
 *(undefined4 *)((long)pvVar2 + 0x10) = 40;
 iVar1 = LifecycleClass_instance_count + 0x15;
 LifecycleClass_instance_count = LifecycleClass_instance_count + 1;
 operator_delete__(pvVar2);
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
 base._vptr_Base = (_func_int_varargs **)&PTR_virtual_func_001059a0;
 derived.super_Base._vptr_Base = (_func_int_varargs **)&PTR_virtual_func_001059d0;
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
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */

int test_cpp_diamond_inheritance(void)

{
 long lVar1;
 int iVar2;
 int iVar3;
 long in_FS_OFFSET;
 DiamondDerived obj;
 
 lVar1 = *(long *)(in_FS_OFFSET + 0x28);
 obj.super_MiddleA._vptr_MiddleA = (_func_int_varargs **)(DiamondDerived_vtable + 0x18);
 obj._32_8_ = 0x105b78;
 obj._16_8_ = 0x105b40;
 obj._40_4_ = 0x32;
 iVar2 = DiamondDerived_func((DiamondDerived *)&obj.field_0x20);
 obj._40_4_ = 100;
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
 *puVar1 = 42;
 /* WARNING: Subroutine does not return */
 /* try { // try from 00102620 to 00102624 has its CatchHandler @ 00102625 */
 __cxa_throw(puVar1, (void *)0, (void *)0);
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
 unsigned int uVar7;
 
 plVar3 = (long *)operator_new(8);
 *plVar3 = (long)&PTR__RTTIDerivedA_00105ba0;
 plVar4 = (long *)operator_new(8);
 *plVar4 = (long)&PTR__RTTIDerivedB_00105bc8;
 lVar1 = (long)*plVar3;
 __s1 = *(char **)(*(long *)(lVar1 + -8) + 8);
 uVar7 = 10;
 if ((__s1 != "12RTTIDerivedA") && (uVar7 = 0, *__s1 != '*')) {
 iVar2 = strcmp(__s1,"12RTTIDerivedA");
 uVar7 = -(unsigned int)(iVar2 == 0) & 10;
 }
 /* Unresolved local var: RTTIDerivedA * derivedA@[???] */
 lVar5 = (long)__dynamic_cast(plVar3,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0);
 iVar2 = uVar7 + 0x14;
 if (lVar5 != 0) {
 iVar2 = uVar7 + 0x78;
 }
 /* Unresolved local var: RTTIDerivedB * derivedB@[???] */
 lVar5 = (long)__dynamic_cast(plVar4,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo,0);
 if (lVar5 != 0) {
 iVar2 = iVar2 + 200;
 }
 sVar6 = strlen(__s1 + (*__s1 == '*'));
 ((void (*)(long *))(*(long *)(lVar1 + 8)))(plVar3);
 ((void (*)(long *))(*(long *)(*plVar4 + 8)))(plVar4);
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
 return;
}



/* Function: virtual_func @ 001029b4 */

/* DWARF original prototype: int virtual_func(Base * this, int x) */

int Base_virtual_func(Base *this_ptr,int x)

{
 return x + 1;
}



/* Function: getName @ 001029bc */

/* DWARF original prototype: char * getName(Base * this) */

char * Base_getName(Base *this_ptr)

{
 return "Base";
}



/* Function: ~Base @ 001029c8 */

/* DWARF original prototype: void ~Base(Base * this, int __in_chrg) */

void Base_destructor(Base *this_ptr,int __in_chrg)

{
 return;
}



/* Function: virtual_func @ 001029ce */

/* DWARF original prototype: int virtual_func(Derived * this, int x) */

int Derived_virtual_func(Derived *this_ptr,int x)

{
 return x * this_ptr->multiplier;
}



/* Function: getName @ 001029da */

/* DWARF original prototype: char * getName(Derived * this) */

char * Derived_getName(Derived *this_ptr)

{
 return "Derived";
}



/* Function: funcA @ 001029e6 */

/* DWARF original prototype: int funcA(MultiDerived * this) */

int MultiDerived_funcA(MultiDerived *this_ptr)

{
 return 0x1e;
}



/* Function: funcB @ 001029f0 */

/* DWARF original prototype: int funcB(MultiDerived * this) */

int MultiDerived_funcB(MultiDerived *this_ptr)

{
 return 0x28;
}



/* Function: funcB @ 001029fa */

/* non-virtual thunk to MultiDerived::funcB() */

undefined8 MultiDerived_funcB_thunk(MultiDerived *this_ptr)

{
 return 0x28;
}



/* Function: func @ 00102a04 */

/* DWARF original prototype: int func(MiddleA * this) */

int MiddleA_func(MiddleA *this_ptr)

{
 return *(int *)((long)&this_ptr->dataA + (long)this_ptr->_vptr_MiddleA[-3]) + 0x96;
}



/* Function: func @ 00102a19 */

/* virtual thunk to MiddleA::func() */

int MiddleA_func_thunk(MiddleA *this_ptr)

{
 _func_int_varargs *p_Var1;
 
 p_Var1 = (_func_int_varargs *)((long)&this_ptr->_vptr_MiddleA + (long)this_ptr->_vptr_MiddleA[-3]);
 return *(int *)(p_Var1 + *(long *)(*(long *)p_Var1 + -0x18) + 8) + 0x96;
}



/* Function: func @ 00102a36 */

/* DWARF original prototype: int func(MiddleB * this) */

int MiddleB_func(MiddleB *this_ptr)

{
 return *(int *)((long)&this_ptr->dataB + (long)this_ptr->_vptr_MiddleB[-3]) + 200;
}



/* Function: func @ 00102a4b */

/* virtual thunk to MiddleB::func() */

int MiddleB_func_thunk(MiddleB *this_ptr)

{
 _func_int_varargs *p_Var1;
 
 p_Var1 = (_func_int_varargs *)((long)&this_ptr->_vptr_MiddleB + (long)this_ptr->_vptr_MiddleB[-3]);
 return *(int *)(p_Var1 + *(long *)(*(long *)p_Var1 + -0x18) + 8) + 200;
}



/* Function: func @ 00102a68 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: int func(DiamondDerived * this) */

int DiamondDerived_func(void *this_ptr)

{
 return *(int *)((long)&((DiamondDerived *)this_ptr)->super_MiddleA.dataA + (long)((DiamondDerived *)this_ptr)->super_MiddleA._vptr_MiddleA[-3]
 ) + 0xfa;
}



/* Function: func @ 00102a7d */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::func() */

int DiamondDerived_func_thunk_impl(DiamondDerived *this_ptr)

{
 _func_int_varargs *p_Var1;
 
 p_Var1 = (_func_int_varargs *)
 ((long)&(this_ptr->super_MiddleA)._vptr_MiddleA +
 (long)(this_ptr->super_MiddleA)._vptr_MiddleA[-3]);
 return *(int *)(p_Var1 + *(long *)(*(long *)p_Var1 + -0x18) + 8) + 0xfa;
}



/* Function: func @ 00102a99 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::func() */

int DiamondDerived_func_nonvirtual_thunk_impl(DiamondDerived *this_ptr)

{
 return *(int *)((long)this_ptr + *(long *)(*(long *)&this_ptr[-1].field_0x20 + -0x18) + -8) + 0xfa;
}



/* Function: getType @ 00102ab0 */

/* DWARF original prototype: int getType(RTTIDerivedA * this) */

int RTTIDerivedA_getType(RTTIDerivedA *this_ptr)

{
 return 1;
}



/* Function: getType @ 00102aba */

/* DWARF original prototype: int getType(RTTIDerivedB * this) */

int RTTIDerivedB_getType(RTTIDerivedB *this_ptr)

{
 return 2;
}



/* Function: ~RTTIDerivedB @ 00102ac4 */

/* DWARF original prototype: void ~RTTIDerivedB(RTTIDerivedB * this, int __in_chrg) */

void RTTIDerivedB_destructor(RTTIDerivedB *this_ptr,int __in_chrg)

{
 return;
}



/* Function: ~RTTIDerivedA @ 00102aca */

/* DWARF original prototype: void ~RTTIDerivedA(RTTIDerivedA * this, int __in_chrg) */

void RTTIDerivedA_destructor(RTTIDerivedA *this_ptr,int __in_chrg)

{
 return;
}



/* Function: ~DiamondDerived @ 00102ad0 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this, int __in_chrg, void * *
 __vtt_parm) */

void
DiamondDerived_destructor(DiamondDerived *this_ptr,int __in_chrg,void **__vtt_parm)

{
 return;
}



/* Function: ~DiamondDerived @ 00102ad5 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_destructor_nonvirtual_thunk(DiamondDerived *this_ptr)

{
 return;
}



/* Function: ~DiamondDerived @ 00102ada */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_destructor_virtual_thunk(DiamondDerived *this_ptr)

{
 return;
}



/* Function: ~MultiDerived @ 00102ae0 */

/* DWARF original prototype: void ~MultiDerived(MultiDerived * this, int __in_chrg) */

void MultiDerived_destructor(MultiDerived *this_ptr,int __in_chrg)

{
 return;
}



/* Function: ~MultiDerived @ 00102ae5 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void MultiDerived_destructor_thunk(MultiDerived *this_ptr)

{
 return;
}



/* Function: ~Derived @ 00102aea */

/* DWARF original prototype: void ~Derived(Derived * this, int __in_chrg) */

void Derived_destructor(Derived *this_ptr,int __in_chrg)

{
 return;
}



/* Function: ~Base @ 00102af0 */

/* DWARF original prototype: void ~Base(Base * this, int __in_chrg) */

void Base_destructor_impl(Base *this_ptr,int __in_chrg)

{
 operator_delete(this_ptr,8);
 return;
}



/* Function: ~Derived @ 00102b08 */

/* DWARF original prototype: void ~Derived(Derived * this, int __in_chrg) */

void Derived_destructor_impl(Derived *this_ptr,int __in_chrg)

{
 operator_delete(this_ptr,0x10);
 return;
}



/* Function: ~MultiDerived @ 00102b20 */

/* DWARF original prototype: void ~MultiDerived(MultiDerived * this, int __in_chrg) */

void MultiDerived_destructor_impl(MultiDerived *this_ptr,int __in_chrg)

{
 operator_delete(this_ptr,0x20);
 return;
}



/* Function: ~MultiDerived @ 00102b37 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void MultiDerived_destructor_thunk_impl(MultiDerived *this_ptr)

{
 operator_delete(&this_ptr[-1].super_BaseB,0x20);
 return;
}



/* Function: ~RTTIDerivedA @ 00102b52 */

/* DWARF original prototype: void ~RTTIDerivedA(RTTIDerivedA * this, int __in_chrg) */

void RTTIDerivedA_destructor_impl(RTTIDerivedA *this_ptr,int __in_chrg)

{
 operator_delete(this_ptr,8);
 return;
}



/* Function: ~RTTIDerivedB @ 00102b6a */

/* DWARF original prototype: void ~RTTIDerivedB(RTTIDerivedB * this, int __in_chrg) */

void RTTIDerivedB_destructor_impl(RTTIDerivedB *this_ptr,int __in_chrg)

{
 operator_delete(this_ptr,8);
 return;
}



/* Function: ~DiamondDerived @ 00102b82 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this, int __in_chrg, void * *
 __vtt_parm) */

void
DiamondDerived_destructor_impl(DiamondDerived *this_ptr,int __in_chrg,void **__vtt_parm)

{
 operator_delete(this_ptr,0x30);
 return;
}



/* Function: ~DiamondDerived @ 00102b99 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_destructor_virtual_thunk_impl(DiamondDerived *this_ptr)

{
 operator_delete((_func_int_varargs *)
 ((long)&(this_ptr->super_MiddleA)._vptr_MiddleA +
 (long)(this_ptr->super_MiddleA)._vptr_MiddleA[-4]),0x30);
 return;
}



/* Function: ~DiamondDerived @ 00102bb7 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_destructor_nonvirtual_thunk_impl(DiamondDerived *this_ptr)

{
 operator_delete(&this_ptr[-1].field_0x20,0x30);
 return;
}



/* Function: template_max<int> @ 00102bd2 */

int template_max_int(int a,int b)

{
 if (b <= a) {
 b = a;
 }
 return b;
}



/* Function: template_max<double> @ 00102bde */

double template_max_double(double a,double b)

{
 if (a <= b) {
 a = b;
 }
 return a;
}



/* Function: template_swap<int> @ 00102be7 */

void template_swap_int(int *a,int *b)

{
 int iVar1;
 
 iVar1 = *a;
 *a = *b;
 *b = iVar1;
 return;
}



/* Function: Container @ 00102bf4 */

/* DWARF original prototype: void Container(Container<int> * this) */

void Container_int_Constructor(Container_int *this_ptr)

{
 this_ptr->size = 0;
 return;
}



/* Function: push @ 00102c00 */

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



/* Function: get @ 00102c18 */

/* DWARF original prototype: int get(Container<int> * this, int idx) */

int Container_int_get(Container_int *this_ptr,int idx)

{
 int iVar1;
 
 iVar1 = 0;
 if ((-1 < idx) && (idx < this_ptr->size)) {
 iVar1 = this_ptr->data[idx];
 }
 return iVar1;
}



/* Function: getSize @ 00102c34 */

/* DWARF original prototype: int getSize(Container<int> * this) */

int Container_int_getSize(Container_int *this_ptr)

{
 return this_ptr->size;
}



/* Function: Container @ 00102c3c */

/* DWARF original prototype: void Container(Container<double> * this) */

void Container_double_Constructor(Container_double *this_ptr)

{
 this_ptr->size = 0;
 return;
}



/* Function: push @ 00102c48 */

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



/* Function: get @ 00102c62 */

/* DWARF original prototype: double get(Container<double> * this, int idx) */

double Container_double_get(Container_double *this_ptr,int idx)

{
 double dVar1;
 
 dVar1 = 0.0;
 if ((-1 < idx) && (idx < this_ptr->size)) {
 dVar1 = this_ptr->data[idx];
 }
 return dVar1;
}



/* Function: getSize @ 00102c7e */

/* DWARF original prototype: int getSize(Container<double> * this) */

int Container_double_getSize(Container_double *this_ptr)

{
 return this_ptr->size;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 68 */
