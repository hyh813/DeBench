/* Auto-injected type definitions by preprocessor */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <stddef.h>
#include <unistd.h>

typedef struct { char data[3]; } undefined3;

// Forward declarations for types
typedef struct Init { char data[16]; } Init;
typedef struct Base { void *vtable; } Base;
typedef struct LifecycleClass { int count; } LifecycleClass;
typedef struct Container_int_ { int data[10]; int size; } Container_int_;
typedef struct Container_double_ { double data[10]; int size; } Container_double_;
typedef struct RTTIBase { void *typeinfo; } RTTIBase;
typedef struct RTTIDerivedA { RTTIBase base; } RTTIDerivedA;
typedef struct RTTIDerivedB { RTTIBase base; } RTTIDerivedB;

// Global variable declarations
int completed_0 = 0;
void *dso_handle = 0;
void *std__ioinit = 0;
int LifecycleClass_instance_count = 0;
void *PTR__RTTIBase_00103d78 = 0;
void *PTR__RTTIBase_00103da0 = 0;
void *RTTIBase_typeinfo = 0;
void *RTTIDerivedA_typeinfo = 0;
void *RTTIDerivedB_typeinfo = 0;
char DAT_001021d4[] = "Testing C++ OO features\n";
char DAT_0010207d[] = "test_cpp_member_func: %d\n";
char DAT_0010209b[] = "test_cpp_constructor: %d\n";
char DAT_001020b7[] = "test_cpp_virtual_func: %d\n";
char DAT_001020d3[] = "test_cpp_multiple_inheritance: %d\n";
char DAT_001020ef[] = "test_cpp_diamond_inheritance: %d\n";
char DAT_0010210c[] = "test_cpp_operator_overload: %d\n";
char DAT_00102128[] = "test_cpp_template_func: %d\n";
char DAT_00102144[] = "test_cpp_template_class: %d\n";
char DAT_00102160[] = "test_cpp_lambda: %d\n";
char DAT_0010217c[] = "test_cpp_exception: %d\n";
char DAT_00102199[] = "test_cpp_smart_ptr: %d\n";
char DAT_001021b6[] = "test_cpp_rtti: %d\n";

// External function declarations
extern int __gmon_start__(void);
extern int __libc_start_main(int (*main)(int, char **, char **), int argc, char **argv, void (*init)(void), void (*fini)(void), void (*rtld_fini)(void), void *stack_end);
extern void *malloc(unsigned long size);
extern void free(void *ptr);
extern int printf(const char *__format, ...);
extern size_t strlen(const char *__s);
extern int puts(const char *__s);
extern void *__cxa_allocate_exception(unsigned long size);
extern void __cxa_throw(void *exc, void *typeinfo, void *dest);
extern long __dynamic_cast(void *src, void *src_type, void *dst_type, int flags);
extern void *__cxa_begin_catch(void *exc);
extern void __cxa_end_catch(void);
extern void __cxa_rethrow(void);
extern int __cxa_atexit(void (*func)(void *), void *obj, void *dso);
extern void __cxa_finalize(void *dso);

// Forward declarations for functions defined later
void _init(void);
int main(int argc, char **argv, char **envp);
void _fini(void);

// Decompiled by BinaryAI
// SHA256: e85c1c90e0ded39a3ed678a2e38525457a29c6d517dc7232a17d012117a5d612

// Function: _init @ 0x101000
void _init(void)
{
 return;
}

// Function: FUN_00101020 @ 0x101020
void FUN_00101020(void)
{
 return;
}

// Function: <EXTERNAL>::operator.new[] @ 0x101030
void * operator_new_array(unsigned long param_1)
{
 return malloc(param_1);
}

// Function: <EXTERNAL>::printf @ 0x101040
// External printf - declared above

// Function: <EXTERNAL>::strlen @ 0x101060
// External strlen - declared above

// Function: <EXTERNAL>::__cxa_allocate_exception @ 0x101070
// External __cxa_allocate_exception - declared above



// Function: <EXTERNAL>::operator.delete @ 0x101090
void operator_delete(void *ptr)
{
 free(ptr);
 return;
}

// Function: <EXTERNAL>::operator.new @ 0x1010a0
void * operator_new(unsigned long param_1)
{
 return malloc(param_1);
}

// Function: <EXTERNAL>::__dynamic_cast @ 0x1010b0
// External __dynamic_cast - declared above

// Function: <EXTERNAL>::operator.delete[] @ 0x1010c0
void operator_delete_array(void *param_1)
{
 free(param_1);
 return;
}

// Function: <EXTERNAL>::std::ios_base::Init::Init @ 0x1010e0
void std_ios_base_Init_Init(Init *this)
{
 (void)this;
 return;
}

// Function: <EXTERNAL>::puts @ 0x1010f0
// External puts - declared above

// Function: <EXTERNAL>::__cxa_throw @ 0x101110
// External __cxa_throw - declared above

// Function: _GLOBAL__sub_I_5_1.cpp @ 0x101140
void std__ioinit_destroy(void *obj)
{
 (void)obj;
}

void _GLOBAL__sub_I_5_1_cpp(void)
{
 std_ios_base_Init_Init((Init *)&std__ioinit);
 __cxa_atexit(std__ioinit_destroy,&std__ioinit,dso_handle);
 return;
}

