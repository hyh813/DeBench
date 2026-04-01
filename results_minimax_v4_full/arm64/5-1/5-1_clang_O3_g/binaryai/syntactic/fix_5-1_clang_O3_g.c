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

// Global variables
char completed_0 = 0;
void *__dso_handle = 0;

// Forward declarations for external functions
void call_weak_fn(void);

// Class definitions
struct Base {
    void **vtable;
};
typedef struct Base Base;

struct LifecycleClass {
    int instance_count;
};
typedef struct LifecycleClass LifecycleClass;

// RTTI typeinfo structures
struct typeinfo {
    char *name;
};
typedef struct typeinfo typeinfo;

// RTTI classes
struct RTTIBase {
    void **vtable;
};
typedef struct RTTIBase RTTIBase;

struct RTTIDerivedA {
    void **vtable;
};
typedef struct RTTIDerivedA RTTIDerivedA;

struct RTTIDerivedB {
    void **vtable;
};
typedef struct RTTIDerivedB RTTIDerivedB;

// Typeinfo declarations
extern typeinfo int_typeinfo;
extern typeinfo RTTIBase_typeinfo;
extern typeinfo RTTIDerivedA_typeinfo;
extern typeinfo RTTIDerivedB_typeinfo;

// Pointer declarations for RTTI
void *PTR__RTTIBase_00111d58;
void *PTR__RTTIBase_00111d80;

// Typeinfo declarations for RTTI
typeinfo int_typeinfo = {0};
typeinfo RTTIBase_typeinfo = {(char*)"RTTIBase"};
typeinfo RTTIDerivedA_typeinfo = {(char*)"RTTIDerivedA"};
typeinfo RTTIDerivedB_typeinfo = {(char*)"RTTIDerivedB"};

// Container<int> struct
struct Container_int_ {
    int data[10];
    unsigned int size;
};
typedef struct Container_int_ Container_int_;

// Container<double> struct
struct Container_double_ {
    double data[10];
    unsigned int size;
};
typedef struct Container_double_ Container_double_;

// LifecycleClass instance count
int LifecycleClass_instance_count = 0;

// std::ios_base::Init for static initialization
struct Init {
    char unused;
};
typedef struct Init Init;
Init __ioinit;

// Decompiled by BinaryAI
// SHA256: f4944c588722aadfe50188896eb4628ac67467ab3c04fe1d512c182126808fd8

// Function: _init @ 0x100d48
int _init(void *ctx)
{
 int iVar1;
 iVar1 = call_weak_fn((int)ctx);
 return iVar1;
}

// Function: FUN_00100d60 @ 0x100d60
void FUN_00100d60(void)
{
 // Null function pointer call - was attempting to call address 0
 return;
}

// External puts declaration
extern int puts(const char *s);

// Function: <EXTERNAL>::puts @ 0x100d80
int my_puts(char *__s)
{
 int iVar1;
 iVar1 = puts(__s);
 return iVar1;
}

// External puts declaration
extern int puts(const char *s);

// External strlen declaration
extern size_t strlen(const char *s);

// Function: <EXTERNAL>::strlen @ 0x100d90
size_t strlen(char *__s)
{
 size_t sVar1;
 sVar1 = strlen(__s);
 return sVar1;
}

// External __cxa_begin_catch declaration
extern void * __cxa_begin_catch(void);

// Function: <EXTERNAL>::__cxa_begin_catch @ 0x100da0
void * __cxa_begin_catch_wrapper(void)
{
 void *pvVar1;
 pvVar1 = __cxa_begin_catch();
 return pvVar1;
}

// Function: <EXTERNAL>::__cxa_allocate_exception @ 0x100db0
void * __cxa_allocate_exception(unsigned long param_1)
{
 void *pvVar1;
 pvVar1 = __cxa_allocate_exception(param_1);
 return pvVar1;
}

// External __cxa_finalize declaration
extern void __cxa_finalize(void *);

// Function: <EXTERNAL>::__cxa_finalize @ 0x100dc0
void __cxa_finalize(void *param_1)
{
 __cxa_finalize(param_1);
 return;
}

