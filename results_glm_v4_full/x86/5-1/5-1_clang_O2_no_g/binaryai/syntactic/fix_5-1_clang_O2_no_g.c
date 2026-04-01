#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <stddef.h>
#include <stdarg.h>

/* Standard library functions - prototypes are in stdio.h, stdlib.h, string.h */

// Compiler-generated function implementations
void __gmon_start__(void)
{
    return;
}

void frame_dummy(void)
{
    return;
}

int __do_global_ctors_aux(void);

// Forward declarations for C++ constructs
typedef struct ios_base ios_base;
struct Init {
    int dummy;
};
typedef struct {
    struct Init io_init;
} std__ioinit;
extern std__ioinit std_ioinit;
void *__dso_handle = NULL;

// C++ type_info stub
typedef struct type_info type_info;
struct type_info {
    const char *_name;
};

// Struct definitions for C++ classes
struct Base {
    void **vtable;
};

struct LifecycleClass {
    int dummy;
};

struct RTTIBase {
    void **vtable;
};

struct RTTIDerivedA {
    void **vtable;
};

struct RTTIDerivedB {
    void **vtable;
};

struct Container_int_ {
    void **vtable;
    char _pad1[40];
    int data[10];
    int size;
    char _pad2[4];
};

struct Container_double_ {
    void **vtable;
    char _pad1[80];
    double data[10];
    int size;
    char _pad2[4];
};

// RTTI data symbols
type_info typeinfo_int = {"int"};
type_info typeinfo_RTTIBase = {"RTTIBase"};
type_info typeinfo_RTTIDerivedA = {"RTTIDerivedA"};
type_info typeinfo_RTTIDerivedB = {"RTTIDerivedB"};
void *PTR__RTTIBase_00013ecc = NULL;
void *PTR__RTTIBase_00013ee0 = NULL;

// Static data references
const char DAT_00012081[] = "test_cpp_member_func result: %d\n";
const char DAT_0001209f[] = "test_cpp_constructor result: %d\n";
const char DAT_000120bb[] = "test_cpp_virtual_func result: %d\n";
const char DAT_000120d7[] = "test_cpp_multiple_inheritance result: %d\n";
const char DAT_000120f3[] = "test_cpp_diamond_inheritance result: %d\n";
const char DAT_00012110[] = "test_cpp_operator_overload result: %d\n";
const char DAT_0001212c[] = "test_cpp_template_func result: %d\n";
const char DAT_00012148[] = "test_cpp_template_class result: %d\n";
const char DAT_00012164[] = "test_cpp_lambda result: %d\n";
const char DAT_00012180[] = "test_cpp_exception result: %d\n";
const char DAT_0001219d[] = "test_cpp_smart_ptr result: %d\n";
const char DAT_000121ba[] = "test_cpp_rtti result: %d\n";
const char DAT_000121d8[] = "Testing C++ Object-Oriented Features:\n";
int LifecycleClass_instance_count = 1;



void __x86_get_pc_thunk_di(void)
{
    return;
}

// Forward declarations for functions
void test_cpp_oo_features(void);
void test_cpp_exception(void) __attribute__((noreturn));
void call_virtual_func(struct Base *param_1, int param_2);
int main(int argc, char **argv);

// Standard library function prototypes
int printf(const char *format, ...);
int puts(const char *s);
size_t strlen(const char *s);

// C++ operator new/delete prototypes (mangled names)
void *_Znwj(size_t size);
void _ZdlPv(void *ptr);

// Decompiled by BinaryAI
// SHA256: 2c5a5ccec37c6d92821e5c3a886f3e66e55b17ecf4204b3e01e434e39bb2684a

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
 //(*(void (**)(void))(void *)0x0)();  // NULL dereference - disabled for safety
 return;
}

// Function: <EXTERNAL>::operator.new @ 0x11040
void * _Znwj(size_t param_1)
{
 return malloc(param_1);
}

// Function: <EXTERNAL>::__cxa_begin_catch @ 0x11050
void *__cxa_begin_catch(void *exception_obj)
{
 return NULL;
}

// Function: <EXTERNAL>::__cxa_allocate_exception @ 0x11060
void *__cxa_allocate_exception(size_t size)
{
 return NULL;
}

// Function: <EXTERNAL>::strlen @ 0x11070
// strlen is provided by standard library

