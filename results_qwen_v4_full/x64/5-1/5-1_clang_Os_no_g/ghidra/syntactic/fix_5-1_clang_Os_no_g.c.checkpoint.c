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
typedef unsigned long ulong;
typedef unsigned int uint;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Additional types for decompiled code */
typedef unsigned char undefined;
typedef unsigned short undefined2;
typedef unsigned int undefined4;
typedef unsigned long undefined8;
typedef void (*code_ptr)(void);

/* Forward declarations for C++ classes */
typedef struct Base {
 undefined8 *vtable;
} Base;

typedef struct LifecycleClass {
 int instance_count;
} LifecycleClass;

/* Global variables */
int LifecycleClass_instance_count = 0;

/* External function declarations */
size_t strlen(const char *s) { size_t len = 0; while (s[len]) len++; return len; }
void *operator_new(size_t size) { return (void *)0; }
void *operator_new__(size_t size) { return (void *)0; }
void operator_delete(void *ptr) { }
void operator_delete__(void *ptr) { operator_delete(ptr); }
void *__cxa_allocate_exception(size_t size) { return (void *)0; }
void __cxa_throw(void *exc, void *typeinfo, void *dest) { }
void *typeinfo = 0;
void *RTTIBase_typeinfo = 0;
void *RTTIDerivedA_typeinfo = 0;
void *RTTIDerivedB_typeinfo = 0;
void *__dynamic_cast(void *src, void *src_type, void *dst_type, long src2dst) { return (void *)0; }
int puts(const char *s) { return 0; }
int printf(const char *format, ...) { return 0; }

/* External data declarations */
char DAT_001021d4[] = "Test output";
char DAT_0010207d[] = "%d\n";
char DAT_0010209b[] = "%d\n";
char DAT_001020b7[] = "%d\n";
char DAT_001020d3[] = "%d\n";
char DAT_001020ef[] = "%d\n";
char DAT_0010210c[] = "%d\n";
char DAT_00102128[] = "%d\n";
char DAT_00102144[] = "%d\n";
char DAT_00102160[] = "%d\n";
char DAT_0010217c[] = "%d\n";
char DAT_00102199[] = "%d\n";
char DAT_001021b6[] = "%d\n";
void *PTR__RTTIBase_00103d78 = 0;
void *PTR__RTTIBase_00103da0 = 0;


/* Class definitions */
typedef struct RTTIBase {
 undefined8 *vtable;
} RTTIBase;

typedef struct RTTIDerivedA {
 undefined8 *vtable;
} RTTIDerivedA;

typedef struct RTTIDerivedB {
 undefined8 *vtable;
} RTTIDerivedB;

/* Container class definitions */
typedef struct Container_int {
 int data[10];
 int size;
} Container_int;

typedef struct Container_double {
 double data[10];
 int size;
} Container_double;

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x64/5-1/5-1_clang_Os_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00101020 @ 00101020 */

void FUN_00101020(void)

{
 return;
}



/* Function: _GLOBAL__sub_I_5_1.cpp @ 00101140 */

void _GLOBAL__sub_I_5_1_cpp(void)

