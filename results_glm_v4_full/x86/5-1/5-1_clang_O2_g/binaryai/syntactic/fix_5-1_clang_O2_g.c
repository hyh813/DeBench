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
typedef long double longdouble;

#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/* Forward declarations */
extern void __gmon_start__(void);
extern void frame_dummy(void);

/* Implement missing profiling/compiler functions */
void __gmon_start__(void)
{
    return;
}

void frame_dummy(void)
{
    return;
}

int __do_global_ctors_aux(void)
{
    return 0;
}

extern void *operator_new(size_t);
extern void operator_delete(void *);
extern int printf(const char *__format, ...);
extern int puts(const char *__s);
extern int vprintf(const char *__format, va_list ap);
extern void *__cxa_begin_catch(void);
extern void *__cxa_allocate_exception(size_t);
extern int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle);
extern int __libc_start_main(int (*main)(int, char **, char **), int argc, char **argv, void (*init)(void), void (*fini)(void), void (*rtld_fini)(void), void *stack_end);

extern void *__dynamic_cast(void *ptr, const void *src_type, const void *dst_type, int hint);

extern void __cxa_end_catch(void);
extern void __cxa_throw(void *, const void *, void (*)(void *));
extern void _Unwind_Resume(void *exception_object);
extern void __cxa_rethrow(void);
extern int vprintf_wrapper(const char *__format, va_list ap);
extern size_t strlen_wrapper(const char *__s);

/* std namespace forward declarations - converted to C */
struct std_ios_base_Init {
    void (*vtable)(void);
};
extern struct std_ios_base_Init __ioinit;
extern void *__dso_handle;

/* Define these missing symbols */
struct std_ios_base_Init __ioinit = { NULL };
void *__dso_handle = NULL;

/* type_info definition - RTTI support */
struct type_info {
    void **vtable;
    const char *name;
};

/* Base class definition */
struct Base {
    void **vtable;
};

/* RTTI class definitions */
struct RTTIBase {
    void **vtable;
    const char *name;
};

struct RTTIDerivedA {
    void **vtable;
    const char *name;
};

struct RTTIDerivedB {
    void **vtable;
    const char *name;
};

/* Container template instantiations */
struct Container_int_ {
    int data[10];
    unsigned int size;
};

struct Container_double_ {
    double data[10];
    unsigned int size;
};

typedef struct Container_int_ Container_int_;
typedef struct Container_double_ Container_double_;



/* Undefined typeinfo references */
struct type_info int_typeinfo = { NULL, "int" };
struct RTTIBase RTTIBase_typeinfo = { NULL, "RTTIBase" };
struct RTTIDerivedA RTTIDerivedA_typeinfo = { NULL, "RTTIDerivedA" };
struct RTTIDerivedB RTTIDerivedB_typeinfo = { NULL, "RTTIDerivedB" };

/* Undefined data references */
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

/* String definitions */
char DAT_000121d8[] = "Test CPP Features";

/* Generic function pointer type for calling through pointers */
typedef void (*void_func_ptr)(void);
char DAT_00012081[] = "strlen: %zu\n";
char DAT_0001209f[] = "constructor: %d\n";
char DAT_000120bb[] = "virtual: %d\n";
char DAT_000120d7[] = "multiple: %d\n";
char DAT_000120f3[] = "diamond: %d\n";
char DAT_00012110[] = "operator: %d\n";
char DAT_0001212c[] = "template_func: %d\n";
char DAT_00012148[] = "template_class: %d\n";
char DAT_00012164[] = "lambda: %d\n";
char DAT_00012180[] = "exception: %d\n";
char DAT_0001219d[] = "smart_ptr: %d\n";
char DAT_000121ba[] = "rtti: %d\n";

/* Undefined pointer references */
void *PTR__RTTIBase_00013ecc = (void *)0x00013ecc;
void *PTR__RTTIBase_00013ee0 = (void *)0x00013ee0;

