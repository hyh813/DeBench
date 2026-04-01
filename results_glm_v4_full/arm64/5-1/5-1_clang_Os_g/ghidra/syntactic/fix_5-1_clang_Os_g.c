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

/* Common C definitions */
#define NULL ((void *)0)

/* Ghidra undefined types */
typedef uint32_t undefined4;
typedef uint64_t undefined8;
typedef uint8_t undefined1;
typedef struct { uint8_t data[7]; } undefined7;

/* Forward declarations for C++ classes */
struct Base {
    const void **_vptr_Base;
};
typedef struct Base Base;

struct Derived {
    const void **_vptr_Base;
};
typedef struct Derived Derived;

/* Common type definitions for C++ code generation */
typedef unsigned int uint;
typedef unsigned long ulong;
typedef void (*code)(void);

/* Virtual function for Base */
int Base__virtualFunc(Base *this, ulong x) {
    return (int)x + 42;
}

/* Virtual function for Derived */
int Derived__virtualFunc(Derived *this, ulong x) {
    return (int)x * 2;
}

/* Destructor for Base */
void Base__destructor(Base *this) {
    (void)this;
}

/* Destructor for Derived */
void Derived__destructor(Derived *this) {
    (void)this;
}

/* RTTI class declarations */
struct RTTIBase {
    const void **_vptr_Base;
};
typedef struct RTTIBase RTTIBase;

struct RTTIDerivedA {
    const void **_vptr_Base;
};
typedef struct RTTIDerivedA RTTIDerivedA;

struct RTTIDerivedB {
    const void **_vptr_Base;
};
typedef struct RTTIDerivedB RTTIDerivedB;

/* Additional virtual function entry for RTTIBase vtable (index 2) */
int RTTIBase__virtualFunc2(RTTIBase *this, ulong x) {
    (void)this;
    return (int)x + 100;
}

/* Additional virtual function entry for RTTIDerivedA vtable (index 3) */
int RTTIDerivedA__virtualFunc3(RTTIDerivedA *this, ulong x) {
    (void)this;
    return (int)x + 200;
}

/* Additional virtual function entry for RTTIDerivedB vtable (index 3) */
int RTTIDerivedB__virtualFunc3(RTTIDerivedB *this, ulong x) {
    (void)this;
    return (int)x + 300;
}

/* LifecycleClass definition */
struct LifecycleClass {
    int dummy;
};
int LifecycleClass_instance_count = 0;

/* RTTI typeinfo definitions (placeholders to satisfy linker) */
/* Each typeinfo is a unique symbol to avoid self-reference issues */
/* Define a proper type_info structure matching C++ ABI */
typedef struct type_info {
    const void **_vptr_type_info;  /* vtable pointer */
    const char *_name;  /* type name (mangled in real C++) */
} type_info;

/* Forward declarations for type_info methods */
void type_info__destructor(type_info *this);
void type_info__destructor_complete(type_info *this, int);
int type_info__operator_equals(const type_info *this, const type_info *rhs);
int type_info__before(const type_info *this, const type_info *rhs);

/* Forward declarations for vtable destructor stubs */
static void type_info__destructor_v1(void *this);
static void type_info__destructor_complete_v1(void *this, int flag);

/* type_info methods - stubs to satisfy linker */
void type_info__destructor(type_info *this) {
    (void)this; /* Stub: destructor does nothing */
}

void type_info__destructor_complete(type_info *this, int) {
    (void)this; /* Stub: destructor does nothing */
}

int type_info__operator_equals(const type_info *this, const type_info *rhs) {
    /* Proper implementation - compare type names */
    if (this && rhs && this->_name && rhs->_name) {
        return (this->_name == rhs->_name);  /* Pointer comparison is sufficient for this stub */
    }
    return 0; /* Not equal */
}

int type_info__before(const type_info *this, const type_info *rhs) {
    (void)this;
    (void)rhs;
    return 0; /* Stub: always false */
}

