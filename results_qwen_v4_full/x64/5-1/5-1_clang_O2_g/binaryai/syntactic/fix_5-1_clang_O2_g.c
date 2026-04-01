/* Auto-injected type definitions by preprocessor */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <unistd.h>
#include <inttypes.h>

// Decompiled by BinaryAI
// SHA256: d9e7362b0248b250abdba69a9c576cf04e927c19a7172ae75f5a280e4eb7e8d7

// External function declarations
extern int __gmon_start__(void);
extern int printf(const char *__format, ...);
extern void __cxa_begin_catch(void *);
extern size_t strlen(const char *__s);
extern void __cxa_rethrow(void);
extern void _Unwind_Resume(void *);
extern int puts(const char *__s);
extern int __libc_start_main(int (*)(int, char **, char **), int, void *, void (*)(void), void (*)(void), void *, void *);
extern int __cxa_atexit(void (*func)(void *), void *arg, void *dso);
extern void __cxa_finalize(void *dso);
extern intptr_t __dynamic_cast(void *obj, void *src_type, void *dst_type, int flags);

// C++ runtime stub function implementations
void operator_delete(void *ptr) { free(ptr); }
void *operator_new(size_t size) { return malloc(size); }
void *__cxa_allocate_exception(size_t size) { return malloc(size); }
void __cxa_throw(void *exc, void *typeinfo, void *dest) { free(exc); }
intptr_t __dynamic_cast(void *obj, void *src_type, void *dst_type, int flags) { (void)obj; (void)src_type; (void)dst_type; (void)flags; return (intptr_t)0; }

// Global variables
void *std___ioinit = NULL;
void *__dso_handle = NULL;
void *stack0x00000008 = NULL;
char completed_0 = 0;
int LifecycleClass_instance_count = 0;
void *PTR__RTTIBase_00103d78 = NULL;
void *PTR__RTTIBase_00103da0 = NULL;
void *RTTIBase_typeinfo = NULL;
void *RTTIDerivedA_typeinfo = NULL;
void *RTTIDerivedB_typeinfo = NULL;
void *int_typeinfo = NULL;
char DAT_001021d4[] = "Test";
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
// Type definitions
typedef unsigned char undefined3;
typedef unsigned int uint;
typedef struct Init { int dummy; } Init;
typedef struct Base { void **vtable; } Base;
typedef struct RTTIBase { void **vtable; } RTTIBase;
typedef struct RTTIDerivedA { void **vtable; } RTTIDerivedA;
typedef struct RTTIDerivedB { void **vtable; } RTTIDerivedB;
typedef struct Container_int_ { unsigned int data[10]; unsigned int size; } Container_int_;
typedef struct Container_double_ { double data[10]; unsigned int size; } Container_double_;

// Function: _init @ 0x101000
int _init(void *ctx)
{
 (void)ctx;
 int iVar1;
 iVar1 = __gmon_start__();
 return iVar1;
}

// Function: FUN_00101020 @ 0x101020
void FUN_00101020(void)
{
 (*(void (*)(void))(char *)0x0)();
 return;
}

// Function: _GLOBAL__sub_I_5_1.cpp @ 0x101120
void _GLOBAL__sub_I_5_1_cpp(void)
{
 __cxa_atexit((void (*)(void *))&std___ioinit, &std___ioinit, &__dso_handle);
 return;
}

// Function: main @ 0x101680
int main(int argc, char **argv, char **envp);

// Function: _start @ 0x101150
void _start(unsigned long long param_1,unsigned long long param_2)
{
 char auStack_8 [8];
 __libc_start_main(main,(int)param_2,&stack0x00000008,0,0,(void *)param_1,auStack_8);
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
 undefined3 uStack_14;
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
 return LifecycleClass_instance_count * 0x3e9 + 0x15;
}

// Function: call_virtual_func @ 0x1012a0
void call_virtual_func(Base *param_1, int param_2)
{
 (void)param_2;
 ((void (*)(void))**(void ***)param_1)();
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
 __cxa_throw(puVar1, &int_typeinfo, 0);
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
 intptr_t *plVar3;
 intptr_t lVar4;
 intptr_t lVar6;
 int iVar5;
 puVar2 = (unsigned long long *)operator_new(8);
 *puVar2 = (unsigned long long)PTR__RTTIBase_00103d78;
 plVar3 = (intptr_t *)operator_new(8);
 *plVar3 = (intptr_t)PTR__RTTIBase_00103da0;
 lVar4 = (intptr_t)__dynamic_cast((void *)puVar2, RTTIBase_typeinfo, RTTIDerivedA_typeinfo, 0);
 iVar1 = 0x82;
 if (lVar4 == 0) {
 iVar1 = 0x1e;
 }
 lVar6 = (intptr_t)__dynamic_cast((void *)plVar3, RTTIBase_typeinfo, RTTIDerivedB_typeinfo, 0);
 iVar5 = iVar1 + 200;
 if (lVar6 == 0) {
 iVar5 = iVar1;
 }
 operator_delete(puVar2);
 operator_delete(plVar3);
 return iVar5 + 0xe;
}