// Decompiled by BinaryAI
// SHA256: a1e7823c9643d519922d31cfffe2154dc1ca054f334dba17c9214db250122f2b

// Function: _init @ 0x11000
int _init(void *ctx)
{
 __gmon_start__();
 frame_dummy();
 return __do_global_ctors_aux();
}

// Function: FUN_00011030 @ 0x11030
void FUN_00011030(void)
{
 (*(void *)(char *)0x0)();
 return;
}

// Function: <EXTERNAL>::operator.new @ 0x11040
void * operator_new(size_t param_1)
{
 void *pvVar1;
 pvVar1 = malloc(param_1);
 return pvVar1;
}

// Function: <EXTERNAL>::__cxa_begin_catch @ 0x11050
void __cxa_begin_catch_wrapper(void)
{
 __cxa_begin_catch();
 return;
}

// Function: <EXTERNAL>::__cxa_allocate_exception @ 0x11060
void *__cxa_allocate_exception_wrapper(size_t size)
{
 return __cxa_allocate_exception(size);
}

// Function: <EXTERNAL>::strlen @ 0x11070
/* Already provided by string.h */

// Function: <EXTERNAL>::__cxa_atexit @ 0x11080
int __cxa_atexit_wrapper(void (*func)(void *), void *arg, void *dso_handle)
{
 return __cxa_atexit(func, arg, dso_handle);
}

// Function: <EXTERNAL>::__libc_start_main @ 0x11090
int __libc_start_main_wrapper(int (*main)(int, char **, char **), int argc, char **argv, void (*init)(void), void (*fini)(void), void (*rtld_fini)(void), void *stack_end)
{
 return __libc_start_main(main, argc, argv, init, fini, rtld_fini, stack_end);
}

// Function: <EXTERNAL>::operator.delete @ 0x110a0
void operator_delete(void *param_1)
{
 free(param_1);
 return;
}

// Function: <EXTERNAL>::__dynamic_cast @ 0x110b0
void *__dynamic_cast_wrapper(void *ptr, const void *src_type, const void *dst_type, int hint)
{
 return __dynamic_cast(ptr, src_type, dst_type, hint);
}

// Function: <EXTERNAL>::printf @ 0x110c0
int printf_wrapper(const char *__format,...)
{
 int iVar1;
 va_list args;
 va_start(args, __format);
 iVar1 = vprintf(__format, args);
 va_end(args);
 return iVar1;
}

// Function: <EXTERNAL>::__cxa_rethrow @ 0x110d0
void __cxa_rethrow_wrapper(void)
{
 __cxa_rethrow();
 return;
}

// Function: <EXTERNAL>::puts @ 0x110e0
int puts_wrapper(const char *__s)
{
 return puts(__s);
}

// Function: <EXTERNAL>::strlen @ 0x110e5
size_t strlen_wrapper(const char *__s)
{
 return strlen(__s);
}

// Function: <EXTERNAL>::std::ios_base::Init::Init @ 0x110f0
void std_ios_base_Init_Init(struct std_ios_base_Init *self)
{
 return;
}

// Function: <EXTERNAL>::__cxa_end_catch @ 0x11100
void __cxa_end_catch(void)
{
 return;
}

// Function: <EXTERNAL>::__cxa_throw @ 0x11110
void __cxa_throw_wrapper(void *thrown_exception, const void *tinfo, void (*dest)(void *))
{
 __cxa_throw(thrown_exception, tinfo, dest);
}

// Function: <EXTERNAL>::_Unwind_Resume @ 0x11120
void _Unwind_Resume_wrapper(void *exception_object)
{
 /* Exception handling resume - linker provided */
}

// Function: FUN_00011130 @ 0x11130
void FUN_00011130(void)
{
 int unaff_EBX;
 (**(void **)(unaff_EBX + -0x18))();
 return;
}

