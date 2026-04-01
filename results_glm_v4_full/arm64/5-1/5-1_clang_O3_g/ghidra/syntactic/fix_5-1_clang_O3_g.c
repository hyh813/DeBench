#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/* Standard types are defined by system headers */

/* Ghidra decompiler type definitions */
typedef unsigned int undefined4;
typedef unsigned long long undefined8;
typedef unsigned char undefined1;
typedef unsigned char undefined7[7];
typedef void undefined;

/* Forward declarations */
typedef struct Base Base;
typedef struct RTTIBase RTTIBase;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;

/* Base class definition with vtable pointer */
struct Base {
    void **_vptr_Base;
};

/* Additional type definitions for decompiled code */
typedef unsigned int uint;
typedef unsigned long ulong;
typedef void (*code)(void);

/* Forward declarations for classes */
typedef struct LifecycleClass LifecycleClass;

/* Container type definitions (template instantiations) */
typedef struct Container_int Container_int;
struct Container_int {
    int data[10];
    int size;
};

typedef struct Container_double Container_double;
struct Container_double {
    double data[10];
    int size;
};





/* C++ runtime declarations */
void __attribute__((visibility("default"), noexcept)) __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle);
void * __attribute__((visibility("default"))) __cxa_allocate_exception(size_t size);
void __attribute__((visibility("default"))) __cxa_throw(void *obj, void *typeinfo, void *dest);
void * __attribute__((visibility("default"))) __dynamic_cast(void *obj, const void *from_type, const void *to_type, ptrdiff_t offset);
void __attribute__((visibility("default"), noexcept)) __cxa_finalize(void *dso_handle);
extern void *operator_new(size_t size);
extern void operator_delete(void *ptr);

/* CRT stub function declarations */
extern void deregister_tm_clones(void);

/* C++ std namespace stubs - converted to C-compatible declarations */
typedef struct std_ios_base_Init std_ios_base_Init;
struct std_ios_base_Init {
    void **vtable;
};

extern std_ios_base_Init std___ioinit;

/* C++ runtime initialization/destruction functions (C-compatible) */
void std_ios_base_Init_Init(std_ios_base_Init *this);
void std_ios_base_Init_dtor(std_ios_base_Init *this);

/* Global variables */
extern char completed_0;
extern void *__dso_handle;
extern int LifecycleClass_instance_count;

/* Vtable and typeinfo references (definitions later in file) */
void *PTR__RTTIBase_00111d58[];
void *PTR__RTTIBase_00111d80[];
void *PTR__RTTIDerivedB_00111da8[];
const void *RTTIBase_typeinfo;
const void *RTTIDerivedA_typeinfo;
const void *RTTIDerivedB_typeinfo;
const void *int_typeinfo;

/* Data references */
extern char DAT_00101734[];
extern char DAT_001015dd[];
extern char DAT_001015fb[];
extern char DAT_00101617[];
extern char DAT_00101633[];
extern char DAT_0010164f[];
extern char DAT_0010166c[];
extern char DAT_00101688[];
extern char DAT_001016a4[];
extern char DAT_001016c0[];
extern char DAT_001016dc[];
extern char DAT_001016f9[];
extern char DAT_00101716[];

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/5-1/5-1_clang_O3_g
 * Processor: AARCH64
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00100d60 @ 00100d60 */

void __attribute__((used)) FUN_00100d60(void)

{
 return;
}



/* Function: _GLOBAL__sub_I_5_1.cpp @ 00100ec0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _GLOBAL__sub_I_5_1_cpp(void)

{
 std_ios_base_Init_Init(&std___ioinit);
 __cxa_atexit((void (*)(void *))std_ios_base_Init_dtor,&std___ioinit,&__dso_handle);
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
 memset(uStack_2c, 0, sizeof(uStack_2c));
 local_34 = 0x74736554;
 uStack_1d = 0;
 uStack_25 = 0;
 memset(uStack_24, 0, sizeof(uStack_24));
 sVar1 = strlen((char *)((ulong)&local_38 | 4));
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

int call_virtual_func(Base *obj,int x)

{
 int iVar1;
 
 /* WARNING: Could not recover jumptable at 0x00101084. Too many branches */
 /* WARNING: Treating indirect jump as call */
 iVar1 = ((int (*)(Base *, ulong))(*obj->_vptr_Base))(obj,(ulong)(uint)x);
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
 __cxa_throw(puVar1,int_typeinfo,0);
}



/* Function: test_cpp_smart_ptr @ 001011bc */

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



