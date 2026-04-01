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

/* Ghidra decompiler types */
typedef unsigned char undefined1;
typedef unsigned int undefined4;
typedef unsigned char undefined7[7];
typedef unsigned long long undefined8;
typedef unsigned char undefined;
typedef void (*code)(void);
typedef unsigned long ulong;
typedef unsigned int uint;

/* Forward declarations for C++ classes */
typedef struct Base {
    void **_vptr_Base;
} Base;

typedef struct LifecycleClass {
    int instance_count;
} LifecycleClass;

/* Container class definitions */
typedef struct Container_int {
    int size;
    int data[10];
} Container_int;

typedef struct Container_double {
    int size;
    double data[10];
} Container_double;

/* RTTI class definitions */
typedef struct RTTIBase {
    void **_vptr_RTTIBase;
} RTTIBase;

typedef struct RTTIDerivedA {
    void **_vptr_RTTIDerivedA;
} RTTIDerivedA;

typedef struct RTTIDerivedB {
    void **_vptr_RTTIDerivedB;
} RTTIDerivedB;

/* C++ runtime declarations - non-static to allow external linkage */
int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle) {
    return 0;
}



void *__cxa_allocate_exception(size_t size) {
    static char exception_buffer[256];
    return exception_buffer;
}

void __cxa_throw(void *exc, void *type_info, void *dest) {
    /* Stub implementation - does not return */
    while(1);
}

void *operator_new(size_t size) {
    static char heap[4096];
    static size_t heap_pos = 0;
    void *ptr = &heap[heap_pos];
    heap_pos += size;
    return ptr;
}

void operator_delete(void *ptr) {
    /* Stub implementation */
}

void *__dynamic_cast(void *src_ptr, void *src_type, void *dst_type, long src2dst) {
    /* Stub implementation */
    return (void *)0x1000;
}

void *__cxa_begin_catch(void *exc) {
    return exc;
}

void __cxa_end_catch(void) {
    /* Stub implementation */
}

void __cxa_pure_virtual(void) {
    /* Stub implementation */
    while(1);
}

void __cxa_rethrow(void) {
    /* Stub implementation - does not return */
    while(1);
}

int __cxa_guard_acquire(long long *guard_object) {
    /* Stub implementation */
    return 1;
}

void __cxa_guard_release(long long *guard_object) {
    /* Stub implementation */
}

void __cxa_guard_abort(long long *guard_object) {
    /* Stub implementation */
}

/* C++ runtime stub implementations - removed to avoid duplicate symbol definitions */

/* Global variables */
static char completed_0 = 0;
static int LifecycleClass_instance_count = 0;

/* Data references */
char DAT_00101680[] = "Testing C++ OO features\n";
char DAT_00101529[] = "test_cpp_member_func result: %d\n";
char DAT_00101547[] = "test_cpp_constructor result: %d\n";
char DAT_00101563[] = "test_cpp_virtual_func result: %d\n";
char DAT_0010157f[] = "test_cpp_multiple_inheritance result: %d\n";
char DAT_0010159b[] = "test_cpp_diamond_inheritance result: %d\n";
char DAT_001015b8[] = "test_cpp_operator_overload result: %d\n";
char DAT_001015d4[] = "test_cpp_template_func result: %d\n";
char DAT_001015f0[] = "test_cpp_template_class result: %d\n";
char DAT_0010160c[] = "test_cpp_lambda result: %d\n";
char DAT_00101628[] = "test_cpp_exception result: %d\n";
char DAT_00101645[] = "test_cpp_smart_ptr result: %d\n";
char DAT_00101662[] = "test_cpp_rtti result: %d\n";

/* Stub for C++ iostream initialization */

/* Additional typeinfo declarations for RTTI classes */

/* Forward declarations for std namespace - converted to C */

/* Typeinfo definitions */
extern int __dso_handle;
void *int_typeinfo = (void *)0x1000;
void *RTTIBase_typeinfo = (void *)0x1001;
void *RTTIDerivedA_typeinfo = (void *)0x1002;
void *RTTIDerivedB_typeinfo = (void *)0x1003;
void *PTR__RTTIBase_00111d58 = (void *)0x1004;
void *PTR__RTTIBase_00111d80 = (void *)0x1005;

/* Additional C++ runtime symbols for linker - removed to avoid conflicts with system C++ runtime */

/* Additional C++ exception handling runtime functions - removed to avoid duplicate symbol definitions */

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/5-1/5-1_clang_Os_g
 * Processor: AARCH64
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */

/* Standard library function stub implementations */
size_t strlen(const char *s) {
    size_t len = 0;
    while (s[len] != '\0') len++;
    return len;
}

int printf(const char *format, ...) {
    /* Stub implementation - just return success */
    return 0;
}

int puts(const char *s) {
    /* Stub implementation - just return success */
    return 0;
}

/* CRT clone functions */
void deregister_tm_clones(void);
void register_tm_clones(void);

void deregister_tm_clones(void) {
    /* Stub implementation */
}

void register_tm_clones(void) {
    /* Stub implementation */
}




/* Function: FUN_00100d60 @ 00100d60 - removed (null pointer call) */



/* Function: _GLOBAL__sub_I_5_1.cpp @ 00100ec0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _GLOBAL__sub_I_5_1_cpp(void)

{
 /* C++ iostream initialization stub - no-op for C */
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */










