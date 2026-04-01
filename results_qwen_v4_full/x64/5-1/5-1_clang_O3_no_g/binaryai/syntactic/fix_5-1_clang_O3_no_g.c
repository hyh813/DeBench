/* Auto-injected type definitions by preprocessor */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>
#include <unistd.h>
#include <errno.h>
#include <limits.h>
#include <stdarg.h>

// Forward declare types
typedef struct Init Init;
typedef struct Base Base;
typedef struct RTTIBase RTTIBase;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;
typedef struct Container_int_ Container_int_;
typedef struct Container_double_ Container_double_;
typedef struct LifecycleClass LifecycleClass;

// Define Init struct
struct Init {
    char dummy;
};

// Forward declarations for undefined symbols
extern int __libc_start_main(int (*main)(int, char **), int argc, char **argv, void (*init)(void), void (*fini)(void), void *rtld_fini, void *stack_end);
extern size_t strlen(const char *s);
extern int printf(const char *format, ...);
extern int puts(const char *s);
extern int main(int argc, char **argv);

// Define global variables (were extern)
int completed_0 = 0;
struct Init std___ioinit = {0};
int DAT_001021d4 = 0;
char DAT_0010207d[] = "%d\n";
char DAT_0010209b[] = "%d\n";
char DAT_001020b7[] = "%d\n";
char DAT_001020d3[] = "%d\n";
char DAT_001020ef[] = "%d\n";
char DAT_0010210c[] = "%d\n";
char DAT_00102128[] = "%d\n";
char DAT_00102144[] = "%d\n";
char DAT_00102160[] = "%d\n";
char DAT_0010217c[] = "%d\n";
char DAT_00102199[] = "%d\n";
char DAT_001021b6[] = "%d\n";
const void *PTR__RTTIBase_00103d78 = NULL;
const void *PTR__RTTIBase_00103da0 = NULL;
const void *typeinfo_int = NULL;
const void *typeinfo = NULL;
const void *typeinfo_derivedA = NULL;
const void *typeinfo_derivedB = NULL;
int instance_count = 0;
void *__dso_handle = NULL;


// Define missing struct types
struct Base {
    void *vtable;
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
    int size;
};

struct Container_double_ {
    double data[10];
    int size;
};

struct LifecycleClass {
    int dummy;
};

// Forward declare namespaces (commented out for C compatibility)
// namespace std {
//     extern char __ioinit;
//     namespace ios_base {
//         class Init {
//         public:
//             void _Init(void);
//         };
//     }
// }

// Global variables
// namespace LifecycleClass {
//     extern int instance_count;
// }
// namespace int {
//     extern void *typeinfo_int;
// }
// namespace RTTIBase {
//     extern void *typeinfo;
// }
// namespace RTTIDerivedA {
//     extern void *typeinfo_derivedA;
// }
// namespace RTTIDerivedB {
//     extern void *typeinfo_derivedB;
// }

// Decompiled by BinaryAI
// SHA256: 5d02349844d25a496f5e07dea4ea0b2c41b31abb19c209e1a5560e148b73bbd3

// Function: _init @ 0x101000
int _init(void *ctx)
{
 (void)ctx;
 return 0;
}

// Function: FUN_00101020 @ 0x101020
void FUN_00101020(void)
{
 (*(void *)(char *)0x0)();
 return;
}



// Function: <EXTERNAL>::__cxa_begin_catch @ 0x101040
void *__cxa_begin_catch(void *exc) { return exc; }

// Function: <EXTERNAL>::__cxa_allocate_exception @ 0x101060
void *__cxa_allocate_exception(size_t __size) { return malloc(__size); }

// Function: <EXTERNAL>::__cxa_atexit @ 0x101070
int __cxa_atexit(void (*__func)(void *), void *__arg, void *__d) { (void)__func; (void)__arg; (void)__d; return 0; }

// Function: <EXTERNAL>::__cxa_finalize @ 0x101110
void __cxa_finalize(void *d) { (void)d; }

// Function: <EXTERNAL>::operator.delete @ 0x101080
void operator_delete(void *param_1) { free(param_1); }

// Function: <EXTERNAL>::operator.new @ 0x101090
void *operator_new(unsigned long param_1) { return malloc(param_1); }

// Function: <EXTERNAL>::__dynamic_cast @ 0x1010a0
void *__dynamic_cast(const void *obj, const void *old_type, const void *new_type, int flags) { (void)obj; (void)old_type; (void)new_type; (void)flags; return NULL; }

// Function: <EXTERNAL>::__cxa_rethrow @ 0x1010b0
void __cxa_rethrow(void) { }

// Function: <EXTERNAL>::std::ios_base::Init::Init @ 0x1010c0
void std_ios_base_Init_Init(struct Init *this)
{
 (void)this;
}



// Function: <EXTERNAL>::__cxa_end_catch @ 0x1010e0
void __cxa_end_catch(void) { }