// External __libc_start_main declaration
extern int __libc_start_main(void (*main)(void), unsigned long long stack, void *rtld_fini, void *fini, void *reserved, unsigned long long dso_handle);

// Function: <EXTERNAL>::__libc_start_main @ 0x100dd0
void __libc_start_main(void *param_1, unsigned long long param_2, void *param_3, void *param_4, int param_5, unsigned long long param_6)
{
 __libc_start_main((void (*)(void))param_1, param_2, param_3, param_4, param_5, param_6);
 return;
}

// External operator_delete declaration
extern void operator_delete(void *);

// Function: <EXTERNAL>::operator.delete @ 0x100de0
void operator_delete(void *param_1)
{
 operator_delete(param_1);
 return;
}

// External operator_new declaration
extern void *operator_new(unsigned long);

// Function: <EXTERNAL>::operator.new @ 0x100df0
void * operator_new(unsigned long param_1)
{
 void *pvVar1;
 pvVar1 = operator_new(param_1);
 return pvVar1;
}

// Function: <EXTERNAL>::__dynamic_cast @ 0x100e00
void * __dynamic_cast(const void *src, const typeinfo *from, const typeinfo *to, int is_virtual)
{
 void *pvVar1;
 pvVar1 = __dynamic_cast(src, from, to, is_virtual);
 return pvVar1;
}

// External __cxa_atexit declaration
extern int __cxa_atexit(void (*)(void *), void *, void *);

// Function: <EXTERNAL>::__cxa_atexit @ 0x100e10
int __cxa_atexit(void *param_1, void *param_2, void *param_3)
{
 int iVar1;
 iVar1 = __cxa_atexit(param_1, param_2, param_3);
 return iVar1;
}

// External __cxa_rethrow declaration
extern void __cxa_rethrow(void);

// Function: <EXTERNAL>::__cxa_rethrow @ 0x100e20
void __cxa_rethrow_wrapper(void)
{
 __cxa_rethrow();
 return;
}

// Function: <EXTERNAL>::std::ios_base::Init::Init @ 0x100e30
void Init_Constructor(Init *this)
{
 return;
}

// Forward declaration for main
unsigned long long main(void);

// Forward declarations for functions
void Init_Destructor(Init *this);

// Data references (string literals)
char *DAT_00101734 = "Testing C++ features:";
char *DAT_001015dd = "test_cpp_member_func: %d\n";
char *DAT_001015fb = "test_cpp_constructor: %d\n";
char *DAT_00101617 = "test_cpp_virtual_func: %llu\n";
char *DAT_00101633 = "test_cpp_multiple_inheritance: %llu\n";
char *DAT_0010164f = "test_cpp_diamond_inheritance: %llu\n";
char *DAT_0010166c = "test_cpp_operator_overload: %llu\n";
char *DAT_00101688 = "test_cpp_template_func: %llu\n";
char *DAT_001016a4 = "test_cpp_template_class: %llu\n";
char *DAT_001016c0 = "test_cpp_lambda: %llu\n";
char *DAT_001016dc = "test_cpp_exception: %llu\n";
char *DAT_001016f9 = "test_cpp_smart_ptr: %llu\n";
char *DAT_00101716 = "test_cpp_rtti: %d\n";

// Global variables
void *stack0x00000008 = 0;

// External abort declaration
extern void abort(void);

// Function: <EXTERNAL>::abort @ 0x100e40
void my_abort(void)
{
 abort();
}

// External __cxa_end_catch declaration
extern void __cxa_end_catch(void);

// Function: <EXTERNAL>::__cxa_end_catch @ 0x100e50
void __cxa_end_catch_wrapper(void)
{
 __cxa_end_catch();
 return;
}

// External __gxx_personality_v0 declaration
extern void __gxx_personality_v0(void);

// Function: <EXTERNAL>::__gxx_personality_v0 @ 0x100e60
void __gxx_personality_v0_wrapper(void)
{
 __gxx_personality_v0();
 return;
}