/* Function: test_cpp_rtti @ 001011c4 */

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
 *(void **)puVar1 = PTR__RTTIBase_00111d58;
 plVar2 = operator_new(8);
 /* Unresolved local var: RTTIDerivedA * derivedA@[???] */
 *(void **)plVar2 = PTR__RTTIBase_00111d80;
 lVar3 = (long)__dynamic_cast(puVar1,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0);
 /* Unresolved local var: RTTIDerivedB * derivedB@[???] */
 iVar4 = 0x1e;
 if (lVar3 != 0) {
 iVar4 = 0x82;
 }
 lVar3 = (long)__dynamic_cast(plVar2,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo,0);
 if (lVar3 != 0) {
 iVar4 = iVar4 + 200;
 }
 operator_delete(puVar1);
 ((void (*)(void *))plVar2[1])(plVar2);
 return iVar4 + 0xe;
}



/* Function: test_cpp_oo_features @ 00101284 */

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
 
 puts((const char *)&DAT_00101734);
 /* Unresolved local var: SimpleClass obj@[DW_OP_breg31(sp): +8]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int r3@[???] */
 local_35 = 0;
 local_58 = 10;
 memset(uStack_4c, 0, sizeof(uStack_4c));
 local_54 = 0x74736554;
 uStack_3d = 0;
 uStack_45 = 0;
 memset(uStack_44, 0, sizeof(uStack_44));
 sVar2 = strlen((char *)((ulong)&local_58 | 4));
 printf((const char *)&DAT_001015dd,(ulong)((int)sVar2 + 0x125c));
 /* Unresolved local var: int result@[???]
 Unresolved local var: LifecycleClass obj@[???] */
 printf((const char *)&DAT_001015fb,(ulong)(LifecycleClass_instance_count * 0x3e9 + 0x15));
 printf((const char *)&DAT_00101617,0x2a);
 printf((const char *)&DAT_00101633,0x47);
 printf((const char *)&DAT_0010164f,0x28a);
 printf((const char *)&DAT_0010166c,0x16);
 printf((const char *)&DAT_00101688,0x27);
 printf((const char *)&DAT_001016a4,0x10);
 printf((const char *)&DAT_001016c0,0x55);
 uVar1 = test_cpp_exception();
 printf((const char *)&DAT_001016dc,(ulong)uVar1);
 printf((const char *)&DAT_001016f9,0x2bf);
 /* Unresolved local var: RTTIBase * obj1@[???]
 Unresolved local var: int result@[???]
 Unresolved local var: RTTIBase * obj2@[???] */
 puVar3 = (undefined8 *)operator_new(8);
 *(void **)puVar3 = PTR__RTTIBase_00111d58;
 plVar4 = (long *)operator_new(8);
 *(void **)plVar4 = PTR__RTTIBase_00111d80;
 lVar5 = (long)__dynamic_cast(puVar3,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0);
 iVar6 = 0x1e;
 if (lVar5 != 0) {
 iVar6 = 0x82;
 }
 lVar5 = (long)__dynamic_cast(plVar4,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo,0);
 if (lVar5 != 0) {
 iVar6 = iVar6 + 200;
 }
 operator_delete(puVar3);
 ((void (*)(void *))plVar4[1])(plVar4);
 printf((const char *)&DAT_00101716,(ulong)(iVar6 + 0xe));
 return;
}



/* Function: main @ 00101458 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: template_max<int> @ 00101470 */

int template_max_int(int a,int b)

{
 if (a <= b) {
 a = b;
 }
 return a;
}



/* Function: template_max<double> @ 0010147c */

double template_max_double(double a,double b)

{
 if (a <= b) {
 a = b;
 }
 return a;
}



/* Function: template_swap<int> @ 00101488 */

void template_swap_int(int *a,int *b)

{
 int iVar1;
 
 /* Unresolved local var: int temp@[???] */
 iVar1 = *a;
 *a = *b;
 *b = iVar1;
 return;
}



/* Function: Container @ 0010149c */

/* DWARF original prototype: void Container(Container<int> * this) */

void Container_int_Container(Container_int *this)

{
 this->size = 0;
 return;
}



/* Function: push @ 001014a4 */

/* DWARF original prototype: void push(Container<int> * this, int value) */

void Container_int_push(Container_int *this,int value)

{
 int iVar1;
 
 iVar1 = this->size;
 if (iVar1 < 10) {
 this->size = iVar1 + 1;
 this->data[iVar1] = value;
 }
 return;
}



