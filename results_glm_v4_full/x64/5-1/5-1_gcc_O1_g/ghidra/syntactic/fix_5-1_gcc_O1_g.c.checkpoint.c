/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;
typedef unsigned int uint;

/* Forward declarations and missing function prototypes */
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/* Minimal type_info definition for RTTI */
struct type_info {
  const char *__name;
};

/* RTTI type_info symbol definitions */
const struct type_info int_typeinfo = { "i" };
const struct type_info RTTIBase_typeinfo = { "8RTTIBase" };
const struct type_info RTTIDerivedA_typeinfo = { "12RTTIDerivedA" };
const struct type_info RTTIDerivedB_typeinfo = { "12RTTIDerivedB" };

void __stack_chk_fail(void) __attribute__((noreturn));
void operator_delete(void *ptr, size_t size) noexcept;
void operator_delete(void *ptr) noexcept;
void *operator_new__(size_t);
void *operator_new(size_t);
void *operator_new(size_t size, void *ptr) throw();

/* Exception handling stubs */
void *__cxa_allocate_exception(size_t size) {
    return operator_new(size);
}

void __cxa_throw(void *thrown_exception, const struct type_info *tinfo, void (*dest)(void *)) {
    /* Stub - in real code this would unwind the stack */
    for(;;);
}

/* Implementation of operator_new__ */
void *operator_new__(size_t size) {
    void *ptr = malloc(size);
    return ptr;
}

/* Implementation of operator_new */
void *operator_new(size_t size) {
    return operator_new__(size);
}
inline void *operator new(size_t, void *ptr) throw() { return ptr; }
void *__cxa_allocate_exception(size_t size);
void __cxa_throw(void *thrown_exception, const struct type_info *tinfo, void (*dest)(void *));
void *__dynamic_cast(void *src_ptr, const struct type_info *src_type, const struct type_info *dst_type, int src2dst_offset);
size_t strlen(const char *s);
int strcmp(const char *s1, const char *s2);
char *strncpy(char *dest, const char *src, size_t n);
int puts(const char *s);
int __printf_chk(int flag, const char *format, ...);
int template_max_int(int a, int b);
double template_max_double(double a, double b);
void template_swap_int(int *a, int *b);
int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle);

/* Data string placeholders */
extern const char DAT_00103018[];
extern const char DAT_0010303c[];
extern const char DAT_0010305a[];
extern const char DAT_00103076[];
extern const char DAT_00103092[];
extern const char DAT_001030ae[];
extern const char DAT_001030cb[];
extern const char DAT_001030e7[];
extern const char DAT_00103103[];
extern const char DAT_0010311f[];
extern const char DAT_0010313b[];
extern const char DAT_00103158[];
extern const char DAT_00103175[];

/* Global objects for C++ runtime */
extern void *__dso_handle;

/* Data string definitions */
const char DAT_00103018[] = "Testing C++ Object-Oriented Features:\n";
const char DAT_0010303c[] = "  Member function test: %d\n";
const char DAT_0010305a[] = "  Constructor test: %d\n";
const char DAT_00103076[] = "  Virtual function test: %d\n";
const char DAT_00103092[] = "  Multiple inheritance test: %d\n";
const char DAT_001030ae[] = "  Diamond inheritance test: %d\n";
const char DAT_001030cb[] = "  Operator overload test: %d\n";
const char DAT_001030e7[] = "  Template function test: %d\n";
const char DAT_00103103[] = "  Template class test: %d\n";
const char DAT_0010311f[] = "  Lambda test: %d\n";
const char DAT_0010313b[] = "  Exception test: %d\n";
const char DAT_00103158[] = "  Smart pointer test: %d\n";
const char DAT_00103175[] = "  RTTI test: %d\n";

/* RTTI typeinfo placeholders */
extern const struct type_info RTTIBase_typeinfo;
extern const struct type_info RTTIDerivedA_typeinfo;
extern const struct type_info RTTIDerivedB_typeinfo;
extern const struct type_info int_typeinfo;

/* Virtual function table and function pointers */
extern void *DiamondDerived_vtable;

/* Forward declarations of class/struct types (MUST be before function prototypes) */
typedef struct Base Base;
typedef struct Derived Derived;
typedef struct MultiDerived MultiDerived;
typedef struct MiddleA MiddleA;
typedef struct MiddleB MiddleB;
typedef struct DiamondDerived DiamondDerived;
typedef struct SimpleClass SimpleClass;
typedef struct LifecycleClass LifecycleClass;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;
typedef struct RTTIBase RTTIBase;

