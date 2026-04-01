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
typedef unsigned int uint;

/* Ghidra decompiler types */
typedef unsigned int undefined4;
typedef unsigned short undefined2;
typedef unsigned char undefined1;
typedef void undefined;
typedef unsigned long long undefined8;
typedef void (*code)();

/* Ghidra macros */
#define CONCAT44(hi, lo) ((undefined8)((hi) << 32 | (lo)))

/* Forward declarations for C++ classes */
typedef struct Base Base;
typedef struct Derived Derived;
typedef struct LifecycleClass LifecycleClass;
typedef struct DiamondDerived DiamondDerived;
typedef struct MultiDerived MultiDerived;
typedef struct RTTIBase RTTIBase;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;
typedef struct BaseA BaseA;
typedef struct BaseB BaseB;
typedef struct MiddleA MiddleA;
typedef struct MiddleB MiddleB;
typedef struct VirtualBase VirtualBase;

/* Struct definitions for incomplete types */
struct MiddleA {
 int vtable;
 int data[10];
};
struct MiddleB {
 int vtable;
 int data[10];
};
struct DiamondDerived {
 int vtable;
 int data[10];
};
struct VirtualBase {
 int vtable;
 int data[10];
};
struct Container_int {
 int data[10];
 int size;
};
struct Container_double {
 double data[10];
 int size;
};
struct MultiDerived {
 int vtable;
 int data[10];
};
struct Derived {
 int vtable;
 int data[10];
};
struct BaseA {
 int vtable;
 int data[10];
};
struct BaseB {
 int vtable;
 int data[10];
};
struct RTTIBase {
 int vtable;
 int data[10];
};
struct RTTIDerivedA {
 int vtable;
 int data[10];
};
struct RTTIDerivedB {
 int vtable;
 int data[10];
};

/* External function declarations */
size_t strlen(const char *s);
int strcmp(const char *s1, const char *s2);
void *operator_new__(size_t size);
void operator_delete__(void *ptr);
void *operator_new(size_t size);
void operator_delete(void *ptr);

/* Stub implementations for external functions */
size_t strlen(const char *s) {
 size_t len = 0;
 while (s[len] != 0) len++;
 return len;
}

int strcmp(const char *s1, const char *s2) {
 while (*s1 && *s1 == *s2) { s1++; s2++; }
 return *(unsigned char*)s1 - *(unsigned char*)s2;
}

void *operator_new__(size_t size) {
 return operator_new(size);
}

void operator_delete__(void *ptr) {
 operator_delete(ptr);
}

void *operator_new(size_t size) {
 static char heap[4096];
 static int heap_pos = 0;
 void *ptr = &heap[heap_pos];
 heap_pos += size + 4;
 return ptr;
}

void operator_delete(void *ptr) {
 /* stub - no-op */
}

int printf(const char *format, ...) {
 /* stub - no-op */
 return 0;
}

int puts(const char *s) {
 /* stub - no-op */
 return 0;
}

/* C++ exception handling stubs */
void *__cxa_allocate_exception(size_t size) {
 static char exc_buffer[256];
 return exc_buffer;
}

void __cxa_throw(void *exc, void *typeinfo, void *dest) {
 /* stub - no-op, does not return in real implementation */
 while(1);
}

int __dynamic_cast(void *src, void *src_type, void *dst_type, int flags) {
 /* stub - return non-zero to indicate success */
 return 1;
}

/* External variable declarations for vtable/function pointers */
extern undefined *PTR_virtual_func_00022cf0;
extern undefined *PTR_virtual_func_00022d10;
extern undefined *PTR_funcB_00022d4c;
extern undefined *PTR_func_00022df0;
extern undefined *PTR__RTTIBase_00022ed8;
extern undefined *PTR__RTTIBase_00022eec;
extern undefined *PTR_funcA_00022d34;
extern undefined *PTR_func_00022dbc;
extern undefined *PTR_func_00022dd4;
extern char DAT_00011c71[];
extern char DAT_00011b0d[];
extern char DAT_00011b2b[];
extern char DAT_00011b47[];
extern char DAT_00011b63[];
extern char DAT_00011b7f[];
extern char DAT_00011b9c[];
extern char DAT_00011bb8[];
extern char DAT_00011bd4[];
extern char DAT_00011bf0[];
extern char DAT_00011c0c[];
extern char DAT_00011c29[];
extern char DAT_00011c46[];
extern char DAT_00011c64[];