/* Additional destructor stubs matching vtable signatures */
void type_info__destructor_v1(void *this) {
    (void)this;
}

void type_info__destructor_complete_v1(void *this, int flag) {
    (void)this;
    (void)flag;
}

/* type_info vtable for std::type_info - must NOT reference a type_info that uses it */
/* Use NULL for first entry to avoid self-reference circular dependency */
const void *type_info_vtable[5] = {
    NULL,  /* No self-reference - will be filled by compiler for std::type_info's own type_info */
    (const void *)type_info__destructor_v1,  /* destructor */
    (const void *)type_info__destructor_complete_v1,  /* complete object destructor */
    NULL,  /* __is_hidden_type (optional) */
    NULL   /* __can_catch (optional) */
};

/* Define type_info structures with vtable pointers */
struct type_info typeinfo_for_int = { (const void **)type_info_vtable, "int" };
struct type_info RTTIBase_typeinfo = { (const void **)type_info_vtable, "RTTIBase" };
struct type_info RTTIDerivedA_typeinfo = { (const void **)type_info_vtable, "RTTIDerivedA" };
struct type_info RTTIDerivedB_typeinfo = { (const void **)type_info_vtable, "RTTIDerivedB" };

/* std namespace for iostream - converted to C */
struct Init {
    int dummy; /* placeholder for std::ios_base::Init */
};
typedef struct Init Init;

/* nothrow_t for placement new */
struct nothrow_t {
    int dummy;
};
typedef struct nothrow_t nothrow_t;

/* Global variables for C++ runtime */
char completed_0 = 0;
void *__dso_handle __attribute__((weak)) = NULL;
Init std___ioinit;

/* Additional function declarations */
void Init__d_1_1_Init(Init *this);

static void Init__d_1_1_wrapper(void *obj) {
    Init__d_1_1_Init((Init *)obj);
}
extern size_t strlen(const char *s);
extern int puts(const char *s);
extern int printf(const char *format, ...);
extern void free(void *ptr);
extern void *malloc(size_t size);

/* Forward declarations for RTTI destructor and virtual functions */
void RTTIBase__destructor(RTTIBase *this);
void RTTIDerivedA__destructor(RTTIDerivedA *this);
int RTTIDerivedA__getType(RTTIDerivedA *this);
void RTTIDerivedB__destructor(RTTIDerivedB *this);
int RTTIDerivedB__getType(RTTIDerivedB *this);

/* Vtable definitions for Base and Derived classes */
void *Base_vtable[3] = {
    (void *)&RTTIBase_typeinfo, /* typeinfo pointer */
    (void *)Base__destructor, /* destructor */
    (void *)Base__virtualFunc  /* virtual function */
};

void *Derived_vtable[3] = {
    (void *)&RTTIBase_typeinfo, /* typeinfo pointer (shares with Base) */
    (void *)Derived__destructor, /* destructor */
    (void *)Derived__virtualFunc  /* virtual function */
};

/* Vtable definitions as arrays of function pointers */
void *RTTIBase_vtable[3] = {
    (void *)&RTTIBase_typeinfo, /* typeinfo pointer */
    (void *)RTTIBase__destructor, /* destructor */
    (void *)RTTIBase__virtualFunc2  /* additional vtable entry */
};

void *RTTIDerivedA_vtable[4] = {
    (void *)&RTTIDerivedA_typeinfo, /* typeinfo pointer */
    (void *)RTTIDerivedA__destructor, /* destructor */
    (void *)RTTIDerivedA__getType,  /* getType method */
    (void *)RTTIDerivedA__virtualFunc3  /* additional vtable entry */
};

void *RTTIDerivedB_vtable[4] = {
    (void *)&RTTIDerivedB_typeinfo, /* typeinfo pointer */
    (void *)RTTIDerivedB__destructor, /* destructor */
    (void *)RTTIDerivedB__getType,  /* getType method */
    (void *)RTTIDerivedB__virtualFunc3  /* additional vtable entry */
};

