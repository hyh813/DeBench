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

// Decompiled by BinaryAI
// SHA256: 6be219ff43428b23e6f1261e25dbb874493888fe3b62faf7c2a1cf9c83987e47

// Forward declarations for external symbols
extern void *__dso_handle;

// Forward declarations for std namespace items
typedef struct Init {
    void (*ctor)(struct Init *);
} Init;

// Forward declarations for functions
int call_weak_fn(int ctx);
int main(void);
void __thiscall_std_ios_base_Init_Init(Init *this);

// Global variables
char completed_0 = 0;
unsigned long long stack0x00000008 = 0;

// String constants (data)
char *DAT_00101728 = "Testing C++ OO Features";
char *DAT_001015d1 = "strlen result: %u\n";
char *DAT_001015ef = "Constructor result: %u\n";
char *DAT_0010160b = "Virtual func: %u\n";
char *DAT_00101627 = "Multiple inheritance: %u\n";
char *DAT_00101643 = "Diamond inheritance: %u\n";
char *DAT_00101660 = "Operator overload: %u\n";
char *DAT_0010167c = "Template func: %u\n";
char *DAT_00101698 = "Template class: %u\n";
char *DAT_001016b4 = "Lambda: %u\n";
char *DAT_001016d0 = "Exception result: %u\n";
char *DAT_001016ed = "Smart ptr: %u\n";
char *DAT_0010170a = "RTTI result: %u\n";

// Class definitions
// Forward declaration of Base
typedef struct Base Base;

// Container types for templates
typedef struct Container_int_ {
    int data[10];
    unsigned int size;
} Container_int_;

typedef struct Container_double_ {
    double data[10];
    unsigned int size;
} Container_double_;

// RTTIBase class
typedef struct RTTIBase {
    void (*dtor)(struct RTTIBase *);
    unsigned long long (*getType)(void);
} RTTIBase;

typedef struct RTTIDerivedA {
    void (*dtor)(struct RTTIDerivedA *);
    unsigned long long (*getType)(void);
} RTTIDerivedA;

typedef struct RTTIDerivedB {
    void (*dtor)(struct RTTIDerivedB *);
    unsigned long long (*getType)(void);
} RTTIDerivedB;

typedef struct LifecycleClass {
    int instance_count;
} LifecycleClass;

// RTTI type info structures
struct type_info {
    const char *name;
};
typedef struct type_info type_info;

// Define undefined7 as unsigned char
typedef unsigned char undefined7;

// Define uint as unsigned int
typedef unsigned int uint;

// Forward declarations for std namespace items
typedef struct Init {
    void (*ctor)(struct Init *);
} Init;

// Define std namespace with ioinit (converted to C global)
Init std___ioinit;

// External declarations for RTTI pointers
extern void* PTR__RTTIBase_00111d58;
extern void* PTR__RTTIBase_00111d80;

// Type info definitions
type_info int_typeinfo = {"int"};
type_info RTTIBase_typeinfo = {"RTTIBase"};
type_info RTTIDerivedA_typeinfo = {"RTTIDerivedA"};
type_info RTTIDerivedB_typeinfo = {"RTTIDerivedB"};

int instance_count = 0;

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
 (*(void *)(char *)0x0)();
 return;
}

// Function: <EXTERNAL>::puts @ 0x100d80
// External declaration - actual implementation provided by libc
extern int puts(char *__s);

// Function: <EXTERNAL>::strlen @ 0x100d90
// External declaration - actual implementation provided by libc
extern size_t strlen(char *__s);

// Function: <EXTERNAL>::__cxa_begin_catch @ 0x100da0
// External declaration - actual implementation provided by libc
extern int __cxa_begin_catch(void);

// Function: <EXTERNAL>::__cxa_allocate_exception @ 0x100db0
// External declaration - actual implementation provided by libc
extern void *__cxa_allocate_exception(size_t size);

// Function: <EXTERNAL>::__cxa_finalize @ 0x100dc0
// External declaration - actual implementation provided by libc
extern void __cxa_finalize(void *);