/* Function: get @ 001014c0 */

/* DWARF original prototype: int get(Container<int> * this, int idx) */

int Container_int_get(Container_int *this,int idx)

{
 int iVar1;
 
 iVar1 = 0;
 if ((-1 < idx) && (idx < this->size)) {
 iVar1 = this->data[(uint)idx];
 }
 return iVar1;
}



/* Function: getSize @ 001014e0 */

/* DWARF original prototype: int getSize(Container<int> * this) */

int Container_int_getSize(Container_int *this)

{
 return this->size;
}



/* Function: Container @ 001014e8 */

/* DWARF original prototype: void Container(Container<double> * this) */

void Container_double_Container(Container_double *this)

{
 this->size = 0;
 return;
}



/* Function: push @ 001014f0 */

/* DWARF original prototype: void push(Container<double> * this, double value) */

void Container_double_push(Container_double *this,double value)

{
 int iVar1;
 
 iVar1 = this->size;
 if (iVar1 < 10) {
 this->data[iVar1] = value;
 this->size = iVar1 + 1;
 }
 return;
}



/* Function: get @ 0010150c */

/* DWARF original prototype: double get(Container<double> * this, int idx) */

double Container_double_get(Container_double *this,int idx)

{
 double dVar1;
 
 dVar1 = 0.0;
 if ((-1 < idx) && (idx < this->size)) {
 dVar1 = this->data[(uint)idx];
 }
 return dVar1;
}



/* Function: getSize @ 00101528 */

/* DWARF original prototype: int getSize(Container<double> * this) */

int Container_double_getSize(Container_double *this)

{
 return this->size;
}



/* Function: ~RTTIDerivedA @ 00101530 */

/* DWARF original prototype: void ~RTTIDerivedA(RTTIDerivedA * this) */

void RTTIDerivedA_dtor(RTTIDerivedA *this)

{
 operator_delete(this);
 return;
}



/* Function: getType @ 00101534 */

/* DWARF original prototype: int getType(RTTIDerivedA * this) */

int RTTIDerivedA_getType(RTTIDerivedA *this)

{
 return 1;
}



/* Function: ~RTTIBase @ 0010153c */

/* DWARF original prototype: void ~RTTIBase(RTTIBase * this) */

void RTTIBase_dtor(RTTIBase *this)

{
 return;
}



/* Function: ~RTTIDerivedB @ 00101540 */

/* DWARF original prototype: void ~RTTIDerivedB(RTTIDerivedB * this) */

void RTTIDerivedB_dtor(RTTIDerivedB *this)

{
 operator_delete(this);
 return;
}



/* Function: getType @ 00101544 */

/* DWARF original prototype: int getType(RTTIDerivedB * this) */

int RTTIDerivedB_getType(RTTIDerivedB *this)

{
 return 2;
}



/* Vtable definitions */
void *PTR__RTTIBase_00111d58[] __attribute__((used)) = {
    (void *)RTTIBase_dtor
};

void *PTR__RTTIBase_00111d80[] __attribute__((used)) = {
    (void *)RTTIDerivedA_dtor,
    (void *)RTTIDerivedA_getType
};

/* RTTIDerivedB vtable (referenced in code) */
void *PTR__RTTIDerivedB_00111da8[] __attribute__((used)) = {
    (void *)RTTIDerivedB_dtor,
    (void *)RTTIDerivedB_getType
};

/* Typeinfo structure definition */
typedef struct type_info type_info;
struct type_info {
    const char *type_name;
    void (*unused)(void);
};

/* Typeinfo definitions */
type_info RTTIBase_typeinfo_obj __attribute__((used)) = { "RTTIBase", NULL };
type_info RTTIDerivedA_typeinfo_obj __attribute__((used)) = { "RTTIDerivedA", NULL };
type_info RTTIDerivedB_typeinfo_obj __attribute__((used)) = { "RTTIDerivedB", NULL };
type_info int_typeinfo_obj __attribute__((used)) = { "int", NULL };

const void *RTTIBase_typeinfo __attribute__((used)) = &RTTIBase_typeinfo_obj;
const void *RTTIDerivedA_typeinfo __attribute__((used)) = &RTTIDerivedA_typeinfo_obj;
const void *RTTIDerivedB_typeinfo __attribute__((used)) = &RTTIDerivedB_typeinfo_obj;
const void *int_typeinfo __attribute__((used)) = &int_typeinfo_obj;