// External __cxa_throw declaration
extern void __cxa_throw(void *, void *, void *);

// External __cxa_throw declaration
extern void __cxa_throw(void *, void *, void *);

// Function: <EXTERNAL>::__cxa_throw @ 0x100e70
void __cxa_throw_wrapper(void *param_1, void *param_2, void *param_3)
{
 __cxa_throw(param_1, param_2, param_3);
}

// Function: <EXTERNAL>::_Unwind_Resume @ 0x100e80
void _Unwind_Resume(void)
{
 _Unwind_Resume();
}

// External __gmon_start__ declaration
extern void __gmon_start__(void);

// Function: <EXTERNAL>::__gmon_start__ @ 0x100e90
void __gmon_start__wrapper(void)
{
 __gmon_start__();
 return;
}

// Function: <EXTERNAL>::printf @ 0x100ea0
int printf(char *__format,...)
{
 int iVar1;
 iVar1 = printf(__format);
 return iVar1;
}

// Function: _GLOBAL__sub_I_5_1.cpp @ 0x100ec0
void _GLOBAL__sub_I_5_1_cpp(void)
{
 Init_Constructor(&__ioinit);
 __cxa_atexit((void (*)(void *))Init_Destructor,&__ioinit,&__dso_handle);
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
void FUN_00100fbc(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}

// Function: __do_global_dtors_aux @ 0x100fc0
void __do_global_dtors_aux(void)
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
 char uStack_2c;
 char uStack_25;
 char uStack_24;
 unsigned long long uStack_1d;
 char local_15;
 local_15 = 0;
 local_38 = 10;
 uStack_2c = 0;
 local_34 = 0x74736554;
 uStack_1d = 0;
 uStack_25 = 0;
 uStack_24 = 0;
 sVar1 = strlen((char *)((unsigned long)&local_38 | 4));
 return (int)sVar1 + 0x125c;
}

// Function: test_cpp_constructor @ 0x101064
int test_cpp_constructor(void)
{
 return LifecycleClass_instance_count * 0x3e9 + 0x15;
}

// Function: call_virtual_func @ 0x10107c
void call_virtual_func(Base *param_1,int param_2)
{
 (***(void ***)param_1)(param_1,param_2);
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
 __cxa_throw(puVar1,(void*)&int_typeinfo,(void*)0);
 return;
}

// Function: test_cpp_smart_ptr @ 0x1011bc
unsigned long long test_cpp_smart_ptr(void)
{
 return 0x2bf;
}

// Function: test_cpp_rtti @ 0x1011c4
int test_cpp_rtti(void)
{
 unsigned long long *puVar1;
 long *plVar2;
 long lVar3;
 int iVar4;
 puVar1 = (unsigned long long *)operator_new(8);
 *puVar1 = &PTR__RTTIBase_00111d58;
 plVar2 = (long *)operator_new(8);
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
 (**(void **)(*plVar2 + 8))(plVar2);
 return iVar4 + 0xe;
}

