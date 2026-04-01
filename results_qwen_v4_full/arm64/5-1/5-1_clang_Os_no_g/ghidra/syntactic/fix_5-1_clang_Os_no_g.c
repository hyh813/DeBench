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
typedef unsigned int uint;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Ghidra decompiler types */
typedef uint8_t undefined1;
typedef uint32_t undefined4;
typedef uint8_t undefined7[7];
typedef uint64_t undefined8;
typedef uint8_t undefined;
typedef unsigned long ulong;
typedef void (*code)(void);

/* Standard library function declarations */
static char heap_memory[1024 * 1024];
static size_t heap_offset = 0;
static void* malloc(size_t size) {
    void *ptr = heap_memory + heap_offset;
    heap_offset += size + 8;
    if (heap_offset > sizeof(heap_memory)) return 0;
    return ptr;
}
static void free(void *ptr) {
    (void)ptr;
}

/* C++ operator declarations */

/* Forward declarations for C++ classes */
typedef struct Init Init;
struct Init {
    void *__ioinit;
};

typedef struct Base Base;
struct Base {
    void **vtable;
};

/* std namespace stub */
typedef struct std std;
struct std {
    Init __ioinit;
};
typedef struct LifecycleClass LifecycleClass;
struct LifecycleClass {
    void *vtable;
};
typedef struct RTTIBase RTTIBase;
struct RTTIBase {
    void *vtable;
};
typedef struct RTTIDerivedA RTTIDerivedA;
struct RTTIDerivedA {
    void *vtable;
};
typedef struct RTTIDerivedB RTTIDerivedB;
struct RTTIDerivedB {
    void *vtable;
};
/* Global std instance */
struct std std_instance = {0};

struct Container_int {
    void *vtable;
    undefined4 _pad_0[9];
    undefined4 size;
    undefined4 data[10];
};

struct Container_double {
    void *vtable;
    undefined4 _pad_0[19];
    undefined4 size;
    double data[10];
};

typedef struct Container_int Container_int;
typedef struct Container_double Container_double;

/* CRT and runtime function declarations */
void std_ios_base_Init_Init(Init *this) {
    return;
}
void std_ios_base_Init_dtor_Init(Init *this) {
    return;
}
void __cxa_atexit(void (*func)(void*), void* arg, void* dso_handle) {
    return;
}
static void* memset(void *s, int c, size_t n) {
    unsigned char *p = (unsigned char *)s;
    while (n--) *p++ = c;
    return s;
}
void __cxa_finalize(void* dso_handle) {
    return;
}
void deregister_tm_clones(void) {
    return;
}
void* __dso_handle = 0;
char completed_0 = 0;
static size_t strlen(const char *s) {
    size_t len = 0;
    while (s[len]) len++;
    return len;
}
void* operator_new(size_t size);
void* __cxa_allocate_exception(size_t size) {
    return operator_new(size);
}
void __cxa_throw(void *exc, void *typeinfo, void *dest) {
    for(;;);
}
void* operator_new(size_t size) {
    return malloc(size);
}
void operator_delete(void *ptr) {
    free(ptr);
}
void* PTR__RTTIBase_00111d58 = 0;
void* PTR__RTTIBase_00111d80 = 0;
void* int_typeinfo = 0;
void* RTTIBase_typeinfo = 0;
void* RTTIDerivedA_typeinfo = 0;
void* RTTIDerivedB_typeinfo = 0;
void* __gxx_personality_v0 = 0;
void* __cxa_begin_catch(void *exc) { return exc; }
void __cxa_end_catch(void) { return; }
long __dynamic_cast(void *obj, void *src_type, void *dst_type, int flags) {
    return 0;
}
int puts(const char *s) {
    return 0;
}
int printf(const char *format, ...) {
    return 0;
}
char DAT_00101680[] = "Testing C++ OO features\n";
char DAT_00101529[] = "test_cpp_member_func: %d\n";
char DAT_00101547[] = "test_cpp_constructor: %d\n";
char DAT_00101563[] = "test_cpp_virtual_func: %d\n";
char DAT_0010157f[] = "test_cpp_multiple_inheritance: %d\n";
char DAT_0010159b[] = "test_cpp_diamond_inheritance: %d\n";
char DAT_001015b8[] = "test_cpp_operator_overload: %d\n";
char DAT_001015d4[] = "test_cpp_template_func: %d\n";
char DAT_001015f0[] = "test_cpp_template_class: %d\n";
char DAT_0010160c[] = "test_cpp_lambda: %d\n";
char DAT_00101628[] = "test_cpp_exception: %d\n";
char DAT_00101645[] = "test_cpp_smart_ptr: %d\n";
char DAT_00101662[] = "test_cpp_rtti: %d\n";
int LifecycleClass_instance_count = 0;

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
 (*(code *)(undefined *)0x0)();
 return;
}



