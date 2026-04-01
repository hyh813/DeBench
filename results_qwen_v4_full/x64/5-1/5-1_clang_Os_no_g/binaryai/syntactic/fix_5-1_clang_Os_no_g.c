#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <stddef.h>
#include <unistd.h>
#include <stdbool.h>
#include <inttypes.h>
#include <math.h>
#include <errno.h>

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Werror"
#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-function"
#pragma GCC diagnostic ignored "-Wimplicit-function-declaration"

/* Auto-injected type definitions by preprocessor */
typedef long long_t;
typedef unsigned long ulong_t;

// Forward declarations for undefined types
typedef struct Base Base;
typedef struct LifecycleClass LifecycleClass;
typedef struct RTTIBase RTTIBase;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;
typedef struct Container_int_ Container_int_;
typedef struct Container_double_ Container_double_;

// Define the structs
struct Base {
    int dummy;
};

struct LifecycleClass {
    int dummy;
};

struct RTTIBase {
    int dummy;
};

struct RTTIDerivedA {
    int dummy;
};

struct RTTIDerivedB {
    int dummy;
};

struct Container_int_ {
    char data[40];
};

struct Container_double_ {
    char data[80];
};

// Define Init struct
struct Init {
    int dummy;
};

// Forward declaration for main
int main(void);

// Forward declarations for test functions
int test_cpp_member_func(void);
int test_cpp_constructor(void);
void call_virtual_func(Base *param_1,int param_2);
unsigned long long test_cpp_virtual_func(void);
unsigned long long test_cpp_multiple_inheritance(void);
unsigned long long test_cpp_diamond_inheritance(void);
unsigned long long test_cpp_operator_overload(void);
unsigned long long test_cpp_template_func(void);
unsigned long long test_cpp_template_class(void);
unsigned long long test_cpp_lambda(void);
unsigned int test_cpp_exception(void);
unsigned long long test_cpp_smart_ptr(void);
int test_cpp_rtti(void);
void test_cpp_oo_features(void);

// Forward declarations for template functions
int template_max_int_(int param_1,int param_2);
double template_max_double_(double param_1,double param_2);
void template_swap_int_(int *param_1,int *param_2);

// Forward declarations for Container_int_ functions
void Container_int__Container(Container_int_ *this);
void Container_int__push(Container_int_ *this,int param_1);
unsigned int Container_int__get(Container_int_ *this,int param_1);
unsigned int Container_int__getSize(Container_int_ *this);

// Forward declarations for Container_double_ functions
void Container_double__Container(Container_double_ *this);
void Container_double__push(Container_double_ *this,double param_1);
double Container_double__get(Container_double_ *this,int param_1);
unsigned int Container_double__getSize(Container_double_ *this);

// Forward declarations for RTTI functions
void RTTIDerivedA__RTTIDerivedA(RTTIDerivedA *this);
unsigned long long RTTIDerivedA_getType(void);
void RTTIBase__RTTIBase(RTTIBase *this);
void RTTIDerivedB__RTTIDerivedB(RTTIDerivedB *this);
unsigned long long RTTIDerivedB_getType(void);

// Forward declarations for other functions
void _GLOBAL__sub_I_5_1_cpp(void);
void deregister_tm_clones(void);
void register_tm_clones(void);
void __do_global_dtors_aux(void);
void _fini(void);
void FUN_00101020(void);

// Type definitions
typedef unsigned char undefined_t;
typedef unsigned int undefined3_t;
typedef unsigned int undefined4_t;
typedef unsigned long undefined8_t;
typedef unsigned int uint;
typedef unsigned char byte;
typedef unsigned short word;
typedef unsigned long dword;

// Forward declarations for external C++ runtime functions
void *operator_new(unsigned long param_1);
void *operator_new__(unsigned long param_1);
void operator_delete(void *param_1);
void operator_delete__(void *param_1);
void *__dynamic_cast(void *obj, void *src_type, void *dst_type, int flags);
void *__cxa_allocate_exception(size_t size);
void *__cxa_begin_catch(void *param);
void __cxa_end_catch(void);
void __cxa_throw(void *exc, void *type, void *dest);
void __cxa_rethrow(void);
int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle);
void __cxa_finalize(void *dso);
void _Unwind_Resume(void *exc);
void std_ios_base_Init_Init(struct Init *this);

// Stub implementations for external C++ runtime functions
void *operator_new(unsigned long param_1) { return malloc(param_1); }
void *operator_new__(unsigned long param_1) { return malloc(param_1); }
void operator_delete(void *param_1) { free(param_1); }
void operator_delete__(void *param_1) { free(param_1); }
void *__dynamic_cast(void *obj, void *src_type, void *dst_type, int flags) { return obj; }
void *__cxa_allocate_exception(size_t size) { return malloc(size); }
void *__cxa_begin_catch(void *param) { return param; }
void __cxa_end_catch(void) { }
void __cxa_throw(void *exc, void *type, void *dest) { }
void __cxa_rethrow(void) { }
int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle) { return 0; }
void __cxa_finalize(void *dso) { }
void _Unwind_Resume(void *exc) { }
void std_ios_base_Init_Init(struct Init *this) { (void)this; }