/* Vtable pointer definitions */
void **PTR__RTTIBase_00111d58 = RTTIBase_vtable;
void **PTR__RTTIDerivedA_00111d80 = RTTIDerivedA_vtable;
void **PTR__RTTIDerivedB_00111da8 = RTTIDerivedB_vtable;

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

/* Data symbol definitions */
char DAT_00101680[] = "Testing C++ OO Features:\n";
char DAT_00101529[] = "  test_cpp_member_func: %d\n";
char DAT_00101547[] = "  test_cpp_constructor: %d\n";
char DAT_00101563[] = "  test_cpp_virtual_func: %d\n";
char DAT_0010157f[] = "  test_cpp_multiple_inheritance: %d\n";
char DAT_0010159b[] = "  test_cpp_diamond_inheritance: %d\n";
char DAT_001015b8[] = "  test_cpp_operator_overload: %d\n";
char DAT_001015d4[] = "  test_cpp_template_func: %d\n";
char DAT_001015f0[] = "  test_cpp_template_class: %d\n";
char DAT_0010160c[] = "  test_cpp_lambda: %d\n";
char DAT_00101628[] = "  test_cpp_exception: %d\n";
char DAT_00101645[] = "  test_cpp_smart_ptr: %d\n";
char DAT_00101662[] = "  test_cpp_rtti: %d\n";

/* Function declarations */
/* __cxa_atexit, __cxa_finalize, __cxa_throw, __cxa_allocate_exception defined later as stubs */

/* Additional malloc declaration if needed */
extern void *calloc(size_t nmemb, size_t size);
extern void *realloc(void *ptr, size_t size);



/* Standard C++ operator new/delete with mangled names for linker */

/* operator new(unsigned long) - _Znwm */
void *_Znwm(size_t size) {
    return malloc(size);
}

/* operator delete(void*) - _ZdlPv */
void _ZdlPv(void *ptr) {
    free(ptr);
}

/* operator new[](unsigned long) - _Znam */
void *_Znam(size_t size) {
    return malloc(size);
}

/* operator delete[](void*) - _ZdaPv */
void _ZdaPv(void *ptr) {
    free(ptr);
}



/* operator delete(void*, unsigned long) - _ZdlPvm (sized delete, C++14) */
void _ZdlPvm(void *ptr, size_t size) {
    (void)size;
    free(ptr);
}

/* operator delete[](void*, unsigned long) - _ZdaPvm (sized delete[], C++14) */
void _ZdaPvm(void *ptr, size_t size) {
    (void)size;
    free(ptr);
}

/* operator delete(void*, std::nothrow_t) - _ZdlPvRKSt9nothrow_t (placement delete) */
void _ZdlPvRKSt9nothrow_t(void *ptr, const nothrow_t *nothrow_tag) {
    (void)nothrow_tag;
    free(ptr);
}

/* operator delete[](void*, std::nothrow_t) - _ZdaPvRKSt9nothrow_t (placement delete[]) */
void _ZdaPvRKSt9nothrow_t(void *ptr, const nothrow_t *nothrow_tag) {
    (void)nothrow_tag;
    free(ptr);
}

/* operator new(unsigned long, const std::nothrow_t&) - St9nothrow_t variant */
void *_ZnwmRKSt9nothrow_t(size_t size, const nothrow_t *nothrow) {
    (void)nothrow;
    return malloc(size);
}

/* operator new[](unsigned long, const std::nothrow_t&) - St9nothrow_t variant */
void *_ZnamRKSt9nothrow_t(size_t size, const nothrow_t *nothrow) {
    (void)nothrow;
    return malloc(size);
}

/* std::ios_base::Init stub implementations */
void Init__Init(Init *this) {
    /* Stub implementation */
    (void)this;
}

void Init__d_1_1_Init(Init *this) {
    /* Stub implementation */
    (void)this;
}

/* register_tm_clones stub implementation */
void register_tm_clones(void) {
    /* Stub implementation */
}

