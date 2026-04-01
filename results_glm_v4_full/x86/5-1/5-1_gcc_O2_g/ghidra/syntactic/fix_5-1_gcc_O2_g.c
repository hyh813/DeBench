/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;


typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef unsigned int uint;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>

/* Type definitions for missing types */
typedef int (*_func_int_varargs)(void);
typedef struct { const char *name; } type_info;
typedef void (*code)(void*);
typedef int undefined;
typedef unsigned int undefined4;

/* Function declarations for C++ runtime */
void operator_delete(void *ptr);
void __stack_chk_fail_local(void);

/* Implementation of operator delete */
void operator_delete(void *ptr) {
  free(ptr);
}

/* Implementation of __stack_chk_fail */
void __stack_chk_fail(void) {
  /* Minimal stub to satisfy linker */
  __builtin_trap();
}

void *__cxa_allocate_exception(size_t size) {
  return malloc(size);
}

void __cxa_throw(void *thrown_exception, type_info *tinfo, void (*dest)(void*)) {
  /* Minimal stub - will call abort in real implementation */
  fprintf(stderr, "Exception thrown: %s\n", tinfo ? tinfo->name : "unknown");
  free(thrown_exception);
  exit(1);
}

int __printf_chk(int flag, const char *format, ...) {
  va_list args;
  va_start(args, format);
  int ret = vprintf(format, args);
  va_end(args);
  return ret;
}

void *operator_new(size_t size) {
  return malloc(size);
}

void *__dynamic_cast(void *src_ptr, type_info *src_type, type_info *dst_type, int src2dst_offset) {
  /* Minimal stub implementation for RTTI */
  if (!src_ptr || !src_type || !dst_type) return NULL;
  /* In real implementation, this would walk the inheritance hierarchy */
  return src_ptr;
}

/* std::ios_base stub declarations */
struct std_ios_base_Init { };
void std_ios_base_Init_Init(struct std_ios_base_Init *self);
void std_ios_base_Init_dtor(struct std_ios_base_Init *self);
void __cxa_atexit(void (*func)(void*), void *arg, void *dso_handle);
extern struct std_ios_base_Init std___ioinit;
extern void *__dso_handle;

/* Global typeinfo objects */
type_info int_typeinfo = { "int" };
type_info RTTIBase_typeinfo = { "Base" };
type_info RTTIDerivedA_typeinfo = { "12RTTIDerivedA" };
type_info RTTIDerivedB_typeinfo = { "12RTTIDerivedB" };

/* Data symbol declarations */
const char DAT_00012018[] = "Testing C++ Features:\n";
const char DAT_0001203c[] = "test_cpp_member_func: %d\n";
const char DAT_0001205a[] = "test_cpp_constructor: %d\n";
const char DAT_00012076[] = "test_cpp_virtual_func: %d\n";
const char DAT_00012092[] = "test_cpp_multiple_inheritance: %d\n";
const char DAT_000120ae[] = "test_cpp_diamond_inheritance: %d\n";
const char DAT_000120cb[] = "test_cpp_operator_overload: %d\n";
const char DAT_000120e7[] = "test_cpp_template_func: %d\n";
const char DAT_00012103[] = "test_cpp_template_class: %d\n";
const char DAT_0001211f[] = "test_cpp_lambda: %d\n";
const char DAT_0001213b[] = "test_cpp_exception: %d\n";
const char DAT_00012158[] = "test_cpp_smart_ptr: %d\n";
const char DAT_00012175[] = "test_cpp_rtti: %d\n";

/* Vtable pointer declarations */
extern void *PTR__RTTIDerivedA_00013e48;
extern void *PTR__RTTIDerivedB_00013e5c;

/* RTTI function forward declarations */
int RTTIDerivedA_getType(struct RTTIDerivedA *self);
int RTTIDerivedB_getType(struct RTTIDerivedB *self);
void RTTIDerivedA_destructor(struct RTTIDerivedA *self, int __in_chrg);
void RTTIDerivedB_destructor(struct RTTIDerivedB *self, int __in_chrg);

/* Dummy vtable definitions for RTTI */
static void *RTTIDerivedA_vtable[] = { (void*)&RTTIDerivedA_getType, (void*)&RTTIDerivedA_destructor };
static void *RTTIDerivedB_vtable[] = { (void*)&RTTIDerivedB_getType, (void*)&RTTIDerivedB_destructor };