// Global variables
int completed_0 = 0;
void *__dso_handle = (void *)0;
struct Init std___ioinit = {0};
int LifecycleClass_instance_count = 0;
void *PTR__RTTIBase_00103d78 = (void *)0;
void *PTR__RTTIBase_00103da0 = (void *)0;
void *RTTIBase_typeinfo = (void *)0;
void *RTTIDerivedA_typeinfo = (void *)0;
void *RTTIDerivedB_typeinfo = (void *)0;
char DAT_001021d4[] = "Testing C++ OO features";
char DAT_0010207d[] = "test_cpp_member_func: %lu\n";
char DAT_0010209b[] = "test_cpp_constructor: %lu\n";
char DAT_001020b7[] = "test_cpp_virtual_func: %lu\n";
char DAT_001020d3[] = "test_cpp_multiple_inheritance: %lu\n";
char DAT_001020ef[] = "test_cpp_diamond_inheritance: %lu\n";
char DAT_0010210c[] = "test_cpp_operator_overload: %lu\n";
char DAT_00102128[] = "test_cpp_template_func: %lu\n";
char DAT_00102144[] = "test_cpp_template_class: %lu\n";
char DAT_00102160[] = "test_cpp_lambda: %lu\n";
char DAT_0010217c[] = "test_cpp_exception: %lu\n";
char DAT_00102199[] = "test_cpp_smart_ptr: %lu\n";
char DAT_001021b6[] = "test_cpp_rtti: %lu\n";

// Decompiled by BinaryAI
// SHA256: ab9bb528a91221b32fa049eb4a600782fb1f0b2bb8f2b86bec46db2198bcdfaf

// Function: _init @ 0x101000
int _init(void)
{
 return 0;
}

// Function: FUN_00101020 @ 0x101020
void FUN_00101020(void)
{
 return;
}

// Function: <EXTERNAL>::operator.new[] @ 0x101030
// Already declared above

// Function: <EXTERNAL>::printf @ 0x101040
// Using standard printf from stdio.h

// Function: <EXTERNAL>::__cxa_begin_catch @ 0x101050
// Already declared above

// Function: <EXTERNAL>::strlen @ 0x101060
// Using standard strlen from string.h

// Function: <EXTERNAL>::__cxa_allocate_exception @ 0x101070
// Already declared above

// Function: <EXTERNAL>::__cxa_atexit @ 0x101080
// Already declared above

// Function: <EXTERNAL>::operator.delete @ 0x101090
// Already declared above

// Function: <EXTERNAL>::operator.new @ 0x1010a0
// Already declared above

// Function: <EXTERNAL>::__dynamic_cast @ 0x1010b0
// Already declared above

// Function: <EXTERNAL>::operator.delete[] @ 0x1010c0
// Already declared above

// Function: <EXTERNAL>::__cxa_rethrow @ 0x1010d0
// Already declared above

// Function: <EXTERNAL>::std::ios_base::Init::Init @ 0x1010e0
// Already declared above

// Function: <EXTERNAL>::puts @ 0x1010f0
// Using standard puts from stdio.h

// Function: <EXTERNAL>::__cxa_end_catch @ 0x101100
// Already declared above

// Function: <EXTERNAL>::__cxa_throw @ 0x101110
// Already declared above

// Function: <EXTERNAL>::_Unwind_Resume @ 0x101120
// Already declared above

// Function: <EXTERNAL>::__cxa_finalize @ 0x101130
// Already declared above

// Function: _GLOBAL__sub_I_5_1.cpp @ 0x101140
void _GLOBAL__sub_I_5_1_cpp(void)
{
 std_ios_base_Init_Init(&std___ioinit);
 __cxa_atexit((void (*)(void *))FUN_00101020,&std___ioinit,&__dso_handle);
 return;
}

// Function: _start @ 0x101170
void _start(unsigned long long param_1,unsigned long long param_2)
{
 char auStack_8 [8];
 (void)param_1;
 (void)param_2;
 (void)auStack_8;
 main();
 exit(0);
}

// Function: deregister_tm_clones @ 0x1011a0
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x1011d0
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x101210
void __do_global_dtors_aux(void)
{
 if (completed_0 != '\0') {
 return;
 }
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = 1;
 return;
}

