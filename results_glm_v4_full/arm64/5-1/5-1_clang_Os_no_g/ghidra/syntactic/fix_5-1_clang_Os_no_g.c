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
#define NULL ((void*)0)

/* Ghidra decompiler type definitions */
typedef unsigned int undefined4;
typedef unsigned long long undefined8;
typedef unsigned char undefined1;
typedef unsigned long ulong;
typedef void (*code)(void);

struct __attribute__((packed)) undefined7 {
    unsigned char _0_1_[7];
};
typedef struct __attribute__((packed)) undefined7 undefined7;

/* Forward declarations */
struct Base {
    void **vtable;  /* Virtual table pointer */
};

/* LifecycleClass declaration */
struct LifecycleClass;
extern int LifecycleClass_instance_count;

/* RTTI class declarations */
struct RTTIBase {
    void **vtable;  /* Virtual table pointer */
    struct type_info *type_info;
};

struct RTTIDerivedA {
    void **vtable;  /* Virtual table pointer */
    struct type_info *type_info;
};

struct RTTIDerivedB {
    void **vtable;  /* Virtual table pointer */
    struct type_info *type_info;
};

/* RTTI destructor function declarations */
extern void RTTIBase_destructor(void *this);
extern void RTTIDerivedA_destructor(void *this);
extern void RTTIDerivedB_destructor(void *this);

/* C++ memory management */
extern void* operator_new(unsigned long size);
extern void operator_delete(void *ptr);
extern void* __dynamic_cast(void *subobject, const void *src_type, const void *dst_type, long hint);

/* C++ RTTI type_info structure */
struct type_info {
    const char* name;
};

/* RTTI type_info objects - defined globally below, no extern declarations needed */

/* C++ runtime declarations */
typedef struct std_ios_base_Init {
    void (*constructor)(void*);
    void (*destructor)(void*);
} std_ios_base_Init;
extern int __cxa_atexit(void (*func)(void*), void* arg, void* dso_handle);
extern void* __dso_handle;
extern char completed_0;
extern std_ios_base_Init __ioinit;

/* Standard I/O declarations */
extern int puts(const char *s);
extern int printf(const char *format, ...);

/* String/memory functions */
extern void* memset(void *s, int c, size_t n);
extern size_t strlen(const char *s);

/* Data symbol declarations */
extern char DAT_00101680[];
extern char DAT_00101529[];
extern char DAT_00101547[];
extern char DAT_00101563[];
extern char DAT_0010157f[];
extern char DAT_0010159b[];
extern char DAT_001015b8[];
extern char DAT_001015d4[];
extern char DAT_001015f0[];
extern char DAT_0010160c[];
extern char DAT_00101628[];
extern char DAT_00101645[];
extern char DAT_00101662[];

/* Data symbol definitions - placeholder string literals */
char DAT_00101680[] = "";
char DAT_00101529[] = "";
char DAT_00101547[] = "";
char DAT_00101563[] = "";
char DAT_0010157f[] = "";
char DAT_0010159b[] = "";
char DAT_001015b8[] = "";
char DAT_001015d4[] = "";
char DAT_001015f0[] = "";
char DAT_0010160c[] = "";
char DAT_00101628[] = "";
char DAT_00101645[] = "";
char DAT_00101662[] = "";

/* Standard C library functions */
extern void* malloc(size_t size);
extern void free(void *ptr);

/* C++ memory management implementations */
void* operator_new(unsigned long size) {
    return malloc(size);
}

void operator_delete(void *ptr) {
    free(ptr);
}

/* C++ RTTI dynamic_cast implementation stub */
void* __dynamic_cast(void *subobject, const void *src_type, const void *dst_type, long hint) {
    /* Stub implementation - returns NULL for now */
    return NULL;
}

/* C++ exception allocation implementation */
void* __cxa_allocate_exception(size_t size) {
    return malloc(size);
}

/* C++ finalize implementation */
void __cxa_finalize(void *dso_handle) {
    /* Stub implementation - cleanup for shared object */
}

/* CRT deregister function implementation */
void deregister_tm_clones(void) {
    /* Stub implementation */
}

/* C++ exception throw implementation */
void __cxa_throw(void* thrown_exception, void* tinfo, void* dest) {
    /* Stub implementation - should never return in real implementation */
    puts("Exception thrown (stub)");
    for(;;);
}

