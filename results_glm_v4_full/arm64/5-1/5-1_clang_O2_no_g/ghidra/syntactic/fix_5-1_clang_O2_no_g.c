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
typedef unsigned long ulong;
typedef void (*code)(void);

#define NULL ((void *)0)

/* Standard C library function declarations */
extern size_t strlen(const char *s);
extern void *malloc(size_t size);
extern void free(void *ptr);
extern void _exit(int status);

/* C++ runtime function declarations */
extern void *__cxa_allocate_exception(size_t size);
extern void __cxa_throw(void *exception, void *type_info, void *dest);
extern void *__dynamic_cast(void *src_ptr, void *src_type, void *target_type);
void __dynamic_cast_impl(void *src_ptr, void *src_type, void *target_type, long *result);
void *operator_new(size_t size);
void operator_delete(void *ptr);
void deregister_tm_clones(void);
extern int puts(const char *s);
extern int printf(const char *format, ...);

/* C++ operator new/delete implementations (mangled C++ names) */
void *_Znwj(size_t size) { return operator_new(size); }
void _ZdlPv(void *ptr) { operator_delete(ptr); }
void *_Znaj(size_t size) { return operator_new(size); }
void _ZdaPv(void *ptr) { operator_delete(ptr); }

/* __cxa_allocate_exception implementation */
void *__cxa_allocate_exception(size_t size)
{
    return malloc(size);
}

/* __cxa_throw implementation - terminates program */
void __cxa_throw(void *exception, void *type_info, void *dest)
{
    /* Simple stub: just exit as exceptions aren't fully supported */
    _exit(1);
}

/* __cxa_atexit implementation */
int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle)
{
    /* Stub: return success */
    return 0;
}

/* __cxa_begin_catch implementation - exception catch handler entry */
void *__cxa_begin_catch(void *exception)
{
    /* Stub: return the exception object */
    return exception;
}

/* __cxa_end_catch implementation - exception catch handler exit */
void __cxa_end_catch(void)
{
    /* Stub: no action needed for cleanup */
}

/* __cxa_rethrow implementation - rethrow current exception */
void __cxa_rethrow(void)
{
    /* Stub: just exit as exceptions aren't fully supported */
    _exit(1);
}

/* __cxa_pure_virtual implementation - called when pure virtual is called */
void __cxa_pure_virtual(void)
{
    /* Pure virtual function called - terminate program */
    _exit(1);
}

/* __cxa_finalize implementation */
void __cxa_finalize(void *dso_handle)
{
    /* Stub: no action needed */
}

/* Ghidra decompilation type definitions */
typedef uint8_t undefined1;
typedef uint32_t undefined4;
typedef uint64_t undefined8;
typedef struct { 
    uint64_t _0_8_; 
    uint8_t _8_1_; 
} undefined7;

/* Forward declarations for C++ types */
struct Base {
    void **vtable;
};
typedef struct Base Base;
struct LifecycleClass {
    int dummy;
};
typedef struct LifecycleClass LifecycleClass;

/* Forward declarations for RTTI destructor functions */
void RTTIDerivedA_virtual_destructor(RTTIDerivedA *this);
void RTTIDerivedB_virtual_destructor(RTTIDerivedB *this);
void RTTIBase_destructor(RTTIBase *this);
undefined8 RTTIDerivedA_getType(void);
undefined8 RTTIDerivedB_getType(void);

/* Define global variable */
int LifecycleClass_instance_count = 0;

/* Container type definitions */
struct Container_int {
    int elements[10];
    int size;
};

typedef struct Container_int Container_int;

struct Container_double {
    double elements[10];
    int size;
};

typedef struct Container_double Container_double;

/* std::type_info structure definition - must be defined before use */
struct type_info {
    const char *_name;
    int (*_equal)(const struct type_info *, const struct type_info *);
    int (*_before)(const struct type_info *, const struct type_info *);
    size_t (*_hash_code)(const struct type_info *);
};
typedef struct type_info type_info;

