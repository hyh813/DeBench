/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned long size_t;

/* External function declarations */
extern void __stack_chk_fail(void);
extern void operator_delete(void *ptr, size_t size);
extern void operator_delete__(void *ptr);
extern void *__cxa_allocate_exception(size_t size);
extern void __cxa_throw(void *exc, void *typeinfo, void *dest);
extern void *__dynamic_cast(void *src, void *src_type, void *dst_type, int src_flags);
extern void *operator_new(size_t size);
extern void *operator_new__(size_t size);
extern size_t strlen(const char *s);
extern int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle);
extern char *strncpy(char *dest, const char *src, size_t n);
extern int strcmp(const char *s1, const char *s2);
extern int puts(const char *s);
extern int __printf_chk(int flag, const char *format, ...);

/* Stub implementations for external library functions */
void *__dynamic_cast(void *src, void *src_type, void *dst_type, int src_flags) {
 return src;
}

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

int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle) {
 return 0;
}

void operator_delete(void *ptr, size_t size) {
 /* stub */
}

size_t strlen(const char *s) {
 size_t len = 0;
 while (s[len] != '\0') {
  len++;
 }
 return len;
}

int strcmp(const char *s1, const char *s2) {
 while (*s1 && (*s1 == *s2)) {
  s1++;
  s2++;
 }
 return *(unsigned char *)s1 - *(unsigned char *)s2;
}

int puts(const char *s) {
 /* stub */
 return 0;
}

int __printf_chk(int flag, const char *format, ...) {
 /* stub */
 return 0;
}

void *__cxa_allocate_exception(size_t size) {
 void *ptr = operator_new(size);
 return ptr;
}

void __cxa_throw(void *exc, void *typeinfo, void *dest) {
 /* stub - does not return in real implementation */
}

void *operator_new(size_t size) {
 /* stub - returns a non-null pointer */
 static char buffer[4096];
 static size_t offset = 0;
 void *ptr = buffer + offset;
 offset += size;
 offset = (offset + 7) & ~7; /* align to 8 bytes */
 return ptr;
}

void *operator_new__(size_t size) {
 return operator_new(size);
}

void operator_delete__(void *ptr) {
 /* stub */
}

void __stack_chk_fail(void) {
 /* stub */
}
typedef void (*code)(void);

/* External variable declarations */
extern void *PTR_func_00105920;
extern void *PTR_func_00105958;
extern void *PTR_func_00105998;
extern void *PTR_func_001059d0;
extern void *PTR_func_00105b08;
extern void *PTR_func_00105b38;
extern void *PTR_func_00105b70;
extern void *PTR_virtual_func_001058a8;
extern void *PTR_virtual_func_001058d8;
extern void *PTR__RTTIDerivedA_00105b98;
extern void *PTR__RTTIDerivedB_00105bc0;
extern char *DAT_00103004;
extern char *DAT_00103016;
extern char *DAT_0010303a;
extern char *DAT_0010305a;
extern char *DAT_00103074;
extern char *DAT_00103090;
extern char *DAT_001030ac;
extern char *DAT_001030c8;
extern char *DAT_001030e5;
extern char *DAT_00103101;
extern char *DAT_0010311e;
extern char *DAT_00103139;
extern char *DAT_00103156;
extern char *DAT_00103173;

/* Define missing external variables */
void *PTR_func_00105958 = 0;
void *PTR_virtual_func_001058a8 = 0;
void *PTR_func_001059d0 = 0;
void *PTR__RTTIDerivedB_00105bc0 = 0;
void *PTR_func_00105b70 = 0;
void *PTR_virtual_func_001058d8 = 0;
void *PTR_func_00105920 = 0;
void *PTR__RTTIDerivedA_00105b98 = 0;
void *PTR_func_00105998 = 0;
char *DAT_00103004 = "Base";
char *DAT_00103016 = "Testing C++ OO features...";
char *DAT_0010303a = "%d";
char *DAT_0010305a = "";
char *DAT_00103074 = "%d";
char *DAT_00103090 = "";
char *DAT_001030ac = "%d";
char *DAT_001030c8 = "";
char *DAT_001030e5 = "%d";
char *DAT_00103101 = "%d";
char *DAT_0010311e = "";
char *DAT_00103139 = "%d";
char *DAT_00103156 = "%d";
char *DAT_00103173 = "";

