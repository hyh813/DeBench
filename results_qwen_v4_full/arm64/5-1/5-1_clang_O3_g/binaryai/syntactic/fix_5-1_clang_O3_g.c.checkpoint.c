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
typedef unsigned long long undefined7;

// Global variables
char completed_0 = 0;
void *__dso_handle = 0;
void *std___ioinit = 0;
void *stack0x00000008 = 0;
void *PTR__RTTIBase_00111d58 = 0;
void *PTR__RTTIBase_00111d80 = 0;

// Forward declarations for classes
struct Base;
struct LifecycleClass;
struct Init;
struct RTTIBase;
struct RTTIDerivedA;
struct RTTIDerivedB;
struct Container_int_;
struct Container_double_;

// External typeinfo variables
void *RTTIBase_typeinfo = 0;
void *RTTIDerivedA_typeinfo = 0;
void *RTTIDerivedB_typeinfo = 0;

// External function declarations

// External data variables
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

// Define data variables (string literals)
char DAT_00101734[] = "Test";
char DAT_001015dd[] = "%d\n";
char DAT_001015fb[] = "%d\n";
char DAT_00101617[] = "%d\n";
char DAT_00101633[] = "%d\n";
char DAT_0010164f[] = "%d\n";
char DAT_0010166c[] = "%d\n";
char DAT_00101688[] = "%d\n";
char DAT_001016a4[] = "%d\n";
char DAT_001016c0[] = "%d\n";
char DAT_001016dc[] = "%d\n";
char DAT_001016f9[] = "%d\n";
char DAT_00101716[] = "%d\n";

// Class definitions
struct Base {
 void *vtable;
};

struct LifecycleClass {
 int instance_count;
};
int LifecycleClass_instance_count = 0;

struct Init {
 void *this_ptr;
};

struct RTTIBase {
 void *vtable;
};

struct RTTIDerivedA {
 void *vtable;
};

struct RTTIDerivedB {
 void *vtable;
};

struct Container_int_ {
 int data[10];
 int count;
 void (*Container)(struct Container_int_ *this_);
 void (*push)(struct Container_int_ *this_, int param_1);
 unsigned int (*get)(struct Container_int_ *this_, int param_1);
 unsigned int (*getSize)(struct Container_int_ *this_);
};

struct Container_double_ {
 double data[10];
 int count;
 void (*Container)(struct Container_double_ *this_);
 void (*push)(struct Container_double_ *this_, double param_1);
 unsigned long long (*get)(struct Container_double_ *this_, int param_1);
 unsigned int (*getSize)(struct Container_double_ *this_);
};

namespace std {
 struct ios_base {
  void *_M_word;
 };
 struct ios_base_Init {
  void *_M_word;
 };
}
// Forward declarations
int call_weak_fn(intptr_t ctx);
int main(void);

// Stub implementation for call_weak_fn
int call_weak_fn(intptr_t ctx)
{
 (void)ctx;
 return 0;
}

// Decompiled by BinaryAI
// SHA256: f4944c588722aadfe50188896eb4628ac67467ab3c04fe1d512c182126808fd8

// Function: _init @ 0x100d48
int _init(void *ctx)
{
 int iVar1;
 iVar1 = call_weak_fn((intptr_t)ctx);
 return iVar1;
}

// Function: FUN_00100d60 @ 0x100d60
void FUN_00100d60(void)
{
 ((void (*)(void))(char *)0x0)();
 return;
}

// Function: <EXTERNAL>::puts @ 0x100d80
static int puts_stub(char *__s)
{
 (void)__s;
 return 0;
}

// Function: <EXTERNAL>::strlen @ 0x100d90
static size_t strlen_stub(const char *__s)
{
 size_t len = 0;
 while (__s[len] != 0) {
  len++;
 }
 return len;
}

// Function: <EXTERNAL>::__cxa_begin_catch @ 0x100da0
static void __cxa_begin_catch(void)
{
 return;
}

// Function: <EXTERNAL>::__cxa_allocate_exception @ 0x100db0
static void *__cxa_allocate_exception(size_t size)
{
 (void)size;
 return (void *)0;
}

// Function: <EXTERNAL>::__cxa_throw @ 0x100db8
static void __cxa_throw(void *thrown_exception, void *tinfo, void *dest)
{
 (void)thrown_exception;
 (void)tinfo;
 (void)dest;
 return;
}