/* Forward declarations for virtual functions used in vtables */
int Base_virtual_func(Base *_this, int x);
char * Base_getName(Base *_this);
void Base_destructor(Base *_this, int __in_chrg);
int Derived_virtual_func(Derived *_this, int x);
char * Derived_getName(Derived *_this);
void Derived_destructor(Derived *_this, int __in_chrg);
int RTTIDerivedA_getType(RTTIDerivedA *_this);
void RTTIDerivedA_destructor(RTTIDerivedA *_this, int __in_chrg);
int RTTIDerivedB_getType(RTTIDerivedB *_this);
void RTTIDerivedB_destructor(RTTIDerivedB *_this, int __in_chrg);

/* Virtual table pointers - point to actual vtables */
void *PTR_virtual_func_001059a0[] = {
    (void *)Base_virtual_func,
    (void *)Base_getName,
    (void *)Base_destructor
};

void *PTR_virtual_func_001059d0[] = {
    (void *)Derived_virtual_func,
    (void *)Derived_getName,
    (void *)Derived_destructor
};

void *PTR__RTTIDerivedA_00105ba0[] = {
    (void *)RTTIDerivedA_getType,
    (void *)RTTIDerivedA_destructor
};

void *PTR__RTTIDerivedB_00105bc8[] = {
    (void *)RTTIDerivedB_getType,
    (void *)RTTIDerivedB_destructor
};

/* Missing type definitions */
typedef uint32_t undefined4;
typedef int undefined;

/* Function pointer type definitions (must be before struct usage) */
typedef int (*_func_int_varargs)();
typedef int (*_virtual_func)(void *_this, int x);

/* Missing class/struct declarations */
typedef struct Base Base;
typedef struct Derived Derived;
typedef struct MultiDerived MultiDerived;
typedef struct MiddleA MiddleA;
typedef struct MiddleB MiddleB;
typedef struct DiamondDerived DiamondDerived;
typedef struct SimpleClass SimpleClass;
typedef struct LifecycleClass LifecycleClass;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;
typedef struct RTTIBase RTTIBase;

/* Forward declare std::ios_base for constructor/destructor */
namespace std {
  class ios_base {
  public:
    class Init {
    public:
      Init();
      ~Init();
    };
  };
}

/* Forward declare std::__ioinit for global initialization */
namespace std { extern ios_base::Init __ioinit; }

/* Constructor and destructor implementations for std::ios_base::Init */
namespace std {
  ios_base::Init::Init() {
    /* Empty constructor for iostream initialization */
  }
  
  ios_base::Init::~Init() {
    /* Empty destructor for iostream cleanup */
  }
}

/* Struct definitions */
struct SimpleClass {
  char name[32];
};

struct LifecycleClass {
  int field_0;
  int value;
  int field_8;
  int field_c;
  int field_10;
};

/* Static member for LifecycleClass */
extern int LifecycleClass_instance_count;

struct Base {
  _func_int_varargs **_vptr_Base;
};

struct Derived {
  Base super_Base;
  int multiplier;
};

struct MultiDerived {
  Base super_BaseA;
  Base super_BaseB;
  int padding;
  int field_18;
};

struct MiddleA {
  _func_int_varargs **_vptr_MiddleA;
  int _16_8_;
  int dataA;
};

struct MiddleB {
  _func_int_varargs **_vptr_MiddleB;
  int dataB;
};

struct DiamondDerived {
  MiddleA super_MiddleA;
  int _32_8_;
  int _40_4_;
  MiddleB super_MiddleB;
  int field_0x20;
  int _48_4_;
};

struct RTTIDerivedA {
  _func_int_varargs **_vptr;
};

struct RTTIDerivedB {
  _func_int_varargs **_vptr;
};

struct Container_int {
  int size;
  int data[10];
};

struct Container_double {
  int size;
  double data[10];
};

typedef int (*code)();

/* Template class stubs */


#define in_FS_OFFSET 40

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
 (void)(*(code *)(undefined *)0x0)();
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
 SimpleClass obj;
 
 lVar1 = *(long *)(in_FS_OFFSET + 0x28);
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
 LifecycleClass obj;
 
 /* Unresolved local var: LifecycleClass obj@[???] */
 pvVar2 = operator_new__(0x14);
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



/* Forward declaration */
int DiamondDerived_func(DiamondDerived *_this);

/* Function: test_cpp_diamond_inheritance @ 001024d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */

int test_cpp_diamond_inheritance(void)