// Function: test_cpp_member_func @ 0x10125c
int test_cpp_member_func(void)
{
 size_t sVar1;
 unsigned int local_24;
 unsigned int uStack_20;
 unsigned int uStack_1c;
 unsigned int uStack_18;
 undefined3_t uStack_14;
 unsigned int uStack_11;
 unsigned int uStack_d;
 unsigned int uStack_9;
 char local_5;
 uStack_14 = 0;
 uStack_11 = 0;
 uStack_d = 0;
 uStack_9 = 0;
 local_24 = 0x74736554;
 uStack_20 = 0;
 uStack_1c = 0;
 uStack_18 = 0;
 local_5 = 0;
 sVar1 = strlen((char *)&local_24);
 return (int)sVar1 + 0x125c;
}

// Function: test_cpp_constructor @ 0x101294
int test_cpp_constructor(void)
{
 unsigned int *puVar1;
 long lVar2;
 unsigned int *puVar3;
 int iVar4;
 puVar1 = (unsigned int *)operator_new__(0x14);
 lVar2 = 0;
 puVar3 = puVar1;
 do {
 *puVar3 = (int)lVar2;
 lVar2 = lVar2 + 10;
 puVar3 = puVar3 + 1;
 } while (lVar2 != 0x32);
 LifecycleClass_instance_count = LifecycleClass_instance_count + 1;
 iVar4 = LifecycleClass_instance_count + puVar1[2];
 operator_delete__(puVar1);
 LifecycleClass_instance_count = LifecycleClass_instance_count + -1;
 return LifecycleClass_instance_count * 1000 + iVar4;
}

// Function: call_virtual_func @ 0x1012e5
void call_virtual_func(Base *param_1,int param_2)
{
 (void)param_1;
 (void)param_2;
 return;
}

// Function: test_cpp_virtual_func @ 0x1012ed
unsigned long long test_cpp_virtual_func(void)
{
 return 0x2a;
}

// Function: test_cpp_multiple_inheritance @ 0x1012f3
unsigned long long test_cpp_multiple_inheritance(void)
{
 return 0x47;
}

// Function: test_cpp_diamond_inheritance @ 0x1012f9
unsigned long long test_cpp_diamond_inheritance(void)
{
 return 0x28a;
}

// Function: test_cpp_operator_overload @ 0x1012ff
unsigned long long test_cpp_operator_overload(void)
{
 return 0x16;
}

// Function: test_cpp_template_func @ 0x101305
unsigned long long test_cpp_template_func(void)
{
 return 0x27;
}

// Function: test_cpp_template_class @ 0x10130b
unsigned long long test_cpp_template_class(void)
{
 return 0x10;
}

// Function: test_cpp_lambda @ 0x101311
unsigned long long test_cpp_lambda(void)
{
 return 0x55;
}

// Function: test_cpp_exception @ 0x101317
unsigned int test_cpp_exception(void)
{
 return 0x2a;
}

// Function: test_cpp_smart_ptr @ 0x1013d7
unsigned long long test_cpp_smart_ptr(void)
{
 return 0x2bf;
}

// Function: test_cpp_rtti @ 0x1013dd
int test_cpp_rtti(void)
{
 int iVar1;
 unsigned long long *puVar2;
 long *plVar3;
 long lVar4;
 int iVar5;
 puVar2 = (unsigned long long *)operator_new(8);
 *puVar2 = (unsigned long long)(uintptr_t)PTR__RTTIBase_00103d78;
 plVar3 = (long *)operator_new(8);
 *plVar3 = (long)(uintptr_t)PTR__RTTIBase_00103da0;
 lVar4 = (long)__dynamic_cast((void*)puVar2,RTTIBase_typeinfo,RTTIDerivedA_typeinfo,0);
 iVar1 = 0x82;
 if (lVar4 == 0) {
 iVar1 = 0x1e;
 }
 lVar4 = (long)__dynamic_cast((void*)plVar3,RTTIBase_typeinfo,RTTIDerivedB_typeinfo,0);
 iVar5 = iVar1 + 200;
 if (lVar4 == 0) {
 iVar5 = iVar1;
 }
 operator_delete(puVar2);
 operator_delete(plVar3);
 return iVar5 + 0xe;
}