// Function: _GLOBAL__sub_I_5_1.cpp @ 0x11140
void _GLOBAL__sub_I_5_1_cpp(void)
{
 std_ios_base_Init_Init(&__ioinit);
 __cxa_atexit((void (*)(void *))std_ios_base_Init_Init,&__ioinit,&__dso_handle);
 return;
}

// Function: _start @ 0x11180
void _start(unsigned int param_1,unsigned int param_2);
int main(int argc, char **argv, char **envp);

void _start(unsigned int param_1,unsigned int param_2)
{
 char auStack_4 [4];
 __libc_start_main((int (*)(int, char **, char **))main,(int)param_2,&auStack_4,(void (*)())0,(void (*)())0,(void *)param_1,(void *)auStack_4);
 do {
 } while( true );
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

// Function: __x86.get_pc_thunk.dx @ 0x111c0
void __x86_get_pc_thunk_dx(void)
{
 return;
}

// Function: __x86.get_pc_thunk.di @ 0x111c5
void __x86_get_pc_thunk_di(void)
{
 return;
}

// Function: deregister_tm_clones @ 0x111d0
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
 uint32_t uVar1;
 int unaff_EDI;
 __x86_get_pc_thunk_di();
 if (*(char *)(unaff_EDI + 0x2e03) == '\0') {
 if (*(int *)(unaff_EDI + 0x2d8b) != 0) {
 FUN_00011130(*(unsigned int *)(unaff_EDI + 0x2def));
 }
 uVar1 = *(uint32_t *)(unaff_EDI + 0x2e07);
 while (uVar1 < ((unaff_EDI + 0x2c2f) - (unaff_EDI + 0x2c2b) >> 2) - 1U) {
 *(uint32_t *)(unaff_EDI + 0x2e07) = uVar1 + 1;
 (**(void **)(unaff_EDI + 0x2c2b + (uVar1 + 1) * 4))();
 uVar1 = *(uint32_t *)(unaff_EDI + 0x2e07);
 }
 deregister_tm_clones();
 *(char *)(unaff_EDI + 0x2e03) = 1;
 }
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
 sVar1 = strlen((char *)&local_28);
 return sVar1 + 0x125c;
}

// Function: test_cpp_constructor @ 0x11380
int test_cpp_constructor(void)
{
 return 0 * 0x3e9 + 0x15;
}

// Function: FUN_00011385 @ 0x11385
int FUN_00011385(void)
{
 int unaff_retaddr;
 return *(int *)(unaff_retaddr + 0x2ce7) * 0x3e9 + 0x15;
}

// Function: call_virtual_func @ 0x113a0
void call_virtual_func(Base *param_1,int param_2)
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
unsigned int test_cpp_exception(void)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 __cxa_throw(puVar1,&int_typeinfo,0);
 return 0x2a;
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
 puVar1 = (unsigned int *)operator_new(4);
 *puVar1 = (unsigned int)&PTR__RTTIBase_00013ecc;
 piVar2 = (int *)operator_new(4);
 *piVar2 = (int)&PTR__RTTIBase_00013ee0;
 iVar3 = (int)__dynamic_cast_wrapper(puVar1,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0);
 iVar5 = 0x82;
 if (iVar3 == 0) {
 iVar5 = 0x1e;
 }
 iVar4 = (int)__dynamic_cast_wrapper(piVar2,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo,0);
 iVar3 = iVar5 + 200;
 if (iVar4 == 0) {
 iVar3 = iVar5;
 }
 operator_delete(puVar1);
 operator_delete(piVar2);
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
 puts(DAT_000121d8);
 uStack_18 = 0;
 local_1c = 0;
 local_20 = 0;
 local_24 = 0;
 local_28 = 0;
 local_2c = 0;
 local_30 = 0x74736554;
 uStack_14 = 0;
 sVar1 = strlen((char *)&local_30);
 printf_wrapper(DAT_00012081,sVar1 + 0x125c);
 printf_wrapper(DAT_0001209f,0 * 0x3e9 + 0x15);
 printf_wrapper(DAT_000120bb,0x2a);
 printf_wrapper(DAT_000120d7,0x47);
 printf_wrapper(DAT_000120f3,0x28a);
 printf_wrapper(DAT_00012110,0x16);
 printf_wrapper(DAT_0001212c,0x27);
 printf_wrapper(DAT_00012148,0x10);
 printf_wrapper(DAT_00012164,0x55);
 uVar2 = test_cpp_exception();
 printf_wrapper(DAT_00012180,uVar2);
 printf_wrapper(DAT_0001219d,0x2bf);
 puVar3 = (unsigned int *)operator_new(4);
 *puVar3 = (unsigned int)&PTR__RTTIBase_00013ecc;
 piVar4 = (int *)operator_new(4);
 *piVar4 = (int)&PTR__RTTIBase_00013ee0;
 iVar5 = (int)__dynamic_cast_wrapper(puVar3,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0);
 iVar7 = 0x82;
 if (iVar5 == 0) {
 iVar7 = 0x1e;
 }
 iVar6 = (int)__dynamic_cast_wrapper(piVar4,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo,0);
 iVar5 = iVar7 + 200;
 if (iVar6 == 0) {
 iVar5 = iVar7;
 }
 operator_delete(puVar3);
 operator_delete(piVar4);
 printf_wrapper(DAT_000121ba,iVar5 + 0xe);
 return;
}