// Function: <EXTERNAL>::__cxa_atexit @ 0x11080
int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle)
{
 return 0;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x110110
int __libc_start_main(int (*main)(int, char **), int argc, char **argv, 
                       void (*init)(void), void (*fini)(void), void *stack_end)
{
 return 0;
}

// Function: <EXTERNAL>::operator.delete @ 0x110a0
void _ZdlPv(void *param_1)
{
 free(param_1);
 return;
}

// Function: <EXTERNAL>::__dynamic_cast @ 0x110b0
void *__dynamic_cast(void *obj, type_info *src, type_info *dst, int offset)
{
 return (void *)0;
}

// Function: <EXTERNAL>::printf @ 0x110c0
// printf is provided by standard library

// Function: <EXTERNAL>::__cxa_rethrow @ 0x110d0
void __cxa_rethrow(void)
{
 return;
}

// Function: <EXTERNAL>::puts @ 0x110e0
// puts is provided by standard library

// Function: <EXTERNAL>::std::ios_base::Init::Init @ 0x110f0
void std_ios_base_Init_Init(Init *this)
{
 (void)this;
 return;
}

// Function: <EXTERNAL>::__cxa_end_catch @ 0x11100
void __cxa_end_catch(void)
{
 return;
}

// Function: <EXTERNAL>::__cxa_throw @ 0x11110
void __cxa_throw(void *obj, type_info *tinfo, void *dest)
{
 return;
}

// Function: <EXTERNAL>::_Unwind_Resume @ 0x11120
void _Unwind_Resume(void *exception_object)
{
}

// Function: FUN_00011130 @ 0x11130
void FUN_00011130(void)
{
 return;
}

// Function: _GLOBAL__sub_I_5_1.cpp @ 0x11140
void _GLOBAL__sub_I_5_1_cpp(void)
{
 /* std::ios_base::Init::Init((Init *)&std::__ioinit); */
 /* __cxa_atexit(std::ios_base::Init::_Init,&std::__ioinit,&__dso_handle,uVar1,extraout_var); */
 std_ios_base_Init_Init(&std_ioinit.io_init);
 __cxa_atexit((void (*)(void *))std_ios_base_Init_Init, &std_ioinit.io_init, &__dso_handle);
 return;
}

// Function: _start @ 0x11180
void _start(unsigned int param_1,unsigned int param_2)
{
 char auStack_4 [4];
 /* __libc_start_main(main,param_2,&auStack_4,0,0,param_1,auStack_4); */
 main(0, NULL);
 do {
 } while(1);
}

// Function: __i686.get_pc_thunk.bx @ 0x111ac
void __i686_get_pc_thunk_bx(void)
{
 return;
}

// Function: __x86.get_pc_thunk.bx @ 0x111b0
void __x86_get_pc_thunk_bx(void)
{
 return;
}

// Function: deregister_tm_clones @ 0x111c0
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x11200
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x11250
void __do_global_dtors_aux(void)
{
 return;
}

// Function: __x86.get_pc_thunk.dx @ 0x112e9
void __x86_get_pc_thunk_dx(void)
{
 return;
}

// Function: __x86.get_pc_thunk.di @ 0x112ed
void __x86_get_pc_thunk_di(void)
{
 return;
}

// Function: test_cpp_member_func @ 0x11300
int test_cpp_member_func(void)
{
 size_t sVar1;
 unsigned int local_28;
 unsigned int local_24;
 unsigned int local_20;
 unsigned int local_1c;
 unsigned int local_18;
 unsigned int local_14;
 unsigned int uStack_10;
 unsigned int uStack_c;
 uStack_10 = 0;
 local_14 = 0;
 local_18 = 0;
 local_1c = 0;
 local_20 = 0;
 local_24 = 0;
 local_28 = 0x74736554;
 uStack_c = 0;
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstringop-overflow"
#pragma GCC diagnostic ignored "-Warray-bounds"
 sVar1 = strlen((char *)&local_28);
#pragma GCC diagnostic pop
 return sVar1 + 0x125c;
}

// Function: test_cpp_constructor @ 0x11380
int test_cpp_constructor(void)
{
 return LifecycleClass_instance_count * 0x3e9 + 0x15;
}

// Function: FUN_00011385 @ 0x11385
int FUN_00011385(void)
{
 return 0x15;
}

// Function: call_virtual_func @ 0x113a0
void call_virtual_func(struct Base *param_1,int param_2)
{
 (***(void ***)param_1)(param_1,param_2);
 return;
}

// Function: test_cpp_virtual_func @ 0x113d0
unsigned int test_cpp_virtual_func(void)
{
 return 0x2a;
}

// Function: test_cpp_multiple_inheritance @ 0x113e0
unsigned int test_cpp_multiple_inheritance(void)
{
 return 0x47;
}

// Function: test_cpp_diamond_inheritance @ 0x113f0
unsigned int test_cpp_diamond_inheritance(void)
{
 return 0x28a;
}

// Function: test_cpp_operator_overload @ 0x11400
unsigned int test_cpp_operator_overload(void)
{
 return 0x16;
}

// Function: test_cpp_template_func @ 0x11410
unsigned int test_cpp_template_func(void)
{
 return 0x27;
}

// Function: test_cpp_template_class @ 0x11420
unsigned int test_cpp_template_class(void)
{
 return 0x10;
}

// Function: test_cpp_lambda @ 0x11430
unsigned int test_cpp_lambda(void)
{
 return 0x55;
}

// Function: test_cpp_exception @ 0x11440
void test_cpp_exception(void)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 __cxa_throw(puVar1,&typeinfo_int,0);
}