// Function: <EXTERNAL>::__cxa_throw @ 0x1010f0
void __cxa_throw(void *thrown_exception, void *tinfo, void (*dest)(void *)) { (void)thrown_exception; (void)tinfo; (void)dest; }

// Function: <EXTERNAL>::_Unwind_Resume @ 0x101100
void _Unwind_Resume(void *exc) { (void)exc; }

// Function: _GLOBAL__sub_I_5_1.cpp @ 0x101120
void _GLOBAL__sub_I_5_1_cpp(void)
{
 std_ios_base_Init_Init(&std___ioinit);
 return;
}

// Function: _start @ 0x101150
char stack0x00000008;
void _start(unsigned long long param_1,unsigned long long param_2)
{
 char auStack_8 [8];
 __libc_start_main(main,0,0,0,0,0,auStack_8);
 do {
 } while( true );
}

// Function: deregister_tm_clones @ 0x101180
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x1011b0
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x1011f0
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

// Function: test_cpp_member_func @ 0x101240
int test_cpp_member_func(void)
{
 size_t sVar1;
 unsigned int local_24;
 unsigned int uStack_20;
 unsigned int uStack_1c;
 unsigned int uStack_18;
 unsigned int uStack_14;
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

// Function: test_cpp_constructor @ 0x101280
int test_cpp_constructor(void)
{
 return instance_count * 0x3e9 + 0x15;
}

// Function: call_virtual_func @ 0x1012a0
void call_virtual_func(void *param_1,int param_2)
{
 void **vtable = *(void ***)param_1;
 void (*func)(void) = (void (*)(void))vtable[0];
 if (func) func();
 return;
}

// Function: test_cpp_virtual_func @ 0x1012b0
unsigned long long test_cpp_virtual_func(void)
{
 return 0x2a;
}

// Function: test_cpp_multiple_inheritance @ 0x1012c0
unsigned long long test_cpp_multiple_inheritance(void)
{
 return 0x47;
}

// Function: test_cpp_diamond_inheritance @ 0x1012d0
unsigned long long test_cpp_diamond_inheritance(void)
{
 return 0x28a;
}

// Function: test_cpp_operator_overload @ 0x1012e0
unsigned long long test_cpp_operator_overload(void)
{
 return 0x16;
}

// Function: test_cpp_template_func @ 0x1012f0
unsigned long long test_cpp_template_func(void)
{
 return 0x27;
}

// Function: test_cpp_template_class @ 0x101300
unsigned long long test_cpp_template_class(void)
{
 return 0x10;
}

// Function: test_cpp_lambda @ 0x101310
unsigned long long test_cpp_lambda(void)
{
 return 0x55;
}

// Function: test_cpp_exception @ 0x101320
void test_cpp_exception(void)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 __cxa_throw(puVar1,&typeinfo_int,0);
}

// Function: test_cpp_smart_ptr @ 0x1013e0
unsigned long long test_cpp_smart_ptr(void)
{
 return 0x2bf;
}

// Function: test_cpp_rtti @ 0x1013f0
int test_cpp_rtti(void)
{
 int iVar1;
 unsigned long long *puVar2;
 long *plVar3;
 void *lVar4;
 int iVar5;
 puVar2 = (unsigned long long *)operator_new(8);
 *puVar2 = (unsigned long long)&PTR__RTTIBase_00103d78;
 plVar3 = (long *)operator_new(8);
 *plVar3 = (long)&PTR__RTTIBase_00103da0;
 lVar4 = __dynamic_cast(puVar2,&typeinfo,&typeinfo_derivedA,0);
 iVar1 = 0x82;
 if (lVar4 == 0) {
 iVar1 = 0x1e;
 }
 lVar4 = __dynamic_cast(plVar3,&typeinfo,&typeinfo_derivedB,0);
 iVar5 = iVar1 + 200;
 if (lVar4 == 0) {
 iVar5 = iVar1;
 }
 operator_delete(puVar2);
 operator_delete(plVar3);
 return iVar5 + 0xe;
}