/* deregister_tm_clones stub implementation */
void deregister_tm_clones(void) {
    /* Stub implementation */
}

/* __dynamic_cast stub implementation for RTTI support */
void *__dynamic_cast(void *obj, const void *src_type, const void *dst_type, ptrdiff_t src2dst_offset) {
    /* Stub implementation - handle type matching */
    (void)src2dst_offset;
    
    if (src_type == dst_type) {
        /* Same type - cast succeeds */
        return obj;
    }
    
    /* For RTTI support, could implement inheritance checks here
     * For now, return NULL for different types */
    (void)obj;
    return NULL;
}

/* __cxa_allocate_exception stub implementation */
void *__cxa_allocate_exception(size_t size) {
    /* Stub implementation - allocate memory for exception */
    return malloc(size);
}

/* std::terminate - required for exception handling */
void _ZSt9terminatev(void) {
    /* Stub implementation - infinite loop */
    for (;;);
}

/* __cxa_throw stub implementation */
void __cxa_throw(void *thrown_exception, void *tinfo, void *dest) {
    /* Stub implementation - terminate program (exceptions not fully supported) */
    (void)thrown_exception;
    (void)tinfo;
    (void)dest;
    _ZSt9terminatev();  /* Call std::terminate instead of infinite loop */
}

/* __cxa_atexit stub implementation */
int __cxa_atexit(void (*func)(void*), void *obj, void *dso_handle) {
    /* Stub implementation - return success (0) */
    (void)func;
    (void)obj;
    (void)dso_handle;
    return 0;
}

/* __cxa_finalize stub implementation */
void __cxa_finalize(void *dso_handle) {
    /* Stub implementation - does nothing */
    (void)dso_handle;
}

/* C++ ABI personality function stub for exception handling */
/* __gxx_personality_v0 - required for exception support */
int __gxx_personality_v0(int version, int actions, uint64_t exception_class,
                         void *exception_object, void *context) {
    /* Stub implementation - always stop unwinding */
    (void)version;
    (void)actions;
    (void)exception_class;
    (void)exception_object;
    (void)context;
    return -1;
}

/* __gxx_personality_seh0 - Windows SEH personality function stub */
int __gxx_personality_seh0(int version, int actions, uint64_t exception_class,
                           void *exception_object, void *context) {
    /* Stub implementation - always stop unwinding */
    (void)version;
    (void)actions;
    (void)exception_class;
    (void)exception_object;
    (void)context;
    return -1;
}

/* _Unwind_Resume - Required for exception handling */
void _Unwind_Resume(void *exception_object) {
    /* Stub implementation - infinite loop (no actual unwinding) */
    (void)exception_object;
    for (;;);
}

/* _Unwind_GetGR - Required for exception handling */
uintptr_t _Unwind_GetGR(void *context, int index) {
    (void)context;
    (void)index;
    return 0;
}

/* _Unwind_GetIP - Required for exception handling */
uintptr_t _Unwind_GetIP(void *context) {
    (void)context;
    return 0;
}

/* _Unwind_SetIP - Required for exception handling */
void _Unwind_SetIP(void *context, uintptr_t new_value) {
    (void)context;
    (void)new_value;
}

/* _Unwind_GetCFA - Required for exception handling */
uintptr_t _Unwind_GetCFA(void *context) {
    (void)context;
    return 0;
}

/* _Unwind_GetRegionStart - Required for exception handling */
uintptr_t _Unwind_GetRegionStart(void *context) {
    (void)context;
    return 0;
}

/* C++ ABI type_info vtable symbols - required for RTTI support */

/* Define the actual type_info structures for the ABI types */
struct type_info __class_type_info_type = { (const void **)type_info_vtable, "__class_type_info" };
struct type_info __si_class_type_info_type = { (const void **)type_info_vtable, "__si_class_type_info" };
struct type_info __vmi_class_type_info_type = { (const void **)type_info_vtable, "__vmi_class_type_info" };
struct type_info __pbase_type_info_type = { (const void **)type_info_vtable, "__pbase_type_info" };

