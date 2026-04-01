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

/* Ghidra undefined types */
typedef uint64_t undefined8;
typedef uint32_t undefined4;
typedef uint16_t undefined2;
typedef uint8_t undefined1;
typedef uint8_t undefined7;  /* 7-byte uninitialized data */
typedef uint64_t undefined;  /* Generic undefined type */

/* Additional standard types */
typedef unsigned int uint;
typedef unsigned long ulong;
typedef void (*code)();  /* Function pointer type */
typedef int (*code_ptr)();

/* C++ runtime declarations - must be at top for proper extern "C" */
extern "C" {
void __cxa_atexit(void (*f)(void*), void* arg, void* dso);
void __cxa_finalize(void*);
void __cxa_throw(void* thrown_exception, void* typeinfo, void* (*dest)(void*));
void* __cxa_allocate_exception(size_t thrown_size);
}
void* __dso_handle = 0;

/* RTTI type info structures */
struct type_info {
    const char* name;
};

/* Forward declarations for C++ classes */
struct Base;
struct Derived;
struct LifecycleClass;
struct SimpleClass;
struct MultiDerived;
struct BaseA;
struct BaseB;
struct DiamondDerived;
struct VirtualBase;
struct Point;
struct Container_int;
struct Container_double;
struct BaseException;
struct DerivedException;
struct RTTIBase;
struct RTTIDerivedA;
struct RTTIDerivedB;

/* C++ namespace for std:: */
struct std { struct ios_base { struct Init { struct Init* next; struct Init* prev; }; }; };
typedef struct std::ios_base::Init Init;
extern Init __ioinit;
struct LifecycleClass {
    static int instance_count;
};

struct Base {
    void** _vptr_Base;
};

struct RTTIBase {
    void** _vptr_RTTIBase;
    struct type_info* typeinfo;
};
struct RTTIDerivedA {
    void** _vptr_RTTIDerivedA;
    struct type_info* typeinfo;
};
struct RTTIDerivedB {
    void** _vptr_RTTIDerivedB;
    struct type_info* typeinfo;
};

/* Static member definition for LifecycleClass */
int LifecycleClass::instance_count = 0;

/* Type info globals for RTTI */
struct type_info int_typeinfo = { "int" };
struct type_info RTTIBase_typeinfo = { "RTTIBase" };
struct type_info RTTIDerivedA_typeinfo = { "RTTIDerivedA" };
struct type_info RTTIDerivedB_typeinfo = { "RTTIDerivedB" };

/* Standard library declarations - minimal stubs for decompiled code */
struct std_ios_base_Init;
extern struct std_ios_base_Init __ioinit;
typedef int (*Init_Ctor)();
typedef int (*Init_Dtor)();

/* C++ standard namespace for iostream initialization */
/* Note: Using struct instead of class for C compatibility */
struct std_ios_base {
    struct Init {
        struct Init* next;
        struct Init* prev;
    };
};
typedef struct std_ios_base::Init Init;

/* Global RTTI pointers */
void* PTR__RTTIBase_00111d58;
void* PTR__RTTIBase_00111d80;

/* Virtual function table type */
typedef int (*vfunc_ptr)();

/* Global RTTI pointers */
void* PTR__RTTIBase_00111d58;
void* PTR__RTTIBase_00111d80;

/* Virtual function table type */
typedef int (*vfunc_ptr)();

/* 
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/5-1/5-1_clang_O2_g
 * Compiler Spec: default
 */

/* CRT stub function _init removed by preprocessor */

/* ========================================
   FORWARD DECLARATIONS AND TYPE DEFINITIONS
   Must be at very top - before any function usage
   ======================================== */

/* C++ namespace for std:: - simplified for C compatibility */
struct std_ios_base_Init {
    struct std_ios_base_Init* next;
    struct std_ios_base_Init* prev;
};
typedef struct std_ios_base_Init Init;
extern Init __ioinit;