void *PTR__RTTIDerivedA_00013e48 = RTTIDerivedA_vtable;
void *PTR__RTTIDerivedB_00013e5c = RTTIDerivedB_vtable;

#define ROUND(x) ((int)(x))

/* Forward declarations for C++ types */
struct Base { void **_vptr_Base; };
struct Derived { struct Base base; int multiplier; void **_vptr_Derived; };
struct MultiDerived { struct Base super_BaseA; void **_vptr_MultiDerived; struct Base super_BaseB; };
struct MiddleA { void **_vptr_MiddleA; int dataA; };
struct MiddleB { void **_vptr_MiddleB; int dataB; };
struct DiamondDerived { void **_vptr_Base; void **_vptr_DiamondDerived; struct MiddleA super_MiddleA; struct MiddleB super_MiddleB; struct DiamondDerived *field_0x10; };
struct RTTIDerivedA { void **_vptr_RTTRTTIDerivedA; };
struct RTTIDerivedB { void **_vptr_RTTRTTIDerivedB; };
struct Container_int { int size; int data[10]; };
struct Container_double { int size; double data[10]; };
struct SimpleClass { char name[32]; };
struct LifecycleClass { static int instance_count; };
struct ComplexClass;
struct std__ios_base__Init;

/* Template function forward declarations */
int template_max_int(int a, int b);
double template_max_double(double a, double b);
void template_swap_int(int *a, int *b);

/* RTTI function forward declarations */
int RTTIDerivedA_getType(struct RTTIDerivedA *self);
int RTTIDerivedB_getType(struct RTTIDerivedB *self);
void RTTIDerivedA_destructor(struct RTTIDerivedA *self, int __in_chrg);
void RTTIDerivedB_destructor(struct RTTIDerivedB *self, int __in_chrg);

/* Static member definition */
int LifecycleClass_instance_count = 0;
/* Define C++ style reference as alias to C definition */
#define LifecycleClass_instance_count LifecycleClass_instance_count

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/5-1/5-1_gcc_O2_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00011030 @ 00011030 */

void FUN_00011030(void)

{
 return;
}



/* Function: test_cpp_exception @ 00011270 */

/* WARNING: Function: __x86.get_pc_thunk.si replaced with injection: get_pc_thunk_si */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_exception(void)

{
 unsigned int *puVar1;
 void *exception_mem;
 
 exception_mem = __cxa_allocate_exception(4);
 puVar1 = (unsigned int *)exception_mem;
 *puVar1 = 0x2a;
 /* WARNING: Subroutine does not return */
 __cxa_throw(puVar1,&int_typeinfo,(void (*)(void*))NULL);
}



/* Function: main @ 00011380 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void);

void test_cpp_oo_features(void);

int main(void)

{
 test_cpp_oo_features();
 return 0;
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

int call_virtual_func(Base *self,int x)

{
 int iVar1;
 
 /* WARNING: Could not recover jumptable at 0x0001162e. Too many branches */
 /* WARNING: Treating indirect jump as call */
 iVar1 = ((int (*)(Base*, int))self->_vptr_Base[0])(self, x);
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
/* WARNING: Removing unreachable block (ram,0x000117df) */
/* WARNING: Removing unreachable block (ram,0x000117e4) */
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
 
 uVar7 = 10;
 piVar2 = (int*)operator_new(4);
 *piVar2 = (int)(intptr_t)PTR__RTTIDerivedA_00013e48;
 piVar3 = (int*)operator_new(4);
 *piVar3 = (int)(intptr_t)PTR__RTTIDerivedB_00013e5c;
 {
 void **vptr_ptr = (void **)(void*)((char *)piVar2 - sizeof(void*));
 void *vtable = *vptr_ptr;
 char *vtable_char = (char*)vtable;
 __s1 = *(char **)(vtable_char + sizeof(void*));
 }
 if ((__s1 != "12RTTIDerivedA") && (uVar7 = 0, *__s1 != '*')) {
 iVar4 = strcmp(__s1,"12RTTIDerivedA");
 uVar7 = -(uint)(iVar4 == 0) & 10;
 }
 /* Unresolved local var: RTTIDerivedA * derivedA@[???] */
 iVar5 = (int)(intptr_t)__dynamic_cast(piVar2,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0);
 /* Unresolved local var: RTTIDerivedB * derivedB@[???] */
 iVar4 = uVar7 + 0x14;
 if (iVar5 != 0) {
 iVar4 = uVar7 + 0x78;
 }
 iVar5 = (int)__dynamic_cast(piVar3,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo,0);
 if (iVar5 != 0) {
 iVar4 = iVar4 + 200;
 }
 sVar6 = strlen(__s1 + (*__s1 == '*'));
 ((code (*)(void*))(*(void ***)((char *)*piVar2 + 4)))(piVar2);
 ((code (*)(void*))(*(void ***)((char *)*piVar3 + 4)))(piVar3);
 return iVar4 + sVar6;
}



