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

#ifndef NULL
#define NULL 0
#endif

/* Additional type definitions for decompiled code */
typedef void undefined;
typedef void (*code)(void);
typedef unsigned long undefined8;
typedef unsigned int undefined4;
typedef unsigned long ulong;
typedef unsigned int uint;

/* Forward declarations for classes */
typedef struct LifecycleClass {
    int instance_count;
} LifecycleClass;

extern int LifecycleClass_instance_count;

typedef struct RTTIBase {
    void **vtable;
} RTTIBase;

typedef struct RTTIDerivedA {
    void **vtable;
    undefined8 (*getType)(void);
} RTTIDerivedA;

typedef struct RTTIDerivedB {
    void **vtable;
    undefined8 (*getType)(void);
} RTTIDerivedB;

/* External function declarations */
extern size_t strlen(const char *);
extern int __cxa_atexit(void (*)(void), void *, void *);
extern void *__cxa_allocate_exception(unsigned long);
extern void __cxa_throw(void *, void *, void *);
extern long __dynamic_cast(void *, void *, void *, long);
extern int puts(const char *);
extern int printf(const char *, ...);
extern char *__builtin_strncpy(char *, const char *, unsigned long);

/* Memory operator implementations */
static char memory_pool[1024 * 1024];
static unsigned long memory_offset = 0;

void *operator_new(unsigned long size) {
    void *ptr = memory_pool + memory_offset;
    memory_offset += size;
    memory_offset = (memory_offset + 7) & ~7; /* Align to 8 bytes */
    return ptr;
}

void operator_delete(void *ptr) {
    /* Stub - no-op for simple memory pool */
    (void)ptr;
}

/* Stub implementations for external library functions */
size_t strlen(const char *s) {
    size_t len = 0;
    while (s && s[len] != '\0') {
        len++;
    }
    return len;
}

int puts(const char *s) {
    /* Stub - just return success */
    (void)s;
    return 0;
}

int printf(const char *format, ...) {
    /* Stub - just return success */
    (void)format;
    return 0;
}

long __dynamic_cast(void *src, void *src_type, void *dst_type, long flags) {
    /* Stub - return non-zero to indicate successful cast */
    (void)src;
    (void)src_type;
    (void)dst_type;
    (void)flags;
    return 1;
}

/* Forward declarations for C++ classes */
typedef struct Base {
    void **vtable;
} Base;

typedef struct Init {
    int dummy;
} Init;

/* Forward declaration for Container template */
typedef struct Container_int {
    undefined4 data[10];
    int size;
} Container_int;

typedef struct Container_double {
    undefined8 data[10];
    int size;
} Container_double;

/* Stub for std namespace */
namespace std {
    extern Init __ioinit;
    class ios_base {
    public:
        class Init {
        public:
            Init();
            ~Init();
        };
    };
}

/* External declarations */
extern void *__dso_handle;
extern void *PTR__RTTIBase_00103d78;
extern void *PTR__RTTIBase_00103da0;
extern void *PTR__RTTIBase_typeinfo;
extern void *PTR__RTTIDerivedA_typeinfo;
extern void *PTR__RTTIDerivedB_typeinfo;

/* Global variable definitions for extern declarations */
int LifecycleClass_instance_count = 0;
void *PTR__RTTIBase_00103d78 = NULL;
void *PTR__RTTIBase_00103da0 = NULL;
void *PTR__RTTIBase_typeinfo = NULL;
void *PTR__RTTIDerivedA_typeinfo = NULL;
void *PTR__RTTIDerivedB_typeinfo = NULL;

/* String data definitions */
char DAT_001021d4[] = "Testing C++ OO features\n";
char DAT_0010207d[] = "Member function result: %d\n";
char DAT_0010209b[] = "Constructor result: %d\n";
char DAT_001020b7[] = "Virtual function result: %d\n";
char DAT_001020d3[] = "Multiple inheritance result: %d\n";
char DAT_001020ef[] = "Diamond inheritance result: %d\n";
char DAT_0010210c[] = "Operator overload result: %d\n";
char DAT_00102128[] = "Template function result: %d\n";
char DAT_00102144[] = "Template class result: %d\n";
char DAT_00102160[] = "Lambda result: %d\n";
char DAT_0010217c[] = "Exception result: %d\n";
char DAT_00102199[] = "Smart pointer result: %d\n";
char DAT_001021b6[] = "RTTI result: %d\n";

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x64/5-1/5-1_clang_O3_no_g
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



/* Function: _GLOBAL__sub_I_5_1.cpp @ 00101120 */

void _GLOBAL__sub_I_5_1_cpp(void)