// Function: test_cpp_oo_features @ 0x1014a0
void test_cpp_oo_features(void)
{
 int iVar2;
 size_t sVar3;
 unsigned long long *puVar4;
 intptr_t *plVar5;
 intptr_t lVar6;
 int iVar7;
 unsigned int local_4c;
 unsigned int uStack_48;
 unsigned int uStack_44;
 unsigned int uStack_40;
 undefined3 uStack_3c;
 unsigned int uStack_39;
 unsigned int uStack_35;
 unsigned int uStack_31;
 char local_2d;
 puts(DAT_001021d4);
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
 printf(DAT_0010207d, (int)((int)sVar3 + 0x125c));
 printf(DAT_0010209b, (int)(LifecycleClass_instance_count * 0x3e9 + 0x15));
 printf(DAT_001020b7, 0x2a);
 printf(DAT_001020d3, 0x47);
 printf(DAT_001020ef, 0x28a);
 printf(DAT_0010210c, 0x16);
 printf(DAT_00102128, 0x27);
 printf(DAT_00102144, 0x10);
 printf(DAT_00102160, 0x55);
 // test_cpp_exception(); // Skip exception test as it throws
 printf(DAT_0010217c, (int)0);
 printf(DAT_00102199, 0x2bf);
 puVar4 = (unsigned long long *)operator_new(8);
 *puVar4 = (unsigned long long)PTR__RTTIBase_00103d78;
 plVar5 = (intptr_t *)operator_new(8);
 *plVar5 = (intptr_t)PTR__RTTIBase_00103da0;
 lVar6 = (intptr_t)__dynamic_cast((void *)puVar4, RTTIBase_typeinfo, RTTIDerivedA_typeinfo, 0);
 iVar2 = 0x82;
 if (lVar6 == 0) {
 iVar2 = 0x1e;
 }
 lVar6 = (intptr_t)__dynamic_cast((void *)plVar5, RTTIBase_typeinfo, RTTIDerivedB_typeinfo, 0);
 iVar7 = iVar2 + 200;
 if (lVar6 == 0) {
 iVar7 = iVar2;
 }
 operator_delete(puVar4);
 operator_delete(plVar5);
 printf(DAT_001021b6, (int)(iVar7 + 0xe));
 return;
}

// Function: main @ 0x101680
int main(int argc, char **argv, char **envp)
{
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
void Container_int_Container(Container_int_ *this)
{
 *(unsigned int *)((char *)this + 0x28) = 0;
 return;
}

// Function: Container_int_push @ 0x1016d0
void Container_int_push(Container_int_ *this,int param_1)
{
 int iVar1;
 iVar1 = *(int *)((char *)this + 0x28);
 if ((long)iVar1 < 10) {
 *(int *)((char *)this + 0x28) = iVar1 + 1;
 *(int *)((char *)this + (long)iVar1 * 4) = param_1;
 }
 return;
}

// Function: Container_int_get @ 0x1016f0
unsigned int Container_int_get(Container_int_ *this,int param_1)
{
 unsigned int uVar1;
 uVar1 = 0;
 if ((-1 < param_1) && (*(int *)((char *)this + 0x28) != param_1 && param_1 <= *(int *)((char *)this + 0x28))) {
 uVar1 = *(unsigned int *)((char *)this + (unsigned long)(uint)param_1 * 4);
 }
 return uVar1;
}

// Function: Container_int_getSize @ 0x101710
unsigned int Container_int_getSize(Container_int_ *this)
{
 return *(unsigned int *)((char *)this + 0x28);
}

// Function: Container_double_Container @ 0x101720
void Container_double_Container(Container_double_ *this)
{
 *(unsigned int *)((char *)this + 0x50) = 0;
 return;
}

// Function: Container_double_push @ 0x101730
void Container_double_push(Container_double_ *this,double param_1)
{
 int iVar1;
 iVar1 = *(int *)((char *)this + 0x50);
 if ((long)iVar1 < 10) {
 *(int *)((char *)this + 0x50) = iVar1 + 1;
 *(double *)((char *)this + (long)iVar1 * 8) = param_1;
 }
 return;
}

// Function: Container_double_get @ 0x101750
unsigned long long Container_double_get(Container_double_ *this,int param_1)
{
 unsigned long long uVar1;
 uVar1 = 0;
 if ((-1 < param_1) && (*(int *)((char *)this + 0x50) != param_1 && param_1 <= *(int *)((char *)this + 0x50))) {
 uVar1 = *(unsigned long long *)((char *)this + (unsigned long)(uint)param_1 * 8);
 }
 return uVar1;
}

// Function: Container_double_getSize @ 0x101770
unsigned int Container_double_getSize(Container_double_ *this)
{
 return *(unsigned int *)((char *)this + 0x50);
}

// Function: RTTIDerivedA_destructor @ 0x101780
void RTTIDerivedA_destructor(RTTIDerivedA *this)
{
 operator_delete(this);
 return;
}

// Function: RTTIDerivedA_getType @ 0x101790
unsigned long long RTTIDerivedA_getType(void)
{
 return 1;
}

// Function: RTTIBase_destructor @ 0x1017a0
void RTTIBase_destructor(RTTIBase *this)
{
 (void)this;
 return;
}

// Function: RTTIDerivedB_destructor @ 0x1017b0
void RTTIDerivedB_destructor(RTTIDerivedB *this)
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