/* operator new/delete implementations */
void * __attribute__((visibility("default"))) operator_new(size_t size) {
    void *ptr = malloc(size);
    if (ptr == NULL && size > 0) {
        /* Handle allocation failure */
        return NULL;
    }
    return ptr;
}

void __attribute__((visibility("default"))) operator_delete(void *ptr) {
    if (ptr != NULL) {
        free(ptr);
    }
}

/* Global variable definitions */
char completed_0 __attribute__((used)) = 0;
void *__dso_handle __attribute__((weak)) = 0;
int LifecycleClass_instance_count = 0;

/* String data definitions */
char DAT_00101734[] = "Testing C++ features:\n";
char DAT_001015dd[] = "  test_cpp_member_func: %lu\n";
char DAT_001015fb[] = "  test_cpp_constructor: %lu\n";
char DAT_00101617[] = "  test_cpp_virtual_func: %lu\n";
char DAT_00101633[] = "  test_cpp_multiple_inheritance: %lu\n";
char DAT_0010164f[] = "  test_cpp_diamond_inheritance: %lu\n";
char DAT_0010166c[] = "  test_cpp_operator_overload: %lu\n";
char DAT_00101688[] = "  test_cpp_template_func: %lu\n";
char DAT_001016a4[] = "  test_cpp_template_class: %lu\n";
char DAT_001016c0[] = "  test_cpp_lambda: %lu\n";
char DAT_001016dc[] = "  test_cpp_exception: %lu\n";
char DAT_001016f9[] = "  test_cpp_smart_ptr: %lu\n";
char DAT_00101716[] = "  test_cpp_rtti: %lu\n";

/* std::ios_base::Init object definition */
std_ios_base_Init std___ioinit __attribute__((used));

/* std::ios_base::Init constructor/destructor implementations */
void *std_ios_base_Init_vtable[] __attribute__((used)) = {
    (void *)std_ios_base_Init_dtor
};

void std_ios_base_Init_Init(std_ios_base_Init *this) {
    this->vtable = std_ios_base_Init_vtable;
}

void std_ios_base_Init_dtor(std_ios_base_Init *this) {
}

/* Deregister function stub */
void __attribute__((visibility("default"))) deregister_tm_clones(void) {
}

/* C++ runtime function implementations */

/* __cxa_atexit - register cleanup function */
typedef struct AtexitEntry {
    void (*func)(void *);
    void *arg;
    struct AtexitEntry *next;
} AtexitEntry;

static AtexitEntry *atexit_list = NULL;

void __attribute__((visibility("default"), noexcept)) __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle) {
    AtexitEntry *entry = (AtexitEntry *)malloc(sizeof(AtexitEntry));
    if (entry != NULL) {
        entry->func = func;
        entry->arg = arg;
        entry->next = atexit_list;
        atexit_list = entry;
    }
}

/* __cxa_finalize - run cleanup functions */
void __attribute__((visibility("default"), noexcept)) __cxa_finalize(void *dso_handle) {
    AtexitEntry *entry = atexit_list;
    while (entry != NULL) {
        AtexitEntry *next = entry->next;
        void (*func)(void *) = entry->func;
        void *arg = entry->arg;
        free(entry);
        if (func != NULL) {
            func(arg);
        }
        entry = next;
    }
    atexit_list = NULL;
}

/* __cxa_allocate_exception - allocate exception object */
void * __attribute__((visibility("default"))) __cxa_allocate_exception(size_t size) {
    return malloc(size);
}

/* __cxa_throw - throw exception (stub - never returns) */
void __attribute__((visibility("default"))) __cxa_throw(void *obj, void *typeinfo, void *dest) {
    /* In a real implementation, this would unwind the stack */
    /* For this stub, we just abort since we can't implement full exception handling */
    fprintf(stderr, "Exception thrown at %p\n", obj);
    exit(1);
}

/* __dynamic_cast - perform dynamic cast (simplified stub) */
void * __attribute__((visibility("default"))) __dynamic_cast(void *obj, const void *from_type, const void *to_type, ptrdiff_t offset) {
    /* This is a simplified implementation that handles basic inheritance */
    /* In a real implementation, this would walk the RTTI hierarchy */
    if (obj == NULL) {
        return NULL;
    }
    void **vptr = *(void **)obj;
    if (vptr == NULL) {
        return NULL;
    }
    /* If casting to same type, return object */
    if (from_type == to_type) {
        return obj;
    }
    /* Simplified inheritance handling: assume cast succeeds */
    /* This handles cases where derived classes are cast to base */
    return obj;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 41 */