{
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: test_cpp_member_func @ 00101240 */

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



/* Function: test_cpp_constructor @ 00101280 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_constructor() */

int test_cpp_constructor(void)

{
 return LifecycleClass_instance_count * 0x3e9 + 0x15;
}



/* Function: call_virtual_func @ 001012a0 */

/* call_virtual_func(Base*, int) */

void call_virtual_func(Base *param_1,int param_2)

{
 /* WARNING: Could not recover jumptable at 0x001012a6. Too many branches */
 /* WARNING: Treating indirect jump as call */
 (*(code *)**(undefined8 **)param_1)();
 return;
}



/* Function: test_cpp_virtual_func @ 001012b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_virtual_func() */

undefined8 test_cpp_virtual_func(void)

{
 return 0x2a;
}



/* Function: test_cpp_multiple_inheritance @ 001012c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_multiple_inheritance() */

undefined8 test_cpp_multiple_inheritance(void)

{
 return 0x47;
}



/* Function: test_cpp_diamond_inheritance @ 001012d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_diamond_inheritance() */

undefined8 test_cpp_diamond_inheritance(void)

{
 return 0x28a;
}



/* Function: test_cpp_operator_overload @ 001012e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_operator_overload() */

undefined8 test_cpp_operator_overload(void)

{
 return 0x16;
}



/* Function: test_cpp_template_func @ 001012f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_func() */

undefined8 test_cpp_template_func(void)

{
 return 0x27;
}



/* Function: test_cpp_template_class @ 00101300 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_class() */

undefined8 test_cpp_template_class(void)

{
 return 0x10;
}



/* Function: test_cpp_lambda @ 00101310 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_lambda() */

undefined8 test_cpp_lambda(void)

{
 return 0x55;
}



/* Function: test_cpp_exception @ 00101320 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_exception() */

undefined8 test_cpp_exception(void)

{
 return 0;
}



/* Function: test_cpp_smart_ptr @ 001013e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr() */

undefined8 test_cpp_smart_ptr(void)

{
 return 0x2bf;
}



/* Function: test_cpp_rtti @ 001013f0 */

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
 *puVar1 = (undefined8)&PTR__RTTIBase_00103d78;
 plVar2 = (long *)operator_new(8);
 *plVar2 = (long)&PTR__RTTIBase_00103da0;
 lVar3 = __dynamic_cast(puVar1,PTR__RTTIBase_typeinfo,PTR__RTTIDerivedA_typeinfo,0);
 iVar4 = 0x82;
 if (lVar3 == 0) {
 iVar4 = 0x1e;
 }
 lVar3 = __dynamic_cast(plVar2,PTR__RTTIBase_typeinfo,PTR__RTTIDerivedB_typeinfo,0);
 iVar5 = iVar4 + 200;
 if (lVar3 == 0) {
 iVar5 = iVar4;
 }
 operator_delete(puVar1);
 (**(code **)(*plVar2 + 8))();
 return iVar5 + 0xe;
}



/* Function: test_cpp_oo_features @ 001014a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_oo_features() */

void test_cpp_oo_features(void)

{
 uint uVar1;
 size_t sVar2;
 undefined8 *puVar3;
 long *plVar4;
 long lVar5;
 int iVar6;
 int iVar7;
 char local_4c [36];
 
 puts(DAT_001021d4);
 local_4c[0x10] = '\0';
 local_4c[0x11] = '\0';
 local_4c[0x12] = '\0';
 local_4c[0x13] = '\0';
 local_4c[0x14] = '\0';
 local_4c[0x15] = '\0';
 local_4c[0x16] = '\0';
 local_4c[0x17] = '\0';
 local_4c[0x18] = '\0';
 local_4c[0x19] = '\0';
 local_4c[0x1a] = '\0';
 local_4c[0x1b] = '\0';
 local_4c[0x1c] = '\0';
 local_4c[0x1d] = '\0';
 local_4c[0x1e] = '\0';
 __builtin_strncpy(local_4c,"Test",5);
 local_4c[5] = '\0';
 local_4c[6] = '\0';
 local_4c[7] = '\0';
 local_4c[8] = '\0';
 local_4c[9] = '\0';
 local_4c[10] = '\0';
 local_4c[0xb] = '\0';
 local_4c[0xc] = '\0';
 local_4c[0xd] = '\0';
 local_4c[0xe] = '\0';
 local_4c[0xf] = 0;
 local_4c[0x1f] = 0;
 sVar2 = strlen(local_4c);
 printf(DAT_0010207d,(int)((int)sVar2 + 0x125c));
 printf(DAT_0010209b,(int)(LifecycleClass_instance_count * 0x3e9 + 0x15));
 printf(DAT_001020b7,0x2a);
 printf(DAT_001020d3,0x47);
 printf(DAT_001020ef,0x28a);
 printf(DAT_0010210c,0x16);
 printf(DAT_00102128,0x27);
 printf(DAT_00102144,0x10);
 printf(DAT_00102160,0x55);
 uVar1 = test_cpp_exception();
 printf(DAT_0010217c,(int)uVar1);
 printf(DAT_00102199,0x2bf);
 puVar3 = (undefined8 *)operator_new(8);
 *puVar3 = (undefined8)&PTR__RTTIBase_00103d78;
 plVar4 = (long *)operator_new(8);
 *plVar4 = (long)&PTR__RTTIBase_00103da0;
 lVar5 = __dynamic_cast(puVar3,PTR__RTTIBase_typeinfo,PTR__RTTIDerivedA_typeinfo,0);
 iVar6 = 0x82;
 if (lVar5 == 0) {
 iVar6 = 0x1e;
 }
 lVar5 = __dynamic_cast(plVar4,PTR__RTTIBase_typeinfo,PTR__RTTIDerivedB_typeinfo,0);
 iVar7 = iVar6 + 200;
 if (lVar5 == 0) {
 iVar7 = iVar6;
 }
 operator_delete(puVar3);
 (**(code **)(*plVar4 + 8))();
 printf(DAT_001021b6,(int)(iVar7 + 0xe));
 return;
}