// Function: test_cpp_smart_ptr @ 0x11530
unsigned int test_cpp_smart_ptr(void)
{
 return 0x2bf;
}

// Function: test_cpp_rtti @ 0x11540
int test_cpp_rtti(void)
{
 unsigned int *puVar1;
 int *piVar2;
 int iVar3;
 int iVar4;
 int iVar5;
 puVar1 = (unsigned int *)_Znwj(4);
 *puVar1 = (unsigned int)&PTR__RTTIBase_00013ecc;
 piVar2 = (int *)_Znwj(4);
 *piVar2 = (int)&PTR__RTTIBase_00013ee0;
 iVar3 = (int)__dynamic_cast(puVar1,&typeinfo_RTTIBase,&typeinfo_RTTIDerivedA,0);
 iVar5 = 0x82;
 if (iVar3 == 0) {
 {
 iVar5 = 0x1e;
 }
 }
 iVar4 = (int)__dynamic_cast(piVar2,&typeinfo_RTTIBase,&typeinfo_RTTIDerivedB,0);
 iVar3 = iVar5 + 200;
 if (iVar4 == 0) {
 iVar3 = iVar5;
 }
 _ZdlPv(puVar1);
 (*(void (**)(void *))(*(void **)piVar2 + 4))(piVar2);
 return iVar3 + 0xe;
}

// Function: test_cpp_oo_features @ 0x11600
void test_cpp_oo_features(void)
{
 size_t sVar1;
 unsigned int uVar2;
 unsigned int *puVar3;
 int *piVar4;
 int iVar5;
 int iVar6;
 int iVar7;
 unsigned int local_30;
 unsigned int local_2c;
 unsigned int local_28;
 unsigned int local_24;
 unsigned int local_20;
 unsigned int local_1c;
 unsigned int uStack_18;
 unsigned int uStack_14;
 puts(&DAT_000121d8);
 uStack_18 = 0;
 local_1c = 0;
 local_20 = 0;
 local_24 = 0;
 local_28 = 0;
 local_2c = 0;
 local_30 = 0x74736554;
 uStack_14 = 0;
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstringop-overflow"
#pragma GCC diagnostic ignored "-Warray-bounds"
 sVar1 = strlen((char *)&local_30);
#pragma GCC diagnostic pop
 printf(&DAT_00012081,(int)(sVar1 + 0x125c));
 printf(&DAT_0001209f,(int)(LifecycleClass_instance_count * 0x3e9 + 0x15));
 printf(&DAT_000120bb,(int)0x2a);
 printf(&DAT_000120d7,(int)0x47);
 printf(&DAT_000120f3,(int)0x28a);
 printf(&DAT_00012110,(int)0x16);
 printf(&DAT_0001212c,(int)0x27);
 printf(&DAT_00012148,(int)0x10);
 printf(&DAT_00012164,(int)0x55);
 test_cpp_exception();
 printf(&DAT_00012180,(int)0x2a);
 printf(&DAT_0001219d,(int)0x2bf);
 puVar3 = (unsigned int *)_Znwj(4);
 *puVar3 = (unsigned int)&PTR__RTTIBase_00013ecc;
 piVar4 = (int *)_Znwj(4);
 *piVar4 = (int)&PTR__RTTIBase_00013ee0;
 iVar5 = (int)__dynamic_cast(puVar3,&typeinfo_RTTIBase,&typeinfo_RTTIDerivedA,0);
 iVar7 = 0x82;
 if (iVar5 == 0) {
 iVar7 = 0x1e;
 }
 iVar6 = (int)__dynamic_cast(piVar4,&typeinfo_RTTIBase,&typeinfo_RTTIDerivedB,0);
 iVar5 = iVar7 + 200;
 if (iVar6 == 0) {
 iVar5 = iVar7;
 }
 _ZdlPv(puVar3);
 (*(void (**)(void *))(*(void **)piVar4 + 4))(piVar4);
 printf(&DAT_000121ba,(int)(iVar5 + 0xe));
 return;
}