/* __class_type_info vtable - base class for RTTI type info */
static void __class_type_info__destructor(void *this) {
    (void)this; /* Stub destructor */
}
static void __class_type_info__destructor_complete(void *this, int flag) {
    (void)this; /* Stub destructor */
    (void)flag;
}
const void *_ZTVN10__cxxabiv117__class_type_infoE[3] = {
    (const void *)&__class_type_info_type,  /* type_info pointer */
    (const void *)__class_type_info__destructor,  /* destructor */
    (const void *)__class_type_info__destructor_complete  /* complete object destructor */
};

/* __si_class_type_info vtable - for single inheritance */
static void __si_class_type_info__destructor(void *this) {
    (void)this; /* Stub destructor */
}
static void __si_class_type_info__destructor_complete(void *this, int flag) {
    (void)this; /* Stub destructor */
    (void)flag;
}
const void *_ZTVN10__cxxabiv120__si_class_type_infoE[3] = {
    (const void *)&__si_class_type_info_type,  /* type_info pointer */
    (const void *)__si_class_type_info__destructor,  /* destructor */
    (const void *)__si_class_type_info__destructor_complete  /* complete object destructor */
};

/* __vmi_class_type_info vtable - for multiple/virtual inheritance */
static void __vmi_class_type_info__destructor(void *this) {
    (void)this; /* Stub destructor */
}
static void __vmi_class_type_info__destructor_complete(void *this, int flag) {
    (void)this; /* Stub destructor */
    (void)flag;
}
const void *_ZTVN10__cxxabiv121__vmi_class_type_infoE[3] = {
    (const void *)&__vmi_class_type_info_type,  /* type_info pointer */
    (const void *)__vmi_class_type_info__destructor,  /* destructor */
    (const void *)__vmi_class_type_info__destructor_complete  /* complete object destructor */
};

/* __pbase_type_info vtable - for pointer to member types */
static void __pbase_type_info__destructor(void *this) {
    (void)this; /* Stub destructor */
}
static void __pbase_type_info__destructor_complete(void *this, int flag) {
    (void)this; /* Stub destructor */
    (void)flag;
}
const void *_ZTVN10__cxxabiv119__pbase_type_infoE[3] = {
    (const void *)&__pbase_type_info_type,  /* type_info pointer */
    (const void *)__pbase_type_info__destructor,  /* destructor */
    (const void *)__pbase_type_info__destructor_complete  /* complete object destructor */
};

/* __cxa_begin_catch - Required for exception handling */
void *__cxa_begin_catch(void *thrown_exception) {
    (void)thrown_exception;
    /* Stub implementation - return the exception object */
    return thrown_exception;
}

/* __cxa_end_catch - Required for exception handling */
void __cxa_end_catch(void) {
    /* Stub implementation - does nothing */
}

/* __cxa_rethrow - Required for exception handling */
void __cxa_rethrow(void) {
    /* Stub implementation - terminate */
    _ZSt9terminatev();
}

/* __cxa_get_exception_ptr - Required for exception handling */
void *__cxa_get_exception_ptr(void *thrown_exception) {
    (void)thrown_exception;
    /* Stub implementation - return the exception object */
    return thrown_exception;
}

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/5-1/5-1_clang_Os_g
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

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _GLOBAL__sub_I_5_1_cpp(void)

{
 Init__Init((Init *)&std___ioinit);
 __cxa_atexit((void (*)(void*))Init__d_1_1_Init,&std___ioinit,&__dso_handle);
 return;
}




/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */





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
 
 /* Unresolved local var: SimpleClass obj@[DW_OP_breg31(sp): +8]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int r3@[???] */
 local_15 = 0;
 local_38 = 10;
 *(undefined4 *)&uStack_2c = 0;
 local_34 = 0x74736554;
 uStack_1d = 0;
 uStack_25 = 0;
 *(undefined4 *)&uStack_24 = 0;
 sVar1 = strlen((char *)((ulong)&local_38 | 4));
 printf("test_cpp_member_func result: %d\n", (int)sVar1 + 0x125c);
 return (int)sVar1 + 0x125c;
}



