#include <string.h>
#include <stdio.h>

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
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Ghidra helper macros */
#define SUB84(val, offset) ((unsigned int)((unsigned long long)(val) >> ((offset) * 8)))
#define CONCAT44(hi, lo) (((unsigned long long)(hi) << 32) | (unsigned int)(lo))
typedef unsigned long long ulonglong;

/* Ghidra decompiler types */
typedef unsigned char undefined1;
typedef unsigned short undefined2;
typedef unsigned int undefined4;
typedef unsigned long long undefined8;

/* Forward declarations for types used in decompiled code */
typedef struct Base Base;
typedef struct LifecycleClass LifecycleClass;
typedef struct RTTIBase RTTIBase;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;
typedef void (*code)(void);

/* Container template structs */
typedef struct Container_int {
 undefined4 data[10];
 int size;
} Container_int;

typedef struct Container_double {
 undefined8 data[10];
 int size;
} Container_double;

/* LifecycleClass with instance_count */
struct LifecycleClass {
 int instance_count;
};
int LifecycleClass_instance_count = 0;

/* External function declarations */
extern void *operator_new(size_t);
extern void *__cxa_allocate_exception(size_t);
extern void __cxa_throw(void *, void *, void *);
extern int __aeabi_dcmpgt(double, double);
extern void *__dynamic_cast(void *, void *, void *, int);

/* Stub implementations for C++ operators */
void operator_delete(void *ptr) {
 /* Stub - no-op for C compatibility */
 (void)ptr;
}

void *operator_new(size_t size) {
 /* Stub - return NULL for C compatibility */
 (void)size;
 return (void *)0;
}

void *__cxa_allocate_exception(size_t size) {
 /* Stub - return NULL for C compatibility */
 (void)size;
 return (void *)0;
}

void __cxa_throw(void *obj, void *type, void *dest) {
 /* Stub - no-op for C compatibility */
 (void)obj;
 (void)type;
 (void)dest;
}

void *__dynamic_cast(void *obj, void *src_type, void *dst_type, int flags) {
 /* Stub - return NULL for C compatibility */
 (void)obj;
 (void)src_type;
 (void)dst_type;
 (void)flags;
 return (void *)0;
}

/* External RTTI typeinfo objects */
void *PTR__RTTIBase_00021ed8 = 0;
void *PTR__RTTIBase_00021eec = 0;
void *RTTIBase_typeinfo = 0;
void *RTTIDerivedA_typeinfo = 0;
void *RTTIDerivedB_typeinfo = 0;

/* External data objects (format strings) */
char DAT_00011358[] = "Test";
char DAT_00011201[] = "%d\n";
char DAT_0001121f[] = "%d\n";
char DAT_0001123b[] = "%d\n";
char DAT_00011257[] = "%d\n";
char DAT_00011273[] = "%d\n";
char DAT_00011290[] = "%d\n";
char DAT_000112ac[] = "%d\n";
char DAT_000112c8[] = "%d\n";
char DAT_000112e4[] = "%d\n";
char DAT_00011300[] = "%d\n";
char DAT_0001131d[] = "%d\n";
char DAT_0001133a[] = "%d\n";

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/5-1/5-1_clang_O3_no_g
 * Processor: ARM
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */




/* Function: _GLOBAL__sub_I_5_1.cpp @ 00010958 */

void _GLOBAL__sub_I_5_1_cpp(void)

