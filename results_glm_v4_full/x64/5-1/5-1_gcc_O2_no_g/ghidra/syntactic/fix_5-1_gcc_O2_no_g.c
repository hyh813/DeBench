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
typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Additional type definitions for decompiled code */
typedef unsigned int undefined4;
typedef unsigned long long undefined8;
typedef void undefined;
typedef void (*code)(void);
typedef unsigned int uint;

/* Forward class declarations */
struct type_info {
    void** vtable;
    const char* name;
};

struct Base;
struct Derived;
struct MultiDerived;
struct MiddleA;
struct MiddleB;
struct DiamondDerived;
struct RTTIDerivedA;
struct RTTIBase;
struct RTTIDerivedB;
template<typename T> struct Container;
struct Init;
struct std___ioinit;

/* __cxa_allocate_exception function declaration */
extern void* __cxa_allocate_exception(size_t size);

/* __cxa_throw function implementation */
void __cxa_throw(void* exception, const type_info* type, void (*dest)(void*)) {
    (void)exception; (void)type; (void)dest; /* unused parameters */
    for(;;); /* Infinite loop - exception cannot be handled */
}

/* __cxa_atexit function declaration */
extern int __cxa_atexit(void (*func)(void*), void* arg, void* dso_handle);

/* operator_new function declaration */
extern void* operator_new(size_t size);

/* __dynamic_cast function declaration */
extern void* __dynamic_cast(void* obj, const type_info* src, const type_info* dst, int offset);

/* std_ios_base_init function declarations */
extern void std_ios_base_Init_Init(Init *obj);
extern void std_ios_base_Init_dtor(Init *obj);

/* test_cpp_oo_features function declaration */
extern void test_cpp_oo_features(void);

/* Minimal struct definitions for compilation */
typedef struct Base Base;

typedef struct LifecycleClass LifecycleClass;
struct LifecycleClass {
    static int instance_count;
};

int LifecycleClass::instance_count = 0;
struct Base {
    void **vtable;
    static const type_info typeinfo;
};

typedef struct Derived Derived;
struct Derived {
    void **vtable;
    int member;
};

typedef struct MultiDerived MultiDerived;
struct MultiDerived {
    void **vtableA;
    void **vtableB;
    int padding[4];
};

typedef struct MiddleA MiddleA;
struct MiddleA {
    void **vtable;
};

typedef struct MiddleB MiddleB;
struct MiddleB {
    void **vtable;
};

typedef struct DiamondDerived DiamondDerived;
struct DiamondDerived {
    void **vtable;
    int padding[8];
};

typedef struct RTTIBase RTTIBase;
struct RTTIBase {
    void **vtable;
    static const type_info typeinfo;
};

typedef struct RTTIDerivedA RTTIDerivedA;
struct RTTIDerivedA {
    void **vtable;
    static const type_info typeinfo;
};

typedef struct RTTIDerivedB RTTIDerivedB;
struct RTTIDerivedB {
    void **vtable;
    static const type_info typeinfo;
};

/* Container template partial instantiations */
struct Container__int_ {
    int data[10];
    int count;
};

struct Container__double_ {
    double data[10];
    int count;
};

/* External references */
extern std___ioinit std___ioinit;
extern void* __dso_handle;
extern const type_info int_typeinfo;

/* RTTI function forward declarations */
extern undefined8 RTTIDerivedA_getType(void);
extern void RTTIDerivedA_dtor(RTTIDerivedA *this_ptr);
extern undefined8 RTTIDerivedB_getType(void);
extern void RTTIDerivedB_dtor(RTTIDerivedB *this_ptr);

/* Missing type_info definitions - moved before use */
static const type_info RTTIBase_typeinfo = {
    (void**)0x0,
    "8RTTIBase"
};

static const type_info RTTIDerivedB_typeinfo = {
    (void**)0x0,
    "12RTTIDerivedB"
};

static const type_info RTTIDerivedA_typeinfo = {
    (void**)0x0,
    "12RTTIDerivedA"
};

/* RTTI vtable definitions */
void* PTR__RTTIDerivedA_00103c70[] = {
    (void*)&RTTIDerivedA_typeinfo,
    (void*)RTTIDerivedA_getType,
    (void*)RTTIDerivedA_dtor
};