/* Function: _GLOBAL__sub_I_5_1.cpp @ 00100ec0 */

void _GLOBAL__sub_I_5_1_cpp(void)

{
 std_ios_base_Init_Init((Init *)&std_instance.__ioinit);
 __cxa_atexit((void (*)(void*))std_ios_base_Init_dtor_Init,&std_instance.__ioinit,&__dso_handle);
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
/* test_cpp_constructor() */

int test_cpp_constructor(void)

{
 return LifecycleClass_instance_count * 0x3e9 + 0x15;
}



/* Function: call_virtual_func @ 0010107c */

/* call_virtual_func(Base*, int) */

void call_virtual_func(Base *param_1,int param_2)

{
 /* WARNING: Could not recover jumptable at 0x00101084. Too many branches */
 /* WARNING: Treating indirect jump as call */
 ((void (*)(Base*, int))**(void (**)(Base*, int))param_1)(param_1,param_2);
 return;
}



/* Function: test_cpp_virtual_func @ 00101088 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_virtual_func() */

int test_cpp_virtual_func(void)

{
 return 0x2a;
}



/* Function: test_cpp_multiple_inheritance @ 00101090 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_multiple_inheritance() */

int test_cpp_multiple_inheritance(void)

{
 return 0x47;
}



/* Function: test_cpp_diamond_inheritance @ 00101098 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_diamond_inheritance() */

int test_cpp_diamond_inheritance(void)

{
 return 0x28a;
}



/* Function: test_cpp_operator_overload @ 001010a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_operator_overload() */

int test_cpp_operator_overload(void)

{
 return 0x16;
}



/* Function: test_cpp_template_func @ 001010a8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_func() */

int test_cpp_template_func(void)

{
 return 0x27;
}



/* Function: test_cpp_template_class @ 001010b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_class() */

int test_cpp_template_class(void)

{
 return 0x10;
}



/* Function: test_cpp_lambda @ 001010b8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_lambda() */

int test_cpp_lambda(void)

{
 return 0x55;
}



/* Function: test_cpp_exception @ 001010c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_exception() */

int test_cpp_exception(void)

{
 return 0x2a;
}


/* Function: test_cpp_smart_ptr @ 001011b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr() */

int test_cpp_smart_ptr(void)

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
 long lVar3;
 int iVar4;
 
 puVar1 = operator_new(8);
 *puVar1 = (undefined8)&PTR__RTTIBase_00111d58;
 plVar2 = operator_new(8);
 *plVar2 = (long)&PTR__RTTIBase_00111d80;
 lVar3 = __dynamic_cast(puVar1,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0);
 iVar4 = 0x1e;
 if (lVar3 != 0) {
 iVar4 = 0x82;
 }
 lVar3 = __dynamic_cast(plVar2,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo,0);
 if (lVar3 != 0) {
 iVar4 = iVar4 + 200;
 }
 operator_delete(puVar1);
 ((void (*)(void*))(*(undefined8*)(*plVar2 + 8)))(plVar2);
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
 
 puts(DAT_00101680);
 local_15 = 0;
 local_38 = 10;
 memset(uStack_2c, 0, sizeof(uStack_2c));
 local_34 = 0x74736554;
 uStack_1d = 0;
 uStack_25 = 0;
 memset(uStack_24, 0, sizeof(uStack_24));
 sVar2 = strlen((char *)((ulong)&local_38 | 4));
 printf(DAT_00101529,(ulong)((int)sVar2 + 0x125c));
 printf(DAT_00101547,(ulong)(LifecycleClass_instance_count * 0x3e9 + 0x15));
 printf(DAT_00101563,0x2a);
 printf(DAT_0010157f,0x47);
 printf(DAT_0010159b,0x28a);
 printf(DAT_001015b8,0x16);
 printf(DAT_001015d4,0x27);
 printf(DAT_001015f0,0x10);
 printf(DAT_0010160c,0x55);
 uVar3 = test_cpp_exception();
 printf(DAT_00101628,uVar3 & 0xffffffff);
 printf(DAT_00101645,0x2bf);
 uVar3 = test_cpp_rtti();
 iVar1 = printf(DAT_00101662,uVar3 & 0xffffffff);
 return iVar1;
}