// Function: test_cpp_oo_features @ 0x1014a0
void test_cpp_oo_features(void)
{
 unsigned int uVar1;
 int iVar2;
 size_t sVar3;
 unsigned long long *puVar4;
 long *plVar5;
 void *lVar6;
 int iVar7;
 unsigned int local_4c;
 unsigned int uStack_48;
 unsigned int uStack_44;
 unsigned int uStack_40;
 unsigned int uStack_3c;
 unsigned int uStack_39;
 unsigned int uStack_35;
 unsigned int uStack_31;
 char local_2d;
 puts("Test Output:");
 uStack_3c = 0;
 uStack_39 = 0;
 uStack_35 = 0;
 uStack_31 = 0;
 local_4c = 0x74736554;
 uStack_48 = 0;
 uStack_44 = 0;
 uStack_40 = 0;
 local_2d = 0;
 sVar3 = strlen((char *)&local_4c);
 printf(DAT_0010207d,(unsigned long)((int)sVar3 + 0x125c));
 printf(DAT_0010209b,(unsigned long)(instance_count * 0x3e9 + 0x15));
 printf(DAT_001020b7,0x2a);
 printf(DAT_001020d3,0x47);
 printf(DAT_001020ef,0x28a);
 printf(DAT_0010210c,0x16);
 printf(DAT_00102128,0x27);
 printf(DAT_00102144,0x10);
 printf(DAT_00102160,0x55);
 test_cpp_exception();
 printf(DAT_0010217c,(unsigned long)0);
 printf(DAT_00102199,0x2bf);
 puVar4 = (unsigned long long *)operator_new(8);
 *puVar4 = (unsigned long long)&PTR__RTTIBase_00103d78;
 plVar5 = (long *)operator_new(8);
 *plVar5 = (long)&PTR__RTTIBase_00103da0;
 lVar6 = __dynamic_cast(puVar4,&typeinfo,&typeinfo_derivedA,0);
 iVar2 = 0x82;
 if (lVar6 == 0) {
 iVar2 = 0x1e;
 }
 lVar6 = __dynamic_cast(plVar5,&typeinfo,&typeinfo_derivedB,0);
 iVar7 = iVar2 + 200;
 if (lVar6 == 0) {
 iVar7 = iVar2;
 }
 operator_delete(puVar4);
 operator_delete(plVar5);
 printf(DAT_001021b6,(unsigned long)(iVar7 + 0xe));
 return;
}

// Function: main @ 0x101680
int main(int argc, char **argv)
{
 (void)argc;
 (void)argv;
 test_cpp_oo_features();
 return 0;
}

// Function: template_max<int> @ 0x101690
int template_max_int_(int param_1,int param_2)
{
 if (param_2 < param_1) {
 param_2 = param_1;
 }
 return param_2;
}

// Function: template_max<double> @ 0x1016a0
double template_max_double_(double param_1,double param_2)
{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: template_swap<int> @ 0x1016b0
void template_swap_int_(int *param_1,int *param_2)
{
 int iVar1;
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}

// Function: Container_int_Container @ 0x1016c0
void Container_int__Container(Container_int_ *this)
{
 *(unsigned int *)(this + 0x28) = 0;
 return;
}

// Function: Container_int__push @ 0x1016d0
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

// Function: Container_int__get @ 0x1016f0
unsigned int Container_int__get(Container_int_ *this,int param_1)
{
 unsigned int uVar1;
 uVar1 = 0;
 if ((-1 < param_1) && (*(int *)((char *)this + 0x28) != param_1 && param_1 <= *(int *)((char *)this + 0x28))) {
 uVar1 = *(unsigned int *)((char *)this + (unsigned long)(unsigned int)param_1 * 4);
 }
 return uVar1;
}

// Function: Container_int__getSize @ 0x101710
unsigned int Container_int__getSize(Container_int_ *this)
{
 return *(unsigned int *)((char *)this + 0x28);
}

// Function: Container_double__Container @ 0x101720
void Container_double__Container(Container_double_ *this)
{
 *(unsigned int *)((char *)this + 0x50) = 0;
 return;
}

// Function: Container_double__push @ 0x101730
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

// Function: Container_double__get @ 0x101750
unsigned long long Container_double__get(Container_double_ *this,int param_1)
{
 unsigned long long uVar1;
 uVar1 = 0;
 if ((-1 < param_1) && (*(int *)((char *)this + 0x50) != param_1 && param_1 <= *(int *)((char *)this + 0x50))) {
 uVar1 = *(unsigned long long *)((char *)this + (unsigned long)(unsigned int)param_1 * 8);
 }
 return uVar1;
}

// Function: Container_double__getSize @ 0x101770
unsigned int Container_double__getSize(Container_double_ *this)
{
 return *(unsigned int *)((char *)this + 0x50);
}

// Function: RTTIDerivedA__RTTIDerivedA @ 0x101780
void RTTIDerivedA__RTTIDerivedA(RTTIDerivedA *this)
{
 operator_delete(this);
 return;
}

// Function: RTTIDerivedA_getType @ 0x101790
unsigned long long RTTIDerivedA_getType(void)
{
 return 1;
}

// Function: RTTIBase__RTTIBase @ 0x1017a0
void RTTIBase__RTTIBase(RTTIBase *this)
{
 return;
}

// Function: RTTIDerivedB__RTTIDerivedB @ 0x1017b0
void RTTIDerivedB__RTTIDerivedB(RTTIDerivedB *this)
{
 operator_delete(this);
 return;
}

// Function: RTTIDerivedB_getType @ 0x1017c0
unsigned long long RTTIDerivedB_getType(void)
{
 return 2;
}

// Function: _fini @ 0x1017c8
void _fini(void)
{
 return;
}