// Function: <EXTERNAL>::__libc_start_main @ 0x100dd0
// External declaration - actual implementation provided by libc
extern int __libc_start_main(void (*main)(void), void *init, void *fini, void *rtld_fini, void *stack_end, unsigned long long param);

// Function: <EXTERNAL>::operator.delete @ 0x100de0
// External declaration - actual implementation provided by libc
extern void operator_delete(void *param_1);

// Function: <EXTERNAL>::operator.new @ 0x100df0
// External declaration - actual implementation provided by libc
extern void *operator_new(unsigned long param_1);

// Function: <EXTERNAL>::__dynamic_cast @ 0x100e00
// External declaration - actual implementation provided by libc
extern void *__dynamic_cast(const void *src, const type_info *from, const type_info *to, ptrdiff_t is_virtual);

// Function: <EXTERNAL>::__cxa_atexit @ 0x100e10
// External declaration - actual implementation provided by libc
extern int __cxa_atexit(void (*destructor)(void *), void *arg, void *dso_handle);

// Function: <EXTERNAL>::__cxa_rethrow @ 0x100e20
// External declaration - actual implementation provided by libc
extern void __cxa_rethrow(void);

// Function: <EXTERNAL>::std_ios_base_Init_Init @ 0x100e30
void __thiscall_std_ios_base_Init_Init(Init *this)
{
 // Call the constructor function pointer
 if (this->ctor) {
  this->ctor(this);
 }
 return;
}

// Function: <EXTERNAL>::abort @ 0x100e40
// External declaration - actual implementation provided by libc
extern void abort(void);

// Function: <EXTERNAL>::__cxa_end_catch @ 0x100e50
// External declaration - actual implementation provided by libc
extern void __cxa_end_catch(void);

// Function: <EXTERNAL>::__gxx_personality_v0 @ 0x100e60
// External declaration - actual implementation provided by libc
extern void __gxx_personality_v0(void *ctx, int version, void *exception_info);

// Function: <EXTERNAL>::__cxa_throw @ 0x100e70
// External declaration - actual implementation provided by libc
extern void __cxa_throw(void *exception, const type_info *type_info, void (*destructor)(void *));

// Function: <EXTERNAL>::_Unwind_Resume @ 0x100e80
// External declaration - actual implementation provided by libc
extern void _Unwind_Resume(void *);