/* std namespace stubs */
extern void *std___ioinit;
extern void *std___dso_handle;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;
typedef unsigned long undefined8;
typedef unsigned int undefined4;
typedef unsigned short undefined2;
typedef unsigned char undefined1;
typedef unsigned long undefined;
typedef unsigned int uint;

/* Forward class declarations */
class Base;
class Derived;
class MultiDerived;
class VirtualBase;
class MiddleA;
class MiddleB;
class DiamondDerived;
class RTTIDerivedA;
class RTTIDerivedB;
class RTTIBase { void *typeinfo; };
class LifecycleClass;

/* Class definitions */
class Base { void *vtable; };
class Derived { void *vtable; int value; };
class MultiDerived { void *vtable[2]; int value; };
class VirtualBase { void *vtable; int value; };
class MiddleA { void *vtable[2]; int value; };
class MiddleB { void *vtable[2]; int value; };
class DiamondDerived { void *vtable[3]; int value; };
class RTTIDerivedA { void *vtable; public: static void *typeinfo; };
class RTTIDerivedB { void *vtable; public: static void *typeinfo; };
void *RTTIDerivedA::typeinfo = 0;
void *RTTIDerivedB::typeinfo = 0;
class LifecycleClass { public: static int instance_count; };
int LifecycleClass::instance_count = 0;

template<typename T>
class Container;

/* Additional type definitions */
typedef struct { undefined4 data[10]; undefined4 size; } Container_int;
typedef struct { undefined8 data[10]; undefined4 size; } Container_double;
typedef struct { void *ptr; } unique_ptr_int;
typedef struct { void *ptr; } unique_ptr_int_array;

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x64/5-1/5-1_gcc_Os_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00102020 @ 00102020 */

void FUN_00102020(void)

{
 return;
}



/* Function: test_cpp_exception @ 001022a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_exception() */

void test_cpp_exception(void)