/* Function: main @ 001013a4 */

int main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: template_max_int @ 001013bc */

/* int template_max_int(int, int) */

int template_max_int(int param_1,int param_2)

{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}



/* Function: template_max_double @ 001013c8 */

/* double template_max_double(double, double) */

double template_max_double(double param_1,double param_2)

{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}



/* Function: template_swap_int @ 001013d4 */

/* void template_swap_int(int&, int&) */

void template_swap_int(int *param_1,int *param_2)

{
 int iVar1;
 
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}



/* Function: Container_int_ctor @ 001013e8 */

/* Container_int::Container_int() */

void Container_int_ctor(Container_int *this)

{
 *(undefined4 *)(this + 0x28) = 0;
 return;
}



/* Function: Container_int_push @ 001013f0 */

/* Container_int::push(int) */

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



/* Function: Container_int_get @ 0010140c */

/* Container_int::get(int) const */

undefined4 Container_int_get(Container_int *this,int param_1)

{
 undefined4 uVar1;
 
 uVar1 = 0;
 if ((-1 < param_1) && (param_1 < *(int *)(this + 0x28))) {
 uVar1 = *(undefined4 *)(this + (ulong)(uint)param_1 * 4);
 }
 return uVar1;
}



/* Function: Container_int_getSize @ 0010142c */

/* Container_int::getSize() const */

undefined4 Container_int_getSize(Container_int *this)

{
 return *(undefined4 *)(this + 0x28);
}



/* Function: Container_double_ctor @ 00101434 */

/* Container_double::Container_double() */

void Container_double_ctor(Container_double *this)

{
 *(undefined4 *)(this + 0x50) = 0;
 return;
}



/* Function: Container_double_push @ 0010143c */

/* Container_double::push(double) */

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



/* Function: Container_double_get @ 00101458 */

/* Container_double::get(int) const */

undefined1* Container_double_get(Container_double *this,int param_1)

{
 static undefined8 auVar2;
 ulong uVar1;
 
 uVar1 = 0;
 if ((-1 < param_1) && (param_1 < *(int *)(this + 0x50))) {
 uVar1 = *(ulong *)(this + (ulong)(uint)param_1 * 8);
 }
 auVar2 = uVar1;
 return (undefined1*)&auVar2;
}



/* Function: Container_double_getSize @ 00101474 */

/* Container_double::getSize() const */

undefined4 Container_double_getSize(Container_double *this)

{
 return *(undefined4 *)(this + 0x50);
}



/* Function: RTTIDerivedA_dtor @ 0010147c */

/* RTTIDerivedA::~RTTIDerivedA() */

void RTTIDerivedA_dtor(RTTIDerivedA *this)

{
 operator_delete(this);
 return;
}



/* Function: RTTIDerivedA_getType @ 00101480 */

/* RTTIDerivedA::getType() const */

undefined8 RTTIDerivedA_getType(void)

{
 return 1;
}



/* Function: RTTIBase_dtor @ 00101488 */

/* RTTIBase::~RTTIBase() */

void RTTIBase_dtor(RTTIBase *this)

{
 return;
}



/* Function: RTTIDerivedB_dtor @ 0010148c */

/* RTTIDerivedB::~RTTIDerivedB() */

void RTTIDerivedB_dtor(RTTIDerivedB *this)

{
 operator_delete(this);
 return;
}



/* Function: RTTIDerivedB_getType @ 00101490 */

/* RTTIDerivedB::getType() const */

undefined8 RTTIDerivedB_getType(void)

{
 return 2;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 41 */