{
 long lVar1;
 int iVar2;
 int iVar3;
 DiamondDerived obj;
 
 lVar1 = *(long *)(in_FS_OFFSET + 0x28);
 obj.super_MiddleA._vptr_MiddleA = (_func_int_varargs **)((long)DiamondDerived_vtable + 0x18);
 obj._32_8_ = 0x105b78;
 obj.super_MiddleA._16_8_ = 0x105b40;
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
 __cxa_throw(puVar1,&int_typeinfo,0);
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
 
 plVar3 = (long *)operator_new(8);
 *plVar3 = (long)&PTR__RTTIDerivedA_00105ba0;
 plVar4 = (long *)operator_new(8);
 *plVar4 = (long)&PTR__RTTIDerivedB_00105bc8;
 lVar1 = *plVar3;
 __s1 = *(char **)(*(long *)(lVar1 + -8) + 8);
 uVar7 = 10;
 {
/* Call virtual function, ignore void return */
  void (*vfunc1)() = (void (*)())(*(long *)(lVar1 + 8));
  vfunc1();
 }
 if ((__s1 != "12RTTIDerivedA") && (uVar7 = 0, *__s1 != '*')) {
 iVar2 = strcmp(__s1,"12RTTIDerivedA");
 uVar7 = -(uint)(iVar2 == 0) & 10;
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
 {
   /* Call virtual function, ignore void return */
   void (*vfunc2)() = (void (*)())(*(long *)(*plVar4 + 8));
   vfunc2();
 }
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
 test_cpp_exception();
 __printf_chk(1,DAT_0010313b,0x2a);
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

/* Wrapper for std::ios_base::Init destructor */
static void std_ios_base_Init_destructor_wrapper(void *ptr) {
    ((std::ios_base::Init*)ptr)->~Init();
}

void _GLOBAL__sub_I__Z20test_cpp_member_funcv(void)

{
    /* Use placement new for construction */
    new (&std::__ioinit) std::ios_base::Init();
    __cxa_atexit(std_ios_base_Init_destructor_wrapper, &std::__ioinit, &__dso_handle);
    return;
}



/* Function: virtual_func @ 001029b4 */

/* DWARF original prototype: int virtual_func(Base * this, int x) */

int Base_virtual_func(Base *_this,int x)

{
 return x + 1;
}



/* Function: getName @ 001029bc */

/* DWARF original prototype: char * getName(Base * this) */

char * Base_getName(Base *_this)

{
  return "Base";
}



/* Function: ~Base @ 001029c8 */

/* DWARF original prototype: void ~Base(Base * this, int __in_chrg) */

void Base_destructor(Base *_this,int __in_chrg)

{
  return;
}



/* Function: virtual_func @ 001029ce */

/* DWARF original prototype: int virtual_func(Derived * this, int x) */

int Derived_virtual_func(Derived *_this,int x)

{
  return x * _this->multiplier;
}



/* Function: getName @ 001029da */

/* DWARF original prototype: char * getName(Derived * this) */

char * Derived_getName(Derived *_this)

{
  return "Derived";
}



/* Function: funcA @ 001029e6 */

/* DWARF original prototype: int funcA(MultiDerived * this) */

int MultiDerived_funcA(MultiDerived *_this)

{
  return 0x1e;
}



/* Function: funcB @ 001029f0 */

/* DWARF original prototype: int funcB(MultiDerived * this) */

int MultiDerived_funcB(MultiDerived *_this)

{
  return 0x28;
}



/* Function: funcB @ 001029fa */

/* non-virtual thunk to MultiDerived::funcB() */

uint64_t MultiDerived_funcB_nonvirtual_thunk(MultiDerived *_this)

{
  return 0x28;
}



/* Function: func @ 00102a04 */

/* DWARF original prototype: int func(MiddleA * this) */

int MiddleA_func(MiddleA *_this)

{
  return *(int *)((long)&_this->dataA + (long)_this->_vptr_MiddleA[-3]) + 0x96;
}



/* Function: func @ 00102a19 */

/* virtual thunk to MiddleA::func() */

int MiddleA_func_virtual_thunk(MiddleA *_this)

{
  intptr_t vtable_ptr;
  intptr_t vfunc_offset;
  intptr_t p_Var1;
  
  vtable_ptr = (intptr_t)_this->_vptr_MiddleA;
  p_Var1 = (intptr_t)((char *)_this + ((intptr_t*)_this->_vptr_MiddleA)[-3]);
  vfunc_offset = *(intptr_t *)(vtable_ptr - 0x18);
  return *(int *)(p_Var1 + vfunc_offset + 8) + 0x96;
}



/* Function: func @ 00102a36 */

/* DWARF original prototype: int func(MiddleB * this) */

int MiddleB_func(MiddleB *_this)

{
  return *(int *)((long)&_this->dataB + (long)_this->_vptr_MiddleB[-3]) + 200;
}



/* Function: func @ 00102a4b */

/* virtual thunk to MiddleB::func() */

int MiddleB_func_virtual_thunk(MiddleB *_this)

{
  _func_int_varargs *p_Var1;
  
  p_Var1 = (_func_int_varargs *)((long)&_this->_vptr_MiddleB + (long)_this->_vptr_MiddleB[-3]);
  return *(int *)(p_Var1 + *(long *)(*(long *)p_Var1 + -0x18) + 8) + 200;
}



/* Function: func @ 00102a68 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: int func(DiamondDerived * this) */

int DiamondDerived_func(DiamondDerived *_this)

{
  return *(int *)((long)&(_this->super_MiddleA).dataA + (long)(_this->super_MiddleA)._vptr_MiddleA[-3]
  ) + 0xfa;
}



/* Function: func @ 00102a7d */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::func() */

int DiamondDerived_func_virtual_thunk2(DiamondDerived *_this)

{
  _func_int_varargs *p_Var1;
  
  p_Var1 = (_func_int_varargs *)
  ((long)&(_this->super_MiddleA)._vptr_MiddleA +
  (long)(_this->super_MiddleA)._vptr_MiddleA[-3]);
  return *(int *)(p_Var1 + *(long *)(*(long *)p_Var1 + -0x18) + 8) + 0xfa;
}



/* Function: func @ 00102a99 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::func() */

int DiamondDerived_func_nonvirtual_thunk(DiamondDerived *obj_ptr)
{
  DiamondDerived *adjusted = (DiamondDerived *)((char *)obj_ptr - 8);
  long vtable_offset = *(long *)((char *)adjusted + *(intptr_t *)((char *)adjusted - 8 + -0x18) - 8);
  return *(int *)((char *)adjusted + vtable_offset) + 0xfa;
}



/* Function: getType @ 00102ab0 */

/* DWARF original prototype: int getType(RTTIDerivedA * this) */

int RTTIDerivedA_getType(RTTIDerivedA *_this)

{
  return 1;
}



/* Function: getType @ 00102aba */

/* DWARF original prototype: int getType(RTTIDerivedB * this) */

int RTTIDerivedB_getType(RTTIDerivedB *_this)

{
  return 2;
}



/* Function: ~RTTIDerivedB @ 00102ac4 */

/* DWARF original prototype: void ~RTTIDerivedB(RTTIDerivedB * this, int __in_chrg) */

void RTTIDerivedB_destructor(RTTIDerivedB *_this,int __in_chrg)

{
  return;
}



/* Function: ~RTTIDerivedA @ 00102aca */

/* DWARF original prototype: void ~RTTIDerivedA(RTTIDerivedA * this, int __in_chrg) */

void RTTIDerivedA_destructor(RTTIDerivedA *_this,int __in_chrg)

{
  return;
}



/* Function: ~DiamondDerived @ 00102ad0 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this, int __in_chrg, void * *
 __vtt_parm) */

void
DiamondDerived_destructor(DiamondDerived *_this,int __in_chrg,void **__vtt_parm)

{
 return;
}



/* Function: ~DiamondDerived @ 00102ad5 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_destructor_nonvirtual_thunk(DiamondDerived *_this)

{
 return;
}



/* Function: ~DiamondDerived @ 00102ada */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_destructor_virtual_thunk(DiamondDerived *_this)

{
 return;
}



/* Function: ~MultiDerived @ 00102ae0 */

/* DWARF original prototype: void ~MultiDerived(MultiDerived * this, int __in_chrg) */

void MultiDerived_destructor(MultiDerived *_this,int __in_chrg)

{
 return;
}



/* Function: ~MultiDerived @ 00102ae5 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void MultiDerived_destructor_nonvirtual_thunk(MultiDerived *_this)

{
 return;
}



/* Function: ~Derived @ 00102aea */

/* DWARF original prototype: void ~Derived(Derived * this, int __in_chrg) */

void Derived_destructor(Derived *_this,int __in_chrg)

{
 return;
}



/* Function: ~Base @ 00102af0 */

/* DWARF original prototype: void ~Base(Base * this, int __in_chrg) */

void Base_destructor2(Base *_this,int __in_chrg)

{
 operator_delete(_this,8);
 return;
}



/* Function: ~Derived @ 00102b08 */

/* DWARF original prototype: void ~Derived(Derived * this, int __in_chrg) */

void Derived_destructor2(Derived *_this,int __in_chrg)

{
 operator_delete(_this,0x10);
 return;
}



/* Function: ~MultiDerived @ 00102b20 */

/* DWARF original prototype: void ~MultiDerived(MultiDerived * this, int __in_chrg) */

void MultiDerived_destructor2(MultiDerived *_this,int __in_chrg)

{
 operator_delete(_this,0x20);
 return;
}



/* Function: ~MultiDerived @ 00102b37 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void MultiDerived_destructor2_nonvirtual_thunk(MultiDerived *_this)

{
 operator_delete(&_this[-1].super_BaseB,0x20);
 return;
}



/* Function: ~RTTIDerivedA @ 00102b52 */

/* DWARF original prototype: void ~RTTIDerivedA(RTTIDerivedA * this, int __in_chrg) */

void RTTIDerivedA_destructor2(RTTIDerivedA *_this,int __in_chrg)

{
 operator_delete(_this,8);
 return;
}



/* Function: ~RTTIDerivedB @ 00102b6a */

/* DWARF original prototype: void ~RTTIDerivedB(RTTIDerivedB * this, int __in_chrg) */

void RTTIDerivedB_destructor2(RTTIDerivedB *_this,int __in_chrg)

{
 operator_delete(_this,8);
 return;
}



/* Function: ~DiamondDerived @ 00102b82 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this, int __in_chrg, void * *
 __vtt_parm) */

void
DiamondDerived_destructor2(DiamondDerived *_this,int __in_chrg,void **__vtt_parm)

{
 operator_delete(_this,0x30);
 return;
}



/* Function: ~DiamondDerived @ 00102b99 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_destructor2_virtual_thunk(DiamondDerived *_this)

{
 operator_delete((_func_int_varargs *)
 ((long)&(_this->super_MiddleA)._vptr_MiddleA +
 (long)(_this->super_MiddleA)._vptr_MiddleA[-4]),0x30);
 return;
}



/* Function: ~DiamondDerived @ 00102bb7 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_destructor2_nonvirtual_thunk2(DiamondDerived *_this)

{
 operator_delete((void *)((char *)_this - sizeof(DiamondDerived) + offsetof(DiamondDerived, field_0x20)), 0x30);
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

void Container_int_Constructor(Container_int *_this)

{
 _this->size = 0;
 return;
}



/* Function: push @ 00102c00 */

/* DWARF original prototype: void push(Container<int> * this, int value) */

void Container_int_push(Container_int *_this,int value)

{
 int iVar1;
 
 iVar1 = _this->size;
 if (iVar1 < 10) {
 _this->size = iVar1 + 1;
 _this->data[iVar1] = value;
 }
 return;
}



/* Function: get @ 00102c18 */

/* DWARF original prototype: int get(Container<int> * this, int idx) */

int Container_int_get(Container_int *_this,int idx)

{
 int iVar1;
 
 iVar1 = 0;
 if ((-1 < idx) && (idx < _this->size)) {
 iVar1 = _this->data[idx];
 }
 return iVar1;
}



/* Function: getSize @ 00102c34 */

/* DWARF original prototype: int getSize(Container<int> * this) */

int Container_int_getSize(Container_int *_this)

{
 return _this->size;
}



/* Function: Container @ 00102c3c */

/* DWARF original prototype: void Container(Container<double> * this) */

void Container_double_Constructor(Container_double *_this)

{
 _this->size = 0;
 return;
}



/* Function: push @ 00102c48 */

/* DWARF original prototype: void push(Container<double> * this, double value) */

void Container_double_push(Container_double *_this,double value)

{
 int iVar1;
 
 iVar1 = _this->size;
 if (iVar1 < 10) {
 _this->size = iVar1 + 1;
 _this->data[iVar1] = value;
 }
 return;
}



/* Function: get @ 00102c62 */

/* DWARF original prototype: double get(Container<double> * this, int idx) */

double Container_double_get(Container_double *_this,int idx)

{
 double dVar1;
 
 dVar1 = 0.0;
 if ((-1 < idx) && (idx < _this->size)) {
 dVar1 = _this->data[idx];
 }
 return dVar1;
}



/* Function: getSize @ 00102c7e */

/* DWARF original prototype: int getSize(Container<double> * this) */

int Container_double_getSize(Container_double *_this)

{
 return _this->size;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 68 */