/* Concrete type_info definitions for RTTI */
struct type_info type_info_Base = { "Base", NULL, NULL, NULL };
struct type_info type_info_int = { "int", NULL, NULL, NULL };
struct type_info type_info_RTTIBase = { "RTTIBase", NULL, NULL, NULL };
struct type_info type_info_RTTIDerivedA = { "RTTIDerivedA", NULL, NULL, NULL };
struct type_info type_info_RTTIDerivedB = { "RTTIDerivedB", NULL, NULL, NULL };
struct type_info type_info_std_ios_base_Init = { "St9ios_base4Init", NULL, NULL, NULL };

/* Vtable definitions for RTTI classes - placed after type_info structures and function declarations */
void *vtable_RTTIDerivedA[3] = {
    (void *)&type_info_RTTIDerivedA,
    (void *)RTTIDerivedA_virtual_destructor,
    (void *)RTTIDerivedA_getType
};

void *vtable_RTTIDerivedB[3] = {
    (void *)&type_info_RTTIDerivedB,
    (void *)RTTIDerivedB_virtual_destructor,
    (void *)RTTIDerivedB_getType
};

void *vtable_RTTIBase[2] = {
    (void *)&type_info_RTTIBase,
    (void *)RTTIBase_destructor
};

/* Global variables for RTTI - pointing to concrete type_info structures */
void *PTR__RTTIBase_00111d58 = (void *)&type_info_RTTIBase;
void *PTR__RTTIBase_00111d80 = (void *)&type_info_RTTIDerivedB;
void *typeinfo_int = (void *)&type_info_int;
void *RTTIBase_typeinfo = (void *)&type_info_RTTIBase;
void *RTTIDerivedA_typeinfo = (void *)&type_info_RTTIDerivedA;
void *RTTIDerivedB_typeinfo = (void *)&type_info_RTTIDerivedB;
void *typeinfo_std_ios_base_Init = (void *)&type_info_std_ios_base_Init;

/* C++ runtime function declarations - implementations provided below */
void *__dso_handle = (void *)0;

/* Global variable declarations */
char completed_0 = 0;

/* Standard library placeholders */
struct std_ios_base {
  struct Init {
  };
};
typedef struct std_ios_base std_ios_base;
struct std_ios_base_Init {
};
typedef struct std_ios_base_Init std_ios_base_Init;
std_ios_base_Init std___ioinit;

/* std::ios_base::Init constructor - required for C++ I/O initialization */
void std_ios_base_Init_constructor(std_ios_base_Init *this)
{
    /* Stub: initialize std I/O streams */
}

/* std::ios_base::Init destructor - required for C++ I/O initialization */
void std_ios_base_Init_destructor(std_ios_base_Init *this)
{
    /* Stub: no cleanup needed */
}

/* Mangled name for std::ios_base::Init::Init() */
void _ZN5std10ios_base4InitC1Ev(std_ios_base_Init *this)
{
    std_ios_base_Init_constructor(this);
}

/* Mangled name for std::ios_base::Init::~Init() */
void _ZN5std10ios_base4InitD1Ev(std_ios_base_Init *this)
{
    std_ios_base_Init_destructor(this);
}

/* Data constant declarations */
char DAT_00101728[] = "";
char DAT_001015d1[] = "";
char DAT_001015ef[] = "";
char DAT_0010160b[] = "";
char DAT_00101627[] = "";
char DAT_00101643[] = "";
char DAT_00101660[] = "";
char DAT_0010167c[] = "";
char DAT_00101698[] = "";
char DAT_001016b4[] = "";
char DAT_001016d0[] = "";
char DAT_001016ed[] = "";
char DAT_0010170a[] = "";

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/5-1/5-1_clang_O2_no_g
 * Processor: AARCH64
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00100d60 @ 00100d60 */

void FUN_00100d60(void)

{
 return;
}



/* Function: _GLOBAL__sub_I_5_1.cpp @ 00100ec0 */

void _GLOBAL__sub_I_5_1_cpp(void)