/* Function: test_cpp_constructor @ 00101064 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_constructor(void)

{
 /* Unresolved local var: int result@[???]
 Unresolved local var: LifecycleClass obj@[???] */
 return LifecycleClass_instance_count * 0x3e9 + 0x15;
}



/* Function: call_virtual_func @ 0010107c */

int call_virtual_func(struct Base *obj,int x)

{
 int iVar1;
 
 /* WARNING: Could not recover jumptable at 0x00101084. Too many branches */
 /* WARNING: Treating indirect jump as call */
 {
   typedef int (*vfunc_t)(void *, ulong);
   iVar1 = ((vfunc_t)(*obj->_vptr_Base))(obj,(ulong)(uint)x);
 }
 return iVar1;
}



/* Function: test_cpp_virtual_func @ 00101088 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_virtual_func(void)

{
 /* Unresolved local var: Derived derived@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int r3@[???]
 Unresolved local var: int r4@[???]
 Unresolved local var: Base base@[???]
 Unresolved local var: Base * pb@[???]
 Unresolved local var: Base * pd@[???] */
 return 0x2a;
}



/* Function: test_cpp_multiple_inheritance @ 00101090 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_multiple_inheritance(void)

{
 /* Unresolved local var: MultiDerived obj@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int ptr_equal@[???]
 Unresolved local var: BaseA * pa@[???]
 Unresolved local var: BaseB * pb@[???] */
 return 0x47;
}



/* Function: test_cpp_diamond_inheritance @ 00101098 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_diamond_inheritance(void)

{
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: DiamondDerived obj@[???]
 Unresolved local var: VirtualBase * pb@[???] */
 return 0x28a;
}



/* Function: test_cpp_operator_overload @ 001010a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_operator_overload(void)

{
 /* Unresolved local var: Point p1@[???]
 Unresolved local var: Point p2@[???]
 Unresolved local var: bool eq@[???]
 Unresolved local var: Point p3@[???] */
 return 0x16;
}



/* Function: test_cpp_template_func @ 001010a8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_func(void)

{
 /* Unresolved local var: int r1@[???]
 Unresolved local var: double r2@[???]
 Unresolved local var: int a@[???]
 Unresolved local var: int b@[???] */
 return 0x27;
}



/* Function: test_cpp_template_class @ 001010b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_class(void)

{
 /* Unresolved local var: Container<int> int_container@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: double r3@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: Container<double> double_container@[???] */
 return 0x10;
}



/* Function: test_cpp_lambda @ 001010b8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_lambda(void)

{
 /* Unresolved local var: int capture_by_value@[???]
 Unresolved local var: int capture_by_ref@[???]
 Unresolved local var: anon_class_16_2_b9b285fb lambda1@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: anon_class_1_0_00000001 lambda2@[???] */
 return 0x55;
}



/* Function: test_cpp_exception @ 001010c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_exception(void)

{
 undefined4 *puVar1;
 
 /* Unresolved local var: int result@[???]
 Unresolved local var: int e@[???]
 Unresolved local var: BaseException * e@[???]
 Unresolved local var: DerivedException * e@[???] */
 /* Unresolved local var: int e@[???] */
 puVar1 = (undefined4 *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* try { // try from 001010e0 to 001010ef has its CatchHandler @ 001010f4 */
 /* WARNING: Subroutine does not return */
 __cxa_throw(puVar1,&typeinfo_for_int,0);
}



/* Function: test_cpp_smart_ptr @ 001011b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_smart_ptr(void)

{
 /* Unresolved local var: unique_ptr<int,_std::default_delete<int>_> ptr1@[???]
 Unresolved local var: unique_ptr<int,_std::default_delete<int>_> ptr2@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: unique_ptr<int[],_std::default_delete<int[]>_>
 arr@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: unique_ptr<int,_(lambda_at_src/5-1.cpp:445:20)>
 ptr3@[???]
 Unresolved local var: int r3@[???]
 Unresolved local var: deleter_type deleter@[???] */
 return 0x2bf;
}