/* Forward declarations for all C++ classes */
struct Base;
struct Derived;
struct LifecycleClass;
struct SimpleClass;
struct MultiDerived;
struct BaseA;
struct BaseB;
struct DiamondDerived;
struct VirtualBase;
struct Point;
struct Container_int;
struct Container_double;
struct BaseException;
struct DerivedException;
struct RTTIBase;
struct RTTIDerivedA;
struct RTTIDerivedB;

/* Forward declarations for all C++ classes - must be before any usage */
struct Base;
struct Derived;
struct LifecycleClass;
struct SimpleClass;
struct MultiDerived;
struct BaseA;
struct BaseB;
struct DiamondDerived;
struct VirtualBase;
struct Point;
struct Container_int;
struct Container_double;
struct BaseException;
struct DerivedException;
struct RTTIBase;
struct RTTIDerivedA;
struct RTTIDerivedB;

/* std::ios_base::Init definition before usage in function prototypes */
struct std_ios_base_Init {
    struct std_ios_base_Init* next;
    struct std_ios_base_Init* prev;
};
typedef struct std_ios_base_Init Init;
extern Init __ioinit;

/* Init type definition - must be before function prototypes */
struct Init {
    struct Init* next;
    struct Init* prev;
};

/* Init type definition - must be before function prototypes */
struct Init {
    struct Init* next;
    struct Init* prev;
};

/* Forward declaration for Init type */
struct Init {
    struct Init* next;
    struct Init* prev;
};

/* Forward declarations for C++ classes */
struct Base;
struct LifecycleClass;
struct RTTIBase;

/* Function prototypes using forward-declared types */
void Init_Init(Init* this);
void Init_Dtor(Init* this);

/* RTTI type info structures */
struct type_info {
    const char* name;
};

/* LifecycleClass with static member */
struct LifecycleClass {
    static int instance_count;
};
int LifecycleClass::instance_count = 0;

/* Base class with virtual table */
struct Base {
    void** _vptr_Base;
};

/* RTTI classes with type info */
struct RTTIBase {
    void** _vptr_RTTIBase;
    struct type_info* typeinfo;
};

struct RTTIDerivedA {
    void** _vptr_RTTIDerivedA;
    struct type_info* typeinfo;
};

struct RTTIDerivedB {
    void** _vptr_RTTIDerivedB;
    struct type_info* typeinfo;
};

/* Type info globals for RTTI */
struct type_info int_typeinfo = { "int" };
struct type_info RTTIBase_typeinfo = { "RTTIBase" };
struct type_info RTTIDerivedA_typeinfo = { "RTTIDerivedA" };
struct type_info RTTIDerivedB_typeinfo = { "RTTIDerivedB" };
struct type_info* RTTIBase_typeinfo_ptr = &RTTIBase_typeinfo;
struct type_info* RTTIDerivedA_typeinfo_ptr = &RTTIDerivedA_typeinfo;
struct type_info* RTTIDerivedB_typeinfo_ptr = &RTTIDerivedB_typeinfo;

/* Function prototypes */
void __cxa_atexit(void (*f)(void*), void* arg, void* dso);
void __cxa_finalize(void*);
void __cxa_throw(void* thrown_exception, void* typeinfo, void* (*dest)(void*));
void* __cxa_allocate_exception(size_t thrown_size);
void* __dso_handle;
void* operator_new(size_t size);
void operator_delete(void* ptr);
void* __dynamic_cast(void* ptr, void* src_typeinfo, void* dst_typeinfo, long offset);
size_t strlen(char* str);
int puts(char* str);
int printf(char* format, ...);
void deregister_tm_clones(void);
char completed_0;
void Init_Init(Init* this);
void Init_Dtor(Init* this);