{
 undefined4 *puVar1;
 
 puVar1 = (undefined4 *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* WARNING: Subroutine does not return */
 /* try { // try from 001022c4 to 001022c8 has its CatchHandler @ 001022c9 */
 __cxa_throw(puVar1,(void *)0x0,0);
}



/* Function declarations */
extern void test_cpp_oo_features(void);
extern int template_max_int(int param_1,int param_2);
extern double template_max_double(double param_1,double param_2);
extern void template_swap_int(int *param_1,int *param_2);
extern void Container_int_push(Container_int *param_1,int param_2);
extern void unique_ptr_int_destructor(unique_ptr_int *param_1);
extern void unique_ptr_int_array_destructor(unique_ptr_int_array *param_1);
extern int DiamondDerived_func(DiamondDerived *param_1);
extern void DiamondDerived_destructor(DiamondDerived *param_1);

/* Function: main @ 00102367 */

int main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: _GLOBAL__sub_I_test_cpp_member_func @ 00102375 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

void _GLOBAL__sub_I_test_cpp_member_func(void)

{
 void *local_init;
 __cxa_atexit((void (*)(void *))0,0,0);
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: test_cpp_member_func @ 00102489 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

int test_cpp_member_func(void)

{
 char *__s;
 size_t sVar1;
 long in_FS_OFFSET;
 char local_30 [31];
 undefined1 local_11;
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 __s = strncpy(local_30,"Test",0x1f);
 local_11 = 0;
 sVar1 = strlen(__s);
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return (int)sVar1 + 0x125c;
}



/* Function: test_cpp_constructor @ 001024e3 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_constructor() */

int test_cpp_constructor(void)

{
 return LifecycleClass::instance_count * 0x3e9 + 0x15;
}



/* Function: call_virtual_func @ 001024f5 */

/* call_virtual_func(Base*, int) */

void call_virtual_func(Base *param_1,int param_2)

{
 /* WARNING: Could not recover jumptable at 0x001024fc. Too many branches */
 /* WARNING: Treating indirect jump as call */
 ((code)*(undefined8 **)param_1)();
 return;
}



/* Function: test_cpp_virtual_func @ 001024fe */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_virtual_func() */

int test_cpp_virtual_func(void)

{
 int iVar1;
 int iVar2;
 long in_FS_OFFSET;
 undefined **local_28;
 undefined **local_20;
 undefined4 local_18;
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_18 = 3;
 local_28 = (undefined **)&PTR_virtual_func_001058a8;
 local_20 = (undefined **)&PTR_virtual_func_001058d8;
 call_virtual_func((Base *)&local_28,5);
 call_virtual_func((Base *)&local_20,5);
 iVar1 = 0;
 iVar2 = 0;
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return iVar1 + 0x15 + iVar2;
}



/* Function: test_cpp_multiple_inheritance @ 00102571 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_multiple_inheritance() */

undefined8 test_cpp_multiple_inheritance(void)

{
 return 0x47;
}



/* Function: test_cpp_operator_overload @ 0010257b */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_operator_overload() */

undefined8 test_cpp_operator_overload(void)

{
 return 0x16;
}



/* Function: test_cpp_template_func @ 00102585 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_func() */

int test_cpp_template_func(void)

{
 int iVar1;
 long in_FS_OFFSET;
 double dVar2;
 int local_18;
 int local_14;
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 iVar1 = template_max_int(3,7);
 dVar2 = template_max_double(2.5,1.5);
 local_18 = 10;
 local_14 = 0x14;
 template_swap_int(&local_18,&local_14);
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return (int)dVar2 + iVar1 + local_18 + local_14;
}



/* Function: test_cpp_template_class @ 00102618 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_class() */

int test_cpp_template_class(void)

{
 int iVar1;
 long in_FS_OFFSET;
 int local_3c [10];
 int local_14;
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_14 = 1;
 local_3c[0] = 10;
 Container_int_push((Container_int *)local_3c,0x14);
 Container_int_push((Container_int *)local_3c,0x1e);
 iVar1 = 0;
 if (0 < local_14) {
 iVar1 = local_3c[0];
 }
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return local_14 + 3 + iVar1;
}



/* Function: test_cpp_lambda @ 0010268d */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_lambda() */

undefined8 test_cpp_lambda(void)

{
 return 0x55;
}



/* Function: test_cpp_rtti @ 00102697 */

/* WARNING: Removing unreachable block (ram,0x00102723) */
/* WARNING: Removing unreachable block (ram,0x00102728) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_rtti() */

int test_cpp_rtti(void)

{
 long lVar1;
 int iVar2;
 long *plVar3;
 long *plVar4;
 long lVar5;
 size_t sVar6;
 uint uVar7;
 char *__s1;
 
 uVar7 = 10;
 plVar3 = (long *)operator_new(8);
 *plVar3 = (long)&PTR__RTTIDerivedA_00105b98;
 plVar4 = (long *)operator_new(8);
 lVar1 = *plVar3;
 *plVar4 = (long)&PTR__RTTIDerivedB_00105bc0;
 __s1 = *(char **)(*(long *)(lVar1 + -8) + 8);
 if ((__s1 != "12RTTIDerivedA") && (uVar7 = 0, *__s1 != '*')) {
 iVar2 = strcmp(__s1,"12RTTIDerivedA");
 uVar7 = -(uint)(iVar2 == 0) & 10;
 }
 iVar2 = uVar7 + 0x14;
 lVar5 = (long)__dynamic_cast(plVar3,(void *)0x0,(void *)&RTTIDerivedA::typeinfo,0);
 if (lVar5 != 0) {
 iVar2 = uVar7 + 0x78;
 }
 lVar5 = (long)__dynamic_cast(plVar4,(void *)0x0,(void *)&RTTIDerivedB::typeinfo,0);
 if (lVar5 != 0) {
 iVar2 = iVar2 + 200;
 }
 if (*__s1 == '*') {
 __s1 = __s1 + 1;
 }
 sVar6 = strlen(__s1);
 ((code)(lVar1 + 8))();
 ((code)(*plVar4 + 8))();
 return iVar2 + (int)sVar6;
}



/* Function: test_cpp_smart_ptr @ 001027ac */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr() */

undefined8 test_cpp_smart_ptr(void)

{
 long in_FS_OFFSET;
 undefined8 local_38;
 undefined4 *local_30;
 undefined8 *local_28;
 long local_20;
 
 local_20 = *(long *)(in_FS_OFFSET + 0x28);
 local_30 = (undefined4 *)operator_new(4);
 local_38 = 0;
 *local_30 = 200;
 /* try { // try from 001027f3 to 001027f7 has its CatchHandler @ 0010284e */
 local_28 = (undefined8 *)operator_new__(0x14);
 *local_28 = 0x200000001;
 local_28[1] = 0x400000003;
 *(undefined4 *)(local_28 + 2) = 5;
 unique_ptr_int_array_destructor((unique_ptr_int_array *)&local_28);
 unique_ptr_int_destructor((unique_ptr_int *)&local_30);
 if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return 0x2bf;
}



/* Function: test_cpp_diamond_inheritance @ 0010287c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_diamond_inheritance() */

int test_cpp_diamond_inheritance(void)

{
 int iVar1;
 int iVar2;
 long in_FS_OFFSET;
 undefined **local_50 [2];
 undefined **local_40;
 undefined **local_30;
 undefined4 local_28;
 long local_20;
 
 local_20 = *(long *)(in_FS_OFFSET + 0x28);
 local_28 = 0x32;
 local_50[0] = (undefined **)&PTR_func_00105b08;
 local_30 = (undefined **)&PTR_func_00105b70;
 local_40 = (undefined **)&PTR_func_00105b38;
 iVar1 = DiamondDerived_func((DiamondDerived *)local_30);
 local_28 = 100;
 iVar2 = DiamondDerived_func((DiamondDerived *)local_30);
 DiamondDerived_destructor((DiamondDerived *)local_50);
 if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return iVar1 + iVar2;
}



/* Function: test_cpp_oo_features @ 0010290d */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_oo_features() */

void test_cpp_oo_features(void)

{
 undefined4 uVar1;
 undefined8 in_RAX;
 
 puts(DAT_00103016);
 uVar1 = test_cpp_member_func();
 __printf_chk(1,DAT_0010303a,uVar1);
 test_cpp_constructor();
 __printf_chk(1,DAT_0010305a);
 uVar1 = test_cpp_virtual_func();
 __printf_chk(1,DAT_00103074,uVar1);
 test_cpp_multiple_inheritance();
 __printf_chk(1,DAT_00103090);
 uVar1 = test_cpp_diamond_inheritance();
 __printf_chk(1,DAT_001030ac,uVar1);
 test_cpp_operator_overload();
 __printf_chk(1,DAT_001030c8);
 uVar1 = test_cpp_template_func();
 __printf_chk(1,DAT_001030e5,uVar1);
 uVar1 = test_cpp_template_class();
 __printf_chk(1,DAT_00103101,uVar1);
 test_cpp_lambda();
 __printf_chk(1,DAT_0010311e);
 test_cpp_exception();
 uVar1 = 0;
 __printf_chk(1,DAT_00103139,uVar1);
 uVar1 = test_cpp_smart_ptr();
 __printf_chk(1,DAT_00103156,uVar1);
 uVar1 = test_cpp_rtti();
 __printf_chk(1,DAT_00103173,uVar1,in_RAX);
 return;
}



/* Function: virtual_func @ 00102a58 */

/* Base::virtual_func(int) */

int Base_virtual_func(Base *param_1,int param_2)

{
 return param_2 + 1;
}



/* Function: getName @ 00102a60 */

/* Base::getName() const */

char * Base_getName(void)

{
 return DAT_00103004;
}



/* Function: ~Base @ 00102a6c */

/* Base::~Base() */

void Base_destructor(Base *param_1)

{
 return;
}



/* Function: virtual_func @ 00102a72 */

/* Derived::virtual_func(int) */

int Derived_virtual_func(Derived *param_1,int param_2)

{
 return *(int *)(param_1 + 8) * param_2;
}



/* Function: getName @ 00102a7e */

/* Derived::getName() const */

char * Derived_getName(void)

{
 return "Derived";
}



/* Function: funcA @ 00102a8a */

/* MultiDerived::funcA() */

undefined8 MultiDerived_funcA(void)

{
 return 0x1e;
}



/* Function: funcB @ 00102a94 */

/* MultiDerived::funcB() */

undefined8 MultiDerived_funcB(void)

{
 return 0x28;
}



/* Function: funcB @ 00102a9e */

/* non-virtual thunk to MultiDerived::funcB() */

undefined8 MultiDerived_funcB_thunk(MultiDerived *param_1)

{
 return 0x28;
}



/* Function: func @ 00102aa8 */

/* VirtualBase::func() */

undefined8 VirtualBase_func(VirtualBase *param_1)

{
 return 100;
}



/* Function: ~VirtualBase @ 00102ab2 */

/* VirtualBase::~VirtualBase() */

void VirtualBase_destructor(VirtualBase *param_1)

{
 return;
}



/* Function: func @ 00102ab8 */

/* MiddleA::func() */

int MiddleA_func(MiddleA *param_1)

{
 return *(int *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 8) + 0x96;
}



/* Function: func @ 00102acd */

/* virtual thunk to MiddleA::func() */

void MiddleA_func_thunk(MiddleA *param_1)

{
 MiddleA_func(param_1 + *(long *)(*(long *)param_1 + -0x18));
 return;
}



/* Function: func @ 00102ada */

/* MiddleB::func() */

int MiddleB_func(MiddleB *param_1)

{
 return *(int *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 8) + 200;
}



/* Function: func @ 00102aef */

/* virtual thunk to MiddleB::func() */

void MiddleB_func_thunk(MiddleB *param_1)

{
 MiddleB_func(param_1 + *(long *)(*(long *)param_1 + -0x18));
 return;
}



/* Function: func @ 00102afc */

/* DiamondDerived::func() */

int DiamondDerived_func(DiamondDerived *param_1)

{
 return *(int *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 8) + 0xfa;
}



/* Function: func @ 00102b11 */

/* virtual thunk to DiamondDerived::func() */

void DiamondDerived_func_thunk(DiamondDerived *param_1)

{
 DiamondDerived_func(param_1 + *(long *)(*(long *)param_1 + -0x18));
 return;
}



/* Function: func @ 00102b1e */

/* non-virtual thunk to DiamondDerived::func() */

void DiamondDerived_func_nonvirtual_thunk(DiamondDerived *param_1)

{
 DiamondDerived_func(param_1 + -0x10);
 return;
}



/* Function: MiddleA_destructor @ 00102b28 */

/* MiddleA::~MiddleA() */

void MiddleA_destructor(MiddleA *param_1)

{
 *(undefined ***)param_1 = (undefined **)&PTR_func_00105920;
 *(undefined ***)(param_1 + 0x10) = (undefined **)&PTR_func_00105958;
 return;
}



/* Function: MiddleA_destructor_thunk @ 00102b3f */

/* virtual thunk to MiddleA::~MiddleA() */

void MiddleA_destructor_thunk(MiddleA *param_1)

{
 long lVar1;
 
 lVar1 = *(long *)(*(long *)param_1 + -0x20);
 *(undefined ***)(param_1 + lVar1) = (undefined **)&PTR_func_00105920;
 *(undefined ***)(param_1 + lVar1 + 0x10) = (undefined **)&PTR_func_00105958;
 return;
}



/* Function: MiddleB_destructor @ 00102b5e */

/* MiddleB::~MiddleB() */

void MiddleB_destructor(MiddleB *param_1)

{
 *(undefined ***)param_1 = (undefined **)&PTR_func_00105998;
 *(undefined ***)(param_1 + 0x10) = (undefined **)&PTR_func_001059d0;
 return;
}



/* Function: MiddleB_destructor_thunk @ 00102b75 */

/* virtual thunk to MiddleB::~MiddleB() */

void MiddleB_destructor_thunk(MiddleB *param_1)

{
 long lVar1;
 
 lVar1 = *(long *)(*(long *)param_1 + -0x20);
 *(undefined ***)(param_1 + lVar1) = (undefined **)&PTR_func_00105998;
 *(undefined ***)(param_1 + lVar1 + 0x10) = (undefined **)&PTR_func_001059d0;
 return;
}



/* Function: getType @ 00102b94 */

/* RTTIDerivedA::getType() const */

undefined8 RTTIDerivedA_getType(void)

{
 return 1;
}



/* Function: getType @ 00102b9e */

/* RTTIDerivedB::getType() const */

undefined8 RTTIDerivedB_getType(void)

{
 return 2;
}



/* Function: ~RTTIDerivedB @ 00102ba8 */

/* RTTIDerivedB::~RTTIDerivedB() */

void RTTIDerivedB_destructor(RTTIDerivedB *param_1)

{
 return;
}



/* Function: ~RTTIDerivedA @ 00102bae */

/* RTTIDerivedA::~RTTIDerivedA() */

void RTTIDerivedA_destructor(RTTIDerivedA *param_1)

{
 return;
}



/* Function: ~MultiDerived @ 00102bb4 */

/* MultiDerived::~MultiDerived() */

void MultiDerived_destructor(MultiDerived *param_1)

{
 return;
}



/* Function: ~MultiDerived @ 00102bb9 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void MultiDerived_destructor_thunk(MultiDerived *param_1)

{
 return;
}



/* Function: ~Derived @ 00102bbe */

/* Derived::~Derived() */

void Derived_destructor(Derived *param_1)

{
 return;
}



/* Function: ~Base @ 00102bc4 */

/* Base::~Base() */

void Base_destructor_full(Base *param_1)

{
 operator_delete(param_1,8);
 return;
}



/* Function: ~Derived @ 00102bd2 */

/* Derived::~Derived() */

void Derived_destructor_full(Derived *param_1)

{
 operator_delete(param_1,0x10);
 return;
}



/* Function: ~MultiDerived @ 00102be0 */

/* MultiDerived::~MultiDerived() */

void MultiDerived_destructor_full(MultiDerived *param_1)

{
 operator_delete(param_1,0x20);
 return;
}



/* Function: ~MultiDerived @ 00102bee */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void MultiDerived_destructor_nonvirtual_thunk(MultiDerived *param_1)

{
 MultiDerived_destructor(param_1 + -0x10);
 return;
}



/* Function: ~VirtualBase @ 00102bf8 */

/* VirtualBase::~VirtualBase() */

void VirtualBase_destructor_full(VirtualBase *param_1)

{
 operator_delete(param_1,0x10);
 return;
}



/* Function: ~RTTIDerivedB @ 00102c06 */

/* RTTIDerivedB::~RTTIDerivedB() */

void RTTIDerivedB_destructor_full(RTTIDerivedB *param_1)

{
 operator_delete(param_1,8);
 return;
}



/* Function: ~RTTIDerivedA @ 00102c14 */

/* RTTIDerivedA::~RTTIDerivedA() */

void RTTIDerivedA_destructor_full(RTTIDerivedA *param_1)

{
 operator_delete(param_1,8);
 return;
}



/* Function: MiddleA_destructor_full @ 00102c22 */

/* MiddleA::~MiddleA() */

void MiddleA_destructor_full(MiddleA *param_1)

{
 *(undefined ***)param_1 = (undefined **)&PTR_func_00105920;
 *(undefined ***)(param_1 + 0x10) = (undefined **)&PTR_func_00105958;
 operator_delete(param_1,0x20);
 return;
}



/* Function: MiddleA_destructor_virtual_thunk @ 00102c42 */

/* virtual thunk to MiddleA::~MiddleA() */

void MiddleA_destructor_virtual_thunk(MiddleA *param_1)

{
 MiddleA_destructor(param_1 + *(long *)(*(long *)param_1 + -0x20));
 return;
}



/* Function: MiddleB_destructor_full @ 00102c50 */

/* MiddleB::~MiddleB() */

void MiddleB_destructor_full(MiddleB *param_1)

{
 *(undefined ***)param_1 = (undefined **)&PTR_func_00105998;
 *(undefined ***)(param_1 + 0x10) = (undefined **)&PTR_func_001059d0;
 operator_delete(param_1,0x20);
 return;
}



/* Function: MiddleB_destructor_virtual_thunk @ 00102c70 */

/* virtual thunk to MiddleB::~MiddleB() */

void MiddleB_destructor_virtual_thunk(MiddleB *param_1)

{
 MiddleB_destructor(param_1 + *(long *)(*(long *)param_1 + -0x20));
 return;
}



/* Function: MiddleA_destructor_partial @ 00102c7e */

/* MiddleA::~MiddleA() */

void MiddleA_destructor_partial(MiddleA *param_1)

{
 undefined **ppuVar1;
 undefined *puVar2;
 undefined **ppuVar3;
 
 ppuVar1 = (undefined **)&PTR_func_00105920;
 *(undefined ***)param_1 = ppuVar1;
 ppuVar3 = (undefined **)&PTR_func_00105958;
 puVar2 = (undefined *)0x10;
 *(undefined ***)(param_1 + (long)puVar2) = ppuVar3;
 return;
}



/* Function: MiddleA_destructor_wrapper @ 00102cb0 */

/* MiddleA::~MiddleA() */

void MiddleA_destructor_wrapper(MiddleA *param_1)

{
 MiddleA_destructor(param_1);
 return;
}



/* Function: MiddleB_destructor_partial @ 00102cbe */

/* MiddleB::~MiddleB() */

void MiddleB_destructor_partial(MiddleB *param_1)

{
 undefined **ppuVar1;
 undefined *puVar2;
 undefined **ppuVar3;
 
 ppuVar1 = (undefined **)&PTR_func_00105998;
 *(undefined ***)param_1 = ppuVar1;
 ppuVar3 = (undefined **)&PTR_func_001059d0;
 puVar2 = (undefined *)0x10;
 *(undefined ***)(param_1 + (long)puVar2) = ppuVar3;
 return;
}



/* Function: MiddleB_destructor_wrapper @ 00102cf0 */

/* MiddleB::~MiddleB() */

void MiddleB_destructor_wrapper(MiddleB *param_1)

{
 MiddleB_destructor(param_1);
 return;
}



/* Function: template_max_int @ 00102cfe */

/* int template_max_int(int, int) */

int template_max_int(int param_1,int param_2)

{
 if (param_2 <= param_1) {
 param_2 = param_1;
 }
 return param_2;
}



/* Function: template_max_double @ 00102d0a */

/* double template_max_double(double, double) */

double template_max_double(double param_1,double param_2)

{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}



/* Function: template_swap_int @ 00102d13 */

/* void template_swap_int(int*, int*) */

void template_swap_int(int *param_1,int *param_2)

{
 int iVar1;
 
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}



/* Function: Container_int @ 00102d20 */

/* Container_int::Container_int() */

void Container_int_constructor(Container_int *param_1)

{
 *(undefined4 *)(param_1 + 0x28) = 0;
 return;
}



/* Function: Container_int_push @ 00102d2c */

/* Container_int::push(int) */

void Container_int_push(Container_int *param_1,int param_2)

{
 int iVar1;
 
 iVar1 = *(int *)(param_1 + 0x28);
 if (iVar1 < 10) {
 *(int *)(param_1 + 0x28) = iVar1 + 1;
 *(int *)(param_1 + (long)iVar1 * 4) = param_2;
 }
 return;
}



/* Function: Container_int_get @ 00102d44 */

/* Container_int::get(int) */

undefined4 Container_int_get(Container_int *param_1,int param_2)

{
 undefined4 uVar1;
 
 uVar1 = 0;
 if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x28))) {
 uVar1 = *(undefined4 *)(param_1 + (long)param_2 * 4);
 }
 return uVar1;
}