/* Function: test_cpp_oo_features @ 00011880 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_cpp_oo_features(void)

{
 int iVar1;
 size_t sVar2;
 int iVar3;
 int in_GS_OFFSET;
 SimpleClass obj;
 
 iVar1 = *(int *)(in_GS_OFFSET + 0x14);
 puts(DAT_00012018);
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int r3@[???] */
 obj.name[0x1e] = '\0';
 obj.name[0x1c] = '\0';
 obj.name[0x1d] = '\0';
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
 obj.name[0x1f] = '\0';
 sVar2 = strlen(obj.name);
 __printf_chk(1,DAT_0001203c,sVar2 + 0x125c);
 iVar3 = test_cpp_constructor();
 __printf_chk(1,DAT_0001205a,iVar3);
 __printf_chk(1,DAT_00012076,0x2a);
 __printf_chk(1,DAT_00012092,0x47);
 iVar3 = test_cpp_diamond_inheritance();
 __printf_chk(1,DAT_000120ae,iVar3);
 __printf_chk(1,DAT_000120cb,0x16);
 iVar3 = test_cpp_template_func();
 __printf_chk(1,DAT_000120e7,iVar3);
 __printf_chk(1,DAT_00012103,0x10);
 __printf_chk(1,DAT_0001211f,0x55);
 iVar3 = test_cpp_exception();
 __printf_chk(1,DAT_0001213b,iVar3);
 iVar3 = test_cpp_smart_ptr();
 __printf_chk(1,DAT_00012158,iVar3);
 iVar3 = test_cpp_rtti();
 __printf_chk(1,DAT_00012175,iVar3);
 if (iVar1 == *(int *)(in_GS_OFFSET + 0x14)) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: virtual_func @ 00011a30 */

int Base_virtual_func(Base *self,int x)

{
 return x + 1;
}



/* Function: getName @ 00011a40 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
char * Base_getName(Base *self)

{
 return "Base";
}



/* Function: ~Base @ 00011a60 */

/* DWARF original prototype: void ~Base(Base * this, int __in_chrg) */

void Base_destructor(Base *self,int __in_chrg)

{
 return;
}



/* Function: virtual_func @ 00011a70 */

int Derived_virtual_func(Derived *self,int x)

{
 return x * self->multiplier;
}



/* Function: getName @ 00011a90 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
char * Derived_getName(Derived *self)

{
 return "Derived";
}



/* Function: funcA @ 00011ab0 */

int MultiDerived_funcA(MultiDerived *self)

{
 return 0x1e;
}



/* Function: funcB @ 00011ac0 */

int MultiDerived_funcB(MultiDerived *self)

{
 return 0x28;
}



/* Function: funcB @ 00011ad0 */

/* non-virtual thunk to MultiDerived::funcB() */

undefined4 MultiDerived_funcB_thunk(MultiDerived *self)

{
 return 0x28;
}



/* Function: func @ 00011ae0 */

int MiddleA_func(MiddleA *self)

{
 return *(int *)((int)&self->dataA + (int)self->_vptr_MiddleA[-3]) + 0x96;
}



/* Function: func @ 00011b00 */

/* virtual thunk to MiddleA::func() */

int MiddleA_func_vthunk(MiddleA *self)

{
 _func_int_varargs *p_Var1;
 
 p_Var1 = (_func_int_varargs *)((intptr_t)&self->_vptr_MiddleA + (intptr_t)self->_vptr_MiddleA[-3]);
 return *(int *)(p_Var1 + *(intptr_t *)(*(intptr_t *)p_Var1 + -0xc) + 4) + 0x96;
}



/* Function: func @ 00011b20 */

int MiddleB_func(MiddleB *self)