void* PTR__RTTIDerivedB_00103c98[] = {
    (void*)&RTTIDerivedB_typeinfo,
    (void*)RTTIDerivedB_getType,
    (void*)RTTIDerivedB_dtor
};
extern const char DAT_00102018[];
extern const char DAT_0010203c[];
extern const char DAT_00102076[];
extern const char DAT_00102092[];
extern const char DAT_001020cb[];
extern const char DAT_001020e7[];
extern const char DAT_00102103[];
extern const char DAT_0010211f[];
extern const char DAT_0010213b[];
extern const char DAT_00102157[];
extern const char DAT_00102175[];
extern const char DAT_001020e7[];
extern const char DAT_00102157[];
extern const char DAT_00102004[];

/* Template function forward declarations */
extern int template_max__int(int param_1, int param_2);
extern double template_max__double(double param_1, double param_2);
extern void template_swap__int_(int *param_1, int *param_2);

/* Stack check fail function implementation */
void __stack_chk_fail(void) {
    for(;;); /* Infinite loop - compiler will optimize to crash */
}

/* builtin_strncpy function implementation */
void* builtin_strncpy(char *dest, const char *src, size_t n) {
    size_t i;
    for (i = 0; i < n && src[i] != '\0'; i++) {
        dest[i] = src[i];
    }
    for (; i < n; i++) {
        dest[i] = '\0';
    }
    return dest;
}

/* _sbrk function implementation (simple stub) */
static void* heap_end = (void*)0x200000;  /* Simple heap starting address */

void* _sbrk(long increment) {
    void* prev_heap_end = heap_end;
    heap_end = (void*)((char*)heap_end + increment);
    return prev_heap_end;
}

/* malloc function implementation */
void* malloc(size_t size) {
    return _sbrk((long)size);
}

/* free function implementation */
void free(void *ptr) {
    (void)ptr; /* Simple stub - no actual free */
}

/* operator_new function implementation */
void* operator_new(size_t size) {
    return malloc(size);
}

/* operator_delete function implementation */
void operator_delete(void *ptr, size_t size) {
    (void)size; /* unused parameter */
    free(ptr);
}

/* __cxa_allocate_exception function implementation (stub) */
void* __cxa_allocate_exception(size_t size) {
    return malloc(size);
}

/* __dynamic_cast function implementation (stub) */
void* __dynamic_cast(void* obj, const type_info* src, const type_info* dst, int offset) {
    (void)src; (void)dst; (void)offset; /* unused parameters */
    return obj; /* Simple stub: return the object as-is */
}

/* __printf_chk function declaration */
extern int __printf_chk(int flag, const char *format, ...);

/* operator_delete function declaration */
extern void operator_delete(void *ptr, size_t size);

/* Type info pointer for int type */
static const type_info int_typeinfo_def = {
    (void**)0x0,
    "int"
};
const type_info* const PTR_int_typeinfo = &int_typeinfo_def;

/* Missing data string definitions */
const char DAT_00102004[] = "Base";
const char DAT_00102018[] = "Testing C++ OO Features\n";
const char DAT_0010203c[] = "Member function: %d\n";
const char DAT_00102076[] = "Virtual function: %d\n";
const char DAT_00102092[] = "Multiple inheritance: %d\n";
const char DAT_001020cb[] = "Operator overload: %d\n";
const char DAT_001020e7[] = "Template function result: %d\n";
const char DAT_00102103[] = "Template class: %d\n";
const char DAT_0010211f[] = "Lambda result: %d\n";
const char DAT_0010213b[] = "Exception test: %d\n";
const char DAT_00102157[] = "Smart ptr: %d\n";
const char DAT_00102175[] = "All tests completed!\n";

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x64/5-1/5-1_gcc_O2_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00101020 @ 00101020 */

void FUN_00101020(void)

{
 (*(code *)(undefined *)0x0)();
 return;
}



/* Function: test_cpp_exception @ 00101240 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_exception() */

void test_cpp_exception(void)

