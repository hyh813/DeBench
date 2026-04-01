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

// Global variables needed by the code
char completed_0 = 0;
void *__dso_handle = 0;
void *stack0x00000008 = 0;

// Forward declarations
struct Base;
struct RTTIBase;
struct RTTIDerivedA;
struct RTTIDerivedB;
struct LifecycleClass;
struct int_;
struct std__ios_base__Init;
void call_weak_fn(int ctx);
int main(void);

// Typedefs for C compatibility
typedef struct Base Base;
typedef struct RTTIBase RTTIBase;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;
typedef struct LifecycleClass LifecycleClass;
typedef struct std__ios_base__Init std__ios_base__Init;

// Type info structures for RTTI
struct typeinfo {
    const char *name;
};
extern struct typeinfo int_typeinfo;
extern struct typeinfo RTTIBase_typeinfo;
extern struct typeinfo RTTIDerivedA_typeinfo;
extern struct typeinfo RTTIDerivedB_typeinfo;

// Base class for virtual function testing
struct Base {
    void (*vtable[1])(void *);
};

// RTTI type info definitions
struct typeinfo int_typeinfo = {"int"};
struct typeinfo RTTIBase_typeinfo = {"RTTIBase"};
struct typeinfo RTTIDerivedA_typeinfo = {"RTTIDerivedA"};
struct typeinfo RTTIDerivedB_typeinfo = {"RTTIDerivedB"};

// RTTI pointers
void *PTR__RTTIBase_00111d58 = &RTTIBase_typeinfo;
void *PTR__RTTIBase_00111d80 = &RTTIBase_typeinfo;

// RTTI class structures
struct RTTIBase {
    void (*vtable[2])(void *);
};

struct RTTIDerivedA {
    void (*vtable[2])(void *);
};

struct RTTIDerivedB {
    void (*vtable[2])(void *);
};

// LifecycleClass definition
struct LifecycleClass {
};
int LifecycleClass_instance_count = 0;

// std::ios_base::Init structure
struct std__ios_base__Init {
};
struct std__ios_base__Init __ioinit = {0};

// String constants (data references)
const char DAT_00101734[] = "Testing C++ Features:\n";
const char DAT_001015dd[] = "  Member function test: %d\n";
const char DAT_001015fb[] = "  Constructor test: %d\n";
const char DAT_00101617[] = "  Virtual function test: %llu\n";
const char DAT_00101633[] = "  Multiple inheritance test: %llu\n";
const char DAT_0010164f[] = "  Diamond inheritance test: %llu\n";
const char DAT_0010166c[] = "  Operator overload test: %llu\n";
const char DAT_00101688[] = "  Template function test: %llu\n";
const char DAT_001016a4[] = "  Template class test: %llu\n";
const char DAT_001016c0[] = "  Lambda test: %llu\n";
const char DAT_001016dc[] = "  Exception test: %llu\n";
const char DAT_001016f9[] = "  Smart pointer test: %llu\n";
const char DAT_00101716[] = "  RTTI test: %d\n";

// Decompiled by BinaryAI
// SHA256: 6114fd641e1e4a9548f1fff963f9e0542d4d06f047f847c2767a5f3429a836ed

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
 return;
}

// Function: <EXTERNAL>::puts @ 0x100d80
int puts(const char *__s);

// Function: <EXTERNAL>::strlen @ 0x100d90
size_t strlen(const char *__s);

// Function: <EXTERNAL>::__cxa_begin_catch @ 0x100da0
void *__cxa_begin_catch(void *);

// Function: <EXTERNAL>::__cxa_allocate_exception @ 0x100db0
void *__cxa_allocate_exception(size_t);

// Function: <EXTERNAL>::__cxa_finalize @ 0x100dc0
int __cxa_finalize(void *);

// Function: <EXTERNAL>::__libc_start_main @ 0x100dd0
int __libc_start_main(void (*)(void), int, void *, void (*)(void), void (*)(void), unsigned long);

// Function: <EXTERNAL>::operator.delete @ 0x100de0
void operator_delete(void *param_1);

// Helper macro to call operator delete - just call the function
#define OPERATOR_DELETE(p) operator_delete(p)

// Function: <EXTERNAL>::operator.new @ 0x100df0
void *operator_new(unsigned long param_1);

// Function: <EXTERNAL>::__dynamic_cast @ 0x100e00
void *__dynamic_cast(const void *, const struct typeinfo *, const struct typeinfo *, ptrdiff_t);

// Function: <EXTERNAL>::__cxa_atexit @ 0x100e10
int __cxa_atexit(void (*)(void *), void *, void *);

// Function: <EXTERNAL>::__cxa_rethrow @ 0x100e20
void __cxa_rethrow(void);

// Function: <EXTERNAL>::std::ios_base::Init::Init @ 0x100e30
void std__ios_base__Init__Init(std__ios_base__Init *this)
{
 return;
}

// Function: <EXTERNAL>::abort @ 0x100e40
void abort(void);

// Function: <EXTERNAL>::__cxa_end_catch @ 0x100e50
void __cxa_end_catch(void);

// Function: <EXTERNAL>::__gxx_personality_v0 @ 0x100e60
void __gxx_personality_v0(void);

// Function: <EXTERNAL>::__cxa_throw @ 0x100e70
void __cxa_throw(void *, struct typeinfo *, void (*)(void *));

// Function: <EXTERNAL>::_Unwind_Resume @ 0x100e80
void _Unwind_Resume(void);

// Function: <EXTERNAL>::__gmon_start__ @ 0x100e90
void __gmon_start__(void);