{
 /* C++ static initialization stub - removed for C compatibility */
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: test_cpp_member_func @ 00010afc */

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



/* Function: test_cpp_constructor @ 00010b64 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_constructor() */

int test_cpp_constructor(void)

{
 return LifecycleClass_instance_count * 0x3e9 + 0x15;
}



/* Function: call_virtual_func @ 00010b80 */

/* call_virtual_func(Base*, int) */

void call_virtual_func(Base *param_1,int param_2)

{
 /* WARNING: Could not recover jumptable at 0x00010b88. Too many branches */
 /* WARNING: Treating indirect jump as call */
 (*(code *)**(undefined4 **)param_1)();
 return;
}



/* Function: test_cpp_virtual_func @ 00010b8c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_virtual_func() */

undefined4 test_cpp_virtual_func(void)

{
 return 0x2a;
}



/* Function: test_cpp_multiple_inheritance @ 00010b94 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_multiple_inheritance() */

undefined4 test_cpp_multiple_inheritance(void)

{
 return 0x47;
}



/* Function: test_cpp_diamond_inheritance @ 00010b9c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_diamond_inheritance() */

undefined4 test_cpp_diamond_inheritance(void)

{
 return 0x28a;
}



/* Function: test_cpp_operator_overload @ 00010ba8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_operator_overload() */

undefined4 test_cpp_operator_overload(void)

{
 return 0x16;
}



/* Function: test_cpp_template_func @ 00010bb0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_func() */

undefined4 test_cpp_template_func(void)

{
 return 0x27;
}



/* Function: test_cpp_template_class @ 00010bb8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_class() */

undefined4 test_cpp_template_class(void)

{
 return 0x10;
}



/* Function: test_cpp_lambda @ 00010bc0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_lambda() */

undefined4 test_cpp_lambda(void)

{
 return 0x55;
}



/* Function: test_cpp_exception @ 00010bc8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_exception() */

void test_cpp_exception(void)

{
 undefined4 *puVar1;
 
 puVar1 = (undefined4 *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* WARNING: Subroutine does not return */
 __cxa_throw(puVar1,0,0);
}



/* Function: test_cpp_smart_ptr @ 00010ca4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr() */

undefined4 test_cpp_smart_ptr(void)

{
 return 0x2bf;
}



/* Function: test_cpp_rtti @ 00010cb0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_rtti() */

int test_cpp_rtti(void)

{
 undefined4 *puVar1;
 int *piVar2;
 int iVar3;
 int iVar4;
 int iVar5;
 
 puVar1 = (undefined4 *)operator_new(4);
 *puVar1 = (undefined4)&PTR__RTTIBase_00021ed8;
 piVar2 = (int *)operator_new(4);
 *piVar2 = (int)&PTR__RTTIBase_00021eec;
 iVar3 = (int)__dynamic_cast(puVar1,RTTIBase_typeinfo,RTTIDerivedA_typeinfo,0);
 iVar4 = (int)__dynamic_cast(piVar2,RTTIBase_typeinfo,RTTIDerivedB_typeinfo,0);
 operator_delete(puVar1);
 (**(code **)(*piVar2 + 4))();
 iVar5 = 0x82;
 if (iVar3 == 0) {
 iVar5 = 0x1e;
 }
 if (iVar4 != 0) {
 iVar5 = iVar5 + 200;
 }
 return iVar5 + 0xe;
}



/* Function: test_cpp_oo_features @ 00010d7c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_oo_features() */

void test_cpp_oo_features(void)

{
 size_t sVar1;
 undefined4 uVar2;
 undefined4 *puVar3;
 int *piVar4;
 int iVar5;
 int iVar6;
 int iVar7;
 undefined4 local_38;
 undefined4 uStack_34;
 undefined4 uStack_30;
 undefined4 local_2c;
 undefined4 uStack_28;
 undefined4 uStack_24;
 undefined4 uStack_20;
 undefined2 local_1c;
 undefined1 local_1a;
 undefined1 local_19;
 
 puts((char *)&DAT_00011358);
 local_38 = 0x74736554;
 uStack_34 = 0;
 uStack_30 = 0;
 local_2c = 0;
 uStack_28 = 0;
 uStack_24 = 0;
 uStack_20 = 0;
 local_1c = 0;
 local_1a = 0;
 local_19 = 0;
 sVar1 = strlen((char *)&local_38);
 printf((char *)&DAT_00011201,(int)(sVar1 + 0x125c));
 printf((char *)&DAT_0001121f,(int)(LifecycleClass_instance_count * 0x3e9 + 0x15));
 printf((char *)&DAT_0001123b,(int)0x2a);
 printf((char *)&DAT_00011257,(int)0x47);
 printf((char *)&DAT_00011273,(int)0x28a);
 printf((char *)&DAT_00011290,(int)0x16);
 printf((char *)&DAT_000112ac,(int)0x27);
 printf((char *)&DAT_000112c8,(int)0x10);
 printf((char *)&DAT_000112e4,(int)0x55);
 test_cpp_exception();
 uVar2 = 0;
 printf((char *)&DAT_00011300,(int)uVar2);
 printf((char *)&DAT_0001131d,(int)0x2bf);
 puVar3 = (undefined4 *)operator_new(4);
 *puVar3 = (undefined4)&PTR__RTTIBase_00021ed8;
 piVar4 = (int *)operator_new(4);
 *piVar4 = (int)&PTR__RTTIBase_00021eec;
 iVar5 = (int)__dynamic_cast(puVar3,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0);
 iVar6 = (int)__dynamic_cast(piVar4,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo,0);
 operator_delete(puVar3);
 (**(code **)(*piVar4 + 4))();
 iVar7 = 0x82;
 if (iVar5 == 0) {
 iVar7 = 0x1e;
 }
 if (iVar6 != 0) {
 iVar7 = iVar7 + 200;
 }
 printf((char *)&DAT_0001133a,(int)(iVar7 + 0xe));
 return;
}



/* Function: main @ 00010fb8 */

int main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: template_max_int @ 00010fcc */

/* int template_max_int(int, int) */

int template_max_int(int param_1,int param_2)

{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}



/* Function: template_max_double @ 00010fd8 */

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x00010fec */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* double template_max_double(double, double) */

double template_max_double(double param_1,double param_2)

{
 if (param_1 > param_2) {
  return param_1;
 }
 return param_2;
}



/* Function: template_swap_int @ 0001100c */

/* void template_swap_int(int*, int*) */

void template_swap_int(int *param_1,int *param_2)

{
 int iVar1;
 
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}



/* Function: Container_int @ 00011020 */

/* Container_int::Container_int() */

void Container_int_Constructor(Container_int *this_ptr)

{
 *(undefined4 *)((char *)this_ptr + 0x28) = 0;
 return;
}



/* Function: push_int @ 0001102c */

/* Container_int::push(int) */

void Container_int_push(Container_int *this_ptr,int param_1)

{
 int iVar1;
 
 iVar1 = *(int *)((char *)this_ptr + 0x28);
 if (iVar1 < 10) {
 *(int *)((char *)this_ptr + 0x28) = iVar1 + 1;
 *(int *)((char *)this_ptr + iVar1 * 4) = param_1;
 }
 return;
}



/* Function: get_int @ 00011044 */

/* Container_int::get(int) const */

undefined4 Container_int_get(Container_int *this_ptr,int param_1)

{
 undefined4 uVar1;
 
 uVar1 = 0;
 if (param_1 < 0) {
 return 0;
 }
 if (param_1 < *(int *)((char *)this_ptr + 0x28)) {
 uVar1 = *(undefined4 *)((char *)this_ptr + param_1 * 4);
 }
 return uVar1;
}



/* Function: getSize_int @ 00011064 */

/* Container_int::getSize() const */

undefined4 Container_int_getSize(Container_int *this_ptr)

{
 return *(undefined4 *)((char *)this_ptr + 0x28);
}



/* Function: Container_double @ 0001106c */

/* Container_double::Container_double() */

void Container_double_Constructor(Container_double *this_ptr)

{
 *(undefined4 *)((char *)this_ptr + 0x50) = 0;
 return;
}



/* Function: push_double @ 00011078 */

/* Container_double::push(double) */

undefined4 Container_double_push(Container_double *this_ptr,double param_1)

{
 undefined4 *puVar1;
 int iVar2;
 
 iVar2 = *(int *)((char *)this_ptr + 0x50);
 if (9 < iVar2) {
 return SUB84(param_1,0);
 }
 puVar1 = (undefined4 *)((char *)this_ptr + iVar2 * 8);
 *puVar1 = SUB84(param_1,0);
 puVar1[1] = SUB84(param_1,4);
 *(int *)((char *)this_ptr + 0x50) = iVar2 + 1;
 return SUB84(param_1,0);
}



/* Function: get_double @ 0001109c */

/* Container_double::get(int) const */

undefined8 Container_double_get(Container_double *this_ptr,int param_1)

{
 undefined4 uVar1;
 undefined4 uVar2;
 
 uVar2 = 0;
 uVar1 = 0;
 if (-1 < param_1) {
 if (param_1 < *(int *)((char *)this_ptr + 0x50)) {
 uVar1 = *(undefined4 *)((char *)this_ptr + param_1 * 8);
 uVar2 = *(undefined4 *)((char *)this_ptr + param_1 * 8 + 4);
 }
 return CONCAT44(uVar2,uVar1);
 }
 return 0;
}



/* Function: getSize_double @ 000110c8 */

/* Container_double::getSize() const */

undefined4 Container_double_getSize(Container_double *this_ptr)

{
 return *(undefined4 *)((char *)this_ptr + 0x50);
}



/* Function: RTTIDerivedA_destructor @ 000110d0 */

/* RTTIDerivedA destructor */

void RTTIDerivedA_destructor(RTTIDerivedA *this_ptr)

{
 operator_delete(this_ptr);
 return;
}



/* Function: RTTIDerivedA_getType @ 000110d4 */

/* RTTIDerivedA getType */

undefined4 RTTIDerivedA_getType(void)

{
 return 1;
}



/* Function: RTTIBase_destructor @ 000110dc */

/* RTTIBase destructor */

RTTIBase * RTTIBase_destructor(RTTIBase *this_ptr)

{
 return this_ptr;
}



/* Function: RTTIDerivedB_destructor @ 000110e0 */

/* RTTIDerivedB destructor */

void RTTIDerivedB_destructor(RTTIDerivedB *this_ptr)

{
 operator_delete(this_ptr);
 return;
}



/* Function: RTTIDerivedB_getType @ 000110e4 */

/* RTTIDerivedB getType */

undefined4 RTTIDerivedB_getType(void)

{
 return 2;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 39 */