/* Data declarations */
char DAT_00101728[] = "Testing C++ OOP Features:\n";
char DAT_001015d1[] = "Member function returned: %d\n";
char DAT_001015ef[] = "Constructor test: %d\n";
char DAT_0010160b[] = "Virtual function: %d\n";
char DAT_00101627[] = "Multiple inheritance: %d\n";
char DAT_00101643[] = "Diamond inheritance: %d\n";
char DAT_00101660[] = "Operator overload: %d\n";
char DAT_0010167c[] = "Template function: %d\n";
char DAT_00101698[] = "Template class: %d\n";
char DAT_001016b4[] = "Lambda: %d\n";
char DAT_001016d0[] = "Exception handling: %d\n";
char DAT_001016ed[] = "Smart pointer: %d\n";
char DAT_0010170a[] = "RTTI test: %d\n";

/* ========================================
   AUTO-INJECTED TYPE DEFINITIONS
   ======================================== */
struct Base;
struct Derived;
struct LifecycleClass;
struct SimpleClass;
struct MultiDerived;
struct BaseA;
struct BaseB;
struct DiamondDerived;
struct VirtualBase;
struct Point;
struct Container_int;
struct Container_double;
struct BaseException;
struct DerivedException;
struct RTTIBase;
struct RTTIDerivedA;
struct RTTIDerivedB;

/* std::ios_base::Init definition - simplified for C compatibility */
struct Init {
    struct Init* next;
    struct Init* prev;
};
typedef struct Init Init;
extern Init __ioinit;

/* Forward declarations for all C++ classes */
struct Base;
struct Derived;
struct LifecycleClass;
struct SimpleClass;
struct MultiDerived;
struct BaseA;
struct BaseB;
struct DiamondDerived;
struct VirtualBase;
struct Point;
struct Container_int;
struct Container_double;
struct BaseException;
struct DerivedException;
struct RTTIBase;
struct RTTIDerivedA;
struct RTTIDerivedB;

/* C++ namespace for std:: */
struct std { struct ios_base { struct Init { struct Init* next; struct Init* prev; }; }; };
typedef struct std::ios_base::Init Init;
extern Init __ioinit;

/* RTTI type info structures */
struct type_info {
    const char* name;
};

/* LifecycleClass with static member */
struct LifecycleClass {
    static int instance_count;
};
int LifecycleClass::instance_count = 0;

/* Base class with virtual table */
struct Base {
    void** _vptr_Base;
};

/* RTTI classes with type info */
struct RTTIBase {
    void** _vptr_RTTIBase;
    struct type_info* typeinfo;
};

struct RTTIDerivedA {
    void** _vptr_RTTIDerivedA;
    struct type_info* typeinfo;
};

struct RTTIDerivedB {
    void** _vptr_RTTIDerivedB;
    struct type_info* typeinfo;
};

/* Type info globals for RTTI */
struct type_info int_typeinfo = { "int" };
struct type_info RTTIBase_typeinfo = { "RTTIBase" };
struct type_info RTTIDerivedA_typeinfo = { "RTTIDerivedA" };
struct type_info RTTIDerivedB_typeinfo = { "RTTIDerivedB" };
struct type_info* RTTIBase_typeinfo_ptr = &RTTIBase_typeinfo;
struct type_info* RTTIDerivedA_typeinfo_ptr = &RTTIDerivedA_typeinfo;
struct type_info* RTTIDerivedB_typeinfo_ptr = &RTTIDerivedB_typeinfo;

/* Function prototypes */
void __cxa_atexit(void (*f)(void*), void* arg, void* dso);
void __cxa_finalize(void*);
void __cxa_throw(void* thrown_exception, void* typeinfo, void* (*dest)(void*));
void* __cxa_allocate_exception(size_t thrown_size);
void* __dso_handle;
void* operator_new(size_t size);
void operator_delete(void* ptr);
void* __dynamic_cast(void* ptr, void* src_typeinfo, void* dst_typeinfo, long offset);
size_t strlen(char* str);
int puts(char* str);
int printf(char* format, ...);
void deregister_tm_clones(void);
char completed_0;
void Init_Init(Init* this);
void Init_Dtor(Init* this);