{
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */

/* register_tm_clones stub implementation */
void register_tm_clones(void)
{
    return;
}




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
 *(uint64_t *)&uStack_2c = 0;
 *(uint8_t *)(&uStack_2c + 8) = 0;
 local_34 = 0x74736554;
 *(uint64_t *)&uStack_1d = 0;
 *(uint8_t *)(&uStack_1d + 8) = 0;
 uStack_25 = 0;
 *(uint64_t *)&uStack_24 = 0;
 *(uint8_t *)(&uStack_24 + 8) = 0;
 sVar1 = strlen((char *)((ulong)&local_38 | 4));
 return (int)sVar1 + 0x125c;
}



/* Function: test_cpp_constructor @ 00101064 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_constructor() */

int test_cpp_constructor(void)

{
 return LifecycleClass_instance_count * 0x3e9 + 0x15;
}



/* Forward declaration for RTTIBase destructor */
void RTTIBase_destructor(RTTIBase *this);

/* Virtual destructor for Base (vtable entry) */
void Base_virtual_destructor(Base *this)
{
    if (this) {
        RTTIBase_destructor((RTTIBase *)this);
    }
}

/* Function: call_virtual_func @ 0010107c */

/* call_virtual_func(Base*, int) */

void call_virtual_func(Base *param_1,int param_2)

{
 /* WARNING: Could not recover jumptable at 0x00101084. Too many branches */
 /* WARNING: Treating indirect jump as call */
 ((void (*)(Base *, int))**(undefined8 **)param_1)(param_1,param_2);
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
 __cxa_throw(puVar1,typeinfo_int,0);
}



/* Function: test_cpp_smart_ptr @ 001011b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr() */

undefined8 test_cpp_smart_ptr(void)

{
 return 0x2bf;
}



/* operator new implementation - standard C++ signature (C-compatible name) */
void *cxx_operator_new(size_t size)
{
    return malloc(size);
}

/* operator delete implementation - standard C++ signature (C-compatible name) */
void cxx_operator_delete(void *ptr)
{
    free(ptr);
}

/* operator new[] implementation - for array allocations (C-compatible name) */
void *cxx_operator_new_array(size_t size)
{
    return malloc(size);
}

/* operator delete[] implementation - for array deallocations (C-compatible name) */
void cxx_operator_delete_array(void *ptr)
{
    free(ptr);
}

/* operator_new implementation - internal wrapper */
void *operator_new(size_t size)
{
    return malloc(size);
}

/* operator_delete implementation - internal wrapper */
void operator_delete(void *ptr)
{
    free(ptr);
}

/* deregister_tm_clones stub implementation */
void deregister_tm_clones(void)
{
    return;
}

/* __dynamic_cast implementation */
void *__dynamic_cast(void *src_ptr, void *src_type, void *target_type)
{
    /* RTTI-based dynamic cast implementation
     * Returns src_ptr for valid casts, NULL for invalid casts
     */
    if (src_ptr == NULL) {
        return NULL;
    }
    
    /* Valid cast: RTTIBase* -> RTTIDerivedA (via src_type=RTTIBase, target=RTTIDerivedA) */
    if (src_type == RTTIBase_typeinfo && target_type == RTTIDerivedA_typeinfo) {
        return src_ptr;
    }
    
    /* Valid cast: RTTIBase* -> RTTIDerivedB (via src_type=RTTIBase, target=RTTIDerivedB) */
    if (src_type == RTTIBase_typeinfo && target_type == RTTIDerivedB_typeinfo) {
        return src_ptr;
    }
    
    /* Valid cast: same type (self-casting) */
    if (src_type == target_type) {
        return src_ptr;
    }
    
    /* Valid cast: RTTIDerivedA* -> RTTIBase (upcast) */
    if (src_type == RTTIDerivedA_typeinfo && target_type == RTTIBase_typeinfo) {
        return src_ptr;
    }
    
    /* Valid cast: RTTIDerivedB* -> RTTIBase (upcast) */
    if (src_type == RTTIDerivedB_typeinfo && target_type == RTTIBase_typeinfo) {
        return src_ptr;
    }
    
    /* All other casts are invalid */
    return NULL;
}