/* Function: test_cpp_rtti @ 001011b8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_rtti(void)

{
 const void **puVar1;
 const void **plVar2;
 long lVar3;
 int iVar4;
 
 /* Unresolved local var: RTTIBase * obj1@[???]
 Unresolved local var: int result@[???]
 Unresolved local var: RTTIBase * obj2@[???] */
 puVar1 = (const void **)malloc(8);
 *puVar1 = PTR__RTTIBase_00111d58;
 plVar2 = (const void **)malloc(8);
 /* Unresolved local var: RTTIDerivedA * derivedA@[???] */
 *plVar2 = PTR__RTTIDerivedA_00111d80;
 lVar3 = (long)__dynamic_cast(puVar1,(void *)&RTTIBase_typeinfo,(void *)&RTTIDerivedA_typeinfo,0);
 /* Unresolved local var: RTTIDerivedB * derivedB@[???] */
 iVar4 = 0x1e;
 if (lVar3 != 0) {
 iVar4 = 0x82;
 }
 lVar3 = (long)__dynamic_cast(plVar2,(void *)&RTTIBase_typeinfo,(void *)&RTTIDerivedB_typeinfo,0);
 if (lVar3 != 0) {
 iVar4 = iVar4 + 200;
 }
 free(puVar1);
 {
   typedef void (*vfunc_t)(void *);
   ((vfunc_t)(*(void **)(*(const void ***)plVar2 + 2)))(plVar2);
 }
 return iVar4 + 0xe;
}



/* Function: test_cpp_oo_features @ 00101278 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_cpp_oo_features(void)

{
 uint uVar1;
 size_t sVar2;
 undefined4 local_38;
 undefined8 local_34;
 undefined7 uStack_2c;
 undefined1 uStack_25;
 undefined7 uStack_24;
 undefined8 uStack_1d;
 undefined1 local_15;
 
 puts((const char *)&DAT_00101680);
 /* Unresolved local var: SimpleClass obj@[DW_OP_breg31(sp): +8]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int r3@[???] */
 local_15 = 0;
 local_38 = 10;
 *(undefined4 *)&uStack_2c = 0;
 local_34 = 0x74736554;
 uStack_1d = 0;
 uStack_25 = 0;
 *(undefined4 *)&uStack_24 = 0;
 sVar2 = strlen((char *)((ulong)&local_38 | 4));
 printf((const char *)&DAT_00101529,(ulong)((int)sVar2 + 0x125c));
 /* Unresolved local var: int result@[???]
 Unresolved local var: LifecycleClass obj@[???] */
 printf((const char *)&DAT_00101547,(ulong)(LifecycleClass_instance_count * 0x3e9 + 0x15));
 printf((const char *)&DAT_00101563,0x2a);
 printf((const char *)&DAT_0010157f,0x47);
 printf((const char *)&DAT_0010159b,0x28a);
 printf((const char *)&DAT_001015b8,0x16);
 printf((const char *)&DAT_001015d4,0x27);
 printf((const char *)&DAT_001015f0,0x10);
 printf((const char *)&DAT_0010160c,0x55);
 uVar1 = test_cpp_exception();
 printf((const char *)&DAT_00101628,(ulong)uVar1);
 printf((const char *)&DAT_00101645,0x2bf);
 uVar1 = test_cpp_rtti();
 printf((const char *)&DAT_00101662,(ulong)uVar1);
 return;
}



/* Function: main @ 001013a4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: template_max<int> @ 001013bc */

int template_max_int(int a,int b)

{
 if (a <= b) {
 a = b;
 }
 return a;
}