/* C++ pure virtual call handler */
void __cxa_pure_virtual(void) {
    puts("Pure virtual function called (stub)");
    for(;;);
}

/* LifecycleClass static member definition */
int LifecycleClass_instance_count = 0;

/* C++ runtime symbol definitions */
void* __dso_handle = &__dso_handle;
std_ios_base_Init __ioinit = {NULL, NULL};
char completed_0 = 0;

/* RTTI type_info object definitions - global symbols for linker */
struct type_info typeinfo_for_RTTIBase_00111d58 = {"RTTIBase"};
struct type_info typeinfo_for_RTTIDerivedA = {"RTTIDerivedA"};
struct type_info typeinfo_for_RTTIDerivedB = {"RTTIDerivedB"};

/* RTTI pointer definitions - global symbols for linker */
void* PTR__RTTIBase_00111d58 = &typeinfo_for_RTTIBase_00111d58;
void* PTR__RTTIBase_00111d80 = &typeinfo_for_RTTIDerivedA;
void* PTR__RTTIDerivedA = &typeinfo_for_RTTIDerivedA;
void* PTR__RTTIDerivedB = &typeinfo_for_RTTIDerivedB;

/* VTable structures for RTTI classes */
typedef void (*vfunc_destructor_t)(void*);
typedef void (*vfunc_type_t)(void *, int);

/* VTable for RTTIBase */
typedef struct vtable_RTTIBase {
    void **type_info_ptr;  /* Pointer to type_info */
    vfunc_destructor_t destructor;
    vfunc_type_t virtual_func;
} vtable_RTTIBase;

/* VTable for RTTIDerivedA */
typedef struct vtable_RTTIDerivedA {
    void **type_info_ptr;  /* Pointer to type_info */
    vfunc_destructor_t destructor;
    vfunc_type_t virtual_func;
} vtable_RTTIDerivedA;

/* VTable for RTTIDerivedB */
typedef struct vtable_RTTIDerivedB {
    void **type_info_ptr;  /* Pointer to type_info */
    vfunc_destructor_t destructor;
    vfunc_type_t virtual_func;
} vtable_RTTIDerivedB;

/* Stub virtual function for vtables */
void virtual_func_stub(void *this, int param) {
    /* Stub implementation */
}

/* VTable definitions - global symbols for linker */
vtable_RTTIBase ZTV4Base = {&PTR__RTTIBase_00111d58, RTTIBase_destructor, virtual_func_stub};
vtable_RTTIDerivedA ZTV11RTTIDerivedA = {&PTR__RTTIDerivedA, RTTIDerivedA_destructor, virtual_func_stub};
vtable_RTTIDerivedB ZTV11RTTIDerivedB = {&PTR__RTTIDerivedB, RTTIDerivedB_destructor, virtual_func_stub};

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/5-1/5-1_clang_Os_no_g
 * Processor: AARCH64
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00100d60 @ 00100d60 */

void FUN_00100d60(void)

{
 (*(code *)(void *)0x0)();
 return;
}



/* Function: _GLOBAL__sub_I_5_1.cpp @ 00100ec0 */

void _GLOBAL__sub_I_5_1_cpp(void)

