#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <errno.h>

/* Auto-injected type definitions by preprocessor */
typedef unsigned int uint;

// Forward declarations for types used in the code
typedef struct Container_int_ Container_int_;
typedef struct Container_double_ Container_double_;
typedef struct RTTIBase RTTIBase;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;
typedef struct Base Base;
typedef struct LifecycleClass LifecycleClass;
typedef struct std_ios_base_Init_ std_ios_base_Init;
struct std_ios_base_Init_ { int dummy; };

// Global variable declarations
extern char DAT_000121fc[];
extern char DAT_000121d8[];
extern char DAT_00012081[];
extern char DAT_0001209f[];
extern char DAT_000120bb[];
extern char DAT_000120d7[];
extern char DAT_000120f3[];
extern char DAT_00012110[];
extern char DAT_0001212c[];
extern char DAT_00012148[];
extern char DAT_00012164[];
extern char DAT_00012180[];
extern char DAT_0001219d[];
extern char DAT_000121ba[];
extern void *PTR__RTTIBase_00013ecc;
extern void *PTR__RTTIBase_00013ee0;
extern void *RTTIBase_typeinfo;
extern void *RTTIDerivedA_typeinfo;
extern void *RTTIDerivedB_typeinfo;
extern void *__dso_handle;
int LifecycleClass_instance_count = 0;
std_ios_base_Init std___ioinit = {0};


// External function declarations
void __gmon_start__(void);
void frame_dummy(void);
int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle);
void *__dynamic_cast(void *src, void *src_type, void *dst_type, int src_ptrtype);
void __cxa_throw(void *exception, void *typeinfo, void *dest);
void *__cxa_allocate_exception(unsigned int size);
void _Unwind_Resume(void *exception);
void __cxa_begin_catch(void *exception);
void __cxa_end_catch(void);
void __cxa_rethrow(void);
void *operator_new(uint param_1);
void *operator_new__(uint param_1);
void operator_delete(void *param_1);
void operator_delete__(void *param_1);
void std_ios_base_Init_Init(std_ios_base_Init *param_1);

// Standard library function declarations
void *malloc(size_t size);
void free(void *ptr);
void *memcpy(void *dest, const void *src, size_t n);
size_t strlen(const char *s);
int printf(const char *format, ...);
int puts(const char *s);

// Decompiled by BinaryAI
// SHA256: f34bb694d715844a9bd099c4fe9256f69544575444bb39ee457636ccb9961990

// Function: _init @ 0x11000
int _init(void *ctx)
{
 int iVar1;
 __gmon_start__();
 frame_dummy();
 iVar1 = __do_global_ctors_aux();
 return iVar1;
}

// Function: FUN_00011030 @ 0x11030
void FUN_00011030(void)
{
 ((void (*)(void))(char *)0x0)();
 return;
}

// Function: <EXTERNAL>::operator.new @ 0x11040
void *operator_new(uint param_1)
{
 return malloc(param_1);
}

// Function: <EXTERNAL>::__cxa_begin_catch @ 0x11050
void __cxa_begin_catch(void *exception)
{
 (void)exception;
}

// Function: <EXTERNAL>::__cxa_allocate_exception @ 0x11060
void *__cxa_allocate_exception(unsigned int size)
{
 return malloc(size);
}

// Function: <EXTERNAL>::__libc_start_main @ 0x110a0
extern int __libc_start_main(void *main, int argc, char **ubp_av, void (*init)(void), void (*fini)(void), void (*rtld_fini)(void), void *stack_end);

// Function: <EXTERNAL>::operator.new[] @ 0x110b0
void *operator_new__(uint param_1)
{
 return malloc(param_1);
}

// Function: <EXTERNAL>::operator.delete @ 0x110c0
void operator_delete(void *param_1)
{
 free(param_1);
}