/* Function: template_max<double> @ 001013c8 */

double template_max_double(double a,double b)

{
 if (a <= b) {
 a = b;
 }
 return a;
}



/* Function: template_swap<int> @ 001013d4 */

void template_swap_int(int *a,int *b)

{
 int iVar1;
 
 /* Unresolved local var: int temp@[???] */
 iVar1 = *a;
 *a = *b;
 *b = iVar1;
 return;
}



/* Function: Container @ 001013e8 */

/* DWARF original prototype: void Container(Container<int> * this) */

typedef struct Container_int Container_int;
struct Container_int {
    int size;
    int data[10];
};

void Container_int__Container(Container_int *this)

{
 this->size = 0;
 return;
}



/* Function: push @ 001013f0 */

/* DWARF original prototype: void push(Container<int> * this, int value) */

void Container_int__push(Container_int *this,int value)

{
 int iVar1;
 
 iVar1 = this->size;
 if (iVar1 < 10) {
 this->size = iVar1 + 1;
 this->data[iVar1] = value;
 }
 return;
}



/* Function: get @ 0010140c */

/* DWARF original prototype: int get(Container<int> * this, int idx) */

int Container_int__get(Container_int *this,int idx)

{
 int iVar1;
 
 iVar1 = 0;
 if ((-1 < idx) && (idx < this->size)) {
 iVar1 = this->data[(uint)idx];
 }
 return iVar1;
}



/* Function: getSize @ 0010142c */

/* DWARF original prototype: int getSize(Container<int> * this) */

int Container_int__getSize(Container_int *this)

{
 return this->size;
}



/* Function: Container @ 00101434 */

/* DWARF original prototype: void Container(Container<double> * this) */

typedef struct Container_double Container_double;
struct Container_double {
    int size;
    double data[10];
};

void Container_double__Container(Container_double *this)

{
 this->size = 0;
 return;
}



/* Function: push @ 0010143c */

/* DWARF original prototype: void push(Container<double> * this, double value) */

void Container_double__push(Container_double *this,double value)

{
 int iVar1;
 
 iVar1 = this->size;
 if (iVar1 < 10) {
 this->data[iVar1] = value;
 this->size = iVar1 + 1;
 }
 return;
}



/* Function: get @ 00101458 */

/* DWARF original prototype: double get(Container<double> * this, int idx) */

double Container_double__get(Container_double *this,int idx)

{
 double dVar1;
 
 dVar1 = 0.0;
 if ((-1 < idx) && (idx < this->size)) {
 dVar1 = this->data[(uint)idx];
 }
 return dVar1;
}



/* Function: getSize @ 00101474 */

/* DWARF original prototype: int getSize(Container<double> * this) */

int Container_double__getSize(Container_double *this)

{
 return this->size;
}



/* Function: ~RTTIDerivedA @ 0010147c */

/* DWARF original prototype: void ~RTTIDerivedA(RTTIDerivedA * this) */

void RTTIDerivedA__destructor(RTTIDerivedA *this)

{
 free(this);
 return;
}



/* Function: getType @ 00101480 */

/* DWARF original prototype: int getType(RTTIDerivedA * this) */

int RTTIDerivedA__getType(RTTIDerivedA *this)

{
 return 1;
}



/* Function: ~RTTIBase @ 00101488 */

/* DWARF original prototype: void ~RTTIBase(RTTIBase * this) */

void RTTIBase__destructor(RTTIBase *this)

{
 return;
}



/* Function: ~RTTIDerivedB @ 0010148c */

/* DWARF original prototype: void ~RTTIDerivedB(RTTIDerivedB * this) */

void RTTIDerivedB__destructor(RTTIDerivedB *this)

{
 free(this);
 return;
}



/* Function: getType @ 00101490 */

/* DWARF original prototype: int getType(RTTIDerivedB * this) */

int RTTIDerivedB__getType(RTTIDerivedB *this)

{
 return 2;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 41 */