/* Function: Container_int_getSize @ 00102d5a */

/* Container_int::getSize() */

undefined4 Container_int_getSize(Container_int *param_1)

{
 return *(undefined4 *)(param_1 + 0x28);
}



/* Function: Container_double @ 00102d62 */

/* Container_double::Container_double() */

void Container_double_constructor(Container_double *param_1)

{
 *(undefined4 *)(param_1 + 0x50) = 0;
 return;
}



/* Function: Container_double_push @ 00102d6e */

/* Container_double::push(double) */

void Container_double_push(Container_double *param_1,double param_2)

{
 int iVar1;
 
 iVar1 = *(int *)(param_1 + 0x50);
 if (iVar1 < 10) {
 *(int *)(param_1 + 0x50) = iVar1 + 1;
 *(double *)(param_1 + (long)iVar1 * 8) = param_2;
 }
 return;
}



/* Function: Container_double_get @ 00102d88 */

/* Container_double::get(int) */

undefined8 Container_double_get(Container_double *param_1,int param_2)

{
 undefined8 uVar1;
 
 uVar1 = 0;
 if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x50))) {
 uVar1 = *(undefined8 *)(param_1 + (long)param_2 * 8);
 }
 return uVar1;
}



/* Function: Container_double_getSize @ 00102da2 */