/* Define missing data symbols */
char DAT_00011bf0[] = "%d\n";
char DAT_00011c0c[] = "%d\n";
char DAT_00011c29[] = "%d\n";
char DAT_00011c46[] = "%d\n";
char DAT_00011c64[] = "Base";
extern void *PTR__RTTIBase_typeinfo;
extern void *PTR__RTTIDerivedA_typeinfo;
extern void *PTR__RTTIDerivedB_typeinfo;
extern void *PTR_int_typeinfo;

/* Define missing typeinfo pointers */
void *PTR__RTTIBase_typeinfo = 0;
void *PTR__RTTIDerivedA_typeinfo = 0;
void *PTR__RTTIDerivedB_typeinfo = 0;
void *PTR_int_typeinfo = 0;

/* Define missing vtable/function pointer symbols */
undefined *PTR_virtual_func_00022cf0 = 0;
undefined *PTR_virtual_func_00022d10 = 0;
undefined *PTR_funcB_00022d4c = 0;
undefined *PTR_func_00022df0 = 0;
undefined *PTR__RTTIBase_00022ed8 = 0;
undefined *PTR__RTTIBase_00022eec = 0;
undefined *PTR_funcA_00022d34 = 0;
undefined *PTR_func_00022dbc = 0;
undefined *PTR_func_00022dd4 = 0;

/* LifecycleClass with static member */
struct LifecycleClass {
 int instance_count;
};
int LifecycleClass_instance_count = 0;

/* Base class with virtual function */
struct Base {
 int (*virtual_func)(Base *this_ptr, int param);
};
int Base_virtual_func(Base *this_ptr, int param);

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/5-1/5-1_clang_O1_no_g
 * Processor: ARM
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */




/* Function: _GLOBAL__sub_I_5_1.cpp @ 00010cb8 */

void _GLOBAL__sub_I_5_1_cpp(void)