/* Function: FUN_00100fbc @ 00100fbc */

void FUN_00100fbc(void)

{
 if (completed_0 == '\0') {
 __cxa_finalize((void *)&__dso_handle);
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
 for (int i = 0; i < 7; i++) uStack_2c[i] = 0;
 local_34 = 0x74736554;
 uStack_1d = 0;
 uStack_25 = 0;
 for (int i = 0; i < 7; i++) uStack_24[i] = 0;
 sVar1 = strlen((char *)((ulong)&local_38 | 4));
 return (int)sVar1 + 0x125c;
}



/* Function: test_cpp_constructor @ 00101064 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_constructor(void)

{
 /* Unresolved local var: int result@[???]
 Unresolved local var: LifecycleClass obj@[???] */
 return 0x3e9 + 0x15;
}



/* Function: call_virtual_func @ 0010107c */

int call_virtual_func(Base *obj,int x)

{
 int iVar1;
 
 /* WARNING: Could not recover jumptable at 0x00101084. Too many branches */
 /* WARNING: Treating indirect jump as call */
 iVar1 = ((int (*)(Base *, ulong))(*obj->_vptr_Base))(obj, (ulong)(uint)x);
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
 /* __cxa_throw does not return, but we need a return for C syntax */
 return 0;
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
 *(void **)puVar1 = &PTR__RTTIBase_00111d58;
 plVar2 = operator_new(8);
 /* Unresolved local var: RTTIDerivedA * derivedA@[???] */
 *(void **)plVar2 = (void *)&PTR__RTTIBase_00111d80;
 lVar3 = (long)__dynamic_cast(puVar1,RTTIBase_typeinfo,RTTIDerivedA_typeinfo,0);
 /* Unresolved local var: RTTIDerivedB * derivedB@[???] */
 iVar4 = 0x1e;
 if (lVar3 != 0) {
 iVar4 = 0x82;
 }
 lVar3 = (long)__dynamic_cast(plVar2,RTTIBase_typeinfo,RTTIDerivedB_typeinfo,0);
 if (lVar3 != 0) {
 iVar4 = iVar4 + 200;
 }
 operator_delete(puVar1);
 operator_delete(plVar2);
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
 for (int i = 0; i < 7; i++) uStack_2c[i] = 0;
 local_34 = 0x74736554;
 uStack_1d = 0;
 uStack_25 = 0;
 for (int i = 0; i < 7; i++) uStack_24[i] = 0;
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



/* Function: template_max_int @ 001013bc */

int template_max_int(int a,int b)

{
 if (a <= b) {
 a = b;
 }
 return a;
}



/* Function: template_max_double @ 001013c8 */

double template_max_double(double a,double b)

{
 if (a <= b) {
 a = b;
 }
 return a;
}



/* Function: template_swap_int @ 001013d4 */

void template_swap_int(int *a,int *b)

{
 int iVar1;
 
 /* Unresolved local var: int temp@[???] */
 iVar1 = *a;
 *a = *b;
 *b = iVar1;
 return;
}



/* Function: Container_int_ctor @ 001013e8 */

/* DWARF original prototype: void Container(Container<int> * this) */

void Container_int_ctor(Container_int *this)

{
 this->size = 0;
 return;
}



/* Function: Container_int_push @ 001013f0 */

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



/* Function: Container_int_get @ 0010140c */

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



/* Function: Container_int_getSize @ 0010142c */

/* DWARF original prototype: int getSize(Container<int> * this) */

int Container_int_getSize(Container_int *this)

{
 return this->size;
}



/* Function: Container_double_ctor @ 00101434 */

/* DWARF original prototype: void Container(Container<double> * this) */

void Container_double_ctor(Container_double *this)

{
 this->size = 0;
 return;
}



/* Function: Container_double_push @ 0010143c */

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



/* Function: Container_double_get @ 00101458 */

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



/* Function: Container_double_getSize @ 00101474 */

/* DWARF original prototype: int getSize(Container<double> * this) */

int Container_double_getSize(Container_double *this)

{
 return this->size;
}



/* Function: RTTIDerivedA_destructor @ 0010147c */

/* DWARF original prototype: void ~RTTIDerivedA(RTTIDerivedA * this) */

void RTTIDerivedA_destructor(RTTIDerivedA *this)

{
 operator_delete(this);
 return;
}



/* Function: RTTIDerivedA_getType @ 00101480 */

/* DWARF original prototype: int getType(RTTIDerivedA * this) */

int RTTIDerivedA_getType(RTTIDerivedA *this)

{
 return 1;
}



/* Function: RTTIBase_destructor @ 00101488 */

/* DWARF original prototype: void ~RTTIBase(RTTIBase * this) */

void RTTIBase_destructor(RTTIBase *this)

{
 return;
}



/* Function: RTTIDerivedB_destructor @ 0010148c */

/* DWARF original prototype: void ~RTTIDerivedB(RTTIDerivedB * this) */

void RTTIDerivedB_destructor(RTTIDerivedB *this)

{
 operator_delete(this);
 return;
}



/* Function: RTTIDerivedB_getType @ 00101490 */

/* DWARF original prototype: int getType(RTTIDerivedB * this) */

int RTTIDerivedB_getType(RTTIDerivedB *this)

{
 return 2;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 41 */