/* __dynamic_cast_impl implementation - full version with result parameter */
void __dynamic_cast_impl(void *src_ptr, void *src_type, void *target_type, long *result)
{
    /* Implementation stub that sets result to source pointer for valid casts.
     * This is the internal implementation used by some compilers.
     */
    if (src_ptr == NULL) {
        *result = 0;
    } else {
        /* Return src_ptr via result parameter for successful casts */
        *result = (long)src_ptr;
    }
}

/* Function: test_cpp_rtti @ 001011b8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_rtti() */

int test_cpp_rtti(void)

{
 undefined8 *puVar1;
 long *plVar2;
 long lVar3;
 int iVar4;
 
 puVar1 = operator_new(8);
 *puVar1 = (undefined8)(uintptr_t)&PTR__RTTIBase_00111d58;
 plVar2 = operator_new(8);
 *(void **)plVar2 = &PTR__RTTIBase_00111d80;
 lVar3 = (long)__dynamic_cast(puVar1,RTTIBase_typeinfo,RTTIDerivedA_typeinfo);
 iVar4 = 0x1e;
 if (lVar3 != 0) {
 iVar4 = 0x82;
 }
 lVar3 = (long)__dynamic_cast(plVar2,RTTIBase_typeinfo,RTTIDerivedB_typeinfo);
 if (lVar3 != 0) {
 iVar4 = iVar4 + 200;
 }
 operator_delete(puVar1);
 ((void (*)(long *))(*((void ***)plVar2 + 1)))(plVar2);
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
 undefined8 *puVar4;
 long *plVar5;
 long lVar6;
 undefined4 local_58;
 undefined8 local_54;
 undefined7 uStack_4c;
 undefined1 uStack_45;
 undefined7 uStack_44;
 undefined8 uStack_3d;
 undefined1 local_35;
 
 puts(DAT_00101728);
 local_35 = 0;
 local_58 = 10;
 *(uint64_t *)&uStack_4c = 0;
 *(uint8_t *)(&uStack_4c + 8) = 0;
 local_54 = 0x74736554;
 *(uint64_t *)&uStack_3d = 0;
 *(uint8_t *)(&uStack_3d + 8) = 0;
 uStack_45 = 0;
 *(uint64_t *)&uStack_44 = 0;
 *(uint8_t *)(&uStack_44 + 8) = 0;
 sVar2 = strlen((char *)((ulong)&local_58 | 4));
 printf(DAT_001015d1,(ulong)((int)sVar2 + 0x125c));
 printf(DAT_001015ef,(ulong)(LifecycleClass_instance_count * 0x3e9 + 0x15));
 printf(DAT_0010160b,0x2a);
 printf(DAT_00101627,0x47);
 printf(DAT_00101643,0x28a);
 printf(DAT_00101660,0x16);
 printf(DAT_0010167c,0x27);
 printf(DAT_00101698,0x10);
 printf(DAT_001016b4,0x55);
 test_cpp_exception();
 printf(DAT_001016d0,(ulong)0);
 printf(DAT_001016ed,0x2bf);
 puVar4 = operator_new(8);
 *puVar4 = (undefined8)(uintptr_t)&PTR__RTTIBase_00111d58;
 plVar5 = operator_new(8);
 *(void **)plVar5 = &PTR__RTTIBase_00111d80;
 lVar6 = (long)__dynamic_cast(puVar4,RTTIBase_typeinfo,RTTIDerivedA_typeinfo);
 iVar1 = 0x1e;
 if (lVar6 != 0) {
 iVar1 = 0x82;
 }
 lVar6 = (long)__dynamic_cast(plVar5,RTTIBase_typeinfo,RTTIDerivedB_typeinfo);
 if (lVar6 != 0) {
 iVar1 = iVar1 + 200;
 }
 operator_delete(puVar4);
 ((void (*)(long *))(*((void ***)plVar5 + 1)))(plVar5);
 iVar1 = printf(DAT_0010170a,(ulong)(iVar1 + 0xe));
 return iVar1;
}



/* Function: main @ 0010144c */

undefined8 main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: template_max<int> @ 00101464 */

/* int template_max<int>(int, int) */

int template_max_int(int param_1,int param_2)

{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}



/* Function: template_max<double> @ 00101470 */

/* double template_max<double>(double, double) */