{
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: test_cpp_member_func @ 00010e60 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

int test_cpp_member_func(void)

{
 size_t sVar1;
 undefined4 local_28;
 undefined4 uStack_24;
 undefined4 uStack_20;
 undefined4 local_1c;
 undefined4 uStack_18;
 undefined4 uStack_14;
 undefined4 uStack_10;
 undefined2 local_c;
 undefined1 local_a;
 undefined1 local_9;
 
 local_28 = 0x74736554;
 uStack_24 = 0;
 uStack_20 = 0;
 local_1c = 0;
 uStack_18 = 0;
 uStack_14 = 0;
 uStack_10 = 0;
 local_c = 0;
 local_a = 0;
 local_9 = 0;
 sVar1 = strlen((char *)&local_28);
 return sVar1 + 0x125c;
}



/* Function: test_cpp_constructor @ 00010ed0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_constructor() */

int test_cpp_constructor(void)

{
 void *pvVar1;
 int iVar2;
 int iVar3;
 
 pvVar1 = operator_new__(0x14);
 iVar2 = 0;
 iVar3 = 0;
 do {
 *(int *)((int)pvVar1 + iVar3 * -4) = iVar2;
 iVar2 = iVar2 + 10;
 iVar3 = iVar3 + -1;
 } while (iVar3 != -5);
 iVar2 = LifecycleClass_instance_count + 1;
 iVar3 = *(int *)((int)pvVar1 + 8);
 LifecycleClass_instance_count = iVar2;
 operator_delete__(pvVar1);
 LifecycleClass_instance_count = LifecycleClass_instance_count + -1;
 return LifecycleClass_instance_count * 1000 + iVar3 + iVar2;
}



/* Function: call_virtual_func @ 00010f48 */

/* call_virtual_func(Base*, int) */

void call_virtual_func(Base *param_1,int param_2)

{
 ((int (*)(Base *, int))**(undefined4 **)param_1)(param_1, param_2);
 return;
}

/* Forward declarations for C++ member functions */
int Base_virtual_func(Base *this_ptr, int param);
undefined4 MultiDerived_funcA(MultiDerived *this_ptr);
undefined4 MultiDerived_funcA_impl(MultiDerived *this_ptr);
undefined4 MultiDerived_funcB_impl(MultiDerived *this_ptr);
int DiamondDerived_func(DiamondDerived *this_ptr);
int DiamondDerived_func_impl(DiamondDerived *this_ptr);
undefined4 BaseA_funcA(BaseA *this_ptr);
undefined4 BaseB_funcB(BaseB *this_ptr);
int MiddleA_func(MiddleA *this_ptr);
int MiddleB_func(MiddleB *this_ptr);
undefined4 VirtualBase_func(VirtualBase *this_ptr);

/* Function prototypes */
int Base_virtual_func_impl(Base *this_ptr, int param_1);
int Derived_virtual_func(Derived *this_ptr, int param_1);
Base *Base_destructor(Base *this_ptr);
MultiDerived *MultiDerived_destructor(MultiDerived *this_ptr);
DiamondDerived *DiamondDerived_destructor(DiamondDerived *this_ptr);
int template_max_int(int param_1, int param_2);
double template_max_double(double param_1, double param_2);
void template_swap_int(int *param_1, int *param_2);
void Container_int_Constructor(Container_int *this_ptr);
void Container_int_push(Container_int *this_ptr, int param_1);
undefined4 Container_int_get(Container_int *this_ptr, int param_1);
undefined4 Container_int_getSize(Container_int *this_ptr);
void Container_double_Constructor(Container_double *this_ptr);
undefined4 Container_double_push(Container_double *this_ptr, double param_1);
undefined8 Container_double_get(Container_double *this_ptr, int param_1);
undefined4 Container_double_getSize(Container_double *this_ptr);
undefined *Base_getName(Base *this_ptr);
void Base_destructor_impl(Base *this_ptr);
char *Derived_getName(Derived *this_ptr);
void Derived_destructor(Derived *this_ptr);
void MultiDerived_destructor_impl(MultiDerived *this_ptr);
undefined4 MultiDerived_funcB_thunk(MultiDerived *this_ptr);
MultiDerived *MultiDerived_destructor_thunk1(MultiDerived *this_ptr);
void MultiDerived_destructor_thunk2(MultiDerived *this_ptr);
undefined4 BaseA_funcA(BaseA *this_ptr);
BaseA *BaseA_destructor1(BaseA *this_ptr);
void BaseA_destructor2(BaseA *this_ptr);
undefined4 BaseB_funcB(BaseB *this_ptr);
BaseB *BaseB_destructor1(BaseB *this_ptr);
void BaseB_destructor2(BaseB *this_ptr);
int MiddleA_func(MiddleA *this_ptr);
MiddleA *MiddleA_destructor1(MiddleA *this_ptr);
void MiddleA_destructor2(MiddleA *this_ptr);
int MiddleA_func_thunk(MiddleA *this_ptr);
MiddleA *MiddleA_destructor_thunk1(MiddleA *this_ptr);
void MiddleA_destructor_thunk2(MiddleA *this_ptr);
int MiddleB_func(MiddleB *this_ptr);
MiddleB *MiddleB_destructor1(MiddleB *this_ptr);
void MiddleB_destructor2(MiddleB *this_ptr);
int MiddleB_func_thunk(MiddleB *this_ptr);
MiddleB *MiddleB_destructor_thunk1(MiddleB *this_ptr);
void MiddleB_destructor_thunk2(MiddleB *this_ptr);
int DiamondDerived_func_impl(DiamondDerived *this_ptr);
void DiamondDerived_destructor_impl(DiamondDerived *this_ptr);
int DiamondDerived_func_thunk1(DiamondDerived *this_ptr);
DiamondDerived *DiamondDerived_destructor_thunk1(DiamondDerived *this_ptr);
void DiamondDerived_destructor_thunk2(DiamondDerived *this_ptr);
int DiamondDerived_func_thunk2(DiamondDerived *this_ptr);
DiamondDerived *DiamondDerived_destructor_thunk3(DiamondDerived *this_ptr);
void DiamondDerived_destructor_thunk4(DiamondDerived *this_ptr);
undefined4 VirtualBase_func(VirtualBase *this_ptr);
VirtualBase *VirtualBase_destructor1(VirtualBase *this_ptr);
void VirtualBase_destructor2(VirtualBase *this_ptr);
void RTTIDerivedA_destructor(RTTIDerivedA *this_ptr);
undefined4 RTTIDerivedA_getType(RTTIDerivedA *this_ptr);
RTTIBase *RTTIBase_destructor1(RTTIBase *this_ptr);
void RTTIDerivedB_destructor(RTTIDerivedB *this_ptr);
undefined4 RTTIDerivedB_getType(RTTIDerivedB *this_ptr);



/* Function: test_cpp_virtual_func @ 00010f64 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_virtual_func() */

int test_cpp_virtual_func(void)

{
 int iVar1;
 int iVar2;
 undefined **local_14;
 undefined4 local_10;
 undefined **local_c;
 
 local_c = &PTR_virtual_func_00022cf0;
 local_10 = 3;
 local_14 = &PTR_virtual_func_00022d10;
 iVar1 = Base_virtual_func((Base *)local_c,5);
 iVar2 = ((int (*)(Base *, int))*local_14)((Base *)local_14,5);
 return iVar1 + iVar2 + 0x15;
}



/* Function: test_cpp_multiple_inheritance @ 00010fdc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_multiple_inheritance() */

int test_cpp_multiple_inheritance(void)

{
 int iVar1;
 int iVar2;
 undefined **local_18;
 undefined4 local_14;
 MultiDerived local_obj;
 
 local_14 = 200;
 local_18 = &PTR_funcB_00022d4c;
 iVar1 = MultiDerived_funcA_impl(&local_obj);
 iVar2 = ((int (*)(undefined **))*local_18)(local_18);
 return iVar1 + iVar2 + 1;
}



/* Function: test_cpp_diamond_inheritance @ 0001104c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_diamond_inheritance() */

int test_cpp_diamond_inheritance(void)

{
 int iVar1;
 int iVar2;
 undefined **local_18;
 undefined4 local_14;
 
 local_14 = 0x32;
 local_18 = &PTR_func_00022df0;
 iVar1 = DiamondDerived_func_impl((DiamondDerived *)local_18);
 local_14 = 100;
 iVar2 = ((int (*)(DiamondDerived *))*local_18)((DiamondDerived *)local_18);
 return iVar2 + iVar1;
}



/* Function: test_cpp_operator_overload @ 000110d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_operator_overload() */

undefined4 test_cpp_operator_overload(void)

{
 return 0x16;
}



/* Function: test_cpp_template_func @ 000110d8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_func() */

undefined4 test_cpp_template_func(void)

{
 return 0x27;
}



/* Function: test_cpp_template_class @ 000110e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_class() */

undefined4 test_cpp_template_class(void)

{
 return 0x10;
}



/* Function: test_cpp_lambda @ 000110e8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_lambda() */

undefined4 test_cpp_lambda(void)

{
 return 0x55;
}



/* Function: test_cpp_exception @ 000110f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_exception() */

void test_cpp_exception(void)

{
 undefined4 *puVar1;
 
 puVar1 = (undefined4 *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* WARNING: Subroutine does not return */
 __cxa_throw(puVar1,PTR_int_typeinfo,0);
}



/* Function: test_cpp_smart_ptr @ 000111c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr() */

undefined4 test_cpp_smart_ptr(void)

{
 return 0x2bf;
}



/* Function: test_cpp_rtti @ 000111cc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_rtti() */

int test_cpp_rtti(void)

{
 int *piVar1;
 int *piVar2;
 int iVar3;
 char *pcVar4;
 int iVar5;
 size_t sVar6;
 char *__s1;
 uint uVar7;
 bool bVar8;
 
 piVar1 = (int *)operator_new(4);
 *piVar1 = (int)&PTR__RTTIBase_00022ed8;
 piVar2 = (int *)operator_new(4);
 uVar7 = 0;
 *piVar2 = 0;
 *piVar2 = (int)&PTR__RTTIBase_00022eec;
 __s1 = *(char **)(*(int *)(*piVar1 + -4) + 4);
 if (__s1 == "12RTTIDerivedA") {
 uVar7 = 10;
 }
 else if (*__s1 != '*') {
 iVar3 = strcmp(__s1,"12RTTIDerivedA");
 uVar7 = 0;
 if (iVar3 == 0) {
 uVar7 = 10;
 }
 }
 pcVar4 = *(char **)(*(int *)(*piVar2 + -4) + 4);
 if (pcVar4 == "12RTTIDerivedB") {
 bVar8 = true;
 }
 else {
 bVar8 = false;
 if (*pcVar4 != '*') {
 iVar3 = strcmp(pcVar4,"12RTTIDerivedB");
 bVar8 = iVar3 == 0;
 }
 }
 iVar3 = __dynamic_cast(piVar1,PTR__RTTIBase_typeinfo,PTR__RTTIDerivedA_typeinfo,0);
 iVar5 = __dynamic_cast(piVar2,PTR__RTTIBase_typeinfo,PTR__RTTIDerivedB_typeinfo,0);
 pcVar4 = __s1 + 1;
 if (*__s1 != '*') {
 pcVar4 = __s1;
 }
 sVar6 = strlen(pcVar4);
 ((void (*)(void *))**(code **)(*piVar1 + 4))(piVar1);
 ((void (*)(void *))**(code **)(*piVar2 + 4))(piVar2);
 if (bVar8) {
 uVar7 = uVar7 | 0x14;
 }
 if (iVar3 != 0) {
 uVar7 = uVar7 + 100;
 }
 if (iVar5 != 0) {
 uVar7 = uVar7 + 200;
 }
 return uVar7 + sVar6;
}



/* Function: test_cpp_oo_features @ 0001136c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_oo_features() */

void test_cpp_oo_features(void)

{
 undefined **ppuVar1;
 size_t sVar2;
 void *pvVar3;
 undefined4 uVar4;
 int iVar5;
 int iVar6;
 undefined **local_40;
 undefined4 local_3c;
 undefined **local_38;
 undefined4 local_34;
 undefined **local_30;
 undefined4 local_2c;
 undefined4 uStack_28;
 undefined4 uStack_24;
 undefined2 local_20;
 undefined1 local_1e;
 undefined1 local_1d;
 undefined **local_1c;
 MultiDerived local_md;
 
 puts(DAT_00011c71);
 local_3c = 0x74736554;
 local_38 = (undefined **)0x0;
 local_34 = 0;
 local_30 = (undefined **)0x0;
 local_2c = 0;
 uStack_28 = 0;
 uStack_24 = 0;
 local_20 = 0;
 local_1e = 0;
 iVar6 = 0;
 local_1d = 0;
 local_40 = (undefined **)0xa;
 sVar2 = strlen((char *)&local_3c);
 printf((char *)&DAT_00011b0d,sVar2 + 0x125c);
 pvVar3 = operator_new__(0x14);
 iVar5 = 0;
 do {
 *(int *)((int)pvVar3 + iVar5 * -4) = iVar6;
 iVar6 = iVar6 + 10;
 iVar5 = iVar5 + -1;
 } while (iVar5 != -5);
 iVar5 = LifecycleClass_instance_count + 1;
 iVar6 = *(int *)((int)pvVar3 + 8);
 LifecycleClass_instance_count = iVar5;
 operator_delete__(pvVar3);
 LifecycleClass_instance_count = LifecycleClass_instance_count + -1;
 printf((char *)&DAT_00011b2b,LifecycleClass_instance_count * 1000 + iVar6 + iVar5);
 local_1c = &PTR_virtual_func_00022cf0;
 local_3c = 3;
 local_40 = &PTR_virtual_func_00022d10;
 iVar5 = Base_virtual_func((Base *)local_1c,5);
 iVar6 = ((int (*)(Base *, int))*local_40)((Base *)local_40,5);
 printf((char *)&DAT_00011b47,iVar5 + iVar6 + 0x15);
 local_38 = &PTR_funcB_00022d4c;
 local_34 = 200;
 local_3c = 100;
 local_40 = &PTR_funcA_00022d34;
 iVar5 = MultiDerived_funcB_impl(&local_md);
 printf((char *)&DAT_00011b63,iVar5 + 0x1f);
 local_30 = &PTR_func_00022df0;
 local_2c = 0x32;
 local_40 = &PTR_func_00022dbc;
 local_38 = &PTR_func_00022dd4;
 iVar5 = DiamondDerived_func_impl((DiamondDerived *)local_30);
 ppuVar1 = local_30;
 *(undefined4 *)((int)&local_3c + (int)local_40[-3]) = 100;
 iVar6 = ((int (*)(DiamondDerived *))*ppuVar1)((DiamondDerived *)local_30);
 printf((char *)&DAT_00011b7f,iVar6 + iVar5);
 printf((char *)&DAT_00011b9c,0x16);
 printf((char *)&DAT_00011bb8,0x27);
 printf((char *)&DAT_00011bd4,0x10);
 printf((char *)&DAT_00011bf0,0x55);
 test_cpp_exception();
 printf((char *)&DAT_00011c29,0x2bf);
 uVar4 = test_cpp_rtti();
 printf((char *)&DAT_00011c46,uVar4);
 return;
}



/* Function: main @ 00011648 */

int main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: virtual_func @ 0001165c */

/* Base::virtual_func(int) */

int Base_virtual_func_impl(Base *this_ptr,int param_1)

{
 return param_1 + 1;
}

/* Base_virtual_func wrapper */
int Base_virtual_func(Base *this_ptr, int param)
{
 return Base_virtual_func_impl(this_ptr, param);
}



/* Function: virtual_func @ 00011664 */

/* Derived::virtual_func(int) */

int Derived_virtual_func(Derived *this_ptr,int param_1)

{
 return *(int *)(this_ptr + 4) * param_1;
}



/* Function: ~Base @ 00011670 */

/* Base::~Base() */

Base * Base_destructor(Base *this_ptr)

{
 return this_ptr;
}



/* Function: ~MultiDerived @ 00011674 */

/* MultiDerived::~MultiDerived() */

MultiDerived * MultiDerived_destructor(MultiDerived *this_ptr)

{
 return this_ptr;
}



/* Function: ~DiamondDerived @ 00011678 */

/* DiamondDerived::~DiamondDerived() */

DiamondDerived * DiamondDerived_destructor(DiamondDerived *this_ptr)

{
 return this_ptr;
}



/* Function: template_max<int> @ 0001167c */

/* int template_max<int>(int, int) */

int template_max_int(int param_1,int param_2)

{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}



/* Function: template_max<double> @ 00011688 */

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x0001169c */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* double template_max<double>(double, double) */

double template_max_double(double param_1,double param_2)

{
 if (param_1 > param_2) {
  return param_1;
 }
 return param_2;
}



/* Function: template_swap<int> @ 000116bc */

/* void template_swap<int>(int&, int&) */

void template_swap_int(int *param_1,int *param_2)

{
 int iVar1;
 
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}



/* Function: Container @ 000116d0 */

/* Container<int>::Container() */

void Container_int_Constructor(Container_int *this_ptr)

{
 this_ptr->size = 0;
 return;
}



/* Function: push @ 000116dc */

/* Container<int>::push(int) */

void Container_int_push(Container_int *this_ptr,int param_1)

{
 int iVar1;
 
 iVar1 = this_ptr->size;
 if (iVar1 < 10) {
 this_ptr->size = iVar1 + 1;
 this_ptr->data[iVar1] = param_1;
 }
 return;
}



/* Function: get @ 000116f4 */

/* Container<int>::get(int) const */

undefined4 Container_int_get(Container_int *this_ptr,int param_1)

{
 undefined4 uVar1;
 
 uVar1 = 0;
 if (param_1 < 0) {
 return 0;
 }
 if (param_1 < this_ptr->size) {
 uVar1 = this_ptr->data[param_1];
 }
 return uVar1;
}



/* Function: getSize @ 00011714 */

/* Container<int>::getSize() const */

undefined4 Container_int_getSize(Container_int *this_ptr)

{
 return this_ptr->size;
}



/* Function: Container @ 0001171c */

/* Container<double>::Container() */

void Container_double_Constructor(Container_double *this_ptr)

{
 this_ptr->size = 0;
 return;
}



/* Function: push @ 00011728 */

/* Container<double>::push(double) */

undefined4 Container_double_push(Container_double *this_ptr,double param_1)

{
 int iVar2;
 
 iVar2 = this_ptr->size;
 if (9 < iVar2) {
 return 0;
 }
 this_ptr->data[iVar2] = param_1;
 this_ptr->size = iVar2 + 1;
 return 0;
}



/* Function: get @ 0001174c */

/* Container<double>::get(int) const */

undefined8 Container_double_get(Container_double *this_ptr,int param_1)

{
 undefined4 uVar1;
 undefined4 uVar2;
 
 uVar2 = 0;
 uVar1 = 0;
 if (-1 < param_1) {
 if (param_1 < this_ptr->size) {
 uVar1 = *(undefined4 *)&this_ptr->data[param_1];
 uVar2 = *((undefined4 *)&this_ptr->data[param_1] + 1);
 }
 return CONCAT44(uVar2,uVar1);
 }
 return 0;
}



/* Function: getSize @ 00011778 */

/* Container<double>::getSize() const */

undefined4 Container_double_getSize(Container_double *this_ptr)

{
 return this_ptr->size;
}



/* Function: getName @ 00011780 */

/* Base::getName() const */

undefined * Base_getName(Base *this_ptr)

{
 return &DAT_00011c64;
}



/* Function: ~Base @ 00011790 */

/* Base::~Base() */

void Base_destructor_impl(Base *this_ptr)

{
 operator_delete(this_ptr);
 return;
}



/* Function: getName @ 000117a0 */

/* Derived::getName() const */

char * Derived_getName(Derived *this_ptr)

{
 return "Derived";
}



/* Function: ~Derived @ 000117b0 */

/* Derived::~Derived() */

void Derived_destructor(Derived *this_ptr)

{
 operator_delete(this_ptr);
 return;
}



/* Function: funcA @ 000117c0 */

/* MultiDerived::funcA() */

undefined4 MultiDerived_funcA_impl(MultiDerived *this_ptr)

{
 return 0x1e;
}



/* Function: ~MultiDerived @ 000117c8 */

/* MultiDerived::~MultiDerived() */

void MultiDerived_destructor_impl(MultiDerived *this_ptr)

{
 operator_delete(this_ptr);
 return;
}



/* Function: funcB @ 000117d8 */

/* MultiDerived::funcB() */

undefined4 MultiDerived_funcB_impl(MultiDerived *this_ptr)

{
 return 0x28;
}



/* Function: funcB @ 000117e0 */

/* non-virtual thunk to MultiDerived::funcB() */

undefined4 MultiDerived_funcB_thunk(MultiDerived *this_ptr)

{
 return 0x28;
}



/* Function: ~MultiDerived @ 000117e8 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

MultiDerived * MultiDerived_destructor_thunk1(MultiDerived *this_ptr)

{
 return this_ptr;
}



/* Function: ~MultiDerived @ 000117ec */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void MultiDerived_destructor_thunk2(MultiDerived *this_ptr)

{
 return;
}



/* Function: funcA @ 00011800 */

/* BaseA::funcA() */

undefined4 BaseA_funcA(BaseA *this_ptr)

{
 return 10;
}



/* Function: ~BaseA @ 00011808 */

/* BaseA::~BaseA() */

BaseA * BaseA_destructor1(BaseA *this_ptr)

{
 return this_ptr;
}



/* Function: ~BaseA @ 0001180c */

/* BaseA::~BaseA() */

void BaseA_destructor2(BaseA *this_ptr)

{
 operator_delete(this_ptr);
 return;
}



/* Function: funcB @ 0001181c */

/* BaseB::funcB() */

undefined4 BaseB_funcB(BaseB *this_ptr)

{
 return 0x14;
}



/* Function: ~BaseB @ 00011824 */

/* BaseB::~BaseB() */

BaseB * BaseB_destructor1(BaseB *this_ptr)

{
 return this_ptr;
}



/* Function: ~BaseB @ 00011828 */

/* BaseB::~BaseB() */

void BaseB_destructor2(BaseB *this_ptr)

{
 operator_delete(this_ptr);
 return;
}



/* Function: func @ 00011838 */

/* MiddleA::func() */

int MiddleA_func(MiddleA *this_ptr)

{
 return *(int *)(this_ptr + *(int *)(*(int *)this_ptr + -0xc) + 4) + 0x96;
}



/* Function: ~MiddleA @ 00011850 */

/* MiddleA::~MiddleA() */

MiddleA * MiddleA_destructor1(MiddleA *this_ptr)

{
 return this_ptr;
}



/* Function: ~MiddleA @ 00011854 */

/* MiddleA::~MiddleA() */

void MiddleA_destructor2(MiddleA *this_ptr)

{
 operator_delete(this_ptr);
 return;
}



/* Function: func @ 00011864 */

/* virtual thunk to MiddleA::func() */

int MiddleA_func_thunk(MiddleA *this_ptr)

{
 return *(int *)(this_ptr + *(int *)(*(int *)this_ptr + -0xc) +
 *(int *)(*(int *)(this_ptr + *(int *)(*(int *)this_ptr + -0xc)) + -0xc) + 4) + 0x96;
}



/* Function: ~MiddleA @ 00011884 */

/* virtual thunk to MiddleA::~MiddleA() */

MiddleA * MiddleA_destructor_thunk1(MiddleA *this_ptr)

{
 return this_ptr;
}



/* Function: ~MiddleA @ 00011888 */

/* virtual thunk to MiddleA::~MiddleA() */

void MiddleA_destructor_thunk2(MiddleA *this_ptr)

{
 operator_delete(this_ptr + *(int *)(*(int *)this_ptr + -0x10));
 return;
}



/* Function: func @ 000118a4 */

/* MiddleB::func() */

int MiddleB_func(MiddleB *this_ptr)

{
 return *(int *)(this_ptr + *(int *)(*(int *)this_ptr + -0xc) + 4) + 200;
}



/* Function: ~MiddleB @ 000118bc */

/* MiddleB::~MiddleB() */

MiddleB * MiddleB_destructor1(MiddleB *this_ptr)

{
 return this_ptr;
}



/* Function: ~MiddleB @ 000118c0 */

/* MiddleB::~MiddleB() */

void MiddleB_destructor2(MiddleB *this_ptr)

{
 operator_delete(this_ptr);
 return;
}



/* Function: func @ 000118d0 */

/* virtual thunk to MiddleB::func() */

int MiddleB_func_thunk(MiddleB *this_ptr)

{
 return *(int *)(this_ptr + *(int *)(*(int *)this_ptr + -0xc) +
 *(int *)(*(int *)(this_ptr + *(int *)(*(int *)this_ptr + -0xc)) + -0xc) + 4) + 200;
}



/* Function: ~MiddleB @ 000118f0 */

/* virtual thunk to MiddleB::~MiddleB() */

MiddleB * MiddleB_destructor_thunk1(MiddleB *this_ptr)

{
 return this_ptr;
}



/* Function: ~MiddleB @ 000118f4 */

/* virtual thunk to MiddleB::~MiddleB() */

void MiddleB_destructor_thunk2(MiddleB *this_ptr)

{
 operator_delete(this_ptr + *(int *)(*(int *)this_ptr + -0x10));
 return;
}



/* Function: func @ 00011910 */

/* DiamondDerived::func() */

int DiamondDerived_func_impl(DiamondDerived *this_ptr)

{
 return *(int *)(this_ptr + *(int *)(*(int *)this_ptr + -0xc) + 4) + 0xfa;
}



/* Function: ~DiamondDerived @ 00011928 */

/* DiamondDerived::~DiamondDerived() */

void DiamondDerived_destructor_impl(DiamondDerived *this_ptr)

{
 operator_delete(this_ptr);
 return;
}



/* Function: func @ 00011938 */

/* non-virtual thunk to DiamondDerived::func() */

int DiamondDerived_func_thunk1(DiamondDerived *this_ptr)

{
 return *(int *)(this_ptr + -8 + *(int *)(*(int *)(this_ptr + -8) + -0xc) + 4) + 0xfa;
}



/* Function: ~DiamondDerived @ 00011950 */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

DiamondDerived * DiamondDerived_destructor_thunk1(DiamondDerived *this_ptr)

{
 return this_ptr;
}



/* Function: ~DiamondDerived @ 00011954 */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_destructor_thunk2(DiamondDerived *this_ptr)

{
 operator_delete(this_ptr + -8);
 return;
}



/* Function: func @ 00011968 */

/* virtual thunk to DiamondDerived::func() */

int DiamondDerived_func_thunk2(DiamondDerived *this_ptr)

{
 return *(int *)(this_ptr + *(int *)(*(int *)this_ptr + -0xc) +
 *(int *)(*(int *)(this_ptr + *(int *)(*(int *)this_ptr + -0xc)) + -0xc) + 4) + 0xfa;
}



/* Function: ~DiamondDerived @ 00011988 */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

DiamondDerived * DiamondDerived_destructor_thunk3(DiamondDerived *this_ptr)

{
 return this_ptr;
}



/* Function: ~DiamondDerived @ 0001198c */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_destructor_thunk4(DiamondDerived *this_ptr)

{
 operator_delete(this_ptr + *(int *)(*(int *)this_ptr + -0x10));
 return;
}



/* Function: func @ 000119a8 */

/* VirtualBase::func() */

undefined4 VirtualBase_func(VirtualBase *this_ptr)

{
 return 100;
}



/* Function: ~VirtualBase @ 000119b0 */

/* VirtualBase::~VirtualBase() */

VirtualBase * VirtualBase_destructor1(VirtualBase *this_ptr)

{
 return this_ptr;
}



/* Function: ~VirtualBase @ 000119b4 */

/* VirtualBase::~VirtualBase() */

void VirtualBase_destructor2(VirtualBase *this_ptr)

{
 operator_delete(this_ptr);
 return;
}



/* Function: ~RTTIDerivedA @ 000119c4 */

/* RTTIDerivedA::~RTTIDerivedA() */

void RTTIDerivedA_destructor(RTTIDerivedA *this_ptr)

{
 operator_delete(this_ptr);
 return;
}



/* Function: getType @ 000119d4 */

/* RTTIDerivedA::getType() const */

undefined4 RTTIDerivedA_getType(RTTIDerivedA *this_ptr)

{
 return 1;
}



/* Function: ~RTTIBase @ 000119dc */

/* RTTIBase::~RTTIBase() */

RTTIBase * RTTIBase_destructor1(RTTIBase *this_ptr)

{
 return this_ptr;
}



/* Function: ~RTTIDerivedB @ 000119e0 */

/* RTTIDerivedB::~RTTIDerivedB() */

void RTTIDerivedB_destructor(RTTIDerivedB *this_ptr)

{
 operator_delete(this_ptr);
 return;
}



/* Function: getType @ 000119f0 */

/* RTTIDerivedB::getType() const */

undefined4 RTTIDerivedB_getType(RTTIDerivedB *this_ptr)

{
 return 2;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 83 */