{
 return *(int *)((int)&self->dataB + (int)self->_vptr_MiddleB[-3]) + 200;
}



/* Function: func @ 00011b40 */

/* virtual thunk to MiddleB::func() */

int MiddleB_func_vthunk(MiddleB *self)

{
 _func_int_varargs *p_Var1;
 
 p_Var1 = (_func_int_varargs *)((intptr_t)&self->_vptr_MiddleB + (intptr_t)self->_vptr_MiddleB[-3]);
 return *(int *)(p_Var1 + *(intptr_t *)(*(intptr_t *)p_Var1 + -0xc) + 4) + 200;
}



/* Function: func @ 00011b60 */
int DiamondDerived_func(DiamondDerived *self)

{
 return *(int *)((int)&(self->super_MiddleA).dataA + (int)(self->super_MiddleA)._vptr_MiddleA[-3])
 + 0xfa;
}



/* Function: DiamondDerived_func_vthunk @ 00011b80 */
/* virtual thunk to DiamondDerived::func() */

int DiamondDerived_func_vthunk(DiamondDerived *self)

{
 _func_int_varargs *p_Var1;
 
 p_Var1 = (_func_int_varargs *)
 ((intptr_t)&(self->super_MiddleA)._vptr_MiddleA + (intptr_t)(self->super_MiddleA)._vptr_MiddleA[-3]
 );
 return *(int *)(p_Var1 + *(intptr_t *)(*(intptr_t *)p_Var1 + -0xc) + 4) + 0xfa;
}



/* Function: DiamondDerived_func_nvthunk @ 00011ba0 */
/* non-virtual thunk to DiamondDerived::func() */

int DiamondDerived_func_nvthunk(DiamondDerived *self)

{
 return *(int *)((int)self + *(int *)(*(int *)&self[-1].field_0x10 + -0xc) + -4) + 0xfa;
}



/* Function: getType @ 00011bc0 */

int RTTIDerivedA_getType(RTTIDerivedA *self)

{
 return 1;
}



/* Function: getType @ 00011bd0 */

int RTTIDerivedB_getType(RTTIDerivedB *self)

{
 return 2;
}



/* Function: ~RTTIDerivedB @ 00011be0 */

/* DWARF original prototype: void ~RTTIDerivedB(RTTIDerivedB * this, int __in_chrg) */

void RTTIDerivedB_destructor(RTTIDerivedB *self,int __in_chrg)

{
 return;
}



/* Function: ~RTTIDerivedA @ 00011bf0 */

/* DWARF original prototype: void ~RTTIDerivedA(RTTIDerivedA * this, int __in_chrg) */

void RTTIDerivedA_destructor(RTTIDerivedA *self,int __in_chrg)

{
 return;
}



/* Function: ~DiamondDerived @ 00011c00 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this, int __in_chrg, void * *
 __vtt_parm) */

void DiamondDerived_destructor(DiamondDerived *self,int __in_chrg,void **__vtt_parm)

{
 return;
}



/* Function: ~DiamondDerived @ 00011c10 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_destructor_vthunk(DiamondDerived *self)

{
 return;
}



/* Function: ~DiamondDerived @ 00011c20 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_destructor_nvthunk(DiamondDerived *self)

{
 return;
}



/* Function: ~MultiDerived @ 00011c30 */

/* DWARF original prototype: void ~MultiDerived(MultiDerived * this, int __in_chrg) */

void MultiDerived_destructor(MultiDerived *self,int __in_chrg)

{
 return;
}



/* Function: ~MultiDerived @ 00011c40 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void MultiDerived_destructor_nvthunk(MultiDerived *self)

{
 return;
}



/* Function: ~Derived @ 00011c50 */

/* DWARF original prototype: void ~Derived(Derived * this, int __in_chrg) */

void Derived_destructor(Derived *self,int __in_chrg)

{
 return;
}



/* Function: ~Base @ 00011c60 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DWARF original prototype: void ~Base(Base * this, int __in_chrg) */

void Base_destructor2(Base *self,int __in_chrg)

{
 operator_delete(self);
 return;
}



/* Function: ~Derived @ 00011c90 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DWARF original prototype: void ~Derived(Derived * this, int __in_chrg) */

void Derived_destructor2(Derived *self,int __in_chrg)

{
 operator_delete(self);
 return;
}