// Function: <EXTERNAL>::__dynamic_cast @ 0x110d0
void *__dynamic_cast(void *src, void *src_type, void *dst_type, int src_ptrtype)
{
 (void)src;
 (void)src_type;
 (void)dst_type;
 (void)src_ptrtype;
 return src;
}

// Function: <EXTERNAL>::operator.delete[] @ 0x110e0
void operator_delete__(void *param_1)
{
 free(param_1);
}

// Function: <EXTERNAL>::__cxa_rethrow @ 0x11100
void __cxa_rethrow(void)
{
}

// Function: <EXTERNAL>::std::ios_base::Init::Init @ 0x11120
void std_ios_base_Init_Init(std_ios_base_Init *param_1)
{
 (void)param_1;
 return;
}

// Function: <EXTERNAL>::__cxa_end_catch @ 0x11130
void __cxa_end_catch(void)
{
}

// Function: <EXTERNAL>::__cxa_throw @ 0x11140
void __cxa_throw(void *exception, void *typeinfo, void *dest)
{
 (void)exception;
 (void)typeinfo;
 (void)dest;
}

// Function: <EXTERNAL>::_Unwind_Resume @ 0x11150
void _Unwind_Resume(void *exception)
{
 (void)exception;
}

// Function: FUN_00011160 @ 0x11160
void FUN_00011160(int param_1)
{
 (void)param_1;
 return;
}

// Function: _GLOBAL__sub_I_5_1.cpp @ 0x11170
void _GLOBAL__sub_I_5_1_cpp(void)
{
 std_ios_base_Init_Init(&std___ioinit);
 __cxa_atexit((void (*)(void *))0,&std___ioinit,&__dso_handle);
 return;
}

// Function: _start @ 0x111b0
void _start(unsigned int param_1,unsigned int param_2);
extern int main(int argc, char **argv);

void _start(unsigned int param_1,unsigned int param_2)
{
 char auStack_4 [4];
 __libc_start_main((void *)main,param_2,auStack_4,0,0,param_1,auStack_4);
 do {
 } while( true );
}

// Function: __i686.get_pc_thunk.bx @ 0x111dc
void __i686_get_pc_thunk_bx(void)
{
 return;
}

// Function: __x86.get_pc_thunk.bx @ 0x111e0
void __x86_get_pc_thunk_bx(void)
{
 return;
}

// Function: deregister_tm_clones @ 0x111f0
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x11230
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x11280
void __do_global_dtors_aux(void)
{
 deregister_tm_clones();
 return;
}

// Function: __x86.get_pc_thunk.dx @ 0x11319
void __x86_get_pc_thunk_dx(void)
{
 return;
}

// Function: __x86.get_pc_thunk.di @ 0x1131d
void __x86_get_pc_thunk_di(void)
{
 return;
}

// Function: test_cpp_member_func @ 0x11324
int test_cpp_member_func(void)
{
 size_t sVar1;
 char local_28 [31];
 char local_9;
 memcpy(local_28,&DAT_000121fc,0x1f);
 local_9 = 0;
 sVar1 = strlen(local_28);
 return sVar1 + 0x125c;
}

// Function: test_cpp_constructor @ 0x11370
int test_cpp_constructor(void)
{
 int *piVar1;
 int *piVar2;
 int iVar3;
 iVar3 = 0;
 piVar1 = (int *)operator_new__(0x14);
 piVar2 = piVar1;
 do {
 *piVar2 = iVar3;
 iVar3 = iVar3 + 10;
 piVar2 = piVar2 + 1;
 } while (iVar3 != 0x32);
 LifecycleClass_instance_count = LifecycleClass_instance_count + 1;
 iVar3 = LifecycleClass_instance_count + piVar1[2];
 operator_delete__(piVar1);
 LifecycleClass_instance_count = LifecycleClass_instance_count + -1;
 return LifecycleClass_instance_count * 1000 + iVar3;
}

// Function: call_virtual_func @ 0x113cf
void call_virtual_func(Base *param_1,int param_2)
{
 (***(void ***)param_1)(param_1,param_2);
 return;
}