{
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: test_cpp_member_func @ 0010125c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

int test_cpp_member_func(void)

{
 size_t sVar1;
 char local_24 [36];
 
 local_24[0x10] = '\0';
 local_24[0x11] = '\0';
 local_24[0x12] = '\0';
 local_24[0x13] = '\0';
 local_24[0x14] = '\0';
 local_24[0x15] = '\0';
 local_24[0x16] = '\0';
 local_24[0x17] = '\0';
 local_24[0x18] = '\0';
 local_24[0x19] = '\0';
 local_24[0x1a] = '\0';
 local_24[0x1b] = '\0';
 local_24[0x1c] = '\0';
 local_24[0x1d] = '\0';
 local_24[0x1e] = '\0';
 __builtin_strncpy(local_24,"Test",5);
 local_24[5] = '\0';
 local_24[6] = '\0';
 local_24[7] = '\0';
 local_24[8] = '\0';
 local_24[9] = '\0';
 local_24[10] = '\0';
 local_24[0xb] = '\0';
 local_24[0xc] = '\0';
 local_24[0xd] = '\0';
 local_24[0xe] = '\0';
 local_24[0xf] = 0;
 local_24[0x1f] = 0;
 sVar1 = strlen(local_24);
 return (int)sVar1 + 0x125c;
}



/* Function: test_cpp_constructor @ 00101294 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_constructor() */

int test_cpp_constructor(void)

{
 undefined4 *puVar1;
 long lVar2;
 undefined4 *puVar3;
 int iVar4;
 
 puVar1 = (undefined4 *)operator_new__(0x14);
 lVar2 = 0;
 puVar3 = puVar1;
 do {
 *puVar3 = (int)lVar2;
 lVar2 = lVar2 + 10;
 puVar3 = puVar3 + 1;
 } while (lVar2 != 0x32);
 LifecycleClass_instance_count = LifecycleClass_instance_count + 1;
 iVar4 = LifecycleClass_instance_count + puVar1[2];
 operator_delete__(puVar1);
 LifecycleClass_instance_count = LifecycleClass_instance_count + -1;
 return LifecycleClass_instance_count * 1000 + iVar4;
}



/* Function: call_virtual_func @ 001012e5 */

/* call_virtual_func(Base*, int) */

void call_virtual_func(Base *param_1,int param_2)

{
 /* WARNING: Could not recover jumptable at 0x001012eb. Too many branches */
 /* WARNING: Treating indirect jump as call */
 (*(code_ptr *)**(undefined8 **)param_1)();
 return;
}

typedef void (*code_ptr_arg)(void *);



/* Function: test_cpp_virtual_func @ 001012ed */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_virtual_func() */

undefined8 test_cpp_virtual_func(void)

{
 return 0x2a;
}



/* Function: test_cpp_multiple_inheritance @ 001012f3 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_multiple_inheritance() */

undefined8 test_cpp_multiple_inheritance(void)

{
 return 0x47;
}



/* Function: test_cpp_diamond_inheritance @ 001012f9 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_diamond_inheritance() */

undefined8 test_cpp_diamond_inheritance(void)

{
 return 0x28a;
}



/* Function: test_cpp_operator_overload @ 001012ff */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_operator_overload() */

undefined8 test_cpp_operator_overload(void)

{
 return 0x16;
}



/* Function: test_cpp_template_func @ 00101305 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_func() */

undefined8 test_cpp_template_func(void)

{
 return 0x27;
}



/* Function: test_cpp_template_class @ 0010130b */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_class() */

undefined8 test_cpp_template_class(void)

{
 return 0x10;
}



/* Function: test_cpp_lambda @ 00101311 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_lambda() */

undefined8 test_cpp_lambda(void)

{
 return 0x55;
}



/* Function: test_cpp_exception @ 00101317 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_exception() */

undefined8 test_cpp_exception(void)

{
 undefined4 *puVar1;
 
 puVar1 = (undefined4 *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* try { // try from 0010132c to 0010133f has its CatchHandler @ 00101342 */
 /* WARNING: Subroutine does not return */
 __cxa_throw(puVar1,&typeinfo,0);
 return 0;
}



/* Function: test_cpp_smart_ptr @ 001013d7 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr() */

undefined8 test_cpp_smart_ptr(void)

{
 return 0x2bf;
}



/* Function: test_cpp_rtti @ 001013dd */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_rtti() */

int test_cpp_rtti(void)

{
 undefined8 *puVar1;
 long *plVar2;
 long lVar3;
 int iVar4;
 int iVar5;
 
 puVar1 = (undefined8 *)operator_new(8);
 *puVar1 = (undefined8)PTR__RTTIBase_00103d78;
 plVar2 = (long *)operator_new(8);
 *plVar2 = (long)PTR__RTTIBase_00103da0;
 lVar3 = (long)__dynamic_cast((void *)puVar1,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0);
 iVar4 = 0x82;
 if (lVar3 == 0) {
 iVar4 = 0x1e;
 }
 lVar3 = (long)__dynamic_cast((void *)plVar2,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo,0);
 iVar5 = iVar4 + 200;
 if (lVar3 == 0) {
 iVar5 = iVar4;
 }
 operator_delete((void *)puVar1);
 ((code_ptr_arg)(*(code_ptr *)(*plVar2 + 8)))(plVar2);
 return iVar5 + 0xe;
}



/* Function: test_cpp_oo_features @ 0010147f */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_oo_features() */

void test_cpp_oo_features(void)

{
 uint uVar1;
 size_t sVar2;
 char local_24 [36];
 
 puts((const char *)&DAT_001021d4);
 local_24[0x10] = '\0';
 local_24[0x11] = '\0';
 local_24[0x12] = '\0';
 local_24[0x13] = '\0';
 local_24[0x14] = '\0';
 local_24[0x15] = '\0';
 local_24[0x16] = '\0';
 local_24[0x17] = '\0';
 local_24[0x18] = '\0';
 local_24[0x19] = '\0';
 local_24[0x1a] = '\0';
 local_24[0x1b] = '\0';
 local_24[0x1c] = '\0';
 local_24[0x1d] = '\0';
 local_24[0x1e] = '\0';
 __builtin_strncpy(local_24,"Test",5);
 local_24[5] = '\0';
 local_24[6] = '\0';
 local_24[7] = '\0';
 local_24[8] = '\0';
 local_24[9] = '\0';
 local_24[10] = '\0';
 local_24[0xb] = '\0';
 local_24[0xc] = '\0';
 local_24[0xd] = '\0';
 local_24[0xe] = '\0';
 local_24[0xf] = 0;
 local_24[0x1f] = 0;
 sVar2 = strlen(local_24);
 printf((char *)&DAT_0010207d,(unsigned long)((int)sVar2 + 0x125c));
 uVar1 = test_cpp_constructor();
 printf((char *)&DAT_0010209b,(ulong)uVar1);
 printf((char *)&DAT_001020b7,0x2a);
 printf((char *)&DAT_001020d3,0x47);
 printf((char *)&DAT_001020ef,0x28a);
 printf((char *)&DAT_0010210c,0x16);
 printf((char *)&DAT_00102128,0x27);
 printf((char *)&DAT_00102144,0x10);
 printf((char *)&DAT_00102160,0x55);
 uVar1 = test_cpp_exception();
 printf((char *)&DAT_0010217c,(ulong)uVar1);
 printf((char *)&DAT_00102199,0x2bf);
 uVar1 = test_cpp_rtti();
 printf((char *)&DAT_001021b6,(ulong)uVar1);
 return;
}



/* Function: main @ 001015a8 */

int main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: template_max_int @ 001015b2 */

/* int template_max_int(int, int) */

int template_max_int(int param_1,int param_2)

{
 if (param_2 < param_1) {
 param_2 = param_1;
 }
 return param_2;
}



/* Function: template_max_double @ 001015ba */

/* double template_max_double(double, double) */

double template_max_double(double param_1,double param_2)

{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}



/* Function: template_swap_int @ 001015bf */

/* void template_swap_int(int*, int*) */

void template_swap_int(int *param_1,int *param_2)

{
 int iVar1;
 
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}



/* Function: Container_int_init @ 001015c8 */

/* Container_int_init(Container_int*) */

void Container_int_init(Container_int *param_this)

{
 *(undefined4 *)(param_this + 0x28) = 0;
 return;
}



/* Function: Container_int_push @ 001015d0 */

/* Container_int_push(Container_int*, int) */

void Container_int_push(Container_int *param_this,int param_1)

{
 int iVar1;
 
 iVar1 = *(int *)(param_this + 0x28);
 if ((long)iVar1 < 10) {
 *(int *)(param_this + 0x28) = iVar1 + 1;
 *(int *)(param_this + (long)iVar1 * 4) = param_1;
 }
 return;
}



/* Function: Container_int_get @ 001015e4 */

/* Container_int_get(Container_int*, int) */

undefined4 Container_int_get(Container_int *param_this,int param_1)

{
 undefined4 uVar1;
 
 uVar1 = 0;
 if ((-1 < param_1) && (param_1 < *(int *)(param_this + 0x28))) {
 uVar1 = *(undefined4 *)(param_this + (ulong)(uint)param_1 * 4);
 }
 return uVar1;
}



/* Function: Container_int_getSize @ 001015f6 */

/* Container_int_getSize(Container_int*) */

undefined4 Container_int_getSize(Container_int *param_this)

{
 return *(undefined4 *)(param_this + 0x28);
}



/* Function: Container_double_init @ 001015fa */

/* Container_double_init(Container_double*) */

void Container_double_init(Container_double *param_this)

{
 *(undefined4 *)(param_this + 0x50) = 0;
 return;
}



/* Function: Container_double_push @ 00101602 */

/* Container_double_push(Container_double*, double) */

void Container_double_push(Container_double *param_this,double param_1)

{
 int iVar1;
 
 iVar1 = *(int *)(param_this + 0x50);
 if ((long)iVar1 < 10) {
 *(int *)(param_this + 0x50) = iVar1 + 1;
 *(double *)(param_this + (long)iVar1 * 8) = param_1;
 }
 return;
}



/* Function: Container_double_get @ 00101618 */

/* Container_double_get(Container_double*, int) */

undefined8 Container_double_get(Container_double *param_this,int param_1)

{
 undefined8 uVar1;
 
 uVar1 = 0;
 if ((-1 < param_1) && (param_1 < *(int *)(param_this + 0x50))) {
 uVar1 = *(undefined8 *)(param_this + (ulong)(uint)param_1 * 8);
 }
 return uVar1;
}



/* Function: Container_double_getSize @ 0010162c */

/* Container_double_getSize(Container_double*) */

undefined4 Container_double_getSize(Container_double *param_this)

{
 return *(undefined4 *)(param_this + 0x50);
}



/* Function: ~RTTIDerivedA @ 00101630 */

/* RTTIDerivedA::~RTTIDerivedA() */

void RTTIDerivedA_destructor(RTTIDerivedA *param_this)

{
 operator_delete(param_this);
 return;
}



/* Function: getType @ 00101636 */

/* RTTIDerivedA::getType(RTTIDerivedA*) */

undefined8 RTTIDerivedA_getType(RTTIDerivedA *param_this)

{
 return 1;
}



/* Function: ~RTTIBase @ 0010163c */

/* RTTIBase::~RTTIBase() */

void RTTIBase_destructor(RTTIBase *param_this)

{
 return;
}



/* Function: ~RTTIDerivedB @ 0010163e */

/* RTTIDerivedB::~RTTIDerivedB() */

void RTTIDerivedB_destructor(RTTIDerivedB *param_this)

{
 operator_delete(param_this);
 return;
}



/* Function: getType @ 00101644 */

/* RTTIDerivedB::getType(RTTIDerivedB*) */

undefined8 RTTIDerivedB_getType(RTTIDerivedB *param_this)

{
 return 2;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 39 */