/* Function: ~MultiDerived @ 00011cc0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DWARF original prototype: void ~MultiDerived(MultiDerived * this, int __in_chrg) */

void MultiDerived_destructor_full(MultiDerived *self,int __in_chrg)

{
 operator_delete(self);
 return;
}



/* Function: ~MultiDerived @ 00011cf0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* non-virtual thunk to MultiDerived::~MultiDerived() */

void MultiDerived_destructor_nvthunk2(MultiDerived *self)

{
 operator_delete((void*)((uintptr_t)self - sizeof(MultiDerived) + __builtin_offsetof(MultiDerived, super_BaseB)));
 return;
}



/* Function: ~RTTIDerivedB @ 00011d20 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DWARF original prototype: void ~RTTIDerivedB(RTTIDerivedB * this, int __in_chrg) */

void RTTIDerivedB_destructor2(RTTIDerivedB *self,int __in_chrg)

{
 operator_delete(self);
 return;
}



/* Function: ~RTTIDerivedA @ 00011d50 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DWARF original prototype: void ~RTTIDerivedA(RTTIDerivedA * this, int __in_chrg) */

void RTTIDerivedA_destructor2(RTTIDerivedA *self,int __in_chrg)

{
 operator_delete(self);
 return;
}



/* Function: ~DiamondDerived @ 00011d80 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this, int __in_chrg, void * *
 __vtt_parm) */

void DiamondDerived_destructor_full(DiamondDerived *self,int __in_chrg,void **__vtt_parm)

{
 operator_delete(self);
 return;
}



/* Function: ~DiamondDerived @ 00011db0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_destructor_vthunk2(DiamondDerived *self)

{
 operator_delete((void *)
 ((int)&(self->super_MiddleA)._vptr_MiddleA +
 (int)(self->super_MiddleA)._vptr_MiddleA[-4]));
 return;
}



/* Function: ~DiamondDerived @ 00011de0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_destructor_nvthunk2(DiamondDerived *self)

{
 operator_delete((void*)((char*)self - sizeof(DiamondDerived) + __builtin_offsetof(DiamondDerived, field_0x10)));
 return;
}



/* Function: template_max<int> @ 00011e10 */

/* WARNING: Unknown calling convention */

int template_max_int(int a,int b)

{
 if (a < b) {
 a = b;
 }
 return a;
}



/* Function: template_max<double> @ 00011e30 */

/* WARNING: Unknown calling convention */

double template_max_double(double a,double b)

{
 if (a <= b) {
 a = b;
 }
 return a;
}



/* Function: template_swap<int> @ 00011e50 */

/* WARNING: Unknown calling convention */

void template_swap_int(int *a,int *b)

{
 int iVar1;
 
 iVar1 = *a;
 *a = *b;
 *b = iVar1;
 return;
}



/* Function: Container @ 00011e70 */

void Container_int_Constructor(Container_int *self)

{
 self->size = 0;
 return;
}



/* Function: push @ 00011e80 */

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



/* Function: get @ 00011ea0 */

int Container_int_get(Container_int *self,int idx)

{
 if ((-1 < idx) && (idx < self->size)) {
 return self->data[idx];
 }
 return 0;
}



/* Function: getSize @ 00011ed0 */

int Container_int_getSize(Container_int *self)

{
 return self->size;
}



/* Function: Container @ 00011ee0 */

void Container_double_Constructor(Container_double *self)

{
 self->size = 0;
 return;
}



/* Function: push @ 00011ef0 */

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



/* Function: get @ 00011f20 */

double Container_double_get(Container_double *self,int idx)

{
 if ((-1 < idx) && (idx < self->size)) {
 return self->data[idx];
 }
 return 0.0;
}



/* Function: getSize @ 00011f50 */

int Container_double_getSize(Container_double *self)

{
 return self->size;
}



/* Function: __x86.get_pc_thunk.ax @ 00011f5c */

/* WARNING: This is an inlined function */

unsigned int __x86_get_pc_thunk_ax(void)

{
 unsigned int unaff_retaddr;
 
 return unaff_retaddr;
}



/* Function: __x86.get_pc_thunk.si @ 00011f60 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_si(void)

{
 return;
}



/* Function: __stack_chk_fail_local @ 00011f70 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void __stack_chk_fail_local(void)

{
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}




/* CRT stub function __do_global_ctors_aux removed by preprocessor */





/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 76 */
