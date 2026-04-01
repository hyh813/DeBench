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
typedef char undefined7[7];
typedef unsigned char undefined1;

/* Forward declarations */
typedef struct Base Base;
typedef struct Init Init;
typedef struct LifecycleClass LifecycleClass;
typedef struct RTTIBase RTTIBase;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;
typedef struct Container_int_ Container_int_;
typedef struct Container_double_ Container_double_;

/* Init class definition */
struct Init {
    int dummy;
};

/* Global variables */
static char completed_0 = 0;
static Init std___ioinit = {0};
static char DAT_00101728[] = "Starting C++ OO features test...\n";
static char DAT_001015d1[] = "test_cpp_member_func: %d\n";
static char DAT_001015ef[] = "test_cpp_constructor: %d\n";
static char DAT_0010160b[] = "test_cpp_virtual_func: %llu\n";
static char DAT_00101627[] = "test_cpp_multiple_inheritance: %llu\n";
static char DAT_00101643[] = "test_cpp_diamond_inheritance: %llu\n";
static char DAT_00101660[] = "test_cpp_operator_overload: %llu\n";
static char DAT_0010167c[] = "test_cpp_template_func: %llu\n";
static char DAT_00101698[] = "test_cpp_template_class: %llu\n";
static char DAT_001016b4[] = "test_cpp_lambda: %llu\n";
static char DAT_001016d0[] = "test_cpp_exception: %d\n";
static char DAT_001016ed[] = "test_cpp_smart_ptr: %llu\n";
static char DAT_0010170a[] = "test_cpp_rtti: %d\n";

/* LifecycleClass definition */
struct LifecycleClass {
    int instance_count;
};

/* Base class definition */
struct Base {
    void **vtable;
};

/* RTTI class definitions */
struct RTTIBase {
    void *vtable;
};

struct RTTIDerivedA {
    void *vtable;
};

struct RTTIDerivedB {
    void *vtable;
};

/* Container definitions */
struct Container_int_ {
    int data[10];
    int size;
};

struct Container_double_ {
    double data[10];
    int size;
};

/* External declarations */
int main(void);
void call_weak_fn(void);
void std__ios_base__Init__Init(Init *this);
void abort(void);
void __cxa_begin_catch(void *);
void *__cxa_allocate_exception(unsigned long);
void __cxa_finalize(void *);
void __libc_start_main(void *, int, void *, void *, void *, unsigned long long);
void operator_delete(void *param_1);
void *operator_new(unsigned long param_1);
void *__dynamic_cast(void *, void *, void *, int);
int __cxa_atexit(void *, void *, void *);
void __cxa_rethrow(void);
void __cxa_end_catch(void);
void __gxx_personality_v0(void);
void __cxa_throw(void *, void *, void *);
void _Unwind_Resume(void *);
void __gmon_start__(void);
int printf(const char *__format, ...);
int puts(const char *__s);
size_t strlen(const char *__s);

/* Define stack0x00000008 */
static void *stack0x00000008 = 0;

/* Global variable definitions */
void *__dso_handle = 0;
void *int_typeinfo = 0;
void *RTTIBase_typeinfo = 0;
void *RTTIDerivedA_typeinfo = 0;
void *RTTIDerivedB_typeinfo = 0;
void *PTR__RTTIBase_00111d58 = 0;
void *PTR__RTTIBase_00111d80 = 0;

// Decompiled by BinaryAI
// SHA256: 6be219ff43428b23e6f1261e25dbb874493888fe3b62faf7c2a1cf9c83987e47

// Function: _init @ 0x100d48
int _init(void *ctx)
{
 call_weak_fn();
 return 0;
}

// Function: FUN_00100d60 @ 0x100d60
void FUN_00100d60(void)
{
 return;
}

// Function: <EXTERNAL>::puts @ 0x100d80
int puts(const char *__s);

// Function: <EXTERNAL>::strlen @ 0x100d90
size_t strlen(const char *__s);

// Function: <EXTERNAL>::__cxa_begin_catch @ 0x100da0
void __cxa_begin_catch(void *);