/* Function: main @ 00101680 */

int main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: template_max<int> @ 00101690 */

/* int template_max<int>(int, int) */

int template_max_int(int param_1,int param_2)

{
 if (param_2 < param_1) {
 param_2 = param_1;
 }
 return param_2;
}



/* Function: template_max<double> @ 001016a0 */

/* double template_max<double>(double, double) */

double template_max_double(double param_1,double param_2)

{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}



/* Function: template_swap<int> @ 001016b0 */

/* void template_swap<int>(int&, int&) */

void template_swap_int(int *param_1,int *param_2)

{
 int iVar1;
 
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}



/* Function: Container @ 001016c0 */

/* Container_int::Container_int() */

void Container_int_Constructor(Container_int *this_ptr)

{
 this_ptr->size = 0;
 return;
}



/* Function: push @ 001016d0 */

/* Container_int::push(int) */

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



/* Function: get @ 001016f0 */

/* Container_int::get(int) const */

undefined4 Container_int_get(Container_int *this_ptr,int param_1)

{
 undefined4 uVar1;
 
 uVar1 = 0;
 if ((-1 < param_1) && (param_1 < this_ptr->size)) {
 uVar1 = this_ptr->data[param_1];
 }
 return uVar1;
}



/* Function: getSize @ 00101710 */

/* Container_int::getSize() const */

undefined4 Container_int_getSize(Container_int *this_ptr)

{
 return this_ptr->size;
}



/* Function: Container @ 00101720 */

/* Container_double::Container_double() */

void Container_double_Constructor(Container_double *this_ptr)

{
 this_ptr->size = 0;
 return;
}



/* Function: push @ 00101730 */

/* Container_double::push(double) */

void Container_double_push(Container_double *this_ptr,double param_1)

{
 int iVar1;
 
 iVar1 = this_ptr->size;
 if (iVar1 < 10) {
 this_ptr->size = iVar1 + 1;
 this_ptr->data[iVar1] = param_1;
 }
 return;
}



/* Function: get @ 00101750 */

/* Container_double::get(int) const */

undefined8 Container_double_get(Container_double *this_ptr,int param_1)

{
 undefined8 uVar1;
 
 uVar1 = 0;
 if ((-1 < param_1) && (param_1 < this_ptr->size)) {
 uVar1 = this_ptr->data[param_1];
 }
 return uVar1;
}



/* Function: getSize @ 00101770 */

/* Container_double::getSize() const */

undefined4 Container_double_getSize(Container_double *this_ptr)

{
 return this_ptr->size;
}



/* Function: ~RTTIDerivedA @ 00101780 */

/* RTTIDerivedA::~RTTIDerivedA() */

void RTTIDerivedA_destructor(RTTIDerivedA *this_ptr)

{
 operator_delete(this_ptr);
 return;
}



/* Function: getType @ 00101790 */

/* RTTIDerivedA::getType() const */

undefined8 RTTIDerivedA_getType(void)

{
 return 1;
}



/* Function: ~RTTIBase @ 001017a0 */

/* RTTIBase::~RTTIBase() */

void RTTIBase_destructor(RTTIBase *this_ptr)

{
 return;
}



/* Function: ~RTTIDerivedB @ 001017b0 */

/* RTTIDerivedB::~RTTIDerivedB() */

void RTTIDerivedB_destructor(RTTIDerivedB *this_ptr)

{
 operator_delete(this_ptr);
 return;
}



/* Function: getType @ 001017c0 */

/* RTTIDerivedB::getType() const */

undefined8 RTTIDerivedB_getType(void)

{
 return 2;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 39 */