/* Data declarations */
char DAT_00101728[] = "Testing C++ OOP Features:\n";
char DAT_001015d1[] = "Member function returned: %d\n";
char DAT_001015ef[] = "Constructor test: %d\n";
char DAT_0010160b[] = "Virtual function: %d\n";
char DAT_00101627[] = "Multiple inheritance: %d\n";
char DAT_00101643[] = "Diamond inheritance: %d\n";
char DAT_00101660[] = "Operator overload: %d\n";
char DAT_0010167c[] = "Template function: %d\n";
char DAT_00101698[] = "Template class: %d\n";
char DAT_001016b4[] = "Lambda: %d\n";
char DAT_001016d0[] = "Exception handling: %d\n";
char DAT_001016ed[] = "Smart pointer: %d\n";
char DAT_0010170a[] = "RTTI test: %d\n";

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

/* Ghidra undefined types */
typedef uint64_t undefined8;
typedef uint32_t undefined4;
typedef uint16_t undefined2;
typedef uint8_t undefined1;
typedef uint8_t undefined7;  /* 7-byte uninitialized data */
typedef uint64_t undefined;  /* Generic undefined type */

/* Additional standard types */
typedef unsigned int uint;
typedef unsigned long ulong;
typedef void (*code)();  /* Function pointer type */
typedef int (*code_ptr)();

/* RTTI type info structures */
struct type_info {
    const char* name;
};

/* Virtual function table type */
typedef int (*vfunc_ptr)();

/* Global RTTI pointers */
void* PTR__RTTIBase_00111d58;
void* PTR__RTTIBase_00111d80;

/* LifecycleClass with static member */
struct LifecycleClass {
    static int instance_count;
};
int LifecycleClass::instance_count = 0;

/* Base class with virtual table */
struct Base {
    void** _vptr_Base;
};

/* RTTI classes with type info */
struct RTTIBase {
    void** _vptr_RTTIBase;
    struct type_info* typeinfo;
};

struct RTTIDerivedA {
    void** _vptr_RTTIDerivedA;
    struct type_info* typeinfo;
};

struct RTTIDerivedB {
    void** _vptr_RTTIDerivedB;
    struct type_info* typeinfo;
};

/* Type info globals for RTTI */
struct type_info int_typeinfo = { "int" };
struct type_info RTTIBase_typeinfo = { "RTTIBase" };
struct type_info RTTIDerivedA_typeinfo = { "RTTIDerivedA" };
struct type_info RTTIDerivedB_typeinfo = { "RTTIDerivedB" };
struct type_info* RTTIBase_typeinfo_ptr = &RTTIBase_typeinfo;
struct type_info* RTTIDerivedA_typeinfo_ptr = &RTTIDerivedA_typeinfo;
struct type_info* RTTIDerivedB_typeinfo_ptr = &RTTIDerivedB_typeinfo;

/* Function: FUN_00100d60 @ 00100d60 */

void FUN_00100d60(void)

{
 (*(code *)(undefined *)0x0)();
 return;
}



/* Function: _GLOBAL__sub_I_5_1.cpp @ 00100ec0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _GLOBAL__sub_I_5_1_cpp(void)

{
 Init_Init((Init *)&__ioinit);
 __cxa_atexit(Init_Dtor,&__ioinit,&__dso_handle);
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
 uStack_2c = 0;
 local_34 = 0x74736554;
 uStack_1d = 0;
 uStack_25 = 0;
 uStack_24 = 0;
 sVar1 = strlen((char *)((ulong)&local_38 | 4));
 return (int)sVar1 + 0x125c;
}



/* Function: call_virtual_func @ 0010107c */

int call_virtual_func(Base *obj,int x)