// Function: <EXTERNAL>::__cxa_finalize @ 0x100dc0
static void __cxa_finalize(void *param_1)
{
 (void)param_1;
 return;
}



// Function: <EXTERNAL>::operator.delete @ 0x100de0
static void operator_delete(void *param_1)
{
 (void)param_1;
 return;
}

// Function: <EXTERNAL>::operator.new @ 0x100df0
static void * operator_new(unsigned long param_1)
{
 (void)param_1;
 return (void *)0;
}

// Function: <EXTERNAL>::__dynamic_cast @ 0x100e00
static void *__dynamic_cast(void *obj, void *src_type, void *dest_type, int flags)
{
 (void)obj;
 (void)src_type;
 (void)dest_type;
 (void)flags;
 return (void *)0;
}



// Function: <EXTERNAL>::__cxa_rethrow @ 0x100e20
static void __cxa_rethrow(void)
{
 return;
}



// Function: <EXTERNAL>::abort @ 0x100e40
static void abort_stub(void)
{
 return;
}

// Function: <EXTERNAL>::__cxa_end_catch @ 0x100e50
static void __cxa_end_catch(void)
{
 return;
}





// Function: <EXTERNAL>::_Unwind_Resume @ 0x100e80
static void _Unwind_Resume(void)
{
 return;
}

// Function: <EXTERNAL>::__gmon_start__ @ 0x100e90
static void __gmon_start__(void)
{
 return;
}

// Function: <EXTERNAL>::printf @ 0x100ea0
static int printf_stub(char *__format,...)
{
 (void)__format;
 return 0;
}

// Function: _GLOBAL__sub_I_5_1.cpp @ 0x100ec0
void _GLOBAL__sub_I_5_1_cpp(void)
{
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
 uStack_2c = 0;
 local_34 = 0x74736554;
 uStack_1d = 0;
 uStack_25 = 0;
 uStack_24 = 0;
 sVar1 = strlen_stub((char *)((uintptr_t)&local_38 | 4));
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
 void **vtable = (void **)param_1->vtable;
 void (*func)(Base *, int) = (void (*)(Base *, int))vtable[0];
 func(param_1, param_2);
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
 __cxa_throw(puVar1,(void *)0,0);
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
 unsigned long long *plVar2;
 void *lVar3;
 int iVar4;
 puVar1 = (unsigned long long *)operator_new(8);
 *puVar1 = (unsigned long long)&PTR__RTTIBase_00111d58;
 plVar2 = (unsigned long long *)operator_new(8);
 *plVar2 = (unsigned long long)&PTR__RTTIBase_00111d80;
 lVar3 = __dynamic_cast(puVar1,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0);
 iVar4 = 0x1e;
 if (lVar3 != 0) {
 iVar4 = 0x82;
 }
 lVar3 = __dynamic_cast((void *)plVar2,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo,0);
 if (lVar3 != 0) {
 iVar4 = iVar4 + 200;
 }
 operator_delete(puVar1);
 ((void (*)(unsigned long long *))(*(void **)((char *)*plVar2 + 8)))(plVar2);
 return iVar4 + 0xe;
}

// Function: test_cpp_oo_features @ 0x101284
int test_cpp_oo_features(void)
{
 int iVar1;
 size_t sVar2;
 unsigned long long *puVar4;
 uintptr_t *plVar5;
 void *lVar6;
 unsigned int local_58;
 unsigned long long local_54;
 undefined7 uStack_4c;
 char uStack_45;
 undefined7 uStack_44;
 unsigned long long uStack_3d;
 char local_35;
 puts_stub(DAT_00101734);
 local_35 = 0;
 local_58 = 10;
 uStack_4c = 0;
 local_54 = 0x74736554;
 uStack_3d = 0;
 uStack_45 = 0;
 uStack_44 = 0;
 sVar2 = strlen_stub((char *)((uintptr_t)&local_58 | 4));
 printf_stub((char *)&DAT_001015dd,(unsigned long)((int)sVar2 + 0x125c));
 printf_stub((char *)&DAT_001015fb,(unsigned long)(LifecycleClass_instance_count * 0x3e9 + 0x15));
 printf_stub((char *)&DAT_00101617,0x2a);
 printf_stub((char *)&DAT_00101633,0x47);
 printf_stub((char *)&DAT_0010164f,0x28a);
 printf_stub((char *)&DAT_0010166c,0x16);
 printf_stub((char *)&DAT_00101688,0x27);
 printf_stub((char *)&DAT_001016a4,0x10);
 printf_stub((char *)&DAT_001016c0,0x55);
 test_cpp_exception();
 printf_stub((char *)&DAT_001016dc,0);
 printf_stub((char *)&DAT_001016f9,0x2bf);
 puVar4 = (unsigned long long *)operator_new(8);
 *puVar4 = (unsigned long long)&PTR__RTTIBase_00111d58;
 plVar5 = (uintptr_t *)operator_new(8);
 *plVar5 = (uintptr_t)&PTR__RTTIBase_00111d80;
 lVar6 = __dynamic_cast(puVar4,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0);
 iVar1 = 0x1e;
 if (lVar6 != 0) {
 iVar1 = 0x82;
 }
 lVar6 = __dynamic_cast(plVar5,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo,0);
 if (lVar6 != 0) {
 iVar1 = iVar1 + 200;
 }
 operator_delete(puVar4);
 ((void (*)(uintptr_t *))(*(void **)((char *)*plVar5 + 8)))(plVar5);
 iVar1 = printf_stub((char *)&DAT_00101716,(unsigned long)(iVar1 + 0xe));
 return iVar1;
}