/* Container_double::getSize() */

undefined4 Container_double_getSize(Container_double *param_1)

{
 return *(undefined4 *)(param_1 + 0x50);
}



/* Function: ~unique_ptr @ 00102daa */

/* std::unique_ptr<int, std::default_delete<int> >::~unique_ptr() */

void unique_ptr_int_destructor
 (unique_ptr_int *param_1)

{
 if (*(void **)param_1 != (void *)0x0) {
 operator_delete(*(void **)param_1,4);
 return;
 }
 return;
}



/* Function: ~unique_ptr @ 00102dc2 */

/* std::unique_ptr<int [], std::default_delete<int []> >::~unique_ptr() */

void unique_ptr_int_array_destructor
 (unique_ptr_int_array *param_1)

{
 if (*(void **)param_1 != (void *)0x0) {
 operator_delete__(*(void **)param_1);
 return;
 }
 return;
}



/* Function: DiamondDerived_destructor @ 00102dd4 */

/* DiamondDerived::~DiamondDerived() */

void DiamondDerived_destructor(DiamondDerived *param_1)

{
 undefined **ppuVar1;
 undefined **ppuVar2;
 undefined *puVar3;
 
 ppuVar1 = (undefined **)&PTR_func_00105b08;
 *(undefined ***)param_1 = ppuVar1;
 ppuVar2 = (undefined **)&PTR_func_00105b70;
 puVar3 = (undefined *)0x20;
 *(undefined ***)(param_1 + (long)puVar3) = ppuVar2;
 ppuVar1 = (undefined **)&PTR_func_00105b38;
 *(undefined ***)(param_1 + 0x10) = ppuVar1;
 MiddleB_destructor((MiddleB *)(param_1 + 0x10));
 MiddleA_destructor((MiddleA *)param_1);
 return;
}