{
 int iVar1;
 
 /* WARNING: Could not recover jumptable at 0x00101084. Too many branches */
 /* WARNING: Treating indirect jump as call */
 iVar1 = (**obj->_vptr_Base)(obj,(ulong)(uint)x);
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
 __cxa_throw(puVar1,&int::typeinfo,0);
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
 undefined8 *puVar1;
 long *plVar2;
 long lVar3;
 int iVar4;
 
 /* Unresolved local var: RTTIBase * obj1@[???]
 Unresolved local var: int result@[???]
 Unresolved local var: RTTIBase * obj2@[???] */
 puVar1 = operator_new(8);
 *puVar1 = &PTR__RTTIBase_00111d58;
 plVar2 = operator_new(8);
 /* Unresolved local var: RTTIDerivedA * derivedA@[???] */
 *plVar2 = (long)&PTR__RTTIBase_00111d80;
 lVar3 = __dynamic_cast(puVar1,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
 /* Unresolved local var: RTTIDerivedB * derivedB@[???] */
 iVar4 = 0x1e;
 if (lVar3 != 0) {
 iVar4 = 0x82;
 }
 lVar3 = __dynamic_cast(plVar2,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
 if (lVar3 != 0) {
 iVar4 = iVar4 + 200;
 }
 operator_delete(puVar1);
 (**(code **)(*plVar2 + 8))(plVar2);
 return iVar4 + 0xe;
}



/* Function: test_cpp_oo_features @ 00101278 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_cpp_oo_features(void)

{
 uint uVar1;
 size_t sVar2;
 undefined8 *puVar3;
 long *plVar4;
 long lVar5;
 int iVar6;
 undefined4 local_58;
 undefined8 local_54;
 undefined7 uStack_4c;
 undefined1 uStack_45;
 undefined7 uStack_44;
 undefined8 uStack_3d;
 undefined1 local_35;
 
 puts(&DAT_00101728);
 /* Unresolved local var: SimpleClass obj@[DW_OP_breg31(sp): +8]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int r3@[???] */
 local_35 = 0;
 local_58 = 10;
 uStack_4c = 0;
 local_54 = 0x74736554;
 uStack_3d = 0;
 uStack_45 = 0;
 uStack_44 = 0;
 sVar2 = strlen((char *)((ulong)&local_58 | 4));
 printf(&DAT_001015d1,(ulong)((int)sVar2 + 0x125c));
 /* Unresolved local var: int result@[???]
 Unresolved local var: LifecycleClass obj@[???] */
 printf(&DAT_001015ef,(ulong)(LifecycleClass::instance_count * 0x3e9 + 0x15));
 printf(&DAT_0010160b,0x2a);
 printf(&DAT_00101627,0x47);
 printf(&DAT_00101643,0x28a);
 printf(&DAT_00101660,0x16);
 printf(&DAT_0010167c,0x27);
 printf(&DAT_00101698,0x10);
 printf(&DAT_001016b4,0x55);
 uVar1 = test_cpp_exception();
 printf(&DAT_001016d0,(ulong)uVar1);
 printf(&DAT_001016ed,0x2bf);
 /* Unresolved local var: RTTIBase * obj1@[???]
 Unresolved local var: int result@[???]
 Unresolved local var: RTTIBase * obj2@[???] */
 puVar3 = operator_new(8);
 *puVar3 = &PTR__RTTIBase_00111d58;
 plVar4 = operator_new(8);
 *plVar4 = (long)&PTR__RTTIBase_00111d80;
 lVar5 = __dynamic_cast(puVar3,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
 iVar6 = 0x1e;
 if (lVar5 != 0) {
 iVar6 = 0x82;
 }
 lVar5 = __dynamic_cast(plVar4,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
 if (lVar5 != 0) {
 iVar6 = iVar6 + 200;
 }
 operator_delete(puVar3);
 (**(code **)(*plVar4 + 8))(plVar4);
 printf(&DAT_0010170a,(ulong)(iVar6 + 0xe));
 return;
}



/* Function: main @ 0010144c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: template_max<int> @ 00101464 */

int template_max<int>(int a,int b)

{
 if (a <= b) {
 a = b;
 }
 return a;
}



/* Function: template_max<double> @ 00101470 */

double template_max<double>(double a,double b)

{
 if (a <= b) {
 a = b;
 }
 return a;
}



/* Function: template_swap<int> @ 0010147c */

void template_swap<int>(int *a,int *b)

{
 int iVar1;
 
 /* Unresolved local var: int temp@[???] */
 iVar1 = *a;
 *a = *b;
 *b = iVar1;
 return;
}



/* Function: Container @ 00101490 */

/* DWARF original prototype: void Container(Container<int> * this) */

void __thiscall Container<int>::Container(Container<int> *this)

{
 this->size = 0;
 return;
}



/* Function: push @ 00101498 */

/* DWARF original prototype: void push(Container<int> * this, int value) */

void __thiscall Container<int>::push(Container<int> *this,int value)

{
 int iVar1;
 
 iVar1 = this->size;
 if (iVar1 < 10) {
 this->size = iVar1 + 1;
 this->data[iVar1] = value;
 }
 return;
}



/* Function: get @ 001014b4 */

/* DWARF original prototype: int get(Container<int> * this, int idx) */

int __thiscall Container<int>::get(Container<int> *this,int idx)

{
 int iVar1;
 
 iVar1 = 0;
 if ((-1 < idx) && (idx < this->size)) {
 iVar1 = this->data[(uint)idx];
 }
 return iVar1;
}



/* Function: getSize @ 001014d4 */

/* DWARF original prototype: int getSize(Container<int> * this) */

int __thiscall Container<int>::getSize(Container<int> *this)

{
 return this->size;
}



/* Function: Container @ 001014dc */

/* DWARF original prototype: void Container(Container<double> * this) */

void __thiscall Container<double>::Container(Container<double> *this)

{
 this->size = 0;
 return;
}



/* Function: push @ 001014e4 */

/* DWARF original prototype: void push(Container<double> * this, double value) */

void __thiscall Container<double>::push(Container<double> *this,double value)

{
 int iVar1;
 
 iVar1 = this->size;
 if (iVar1 < 10) {
 this->data[iVar1] = value;
 this->size = iVar1 + 1;
 }
 return;
}



/* Function: get @ 00101500 */

/* DWARF original prototype: double get(Container<double> * this, int idx) */

double __thiscall Container<double>::get(Container<double> *this,int idx)

{
 double dVar1;
 
 dVar1 = 0.0;
 if ((-1 < idx) && (idx < this->size)) {
 dVar1 = this->data[(uint)idx];
 }
 return dVar1;
}



/* Function: getSize @ 0010151c */

/* DWARF original prototype: int getSize(Container<double> * this) */

int __thiscall Container<double>::getSize(Container<double> *this)

{
 return this->size;
}



/* Function: ~RTTIDerivedA @ 00101524 */

/* DWARF original prototype: void ~RTTIDerivedA(RTTIDerivedA * this) */

void __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)

{
 operator_delete(this);
 return;
}



/* Function: getType @ 00101528 */

/* DWARF original prototype: int getType(RTTIDerivedA * this) */

int __thiscall RTTIDerivedA::getType(RTTIDerivedA *this)

{
 return 1;
}



/* Function: ~RTTIBase @ 00101530 */

/* DWARF original prototype: void ~RTTIBase(RTTIBase * this) */

void __thiscall RTTIBase::~RTTIBase(RTTIBase *this)

{
 return;
}



/* Function: ~RTTIDerivedB @ 00101534 */

/* DWARF original prototype: void ~RTTIDerivedB(RTTIDerivedB * this) */

void __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)

{
 operator_delete(this);
 return;
}



/* Function: getType @ 00101538 */

/* DWARF original prototype: int getType(RTTIDerivedB * this) */

int __thiscall RTTIDerivedB::getType(RTTIDerivedB *this)

{
 return 2;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 41 */