// Function: <EXTERNAL>::__cxa_allocate_exception @ 0x100db0
void *__cxa_allocate_exception(unsigned long);

// Function: <EXTERNAL>::__cxa_finalize @ 0x100dc0
void __cxa_finalize(void *);

// Function: <EXTERNAL>::__libc_start_main @ 0x100dd0
void __libc_start_main(void *, int, void *, void *, void *, unsigned long long);

// Function: <EXTERNAL>::operator.delete @ 0x100de0
void operator_delete(void *param_1);

// Function: <EXTERNAL>::operator.new @ 0x100df0
void *operator_new(unsigned long param_1);

// Function: <EXTERNAL>::__dynamic_cast @ 0x100e00
void *__dynamic_cast(void *, void *, void *, int);

// Function: <EXTERNAL>::__cxa_atexit @ 0x100e10
int __cxa_atexit(void *, void *, void *);

// Function: <EXTERNAL>::__cxa_rethrow @ 0x100e20
void __cxa_rethrow(void);

// Function: <EXTERNAL>::std::ios_base::Init::Init @ 0x100e30
void std__ios_base__Init__Init(Init *this);

// Function: <EXTERNAL>::abort @ 0x100e40
void abort(void);

// Function: <EXTERNAL>::__cxa_end_catch @ 0x100e50
void __cxa_end_catch(void);

// Function: <EXTERNAL>::__gxx_personality_v0 @ 0x100e60
void __gxx_personality_v0(void);

// Function: <EXTERNAL>::__cxa_throw @ 0x100e70
void __cxa_throw(void *, void *, void *);

// Function: <EXTERNAL>::_Unwind_Resume @ 0x100e80
void _Unwind_Resume(void *);

// Function: <EXTERNAL>::__gmon_start__ @ 0x100e90
void __gmon_start__(void);

// Function: <EXTERNAL>::printf @ 0x100ea0
int printf(const char *__format, ...);

// Function: _GLOBAL__sub_I_5_1.cpp @ 0x100ec0
void _GLOBAL__sub_I_5_1_cpp(void)
{
 std__ios_base__Init__Init((Init *)&std___ioinit);
 return;
}

// Function: _start @ 0x100f00
void _start(unsigned long long param_1)
{
 unsigned long long param_9;
 __libc_start_main(main,param_9,&stack0x00000008,0,0,param_1);
 abort();
}

// Function: call_weak_fn @ 0x100f34
void call_weak_fn(void)
{
 __gmon_start__();
 return;
}

// Function: deregister_tm_clones @ 0x100f50
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x100f80
void register_tm_clones(void)
{
 return;
}

// Function: FUN_00100fbc @ 0x100fbc
static void FUN_00100fbc(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}

// Function: __do_global_dtors_aux @ 0x100fc0
static void __do_global_dtors_aux(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}

// Function: test_cpp_member_func @ 0x101014
int test_cpp_member_func(void)
{
 size_t sVar1;
 unsigned int local_38;
 unsigned long long local_34;
 undefined7 uStack_2c;
 char uStack_25;
 undefined7 uStack_24;
 unsigned long long uStack_1d;
 char local_15;
 local_15 = 0;
 local_38 = 10;
 local_34 = 0x74736554;
 uStack_1d = 0;
 uStack_25 = 0;
 sVar1 = strlen((char *)((unsigned long)&local_38 | 4));
 return (int)sVar1 + 0x125c;
}

// Function: test_cpp_constructor @ 0x101064
int test_cpp_constructor(void)
{
 return 0 * 0x3e9 + 0x15;
}

// Function: call_virtual_func @ 0x10107c
void call_virtual_func(Base *param_1,int param_2)
{
 ((void (*)(Base *, int))param_1->vtable[0])(param_1, param_2);
 return;
}

// Function: test_cpp_virtual_func @ 0x101088
unsigned long long test_cpp_virtual_func(void)
{
 return 0x2a;
}

// Function: test_cpp_multiple_inheritance @ 0x101090
unsigned long long test_cpp_multiple_inheritance(void)
{
 return 0x47;
}