// Function: test_cpp_oo_features @ 0x101284
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
 char uStack_4c;
 char uStack_45;
 char uStack_44;
 unsigned long long uStack_3d;
 char local_35;
 puts(&DAT_00101734);
 local_35 = 0;
 local_58 = 10;
 uStack_4c = 0;
 local_54 = 0x74736554;
 uStack_3d = 0;
 uStack_45 = 0;
 uStack_44 = 0;
 sVar2 = strlen((char *)((unsigned long)&local_58 | 4));
 printf(DAT_001015dd,(unsigned long)((int)sVar2 + 0x125c));
 printf(DAT_001015fb,(unsigned long)(LifecycleClass_instance_count * 0x3e9 + 0x15));
 printf(DAT_00101617,0x2a);
 printf(DAT_00101633,0x47);
 printf(DAT_0010164f,0x28a);
 printf(DAT_0010166c,0x16);
 printf(DAT_00101688,0x27);
 printf(DAT_001016a4,0x10);
 printf(DAT_001016c0,0x55);
 uVar3 = test_cpp_exception();
 printf(DAT_001016dc,uVar3 & 0xffffffff);
 printf(DAT_001016f9,0x2bf);
 puVar4 = (unsigned long long *)operator_new(8);
 *puVar4 = &PTR__RTTIBase_00111d58;
 plVar5 = (long *)operator_new(8);
 *plVar5 = (long)&PTR__RTTIBase_00111d80;
 lVar6 = (long)__dynamic_cast(puVar4,(typeinfo*)&RTTIBase_typeinfo,(typeinfo*)&RTTIDerivedA_typeinfo,0);
 iVar1 = 0x1e;
 if (lVar6 != 0) {
 iVar1 = 0x82;
 }
 lVar6 = (long)__dynamic_cast(plVar5,(typeinfo*)&RTTIBase_typeinfo,(typeinfo*)&RTTIDerivedB_typeinfo,0);
 if (lVar6 != 0) {
 iVar1 = iVar1 + 200;
 }
 operator_delete(puVar4);
 (**(void **)(*plVar5 + 8))(plVar5);
 iVar1 = printf(&DAT_00101716,(unsigned long)(iVar1 + 0xe));
 return iVar1;
}

// Function: main @ 0x101458
unsigned long long main(void)
{
 test_cpp_oo_features();
 return 0;
}

// Function: template_max<int> @ 0x101470
int template_max_int_(int param_1,int param_2)
{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: template_max<double> @ 0x10147c
double template_max_double_(double param_1,double param_2)
{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: template_swap<int> @ 0x101488
void template_swap_int_(int *param_1,int *param_2)
{
 int iVar1;
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}

// Function: Container_int_Constructor @ 0x10149c
void Container_int_Constructor(Container_int_ *this)
{
 *(unsigned int *)(this + 0x28) = 0;
 return;
}

// Function: Container_int_::push @ 0x1014a4
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

// Function: Container_int_::get @ 0x1014c0
unsigned int Container_int_get(Container_int_ *this,int param_1)
{
 unsigned int uVar1;
 uVar1 = 0;
 if ((-1 < param_1) && (param_1 < *(int *)(this + 0x28))) {
 uVar1 = *(unsigned int *)(this + (unsigned long)(uint)param_1 * 4);
 }
 return uVar1;
}

// Function: Container_int_::getSize @ 0x1014e0
unsigned int Container_int_getSize(Container_int_ *this)
{
 return *(unsigned int *)(this + 0x28);
}

// Function: Container_double_::Constructor @ 0x1014e8
void Container_double_Constructor(Container_double_ *this)
{
 *(unsigned int *)(this + 0x50) = 0;
 return;
}

// Function: Container_double_::push @ 0x1014f0
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

// Function: Container_double_::get @ 0x10150c
unsigned long long Container_double_get(Container_double_ *this,int param_1)
{
 unsigned long long uVar1;
 uVar1 = 0;
 if ((-1 < param_1) && (param_1 < *(int *)(this + 0x50))) {
 uVar1 = *(unsigned long long *)(this + (unsigned long)(uint)param_1 * 8);
 }
 return uVar1;
}

// Function: Container_double_::getSize @ 0x101528
unsigned int Container_double_getSize(Container_double_ *this)
{
 return *(unsigned int *)(this + 0x50);
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x101530
void __thiscall RTTIDerivedA::_RTTIDerivedA(RTTIDerivedA *this)
{
 operator_delete(this);
 return;
}

// Function: RTTIDerivedA::getType @ 0x101534
unsigned long long RTTIDerivedA::getType(void)
{
 return 1;
}

// Function: RTTIBase::~RTTIBase @ 0x10153c
void __thiscall RTTIBase::_RTTIBase(RTTIBase *this)
{
 return;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x101540
void __thiscall RTTIDerivedB::_RTTIDerivedB(RTTIDerivedB *this)
{
 operator_delete(this);
 return;
}

// Function: RTTIDerivedB::getType @ 0x101544
unsigned long long RTTIDerivedB::getType(void)
{
 return 2;
}

// Function: _fini @ 0x10154c
void _fini(void)
{
 return;
}