// Function: main @ 0x11810
int main(int argc, char **argv, char **envp)
{
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
void Container_int__Container(Container_int_ *this)
{
 *(unsigned int *)((char *)this + 0x28) = 0;
 return;
}

// Function: Container<int>::push @ 0x11890
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

// Function: Container<int>::get @ 0x118b0
unsigned int Container_int__get(Container_int_ *this,int param_1)
{
 unsigned int uVar1;
 uVar1 = 0;
 if ((-1 < param_1) && (*(int *)((char *)this + 0x28) != param_1 && param_1 <= *(int *)((char *)this + 0x28))) {
 uVar1 = *(unsigned int *)((char *)this + param_1 * 4);
 }
 return uVar1;
}

// Function: Container<int>::getSize @ 0x118d0
unsigned int Container_int__getSize(Container_int_ *this)
{
 return *(unsigned int *)((char *)this + 0x28);
}

// Function: Container<double>::Constructor @ 0x118e0
void Container_double__Constructor(Container_double_ *this)
{
 *(unsigned int *)((char *)this + 0x50) = 0;
 return;
}

// Function: Container<double>::push @ 0x118f0
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

// Function: Container<double>::get @ 0x11910
double Container_double__get(Container_double_ *this,int param_1)
{
 double lVar1;
 lVar1 = 0.0;
 if ((-1 < param_1) && (*(int *)((char *)this + 0x50) != param_1 && param_1 <= *(int *)((char *)this + 0x50))) {
 lVar1 = *(double *)((char *)this + param_1 * 8);
 }
 return lVar1;
}

// Function: Container<double>::getSize @ 0x11930
unsigned int Container_double__getSize(Container_double_ *this)
{
 return *(unsigned int *)((char *)this + 0x50);
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x11940
void RTTIDerivedA__RTTIDerivedA(RTTIDerivedA *this)
{
 operator_delete(this);
 return;
}

// Function: RTTIDerivedA::getType @ 0x11970
unsigned int RTTIDerivedA__getType(void)
{
 return 1;
}

// Function: RTTIBase::~RTTIBase @ 0x11980
void RTTIBase__RTTIBase(RTTIBase *this)
{
 return;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x11990
void RTTIDerivedB__RTTIDerivedB(RTTIDerivedB *this)
{
 operator_delete(this);
 return;
}

// Function: RTTIDerivedB::getType @ 0x119c0
unsigned int RTTIDerivedB__getType(void)
{
 return 2;
}

// Function: _fini @ 0x11a1c
void _fini(void)
{
 __do_global_dtors_aux();
 return;
}