// Function: main @ 0x11810
int main(int argc, char **argv)
{
 (void)argc;
 (void)argv;
 test_cpp_oo_features();
 return 0;
}

// Function: template_max<int> @ 0x11830
int template_max_int_(int param_1,int param_2)
{
 if (param_2 < param_1) {
 param_2 = param_1;
 }
 return param_2;
}

// Function: template_max<double> @ 0x11840
double template_max_double_(double param_1,double param_2)
{
 if (param_2 <= param_1 || param_1 != param_2) {
 param_2 = param_1;
 }
 return param_2;
}

// Function: template_swap<int> @ 0x11860
void template_swap_int_(int *param_1,int *param_2)
{
 int iVar1;
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}

// Function: Container<int>::Container @ 0x11880
void Container_int_Container(Container_int_ *this)
{
 *(unsigned int *)((char *)this + 0x28) = 0;
 return;
}

// Function: Container<int>::push @ 0x11890
void Container_int_push(Container_int_ *this,int param_1)
{
 int iVar1;
 iVar1 = *(int *)((char *)this + 0x28);
 if (iVar1 < 10) {
 *(int *)((char *)this + 0x28) = iVar1 + 1;
 *(int *)((char *)this + iVar1 * 4) = param_1;
 }
 return;
}

// Function: Container<int>::get @ 0x118b0
unsigned int Container_int_get(Container_int_ *this,int param_1)
{
 unsigned int uVar1;
 uVar1 = 0;
 if ((-1 < param_1) && (*(int *)((char *)this + 0x28) != param_1 && param_1 <= *(int *)((char *)this + 0x28))) {
 uVar1 = *(unsigned int *)((char *)this + param_1 * 4);
 }
 return uVar1;
}

// Function: Container<int>::getSize @ 0x118d0
unsigned int Container_int_getSize(Container_int_ *this)
{
 return *(unsigned int *)((char *)this + 0x28);
}

// Function: Container<double>::Container @ 0x118e0
void Container_double_Container(Container_double_ *this)
{
 *(unsigned int *)((char *)this + 0x50) = 0;
 return;
}

// Function: Container<double>::push @ 0x118f0
void Container_double_push(Container_double_ *this,double param_1)
{
 int iVar1;
 iVar1 = *(int *)((char *)this + 0x50);
 if (iVar1 < 10) {
 *(int *)((char *)this + 0x50) = iVar1 + 1;
 *(double *)((char *)this + iVar1 * 8) = param_1;
 }
 return;
}

// Function: Container<double>::get @ 0x11910
long double Container_double_get(Container_double_ *this,int param_1)
{
 long double lVar1;
 lVar1 = (long double)0;
 if ((-1 < param_1) && (*(int *)((char *)this + 0x50) != param_1 && param_1 <= *(int *)((char *)this + 0x50))) {
 lVar1 = (long double)*(double *)((char *)this + param_1 * 8);
 }
 return lVar1;
}

// Function: Container<double>::getSize @ 0x11930
unsigned int Container_double_getSize(Container_double_ *this)
{
 return *(unsigned int *)((char *)this + 0x50);
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x11940
void RTTIDerivedA_destructor(RTTIDerivedA *this)
{
 _ZdlPv(this);
 return;
}

// Function: RTTIDerivedA::getType @ 0x11970
unsigned int RTTIDerivedA_getType(void)
{
 return 1;
}

// Function: RTTIBase::~RTTIBase @ 0x11980
void RTTIBase_destructor(RTTIBase *this)
{
 return;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x11990
void RTTIDerivedB_destructor(RTTIDerivedB *this)
{
 _ZdlPv(this);
 return;
}

// Function: RTTIDerivedB::getType @ 0x119c0
unsigned int RTTIDerivedB_getType(void)
{
 return 2;
}

// Function: __do_global_ctors_aux @ 0x119d0
int __do_global_ctors_aux(void)
{
 return 0;
}

// Function: _fini @ 0x11a1c
void _fini(void)
{
 __do_global_dtors_aux();
 return;
}