{
 undefined4 *puVar1;
 
 puVar1 = (undefined4 *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* WARNING: Subroutine does not return */
 /* try { // try from 00101264 to 00101268 has its CatchHandler @ 00101269 */
 __cxa_throw(puVar1,PTR_int_typeinfo,0);
}



/* Function: main @ 00101310 */

int main(void)

{
 test_cpp_oo_features();
 return 0;
}








/* CRT stub function _start removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: test_cpp_member_func @ 00101450 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

int test_cpp_member_func(void)

{
 size_t sVar1;
 long in_FS_OFFSET;
 char local_34 [36];
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_34[0x1e] = 0;
 builtin_strncpy(local_34,"Test",5);
 local_34[5] = '\0';
 local_34[6] = '\0';
 local_34[7] = '\0';
 local_34[8] = '\0';
 local_34[9] = '\0';
 local_34[10] = '\0';
 local_34[0xb] = '\0';
 local_34[0xc] = '\0';
 local_34[0xd] = '\0';
 local_34[0xe] = '\0';
 local_34[0xf] = '\0';
 local_34[0x10] = '\0';
 local_34[0x11] = '\0';
 local_34[0x12] = '\0';
 local_34[0x13] = '\0';
 local_34[0x14] = '\0';
 local_34[0x15] = '\0';
 local_34[0x16] = '\0';
 local_34[0x17] = '\0';
 local_34[0x18] = '\0';
 local_34[0x19] = '\0';
 local_34[0x1a] = '\0';
 local_34[0x1b] = '\0';
 local_34[0x1c] = '\0';
 local_34[0x1d] = '\0';
 local_34[0x1f] = 0;
 sVar1 = strlen(local_34);
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return (int)sVar1 + 0x125c;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: test_cpp_constructor @ 001014d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_constructor() */

int test_cpp_constructor(void)

{
 return LifecycleClass::instance_count * 0x3e9 + 0x15;
}



/* Function: call_virtual_func @ 001014f0 */

/* call_virtual_func(Base*, int) */

void call_virtual_func(Base *param_1,int param_2)

{
 /* WARNING: Could not recover jumptable at 0x001014f7. Too many branches */
 /* WARNING: Treating indirect jump as call */
 (*(code *)**(undefined8 **)param_1)();
 return;
}



/* Function: test_cpp_virtual_func @ 00101500 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_virtual_func() */

undefined8 test_cpp_virtual_func(void)

{
 return 0x2a;
}



/* Function: test_cpp_multiple_inheritance @ 00101510 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_multiple_inheritance() */

undefined8 test_cpp_multiple_inheritance(void)

{
 return 0x47;
}



/* Function: test_cpp_diamond_inheritance @ 00101520 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_diamond_inheritance() */

undefined8 test_cpp_diamond_inheritance(void)

{
 return 0x28a;
}



/* Function: test_cpp_operator_overload @ 00101530 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_operator_overload() */

undefined8 test_cpp_operator_overload(void)

{
 return 0x16;
}



/* Function: test_cpp_template_func @ 00101540 */

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
 iVar1 = template_max__int(3,7);
 dVar2 = template_max__double(2.5,1.5);
 local_18 = 10;
 local_14 = 0x14;
 template_swap__int_(&local_18,&local_14);
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return (int)dVar2 + iVar1 + local_18 + local_14;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: test_cpp_template_class @ 001015e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_class() */

undefined8 test_cpp_template_class(void)

{
 return 0x10;
}



/* Function: test_cpp_lambda @ 001015f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_lambda() */

undefined8 test_cpp_lambda(void)

{
 return 0x55;
}



/* Function: test_cpp_smart_ptr @ 00101600 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr() */

undefined8 test_cpp_smart_ptr(void)

{
 return 0x2bf;
}



/* Function: test_cpp_rtti @ 00101610 */

/* WARNING: Removing unreachable block (ram,0x0010169f) */
/* WARNING: Removing unreachable block (ram,0x001016a4) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_rtti() */

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
 
 uVar7 = 10;
 plVar3 = (long *)operator_new(8);
 *plVar3 = (long)(uintptr_t)&PTR__RTTIDerivedA_00103c70;
 plVar4 = (long *)operator_new(8);
 lVar1 = *(long *)plVar3;
 *plVar4 = (long)(uintptr_t)&PTR__RTTIDerivedB_00103c98;
 __s1 = *(char **)(*(long *)(void *)((char *)lVar1 - 8) + 8);
 if ((__s1 != "12RTTIDerivedA") && (uVar7 = 0, *__s1 != '*')) {
 iVar2 = strcmp(__s1,"12RTTIDerivedA");
 uVar7 = -(uint)(iVar2 == 0) & 10;
 }
 lVar5 = (long)__dynamic_cast(plVar3,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0);
 iVar2 = uVar7 + 0x14;
 if (lVar5 != 0) {
 iVar2 = uVar7 + 0x78;
 }
 lVar5 = (long)__dynamic_cast(plVar4,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo,0);
 if (lVar5 != 0) {
 iVar2 = iVar2 + 200;
 }
 sVar6 = strlen(__s1 + (*__s1 == '*'));
 ((void (*)(void*))(*(long *)(lVar1 + 8)))(plVar3);
 ((void (*)(void*))(*(long *)(*plVar4 + 8)))(plVar4);
 return iVar2 + (int)sVar6;
}