// Function: <EXTERNAL>::printf @ 0x100ea0
int printf(const char *__format,...);

// Function: _GLOBAL__sub_I_5_1.cpp @ 0x100ec0
void _GLOBAL__sub_I_5_1_cpp(void)
{
 std__ios_base__Init__Init(&__ioinit);
 __cxa_atexit((void (*)(void *))0,&__ioinit,&__dso_handle);
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
void call_weak_fn(int ctx)
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
 __cxa_throw(puVar1,&int_typeinfo,0);
}

// Function: test_cpp_smart_ptr @ 0x1011bc
unsigned long long test_cpp_smart_ptr(void)
{
 return 0x2bf;
}

// Function: test_cpp_rtti @ 0x1011c4
int test_cpp_rtti(void)
{
 void **puVar1;
 void **plVar2;
 long lVar3;
 int iVar4;
 puVar1 = (void **)operator_new(8);
 *(void **)puVar1 = &PTR__RTTIBase_00111d58;
 plVar2 = (void **)operator_new(8);
 *(void **)plVar2 = &PTR__RTTIBase_00111d80;
 lVar3 = (long)__dynamic_cast(puVar1,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0);
 iVar4 = 0x1e;
 if (lVar3 != 0) {
 iVar4 = 0x82;
 }
 lVar3 = (long)__dynamic_cast(plVar2,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo,0);
 if (lVar3 != 0) {
 iVar4 = iVar4 + 200;
 }
 operator_delete(puVar1);
 operator_delete(plVar2);
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
 puts(DAT_00101734);
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
 lVar6 = (long)__dynamic_cast(puVar4,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0);
 iVar1 = 0x1e;
 if (lVar6 != 0) {
 iVar1 = 0x82;
 }
 lVar6 = (long)__dynamic_cast(plVar5,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo,0);
 if (lVar6 != 0) {
 iVar1 = iVar1 + 200;
 }
 operator_delete(puVar4);
 (**(void **)(*plVar5 + 8))(plVar5);
 iVar1 = printf(&DAT_00101716,(unsigned long)(iVar1 + 0xe));
 return iVar1;
}

// Function: main @ 0x101458
int main(void)
{
 test_cpp_oo_features();
 return 0;
}

// Function: template_max_int @ 0x101470
int template_max_int(int param_1,int param_2)
{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: template_max_double @ 0x10147c
double template_max_double(double param_1,double param_2)
{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: template_swap_int @ 0x101488
void template_swap_int(int *param_1,int *param_2)
{
 int iVar1;
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}

// Function: Container_int_Container @ 0x10149c
void Container_int_Container(void *this)
{
 *(unsigned int *)((char *)this + 0x28) = 0;
 return;
}

// Function: Container_int_push @ 0x1014a4
void Container_int_push(void *this,int param_1)
{
 int iVar1;
 iVar1 = *(int *)((char *)this + 0x28);
 if (iVar1 < 10) {
 *(int *)((char *)this + 0x28) = iVar1 + 1;
 *(int *)((char *)this + (long)iVar1 * 4) = param_1;
 }
 return;
}

// Function: Container_int_get @ 0x1014c0
unsigned int Container_int_get(void *this,int param_1)
{
 unsigned int uVar1;
 uVar1 = 0;
 if ((-1 < param_1) && (param_1 < *(int *)((char *)this + 0x28))) {
 uVar1 = *(unsigned int *)((char *)this + (unsigned long)(uint)param_1 * 4);
 }
 return uVar1;
}

// Function: Container_int_getSize @ 0x1014e0
unsigned int Container_int_getSize(void *this)
{
 return *(unsigned int *)((char *)this + 0x28);
}

// Function: Container_double_Container @ 0x1014e8
void Container_double_Container(void *this)
{
 *(unsigned int *)((char *)this + 0x50) = 0;
 return;
}

// Function: Container_double_push @ 0x1014f0
void Container_double_push(void *this,double param_1)
{
 int iVar1;
 iVar1 = *(int *)((char *)this + 0x50);
 if (iVar1 < 10) {
 *(double *)((char *)this + (long)iVar1 * 8) = param_1;
 *(int *)((char *)this + 0x50) = iVar1 + 1;
 }
 return;
}

// Function: Container_double_get @ 0x10150c
unsigned long long Container_double_get(void *this,int param_1)
{
 unsigned long long uVar1;
 uVar1 = 0;
 if ((-1 < param_1) && (param_1 < *(int *)((char *)this + 0x50))) {
 uVar1 = *(unsigned long long *)((char *)this + (unsigned long)(uint)param_1 * 8);
 }
 return uVar1;
}

// Function: Container_double_getSize @ 0x101528
unsigned int Container_double_getSize(void *this)
{
 return *(unsigned int *)((char *)this + 0x50);
}

// Function: RTTIDerivedA_dtor @ 0x101530
void RTTIDerivedA_dtor(void *this)
{
 operator_delete(this);
 return;
}

// Function: RTTIDerivedA_getType @ 0x101534
unsigned long long RTTIDerivedA_getType(void)
{
 return 1;
}

// Function: RTTIBase_dtor @ 0x10153c
void RTTIBase_dtor(void *this)
{
 return;
}

// Function: RTTIDerivedB_dtor @ 0x101540
void RTTIDerivedB_dtor(void *this)
{
 operator_delete(this);
 return;
}

// Function: RTTIDerivedB_getType @ 0x101544
unsigned long long RTTIDerivedB_getType(void)
{
 return 2;
}

// Function: _fini @ 0x10154c
void _fini(void)
{
 return;
}