// Function: main @ 0x101458
int main(void)
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

// Function: Container_int_Container @ 0x10149c
void Container_int_Container(Container_int_ *this_)
{
 *(unsigned int *)((char *)this_ + 0x28) = 0;
 return;
}

// Function: Container_int_push @ 0x1014a4
void Container_int_push(Container_int_ *this_,int param_1)
{
 int iVar1;
 iVar1 = *(int *)((char *)this_ + 0x28);
 if (iVar1 < 10) {
 *(int *)((char *)this_ + 0x28) = iVar1 + 1;
 *(int *)((char *)this_ + (long)iVar1 * 4) = param_1;
 }
 return;
}

// Function: Container_int_get @ 0x1014c0
unsigned int Container_int_get(Container_int_ *this_,int param_1)
{
 unsigned int uVar1;
 uVar1 = 0;
 if ((-1 < param_1) && (param_1 < *(int *)((char *)this_ + 0x28))) {
 uVar1 = *(unsigned int *)((char *)this_ + (unsigned long)(uint)param_1 * 4);
 }
 return uVar1;
}

// Function: Container_int_getSize @ 0x1014e0
unsigned int Container_int_getSize(Container_int_ *this_)
{
 return *(unsigned int *)((char *)this_ + 0x28);
}

// Function: Container_double_Container @ 0x1014e8
void Container_double_Container(Container_double_ *this_)
{
 *(unsigned int *)((char *)this_ + 0x50) = 0;
 return;
}

// Function: Container_double_push @ 0x1014f0
void Container_double_push(Container_double_ *this_,double param_1)
{
 int iVar1;
 iVar1 = *(int *)((char *)this_ + 0x50);
 if (iVar1 < 10) {
 *(double *)((char *)this_ + (long)iVar1 * 8) = param_1;
 *(int *)((char *)this_ + 0x50) = iVar1 + 1;
 }
 return;
}

// Function: Container_double_get @ 0x10150c
unsigned long long Container_double_get(Container_double_ *this_,int param_1)
{
 unsigned long long uVar1;
 uVar1 = 0;
 if ((-1 < param_1) && (param_1 < *(int *)((char *)this_ + 0x50))) {
 uVar1 = *(unsigned long long *)((char *)this_ + (unsigned long)(uint)param_1 * 8);
 }
 return uVar1;
}

// Function: Container_double_getSize @ 0x101528
unsigned int Container_double_getSize(Container_double_ *this_)
{
 return *(unsigned int *)((char *)this_ + 0x50);
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x101530
void RTTIDerivedA__RTTIDerivedA(RTTIDerivedA *this_)
{
 operator_delete(this_);
 return;
}

// Function: RTTIDerivedA::getType @ 0x101534
unsigned long long RTTIDerivedA_getType(void)
{
 return 1;
}

// Function: RTTIBase::~RTTIBase @ 0x10153c
void RTTIBase__RTTIBase(RTTIBase *this_)
{
 return;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x101540
void RTTIDerivedB__RTTIDerivedB(RTTIDerivedB *this_)
{
 operator_delete(this_);
 return;
}

// Function: RTTIDerivedB::getType @ 0x101544
unsigned long long RTTIDerivedB_getType(void)
{
 return 2;
}

// Function: _fini @ 0x10154c
void _fini(void)
{
 return;
}