// Function: _start @ 0x101170
void _start(void)
{
 __libc_start_main((int (*)(int, char **, char **))main, 0, 0, _init, _fini, 0, 0);
 while(1) {}
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
 if (completed_0 != 0) {
 return;
 }
 __cxa_finalize(dso_handle);
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

// Function: test_cpp_constructor @ 0x101294
int test_cpp_constructor(void)
{
 unsigned int *puVar1;
 long lVar2;
 unsigned int *puVar3;
 int iVar4;
 puVar1 = (unsigned int *)operator_new_array(0x14);
 lVar2 = 0;
 puVar3 = puVar1;
 do {
 *puVar3 = (int)lVar2;
 lVar2 = lVar2 + 10;
 puVar3 = puVar3 + 1;
 } while (lVar2 != 0x32);
 LifecycleClass_instance_count = LifecycleClass_instance_count + 1;
 iVar4 = LifecycleClass_instance_count + puVar1[2];
 operator_delete_array(puVar1);
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
void test_cpp_exception(void)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 // __cxa_throw(puVar1,0,0); // Commented out - doesn't return
 free(puVar1);
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
 *puVar2 = (unsigned long long)PTR__RTTIBase_00103d78;
 plVar3 = (long *)operator_new(8);
 *plVar3 = (long)PTR__RTTIBase_00103da0;
 lVar4 = (long)__dynamic_cast(puVar2,RTTIBase_typeinfo,RTTIDerivedA_typeinfo,0);
 iVar1 = 0x82;
 if (lVar4 == 0) {
 iVar1 = 0x1e;
 }
 lVar4 = (long)__dynamic_cast(plVar3,RTTIBase_typeinfo,RTTIDerivedB_typeinfo,0);
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
 unsigned int uStack_14;
 unsigned int uStack_11;
 unsigned int uStack_d;
 unsigned int uStack_9;
 char local_5;
 puts(&DAT_001021d4);
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
 printf(&DAT_0010207d,(unsigned long)((int)sVar2 + 0x125c));
 uVar1 = test_cpp_constructor();
 printf(&DAT_0010209b,(unsigned long)uVar1);
 printf(&DAT_001020b7,0x2a);
 printf(&DAT_001020d3,0x47);
 printf(&DAT_001020ef,0x28a);
 printf(&DAT_0010210c,0x16);
 printf(&DAT_00102128,0x27);
 printf(&DAT_00102144,0x10);
 printf(&DAT_00102160,0x55);
 test_cpp_exception();
 uVar1 = 0;
 printf(&DAT_0010217c,(unsigned long)uVar1);
 printf(&DAT_00102199,0x2bf);
 uVar1 = test_cpp_rtti();
 printf(&DAT_001021b6,(unsigned long)uVar1);
 return;
}

// Function: main @ 0x1015a8
int main(int argc, char **argv, char **envp)
{
 (void)argc;
 (void)argv;
 (void)envp;
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

// Function: Container<int>::Container @ 0x1015c8
void Container_int__Container(Container_int_ *this)
{
 *(unsigned int *)((char *)this + 0x28) = 0;
 return;
}

// Function: Container<int>::push @ 0x1015d0
void Container_int__push(Container_int_ *this,int param_1)
{
 int iVar1;
 iVar1 = *(int *)((char *)this + 0x28);
 if (iVar1 < 10) {
 *(int *)((char *)this + 0x28) = iVar1 + 1;
 *(int *)((char *)this + iVar1 * 4) = param_1;
 }
 return;
}

// Function: Container<int>::get @ 0x1015e4
unsigned int Container_int__get(Container_int_ *this,int param_1)
{
 unsigned int uVar1;
 uVar1 = 0;
 if ((-1 < param_1) && (*(int *)((char *)this + 0x28) != param_1 && param_1 <= *(int *)((char *)this + 0x28))) {
 uVar1 = *(unsigned int *)((char *)this + param_1 * 4);
 }
 return uVar1;
}

// Function: Container<int>::getSize @ 0x1015f6
unsigned int Container_int__getSize(Container_int_ *this)
{
 return *(unsigned int *)((char *)this + 0x28);
}

// Function: Container<double>::Container @ 0x1015fa
void Container_double__Container(Container_double_ *this)
{
 *(unsigned int *)((char *)this + 0x50) = 0;
 return;
}

// Function: Container<double>::push @ 0x101602
void Container_double__push(Container_double_ *this,double param_1)
{
 int iVar1;
 iVar1 = *(int *)((char *)this + 0x50);
 if (iVar1 < 10) {
 *(int *)((char *)this + 0x50) = iVar1 + 1;
 *(double *)((char *)this + iVar1 * 8) = param_1;
 }
 return;
}

// Function: Container<double>::get @ 0x101618
unsigned long long Container_double__get(Container_double_ *this,int param_1)
{
 unsigned long long uVar1;
 uVar1 = 0;
 if ((-1 < param_1) && (*(int *)((char *)this + 0x50) != param_1 && param_1 <= *(int *)((char *)this + 0x50))) {
 uVar1 = *(unsigned long long *)((char *)this + param_1 * 8);
 }
 return uVar1;
}

// Function: Container<double>::getSize @ 0x10162c
unsigned int Container_double__getSize(Container_double_ *this)
{
 return *(unsigned int *)((char *)this + 0x50);
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x101630
void RTTIDerivedA__RTTIDerivedA(RTTIDerivedA *this)
{
 free(this);
 return;
}

// Function: RTTIDerivedA_getType @ 0x101636
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
 free(this);
 return;
}

// Function: RTTIDerivedB_getType @ 0x101644
unsigned long long RTTIDerivedB_getType(void)
{
 return 2;
}

// Function: _fini @ 0x10164c
void _fini(void)
{
 return;
}