// Function: test_cpp_virtual_func @ 0x113f4
unsigned int test_cpp_virtual_func(void)
{
 return 0x2a;
}

// Function: test_cpp_multiple_inheritance @ 0x113fa
unsigned int test_cpp_multiple_inheritance(void)
{
 return 0x47;
}

// Function: test_cpp_diamond_inheritance @ 0x11400
unsigned int test_cpp_diamond_inheritance(void)
{
 return 0x28a;
}

// Function: test_cpp_operator_overload @ 0x11406
unsigned int test_cpp_operator_overload(void)
{
 return 0x16;
}

// Function: test_cpp_template_func @ 0x1140c
unsigned int test_cpp_template_func(void)
{
 return 0x27;
}

// Function: test_cpp_template_class @ 0x11412
unsigned int test_cpp_template_class(void)
{
 return 0x10;
}

// Function: test_cpp_lambda @ 0x11418
unsigned int test_cpp_lambda(void)
{
 return 0x55;
}

// Function: test_cpp_exception @ 0x1141e
unsigned int test_cpp_exception(void)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 __cxa_throw(puVar1,0,0);
 return 0x2a;
}

// Function: test_cpp_smart_ptr @ 0x11502
unsigned int test_cpp_smart_ptr(void)
{
 return 0x2bf;
}

// Function: test_cpp_rtti @ 0x11508
int test_cpp_rtti(void)
{
 unsigned int *puVar1;
 int *piVar2;
 int iVar3;
 int iVar4;
 int iVar5;
 puVar1 = (unsigned int *)operator_new(4);
 *puVar1 = &PTR__RTTIBase_00013ecc;
 piVar2 = (int *)operator_new(4);
 *piVar2 = (int)&PTR__RTTIBase_00013ee0;
 iVar3 = __dynamic_cast(puVar1,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0);
 iVar5 = 0x82;
 if (iVar3 == 0) {
 iVar5 = 0x1e;
 }
 iVar4 = __dynamic_cast(piVar2,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo,0);
 iVar3 = iVar5 + 200;
 if (iVar4 == 0) {
 iVar3 = iVar5;
 }
 operator_delete(puVar1);
 operator_delete(piVar2);
 return iVar3 + 0xe;
}

// Function: test_cpp_oo_features @ 0x115c0
void test_cpp_oo_features(void)
{
 size_t sVar1;
 unsigned int uVar2;
 char local_28 [31];
 char local_9;
 puts(&DAT_000121d8);
 memcpy(local_28,&DAT_000121fc,0x1f);
 local_9 = 0;
 sVar1 = strlen(local_28);
 printf(&DAT_00012081,sVar1 + 0x125c);
 uVar2 = test_cpp_constructor();
 printf(&DAT_0001209f,uVar2);
 printf(&DAT_000120bb,0x2a);
 printf(&DAT_000120d7,0x47);
 printf(&DAT_000120f3,0x28a);
 printf(&DAT_00012110,0x16);
 printf(&DAT_0001212c,0x27);
 printf(&DAT_00012148,0x10);
 printf(&DAT_00012164,0x55);
 uVar2 = test_cpp_exception();
 printf(&DAT_00012180,uVar2);
 printf(&DAT_0001219d,0x2bf);
 uVar2 = test_cpp_rtti();
 printf(&DAT_000121ba,uVar2);
 return;
}

// Function: main @ 0x11722
int main(int argc, char **argv)
{
 (void)argc;
 (void)argv;
 test_cpp_oo_features();
 return 0;
}

// Function: template_max<int> @ 0x1173e
int template_max_int_(int param_1,int param_2)
{
 if (param_2 < param_1) {
 param_2 = param_1;
 }
 return param_2;
}

// Function: template_max<double> @ 0x1174c
double template_max_double_(double param_1,double param_2)
{
 if (param_2 <= param_1 || param_1 != param_2) {
 param_2 = param_1;
 }
 return param_2;
}