double template_max_double(double param_1,double param_2)

{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}



/* Function: template_swap<int> @ 0010147c */

/* void template_swap<int>(int&, int&) */

void template_swap_int(int *param_1,int *param_2)

{
 int iVar1;
 
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}



/* Function: Container @ 00101490 */

/* Container<int>::Container() */

void Container_int_Constructor(Container_int *this)

{
 *(undefined4 *)(this + 0x28) = 0;
 return;
}



/* Function: push @ 00101498 */

/* Container<int>::push(int) */

void Container_int_push(Container_int *this,int param_1)

{
 int iVar1;
 
 iVar1 = *(int *)(this + 0x28);
 if (iVar1 < 10) {
 *(int *)(this + 0x28) = iVar1 + 1;
 *(int *)(this + (long)iVar1 * 4) = param_1;
 }
 return;
}



/* Function: get @ 001014b4 */

/* Container<int>::get(int) const */

undefined4 Container_int_get(Container_int *this,int param_1)

{
 undefined4 uVar1;
 
 uVar1 = 0;
 if ((-1 < param_1) && (param_1 < *(int *)(this + 0x28))) {
 uVar1 = *(undefined4 *)(this + (ulong)(uint32_t)param_1 * 4);
 }
 return uVar1;
}



/* Function: getSize @ 001014d4 */

/* Container<int>::getSize() const */

undefined4 Container_int_getSize(Container_int *this)

{
 return *(undefined4 *)(this + 0x28);
}



/* Function: Container @ 001014dc */

/* Container<double>::Container() */

void Container_double_Constructor(Container_double *this)

{
 *(undefined4 *)(this + 0x50) = 0;
 return;
}



/* Function: push @ 001014e4 */

/* Container<double>::push(double) */

void Container_double_push(Container_double *this,double param_1)

{
 int iVar1;
 
 iVar1 = *(int *)(this + 0x50);
 if (iVar1 < 10) {
 *(double *)(this + (long)iVar1 * 8) = param_1;
 *(int *)(this + 0x50) = iVar1 + 1;
 }
 return;
}



/* Function: get @ 00101500 */

/* Container<double>::get(int) const */

undefined8 Container_double_get(Container_double *this,int param_1)

{
 ulong uVar1;
 
 uVar1 = 0;
 if ((-1 < param_1) && (param_1 < *(int *)(this + 0x50))) {
 uVar1 = *(ulong *)(this + (ulong)param_1 * 8);
 }
 return (undefined8)uVar1;
}



/* Function: getSize @ 0010151c */

/* Container<double>::getSize() const */

undefined4 Container_double_getSize(Container_double *this)

{
 return *(undefined4 *)(this + 0x50);
}



/* Function: ~RTTIDerivedA @ 00101524 */

/* RTTIDerivedA::~RTTIDerivedA() */

void RTTIDerivedA_destructor(RTTIDerivedA *this)

{
 operator_delete(this);
 return;
}

/* Virtual destructor for RTTIDerivedA (vtable entry) */
void RTTIDerivedA_virtual_destructor(RTTIDerivedA *this)
{
    RTTIDerivedA_destructor(this);
}



/* Function: getType @ 00101528 */

/* RTTIDerivedA::getType() const */

undefined8 RTTIDerivedA_getType(void)

{
 return 1;
}



/* Function: ~RTTIBase @ 00101530 */

/* RTTIBase::~RTTIBase() */

void RTTIBase_destructor(RTTIBase *this)

{
 return;
}



/* Function: ~RTTIDerivedB @ 00101534 */

/* RTTIDerivedB::~RTTIDerivedB() */

void RTTIDerivedB_destructor(RTTIDerivedB *this)

{
 operator_delete(this);
 return;
}

/* Virtual destructor for RTTIDerivedB (vtable entry) */
void RTTIDerivedB_virtual_destructor(RTTIDerivedB *this)
{
    RTTIDerivedB_destructor(this);
}



/* Function: getType @ 00101538 */

/* RTTIDerivedB::getType() const */

undefined8 RTTIDerivedB_getType(void)

{
 return 2;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 41 */