// Function: test_cpp_oo_features @ 0x10147f
void test_cpp_oo_features(void)
{
 uint uVar1;
 size_t sVar2;
 unsigned int local_24;
 unsigned int uStack_20;
 unsigned int uStack_1c;
 unsigned int uStack_18;
 undefined3_t uStack_14;
 unsigned int uStack_11;
 unsigned int uStack_d;
 unsigned int uStack_9;
 char local_5;
 puts(DAT_001021d4);
 uStack_14 = 0;
 uStack_11 = 0;
 uStack_d = 0;
 uStack_9 = 0;
 local_24 = 0x74736554;
 uStack_20 = 0;
 uStack_1c = 0;
 uStack_18 = 0;
 local_5 = 0;
 sVar2 = strlen((char *)&local_24);
 printf(DAT_0010207d,(unsigned long)((int)sVar2 + 0x125c));
 uVar1 = test_cpp_constructor();
 printf(DAT_0010209b,(unsigned long)uVar1);
 printf(DAT_001020b7,0x2a);
 printf(DAT_001020d3,0x47);
 printf(DAT_001020ef,0x28a);
 printf(DAT_0010210c,0x16);
 printf(DAT_00102128,0x27);
 printf(DAT_00102144,0x10);
 printf(DAT_00102160,0x55);
 uVar1 = test_cpp_exception();
 printf(DAT_0010217c,(unsigned long)uVar1);
 printf(DAT_00102199,0x2bf);
 uVar1 = test_cpp_rtti();
 printf(DAT_001021b6,(unsigned long)uVar1);
 return;
}

// Function: main @ 0x1015a8
int main(void)
{
 test_cpp_oo_features();
 return 0;
}

// Function: template_max<int> @ 0x1015b2
int template_max_int_(int param_1,int param_2)
{
 if (param_2 < param_1) {
 param_2 = param_1;
 }
 return param_2;
}

// Function: template_max<double> @ 0x1015ba
double template_max_double_(double param_1,double param_2)
{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: template_swap<int> @ 0x1015bf
void template_swap_int_(int *param_1,int *param_2)
{
 int iVar1;
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}

// Function: Container_int_::Container @ 0x1015c8
void Container_int__Container(Container_int_ *this)
{
 *(unsigned int *)((char *)this + 0x28) = 0;
 return;
}

// Function: Container_int_::push @ 0x1015d0
void Container_int__push(Container_int_ *this,int param_1)
{
 int iVar1;
 iVar1 = *(int *)((char *)this + 0x28);
 if ((long)iVar1 < 10) {
 *(int *)((char *)this + 0x28) = iVar1 + 1;
 *(int *)((char *)this + (long)iVar1 * 4) = param_1;
 }
 return;
}

// Function: Container_int_::get @ 0x1015e4
unsigned int Container_int__get(Container_int_ *this,int param_1)
{
 unsigned int uVar1;
 uVar1 = 0;
 if ((-1 < param_1) && (*(int *)((char *)this + 0x28) != param_1 && param_1 <= *(int *)((char *)this + 0x28))) {
 uVar1 = *(unsigned int *)((char *)this + (unsigned long)(uint)param_1 * 4);
 }
 return uVar1;
}

// Function: Container_int_::getSize @ 0x1015f6
unsigned int Container_int__getSize(Container_int_ *this)
{
 return *(unsigned int *)((char *)this + 0x28);
}

// Function: Container_double_::Container @ 0x1015fa
void Container_double__Container(Container_double_ *this)
{
 *(unsigned int *)((char *)this + 0x50) = 0;
 return;
}

// Function: Container_double_::push @ 0x101602
void Container_double__push(Container_double_ *this,double param_1)
{
 int iVar1;
 iVar1 = *(int *)((char *)this + 0x50);
 if ((long)iVar1 < 10) {
 *(int *)((char *)this + 0x50) = iVar1 + 1;
 *(double *)((char *)this + (long)iVar1 * 8) = param_1;
 }
 return;
}

// Function: Container_double_::get @ 0x101618
double Container_double__get(Container_double_ *this,int param_1)
{
 double uVar1;
 uVar1 = 0.0;
 if ((-1 < param_1) && (*(int *)((char *)this + 0x50) != param_1 && param_1 <= *(int *)((char *)this + 0x50))) {
 uVar1 = *(double *)((char *)this + (unsigned long)(uint)param_1 * 8);
 }
 return uVar1;
}

// Function: Container_double_::getSize @ 0x10162c
unsigned int Container_double__getSize(Container_double_ *this)
{
 return *(unsigned int *)((char *)this + 0x50);
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x101630
void RTTIDerivedA__RTTIDerivedA(RTTIDerivedA *this)
{
 operator_delete(this);
 return;
}

// Function: RTTIDerivedA::getType @ 0x101636
unsigned long long RTTIDerivedA_getType(void)
{
 return 1;
}

// Function: RTTIBase::~RTTIBase @ 0x10163c
void RTTIBase__RTTIBase(RTTIBase *this)
{
 (void)this;
 return;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x10163e
void RTTIDerivedB__RTTIDerivedB(RTTIDerivedB *this)
{
 operator_delete(this);
 return;
}

// Function: RTTIDerivedB::getType @ 0x101644
unsigned long long RTTIDerivedB_getType(void)
{
 return 2;
}

// Function: _fini @ 0x10164c
void _fini(void)
{
 return;
}

#pragma GCC diagnostic pop