// Function: template_swap<int> @ 0x1175d
void template_swap_int_(int *param_1,int *param_2)
{
 int iVar1;
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}

// Container<int> structure definition
struct Container_int_ {
 int data[10];
 unsigned int size;
};

// Function: Container<int>::Container @ 0x11770
void Container_int__Container(Container_int_ *this)
{
 *(unsigned int *)(this + 0x28) = 0;
 return;
}

// Function: Container<int>::push @ 0x1177c
void Container_int__push(Container_int_ *this,int param_1)
{
 int iVar1;
 iVar1 = *(int *)(this + 0x28);
 if (iVar1 < 10) {
 *(int *)(this + 0x28) = iVar1 + 1;
 *(int *)(this + iVar1 * 4) = param_1;
 }
 return;
}

// Function: Container<int>::get @ 0x11798
unsigned int Container_int__get(Container_int_ *this,int param_1)
{
 unsigned int uVar1;
 uVar1 = 0;
 if ((-1 < param_1) && (*(int *)(this + 0x28) != param_1 && param_1 <= *(int *)(this + 0x28))) {
 uVar1 = *(unsigned int *)(this + param_1 * 4);
 }
 return uVar1;
}

// Function: Container<int>::getSize @ 0x117b0
unsigned int Container_int__getSize(Container_int_ *this)
{
 return *(unsigned int *)(this + 0x28);
}

// Container<double> structure definition
struct Container_double_ {
 double data[10];
 unsigned int size;
};

// Function: Container<double>::Container @ 0x117b8
void Container_double__Container(Container_double_ *this)
{
 *(unsigned int *)(this + 0x50) = 0;
 return;
}

// Function: Container<double>::push @ 0x117c4
void Container_double__push(Container_double_ *this,double param_1)
{
 int iVar1;
 iVar1 = *(int *)(this + 0x50);
 if (iVar1 < 10) {
 *(int *)(this + 0x50) = iVar1 + 1;
 *(double *)(this + iVar1 * 8) = param_1;
 }
 return;
}

// Function: Container<double>::get @ 0x117e2
double Container_double__get(Container_double_ *this,int param_1)
{
 double lVar1;
 lVar1 = 0;
 if ((-1 < param_1) && (*(int *)(this + 0x50) != param_1 && param_1 <= *(int *)(this + 0x50))) {
 lVar1 = *(double *)(this + param_1 * 8);
 }
 return lVar1;
}

// Function: Container<double>::getSize @ 0x117fc
unsigned int Container_double__getSize(Container_double_ *this)
{
 return *(unsigned int *)(this + 0x50);
}

// RTTI class structure definitions
struct RTTIBase {
 void *vtable;
};

struct RTTIDerivedA {
 void *vtable;
};

struct RTTIDerivedB {
 void *vtable;
};

struct Base {
 void *vtable;
};

struct LifecycleClass {
 int dummy;
};


// Function: RTTIDerivedA::~RTTIDerivedA @ 0x11804
void RTTIDerivedA__RTTIDerivedA(RTTIDerivedA *this)
{
 operator_delete(this);
 return;
}

// Function: RTTIDerivedA_getType @ 0x11826
unsigned int RTTIDerivedA_getType(void)
{
 return 1;
}

// Function: RTTIBase::~RTTIBase @ 0x1182a
void RTTIBase__RTTIBase(RTTIBase *this)
{
 return;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x1182c
void RTTIDerivedB__RTTIDerivedB(RTTIDerivedB *this)
{
 operator_delete(this);
 return;
}

// Function: RTTIDerivedB_getType @ 0x1184e
unsigned int RTTIDerivedB_getType(void)
{
 return 2;
}

// Function: __do_global_ctors_aux @ 0x11860
void __do_global_ctors_aux(void)
{
 return;
}

// Function: _fini @ 0x118ac
void _fini(void)
{
 __do_global_dtors_aux();
 return;
}