// Function: test_cpp_diamond_inheritance @ 0x101098
unsigned long long test_cpp_diamond_inheritance(void)
{
 return 0x28a;
}

// Function: test_cpp_operator_overload @ 0x1010a0
unsigned long long test_cpp_operator_overload(void)
{
 return 0x16;
}

// Function: test_cpp_template_func @ 0x1010a8
unsigned long long test_cpp_template_func(void)
{
 return 0x27;
}

// Function: test_cpp_template_class @ 0x1010b0
unsigned long long test_cpp_template_class(void)
{
 return 0x10;
}

// Function: test_cpp_lambda @ 0x1010b8
unsigned long long test_cpp_lambda(void)
{
 return 0x55;
}

// Function: test_cpp_exception @ 0x1010c0
void test_cpp_exception(void)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 __cxa_throw(puVar1,int_typeinfo,0);
 return;
}

// Function: test_cpp_smart_ptr @ 0x1011b0
unsigned long long test_cpp_smart_ptr(void)
{
 return 0x2bf;
}

// Function: test_cpp_rtti @ 0x1011b8
int test_cpp_rtti(void)
{
 unsigned long long *puVar1;
 long *plVar2;
 long lVar3;
 int iVar4;
 puVar1 = (unsigned long long *)operator_new(8);
 *(void **)puVar1 = &PTR__RTTIBase_00111d58;
 plVar2 = (long *)operator_new(8);
 *plVar2 = (long)&PTR__RTTIBase_00111d80;
 lVar3 = (long)__dynamic_cast(puVar1,RTTIBase_typeinfo,RTTIDerivedA_typeinfo,0);
 iVar4 = 0x1e;
 if (lVar3 != 0) {
 iVar4 = 0x82;
 }
 lVar3 = (long)__dynamic_cast(plVar2,RTTIBase_typeinfo,RTTIDerivedB_typeinfo,0);
 if (lVar3 != 0) {
 iVar4 = iVar4 + 200;
 }
 operator_delete(puVar1);
 ((void (*)(long *))(*(void **)(*plVar2 + 8)))(plVar2);
 return iVar4 + 0xe;
}

// Function: test_cpp_oo_features @ 0x101278
int test_cpp_oo_features(void)
{
 int iVar1;
 size_t sVar2;
 unsigned long uVar3;
 unsigned long long *puVar4;
 long *plVar5;
 long lVar6;
 unsigned int local_58;
 unsigned long long local_54;
 undefined7 uStack_4c;
 char uStack_45;
 undefined7 uStack_44;
 unsigned long long uStack_3d;
 char local_35;
 puts((char *)&DAT_00101728);
 local_35 = 0;
 local_58 = 10;
 local_54 = 0x74736554;
 uStack_3d = 0;
 uStack_45 = 0;
 sVar2 = strlen((char *)((unsigned long)&local_58 | 4));
 printf((char *)&DAT_001015d1,(unsigned long)((int)sVar2 + 0x125c));
 printf((char *)&DAT_001015ef,(unsigned long)(0 * 0x3e9 + 0x15));
 printf((char *)&DAT_0010160b,0x2a);
 printf((char *)&DAT_00101627,0x47);
 printf((char *)&DAT_00101643,0x28a);
 printf((char *)&DAT_00101660,0x16);
 printf((char *)&DAT_0010167c,0x27);
 printf((char *)&DAT_00101698,0x10);
 printf((char *)&DAT_001016b4,0x55);
 printf((char *)&DAT_001016d0,0);
 printf((char *)&DAT_001016ed,0x2bf);
 puVar4 = (unsigned long long *)operator_new(8);
 *(void **)puVar4 = &PTR__RTTIBase_00111d58;
 plVar5 = (long *)operator_new(8);
 *plVar5 = (long)&PTR__RTTIBase_00111d80;
 lVar6 = (long)__dynamic_cast(puVar4,RTTIBase_typeinfo,RTTIDerivedA_typeinfo,0);
 iVar1 = 0x1e;
 if (lVar6 != 0) {
 iVar1 = 0x82;
 }
 lVar6 = (long)__dynamic_cast(plVar5,RTTIBase_typeinfo,RTTIDerivedB_typeinfo,0);
 if (lVar6 != 0) {
 iVar1 = iVar1 + 200;
 }
 operator_delete(puVar4);
 ((void (*)(long *))(*(void **)(*plVar5 + 8)))(plVar5);
 iVar1 = printf((char *)&DAT_0010170a,(unsigned long)(iVar1 + 0xe));
 return iVar1;
}