{
 __ioinit.constructor(&__ioinit);
 __cxa_atexit((void (*)(void*))__ioinit.destructor,&__ioinit,&__dso_handle);
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */




/* Function: FUN_00100fbc @ 00100fbc */

void FUN_00100fbc(void)

{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: test_cpp_member_func @ 00101014 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

int test_cpp_member_func(void)

{
 size_t sVar1;
 undefined4 local_38;
 undefined8 local_34;
 undefined7 uStack_2c;
 undefined1 uStack_25;
 undefined7 uStack_24;
 undefined8 uStack_1d;
 undefined1 local_15;
 
 local_15 = 0;
 local_38 = 10;
 memset(&uStack_2c, 0, sizeof(uStack_2c));
 local_34 = 0x74736554;
 uStack_1d = 0;
 uStack_25 = 0;
 memset(&uStack_24, 0, sizeof(uStack_24));
 sVar1 = strlen((char *)(((ulong)&local_38) + 4));
 return (int)sVar1 + 0x125c;
}



/* Function: test_cpp_constructor @ 00101064 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_constructor() */

int test_cpp_constructor(void)

{
 return LifecycleClass_instance_count * 0x3e9 + 0x15;
}



/* Function: call_virtual_func @ 0010107c */

/* call_virtual_func(Base*, int) */

typedef void (*virtual_func_t)(void *, int);

void call_virtual_func(struct Base *param_1,int param_2)

{
 /* WARNING: Could not recover jumptable at 0x00101084. Too many branches */
 /* WARNING: Treating indirect jump as call */
 (*(virtual_func_t *)*(void **)param_1)(param_1,param_2);
 return;
}



/* Function: test_cpp_virtual_func @ 00101088 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_virtual_func() */

undefined8 test_cpp_virtual_func(void)

{
 return 0x2a;
}



/* Function: test_cpp_multiple_inheritance @ 00101090 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_multiple_inheritance() */

undefined8 test_cpp_multiple_inheritance(void)

{
 return 0x47;
}



/* Function: test_cpp_diamond_inheritance @ 00101098 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_diamond_inheritance() */

undefined8 test_cpp_diamond_inheritance(void)

{
 return 0x28a;
}



/* Function: test_cpp_operator_overload @ 001010a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_operator_overload() */

undefined8 test_cpp_operator_overload(void)

{
 return 0x16;
}



/* Function: test_cpp_template_func @ 001010a8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_func() */

undefined8 test_cpp_template_func(void)

{
 return 0x27;
}



/* Function: test_cpp_template_class @ 001010b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_class() */

undefined8 test_cpp_template_class(void)

{
 return 0x10;
}



/* Function: test_cpp_lambda @ 001010b8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_lambda() */

undefined8 test_cpp_lambda(void)

{
 return 0x55;
}



/* Function: test_cpp_exception @ 001010c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_exception() */

void test_cpp_exception(void)

{
 undefined4 *puVar1;
 
 puVar1 = (undefined4 *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* try { // try from 001010e0 to 001010ef has its CatchHandler @ 001010f4 */
 /* WARNING: Subroutine does not return */
 __cxa_throw(puVar1,0,0);
}



/* Function: test_cpp_smart_ptr @ 001011b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr() */

undefined8 test_cpp_smart_ptr(void)

{
 return 0x2bf;
}



/* Function: test_cpp_rtti @ 001011b8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_rtti() */

int test_cpp_rtti(void)

{
 undefined8 *puVar1;
 long *plVar2;
 void *lVar3;
 int iVar4;
 
 puVar1 = (undefined8 *)operator_new(8);
 *puVar1 = (undefined8)(uintptr_t)PTR__RTTIBase_00111d58;
 plVar2 = (long *)operator_new(8);
 *plVar2 = (long)(uintptr_t)PTR__RTTIBase_00111d80;
 lVar3 = __dynamic_cast(puVar1,PTR__RTTIBase_00111d58,PTR__RTTIBase_00111d80,0);
 iVar4 = 0x1e;
 if (lVar3 != (void *)0) {
 iVar4 = 0x82;
 }
 lVar3 = __dynamic_cast(plVar2,PTR__RTTIBase_00111d58,PTR__RTTIBase_00111d80,0);
 if (lVar3 != (void *)0) {
 iVar4 = iVar4 + 200;
 }
 operator_delete(puVar1);
 ((void (*)(void *))(*(void ***)plVar2)[1])(plVar2);
 return iVar4 + 0xe;
}



/* Function: test_cpp_oo_features @ 00101278 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_oo_features() */

int test_cpp_oo_features(void)

{
 int iVar1;
 size_t sVar2;
 ulong uVar3;
 undefined4 local_38;
 undefined8 local_34;
 undefined7 uStack_2c;
 undefined1 uStack_25;
 undefined7 uStack_24;
 undefined8 uStack_1d;
 undefined1 local_15;
 
 puts((const char *)&DAT_00101680);
 local_15 = 0;
 local_38 = 10;
 memset(&uStack_2c, 0, sizeof(uStack_2c));
 local_34 = 0x74736554;
 uStack_1d = 0;
 uStack_25 = 0;
 memset(&uStack_24, 0, sizeof(uStack_24));
 sVar2 = strlen((char *)(((ulong)&local_38) + 4));
 printf((const char *)&DAT_00101529,(ulong)((int)sVar2 + 0x125c));
 printf((const char *)&DAT_00101547,(ulong)(LifecycleClass_instance_count * 0x3e9 + 0x15));
 printf((const char *)&DAT_00101563,0x2a);
 printf((const char *)&DAT_0010157f,0x47);
 printf((const char *)&DAT_0010159b,0x28a);
 printf((const char *)&DAT_001015b8,0x16);
 printf((const char *)&DAT_001015d4,0x27);
 printf((const char *)&DAT_001015f0,0x10);
 printf((const char *)&DAT_0010160c,0x55);
 test_cpp_exception();
 uVar3 = 0;
 printf((const char *)&DAT_00101628,uVar3 & 0xffffffff);
 printf((const char *)&DAT_00101645,0x2bf);
 uVar3 = test_cpp_rtti();
 iVar1 = printf((const char *)&DAT_00101662,uVar3 & 0xffffffff);
 return iVar1;
}



/* Function: main @ 001013a4 */

int main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: template_max<int> @ 001013bc */

/* int template_max<int>(int, int) */

int template_max_int(int param_1,int param_2)

{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}



/* Function: template_max<double> @ 001013c8 */

/* double template_max<double>(double, double) */

double template_max_double(double param_1,double param_2)

{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}



/* Function: template_swap<int> @ 001013d4 */

/* void template_swap<int>(int&, int&) */

void template_swap_int(int *param_1,int *param_2)

{
 int iVar1;
 
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}



/* Function: Container @ 001013e8 */

/* Container<int>::Container() */

void Container_int_Constructor(void *this)

{
 *(undefined4 *)(this + 0x28) = 0;
 return;
}



/* Function: push @ 001013f0 */

/* Container<int>::push(int) */

void Container_int_push(void *this,int param_1)

{
 int iVar1;
 
 iVar1 = *(int *)(this + 0x28);
 if (iVar1 < 10) {
 *(int *)(this + 0x28) = iVar1 + 1;
 *(int *)(this + (long)iVar1 * 4) = param_1;
 }
 return;
}



/* Function: get @ 0010140c */

/* Container<int>::get(int) const */

undefined4 Container_int_get(void *this,int param_1)

{
 undefined4 uVar1;
 
 uVar1 = 0;
 if ((-1 < param_1) && (param_1 < *(int *)(this + 0x28))) {
 uVar1 = *(undefined4 *)(this + (ulong)(uint)param_1 * 4);
 }
 return uVar1;
}



/* Function: getSize @ 0010142c */

/* Container<int>::getSize() const */

undefined4 Container_int_getSize(void *this)

{
 return *(undefined4 *)(this + 0x28);
}



/* Function: Container @ 00101434 */

/* Container<double>::Container() */

void Container_double_Constructor(void *this)

{
 *(undefined4 *)(this + 0x50) = 0;
 return;
}



/* Function: push @ 0010143c */

/* Container<double>::push(double) */

void Container_double_push(void *this,double param_1)

{
 int iVar1;
 
 iVar1 = *(int *)(this + 0x50);
 if (iVar1 < 10) {
 *(double *)(this + (long)iVar1 * 8) = param_1;
 *(int *)(this + 0x50) = iVar1 + 1;
 }
 return;
}



/* Function: get @ 00101458 */

/* Container<double>::get(int) const */

undefined8 Container_double_get(void *this,int param_1)

{
 ulong uVar1;
 
 uVar1 = 0;
 if ((-1 < param_1) && (param_1 < *(int *)(this + 0x50))) {
 uVar1 = *(ulong *)(this + (ulong)(uint)param_1 * 8);
 }
 return (undefined8)uVar1;
}



/* Function: getSize @ 00101474 */

/* Container<double>::getSize() const */

undefined4 Container_double_getSize(void *this)

{
 return *(undefined4 *)(this + 0x50);
}



/* Function: ~RTTIDerivedA @ 0010147c */

/* RTTIDerivedA::~RTTIDerivedA() */

void RTTIDerivedA_destructor(void *this)

{
 operator_delete(this);
 return;
}



/* Function: getType @ 00101480 */

/* RTTIDerivedA::getType() const */

undefined8 RTTIDerivedA_getType(void)

{
 return 1;
}



/* Function: ~RTTIBase @ 00101488 */

/* RTTIBase::~RTTIBase() */

void RTTIBase_destructor(void *this)

{
 return;
}



/* Function: ~RTTIDerivedB @ 0010148c */

/* RTTIDerivedB::~RTTIDerivedB() */

void RTTIDerivedB_destructor(void *this)

{
 operator_delete(this);
 return;
}



/* Function: getType @ 00101490 */

/* RTTIDerivedB::getType() const */

undefined8 RTTIDerivedB_getType(void)

{
 return 2;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 41 */