/* Function: test_cpp_oo_features @ 00101740 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_oo_features() */

void test_cpp_oo_features(void)

{
 undefined4 uVar1;
 size_t sVar2;
 long in_FS_OFFSET;
 char local_34 [36];
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 puts(DAT_00102018);
 builtin_strncpy(local_34,"Test",5);
 local_34[5] = '\0';
 local_34[6] = '\0';
 local_34[7] = '\0';
 local_34[8] = '\0';
 local_34[9] = '\0';
 local_34[10] = '\0';
 local_34[0xb] = '\0';
 local_34[0xc] = '\0';
 local_34[0xd] = '\0';
 local_34[0xe] = '\0';
 local_34[0xf] = '\0';
 local_34[0x10] = '\0';
 local_34[0x11] = '\0';
 local_34[0x12] = '\0';
 local_34[0x13] = '\0';
 local_34[0x14] = '\0';
 local_34[0x15] = '\0';
 local_34[0x16] = '\0';
 local_34[0x17] = '\0';
 local_34[0x18] = '\0';
 local_34[0x19] = '\0';
 local_34[0x1a] = '\0';
 local_34[0x1b] = '\0';
 local_34[0x1c] = '\0';
 local_34[0x1d] = '\0';
 local_34[0x1e] = 0;
 local_34[0x1f] = 0;
 sVar2 = strlen(local_34);
 __printf_chk(1,DAT_0010203c,(int)sVar2 + 0x125c);
 test_cpp_constructor();
 __printf_chk(1,DAT_00102076,0x2a);
 __printf_chk(1,DAT_00102092,0x47);
 test_cpp_diamond_inheritance();
 __printf_chk(1,DAT_001020cb,0x16);
 uVar1 = test_cpp_template_func();
 __printf_chk(1,DAT_001020e7,uVar1);
 __printf_chk(1,DAT_00102103,0x10);
 __printf_chk(1,DAT_0010211f,0x55);
test_cpp_exception();
__printf_chk(1,DAT_0010213b,0);
 test_cpp_smart_ptr();
 __printf_chk(1,DAT_00102157,0x2bf);
 test_cpp_rtti();
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 __printf_chk(1,DAT_00102175);
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: virtual_func @ 001018f0 */

/* Base::virtual_func(int) */

int Base_virtual_func(Base *this_ptr,int param_1)

{
 return param_1 + 1;
}



/* Function: getName @ 00101900 */

/* Base::getName() const */

const char * Base_getName(void)

{
 return (const char *)&DAT_00102004;
}



/* Function: ~Base @ 00101910 */

/* Base::~Base() */

void Base_dtor(Base *this_ptr)

{
 return;
}



/* Function: virtual_func @ 00101920 */

/* Derived::virtual_func(int) */

int Derived_virtual_func(Derived *this_ptr,int param_1)

{
 return *(int *)(this_ptr + 8) * param_1;
}



/* Function: getName @ 00101930 */

/* Derived::getName() const */

const char * Derived_getName(void)

{
 return "Derived";
}



/* Function: funcA @ 00101940 */

/* MultiDerived::funcA() */

undefined8 MultiDerived_funcA(void)

{
 return 0x1e;
}



/* Function: funcB @ 00101950 */

/* MultiDerived::funcB() */

undefined8 MultiDerived_funcB(void)

{
 return 0x28;
}



/* Function: funcB @ 00101960 */

/* non-virtual thunk to MultiDerived::funcB() */

undefined8 MultiDerived_funcB_thunk(MultiDerived *this_ptr_ptr)

{
 return 0x28;
}



/* Function: func @ 00101970 */

/* MiddleA::func() */

int MiddleA_func(MiddleA *this_ptr)

{
 return *(int *)(this_ptr + *(long *)(*(long *)this_ptr + -0x18) + 8) + 0x96;
}



/* Function: func @ 00101990 */

/* virtual thunk to MiddleA::func() */

int MiddleA_func_thunk(MiddleA *this_ptr)

{
 return *(int *)(this_ptr + *(long *)(*(long *)this_ptr + -0x18) +
 *(long *)(*(long *)(this_ptr + *(long *)(*(long *)this_ptr + -0x18)) + -0x18) + 8) + 0x96;
}



/* Function: func @ 001019b0 */

/* MiddleB::func() */

int MiddleB_func(MiddleB *this_ptr)

{
 return *(int *)(this_ptr + *(long *)(*(long *)this_ptr + -0x18) + 8) + 200;
}



/* Function: func @ 001019d0 */

/* virtual thunk to MiddleB::func() */

int MiddleB_func_thunk(MiddleB *this_ptr)

{
 return *(int *)(this_ptr + *(long *)(*(long *)this_ptr + -0x18) +
 *(long *)(*(long *)(this_ptr + *(long *)(*(long *)this_ptr + -0x18)) + -0x18) + 8) + 200;
}



/* Function: func @ 001019f0 */

/* DiamondDerived::func() */

int DiamondDerived_func(DiamondDerived *this_ptr_ptr)

{
 return *(int *)(this_ptr_ptr + *(long *)(*(long *)this_ptr_ptr + -0x18) + 8) + 0xfa;
}



/* Function: func @ 00101a10 */

/* virtual thunk to DiamondDerived::func() */

int DiamondDerived_func_thunk(DiamondDerived *this_ptr_ptr)

{
 return *(int *)(this_ptr_ptr + *(long *)(*(long *)this_ptr_ptr + -0x18) +
 *(long *)(*(long *)(this_ptr_ptr + *(long *)(*(long *)this_ptr_ptr + -0x18)) + -0x18) + 8) + 0xfa;
}



/* Function: func @ 00101a30 */

/* non-virtual thunk to DiamondDerived::func() */

int DiamondDerived_func_thunk2(DiamondDerived *this_ptr_ptr)

{
 return *(int *)(this_ptr_ptr + *(long *)(*(long *)(this_ptr_ptr + -0x10) + -0x18) + -8) + 0xfa;
}



/* Function: getType @ 00101a50 */

/* RTTIDerivedA::getType() const */

undefined8 RTTIDerivedA_getType(void)

{
 return 1;
}



/* Function: getType @ 00101a60 */

/* RTTIDerivedB::getType() const */

undefined8 RTTIDerivedB_getType(void)

{
 return 2;
}



/* Function: ~RTTIDerivedB @ 00101a70 */

/* RTTIDerivedB::~RTTIDerivedB() */

void RTTIDerivedB_dtor(RTTIDerivedB *this_ptr)

{
 return;
}



/* Function: ~RTTIDerivedA @ 00101a80 */

/* RTTIDerivedA::~RTTIDerivedA() */

void RTTIDerivedA_dtor(RTTIDerivedA *this_ptr)

{
 return;
}



/* Function: ~DiamondDerived @ 00101a90 */

/* DiamondDerived::~DiamondDerived() */

void DiamondDerived_dtor(DiamondDerived *this_ptr_ptr)

{
 return;
}



/* Function: ~DiamondDerived @ 00101aa0 */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_dtor_thunk(DiamondDerived *this_ptr_ptr)

{
 return;
}



/* Function: ~DiamondDerived @ 00101ab0 */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_dtor_thunk2(DiamondDerived *this_ptr_ptr)

{
 return;
}



/* Function: ~MultiDerived @ 00101ac0 */

/* MultiDerived::~MultiDerived() */

void MultiDerived_dtor(MultiDerived *this_ptr_ptr)

{
 return;
}



/* Function: ~MultiDerived @ 00101ad0 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void MultiDerived_dtor_thunk(MultiDerived *this_ptr_ptr)

{
 return;
}



/* Function: ~Derived @ 00101ae0 */

/* Derived::~Derived() */

void Derived_dtor(Derived *this_ptr)

{
 return;
}



/* Function: ~Base @ 00101af0 */

/* Base::~Base() */

void Base_dtor2(Base *this_ptr)

{
 operator_delete(this_ptr,8);
}



/* Function: ~Derived @ 00101b00 */

/* Derived::~Derived() */

void Derived_dtor2(Derived *this_ptr)

{
 operator_delete(this_ptr,0x10);
 return;
}



/* Function: ~MultiDerived @ 00101b10 */

/* MultiDerived::~MultiDerived() */

void MultiDerived_dtor2(MultiDerived *this_ptr_ptr)

{
 operator_delete(this_ptr_ptr,0x20);
 return;
}



/* Function: ~MultiDerived @ 00101b20 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void MultiDerived_dtor2_thunk(MultiDerived *this_ptr_ptr)

{
 operator_delete(this_ptr_ptr + -0x10,0x20);
 return;
}



/* Function: ~RTTIDerivedB @ 00101b40 */

/* RTTIDerivedB::~RTTIDerivedB() */

void RTTIDerivedB_dtor2(RTTIDerivedB *this_ptr)

{
 operator_delete(this_ptr,8);
 return;
}



/* Function: ~RTTIDerivedA @ 00101b50 */

/* RTTIDerivedA::~RTTIDerivedA() */

void RTTIDerivedA_dtor2(RTTIDerivedA *this_ptr)

{
 operator_delete(this_ptr,8);
 return;
}



/* Function: ~DiamondDerived @ 00101b60 */

/* DiamondDerived::~DiamondDerived() */

void DiamondDerived_dtor3(DiamondDerived *this_ptr_ptr)

{
 operator_delete(this_ptr_ptr,0x30);
 return;
}



/* Function: ~DiamondDerived @ 00101b70 */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_dtor3_thunk(DiamondDerived *this_ptr_ptr)

{
 operator_delete(this_ptr_ptr + *(long *)(*(long *)this_ptr_ptr + -0x20),0x30);
 return;
}



/* Function: ~DiamondDerived @ 00101b90 */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_dtor3_thunk2(DiamondDerived *this_ptr_ptr)

{
 operator_delete(this_ptr_ptr + -0x10,0x30);
 return;
}



/* Function: template_max<int> @ 00101bb0 */

/* int template_max<int>(int, int) */

int template_max__int(int param_1,int param_2)

{
 if (param_2 <= param_1) {
 param_2 = param_1;
 }
 return param_2;
}



/* Function: template_max<double> @ 00101bc0 */

/* double template_max<double>(double, double) */

double template_max__double(double param_1,double param_2)

{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}



/* Function: template_swap<int> @ 00101bd0 */

/* void template_swap<int>(int&, int&) */

void template_swap__int_(int *param_1,int *param_2)

{
 int iVar1;
 
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}



/* Function: Container @ 00101be0 */

/* Container<int>::Container() */

void Container__int_Container(Container__int_ *this_ptr)

{
 *(undefined4 *)(this_ptr + 0x28) = 0;
 return;
}



/* Function: push @ 00101bf0 */

/* Container<int>::push(int) */

void Container__int_push(Container__int_ *this_ptr,int param_1)

{
 int iVar1;
 
 iVar1 = *(int *)(this_ptr + 0x28);
 if (iVar1 < 10) {
 *(int *)(this_ptr + 0x28) = iVar1 + 1;
 *(int *)(this_ptr + (long)iVar1 * 4) = param_1;
 }
 return;
}



/* Function: get @ 00101c10 */

/* Container<int>::get(int) const */

undefined4 Container__int_get(Container__int_ *this_ptr,int param_1)

{
 if ((-1 < param_1) && (param_1 < *(int *)(this_ptr + 0x28))) {
 return *(undefined4 *)(this_ptr + (long)param_1 * 4);
 }
 return 0;
}



/* Function: getSize @ 00101c30 */

/* Container<int>::getSize() const */

undefined4 Container__int_getSize(Container__int_ *this_ptr)

{
 return *(undefined4 *)(this_ptr + 0x28);
}



/* Function: Container @ 00101c40 */

/* Container<double>::Container() */

void Container__double_Container(Container__double_ *this_ptr)

{
 *(undefined4 *)(this_ptr + 0x50) = 0;
 return;
}



/* Function: push @ 00101c50 */

/* Container<double>::push(double) */

void Container__double_push(Container__double_ *this_ptr,double param_1)

{
 int iVar1;
 
 iVar1 = *(int *)(this_ptr + 0x50);
 if (iVar1 < 10) {
 *(int *)(this_ptr + 0x50) = iVar1 + 1;
 *(double *)(this_ptr + (long)iVar1 * 8) = param_1;
 }
 return;
}



/* Function: get @ 00101c70 */

/* Container<double>::get(int) const */

undefined8 Container__double_get(Container__double_ *this_ptr,int param_1)

{
 if ((-1 < param_1) && (param_1 < *(int *)(this_ptr + 0x50))) {
 return *(undefined8 *)(this_ptr + (long)param_1 * 8);
 }
 return 0;
}



/* Function: getSize @ 00101ca0 */

/* Container<double>::getSize() const */

undefined4 Container__double_getSize(Container__double_ *this_ptr)

{
 return *(undefined4 *)(this_ptr + 0x50);
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 68 */