// Function: main @ 0x10144c
int main(void)
{
 test_cpp_oo_features();
 return 0;
}

// Function: template_max<int> @ 0x101464
int template_max_int_(int param_1,int param_2)
{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: template_max<double> @ 0x101470
double template_max_double_(double param_1,double param_2)
{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: template_swap<int> @ 0x10147c
void template_swap_int_(int *param_1,int *param_2)
{
 int iVar1;
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}

// Function: Container_int_Constructor @ 0x101490
void Container_int_Constructor(Container_int_ *this)
{
 *(unsigned int *)(this + 0x28) = 0;
 return;
}

// Function: Container_int_push @ 0x101498
void Container_int_push(Container_int_ *this,int param_1)
{
 int iVar1;
 iVar1 = *(int *)(this + 0x28);
 if (iVar1 < 10) {
 *(int *)(this + 0x28) = iVar1 + 1;
 *(int *)(this + (long)iVar1 * 4) = param_1;
 }
 return;
}

// Function: Container_int_get @ 0x1014b4
unsigned int Container_int_get(Container_int_ *this,int param_1)
{
 unsigned int uVar1;
 uVar1 = 0;
 if ((-1 < param_1) && (param_1 < *(int *)(this + 0x28))) {
 uVar1 = *(unsigned int *)(this + (unsigned long)(unsigned int)param_1 * 4);
 }
 return uVar1;
}

// Function: Container_int_getSize @ 0x1014d4
unsigned int Container_int_getSize(Container_int_ *this)
{
 return *(unsigned int *)(this + 0x28);
}

// Function: Container_double_Constructor @ 0x1014dc
void Container_double_Constructor(Container_double_ *this)
{
 *(unsigned int *)(this + 0x50) = 0;
 return;
}

// Function: Container_double_push @ 0x1014e4
void Container_double_push(Container_double_ *this,double param_1)
{
 int iVar1;
 iVar1 = *(int *)(this + 0x50);
 if (iVar1 < 10) {
 *(double *)(this + (long)iVar1 * 8) = param_1;
 *(int *)(this + 0x50) = iVar1 + 1;
 }
 return;
}

// Function: Container_double_get @ 0x101500
unsigned long long Container_double_get(Container_double_ *this,int param_1)
{
 unsigned long long uVar1;
 uVar1 = 0;
 if ((-1 < param_1) && (param_1 < *(int *)(this + 0x50))) {
 uVar1 = *(unsigned long long *)(this + (unsigned long)(unsigned int)param_1 * 8);
 }
 return uVar1;
}

// Function: Container_double_getSize @ 0x10151c
unsigned int Container_double_getSize(Container_double_ *this)
{
 return *(unsigned int *)(this + 0x50);
}

// Function: RTTIDerivedA_destructor @ 0x101524
void RTTIDerivedA_destructor(RTTIDerivedA *this)
{
 operator_delete(this);
 return;
}

// Function: RTTIDerivedA_getType @ 0x101528
unsigned long long RTTIDerivedA_getType(void)
{
 return 1;
}

// Function: RTTIBase_destructor @ 0x101530
void RTTIBase_destructor(RTTIBase *this)
{
 return;
}

// Function: RTTIDerivedB_destructor @ 0x101534
void RTTIDerivedB_destructor(RTTIDerivedB *this)
{
 operator_delete(this);
 return;
}

// Function: RTTIDerivedB_getType @ 0x101538
unsigned long long RTTIDerivedB_getType(void)
{
 return 2;
}

// Function: _fini @ 0x101540
void _fini(void)
{
 return;
}