/* Function: DiamondDerived_destructor_wrapper @ 00102e5e */

/* DiamondDerived::~DiamondDerived() */

void DiamondDerived_destructor_wrapper(DiamondDerived *param_1)

{
 DiamondDerived_destructor(param_1);
 return;
}



/* Function: DiamondDerived_destructor_nonvirtual_thunk @ 00102e6e */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_destructor_nonvirtual_thunk(DiamondDerived *param_1)

{
 DiamondDerived_destructor(param_1 + -0x10);
 return;
}



/* Function: DiamondDerived_destructor_virtual_thunk @ 00102e78 */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_destructor_virtual_thunk(DiamondDerived *param_1)

{
 DiamondDerived_destructor(param_1 + *(long *)(*(long *)param_1 + -0x20));
 return;
}



/* Function: DiamondDerived_destructor_full @ 00102e86 */

/* DiamondDerived::~DiamondDerived() */

void DiamondDerived_destructor_full(DiamondDerived *param_1)

{
 DiamondDerived_destructor(param_1);
 operator_delete(param_1,0x30);
 return;
}



/* Function: DiamondDerived_destructor_nonvirtual_thunk2 @ 00102eab */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_destructor_nonvirtual_thunk2(DiamondDerived *param_1)

{
 DiamondDerived_destructor(param_1 + -0x10);
 return;
}



/* Function: DiamondDerived_destructor_virtual_thunk2 @ 00102eb5 */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_destructor_virtual_thunk2(DiamondDerived *param_1)

{
 DiamondDerived_destructor(param_1 + *(long *)(*(long *)param_1 + -0x20));
 return;
}



/* Function: DiamondDerived_destructor_wrapper2 @ 00102ec2 */

/* DiamondDerived::~DiamondDerived() */

void DiamondDerived_destructor_wrapper2(DiamondDerived *param_1)

{
 DiamondDerived_destructor(param_1);
 return;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 87 */