// Function: <EXTERNAL>::__gmon_start__ @ 0x100e90
// External declaration - actual implementation provided by libc
extern void __gmon_start__(void);

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
 __thiscall_std_ios_base_Init_Init((Init *)&std___ioinit);
 __cxa_atexit((void (*)(void *))__thiscall_std_ios_base_Init_Init,&std___ioinit,&__dso_handle);
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
 return LifecycleClass::instance_count * 0x3e9 + 0x15;
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
 __cxa_throw(puVar1,&int::typeinfo,0);
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
 *puVar1 = &PTR__RTTIBase_00111d58;
 plVar2 = (long *)operator_new(8);
 *plVar2 = (long)&PTR__RTTIBase_00111d80;
 lVar3 = __dynamic_cast(puVar1,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
 iVar4 = 0x1e;
 if (lVar3 != 0) {
 iVar4 = 0x82;
 }
 lVar3 = __dynamic_cast(plVar2,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
 if (lVar3 != 0) {
 iVar4 = iVar4 + 200;
 }
 operator_delete(puVar1);
 (**(void **)(*plVar2 + 8))(plVar2);
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
 puts(DAT_00101728);
 local_35 = 0;
 local_58 = 10;
 uStack_4c = 0;
 local_54 = 0x74736554;
 uStack_3d = 0;
 uStack_45 = 0;
 uStack_44 = 0;
 sVar2 = strlen((char *)((unsigned long)&local_58 | 4));
 printf(DAT_001015d1,(unsigned long)((int)sVar2 + 0x125c));
 printf(DAT_001015ef,(unsigned long)(LifecycleClass::instance_count * 0x3e9 + 0x15));
 printf(DAT_0010160b,0x2a);
 printf(DAT_00101627,0x47);
 printf(DAT_00101643,0x28a);
 printf(DAT_00101660,0x16);
 printf(DAT_0010167c,0x27);
 printf(DAT_00101698,0x10);
 printf(DAT_001016b4,0x55);
 uVar3 = test_cpp_exception();
 printf(DAT_001016d0,uVar3 & 0xffffffff);
 printf(DAT_001016ed,0x2bf);
 puVar4 = (unsigned long long *)operator_new(8);
 *puVar4 = &PTR__RTTIBase_00111d58;
 plVar5 = (long *)operator_new(8);
 *plVar5 = (long)&PTR__RTTIBase_00111d80;
 lVar6 = __dynamic_cast(puVar4,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
 iVar1 = 0x1e;
 if (lVar6 != 0) {
 iVar1 = 0x82;
 }
 lVar6 = __dynamic_cast(plVar5,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
 if (lVar6 != 0) {
 iVar1 = iVar1 + 200;
 }
 operator_delete(puVar4);
 (**(void **)(*plVar5 + 8))(plVar5);
 iVar1 = printf(DAT_0010170a,(unsigned long)(iVar1 + 0xe));
 return iVar1;
}

// Function: main @ 0x10144c
unsigned long long main(void)
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
void __thiscall_Container_int_Constructor(Container_int_ *this)
{
 *(unsigned int *)(this + 0x28) = 0;
 return;
}

// Function: Container_int_push @ 0x101498
void __thiscall_Container_int_push(Container_int_ *this,int param_1)
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
unsigned int __thiscall_Container_int_get(Container_int_ *this,int param_1)
{
 unsigned int uVar1;
 uVar1 = 0;
 if ((-1 < param_1) && (param_1 < *(int *)(this + 0x28))) {
 uVar1 = *(unsigned int *)(this + (unsigned long)(uint)param_1 * 4);
 }
 return uVar1;
}

// Function: Container_int_getSize @ 0x1014d4
unsigned int __thiscall_Container_int_getSize(Container_int_ *this)
{
 return *(unsigned int *)(this + 0x28);
}

// Function: Container_double_Constructor @ 0x1014dc
void __thiscall_Container_double_Constructor(Container_double_ *this)
{
 *(unsigned int *)(this + 0x50) = 0;
 return;
}

// Function: Container_double_push @ 0x1014e4
void __thiscall_Container_double_push(Container_double_ *this,double param_1)
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
unsigned long long __thiscall_Container_double_get(Container_double_ *this,int param_1)
{
 unsigned long long uVar1;
 uVar1 = 0;
 if ((-1 < param_1) && (param_1 < *(int *)(this + 0x50))) {
 uVar1 = *(unsigned long long *)(this + (unsigned long)(uint)param_1 * 8);
 }
 return uVar1;
}

// Function: Container_double_getSize @ 0x10151c
unsigned int __thiscall_Container_double_getSize(Container_double_ *this)
{
 return *(unsigned int *)(this + 0x50);
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x101524
void __thiscall RTTIDerivedA::_RTTIDerivedA(RTTIDerivedA *this)
{
 operator_delete(this);
 return;
}

// Function: RTTIDerivedA::getType @ 0x101528
unsigned long long RTTIDerivedA::getType(void)
{
 return 1;
}

// Function: RTTIBase::~RTTIBase @ 0x101530
void __thiscall RTTIBase::_RTTIBase(RTTIBase *this)
{
 return;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x101534
void __thiscall RTTIDerivedB::_RTTIDerivedB(RTTIDerivedB *this)
{
 operator_delete(this);
 return;
}

// Function: RTTIDerivedB::getType @ 0x101538
unsigned long long RTTIDerivedB::getType(void)
{
 return 2;
}

// Function: _fini @ 0x101540
void _fini(void)
{
 return;
}

