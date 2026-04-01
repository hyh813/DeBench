/* Auto-injected type definitions by preprocessor */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

// Decompiled by BinaryAI
// SHA256: 4fa90e217568c14d3445ee8828d57438d32bf6069cfe552e3f2c8d7ec3de581f

// Forward declarations for types
typedef struct Base Base;
typedef struct LifecycleClass LifecycleClass;
typedef struct RTTIBase RTTIBase;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;
typedef struct Container_int_ Container_int_;
typedef struct Container_double_ Container_double_;

// Struct definitions
struct Base {
 void *vtable;
};

struct LifecycleClass {
 int data[20];
};

struct RTTIBase {
 void *vtable;
 int type_info;
};

struct RTTIDerivedA {
 void *vtable;
 int type_info;
};

struct RTTIDerivedB {
 void *vtable;
 int type_info;
};

struct Container_int_ {
 int data[10];
 int size;
};

struct Container_double_ {
 double data[10];
 int size;
};

// External variable declarations
extern char std___ioinit;
extern char __dso_handle;
extern int PTR__RTTIBase_00013ecc;
extern int PTR__RTTIBase_00013ee0;
extern int RTTIBase_typeinfo;
extern int RTTIDerivedA_typeinfo;
extern int RTTIDerivedB_typeinfo;
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
extern int LifecycleClass_instance_count;

// External function declarations
int printf(char *__format, ...);
int puts(char *__s);
void __gmon_start__(void);
void frame_dummy(void);
void __do_global_ctors_aux(void);
void *_Znwm(unsigned int);
void __cxa_begin_catch_ext(void *);
void *__cxa_allocate_exception_ext(unsigned int);
int __cxa_atexit(void (*func)(void), void *arg, void *dso_handle);
int __cxa_atexit_ext(void (*func)(void), void *arg, void *dso_handle);
void __libc_start_main(int (*main)(void), int argc, void *ubp_av, void (*init)(void), void (*fini)(void), void (*rtld_fini)(void), void *stack_end);
void __libc_start_main_ext(int (*main)(int, char**, char**), int argc, void *ubp_av, void (*init)(void), void (*fini)(void), void (*rtld_fini)(void), void *stack_end);
void _ZdlPv(void *);
void *__dynamic_cast(void *, void *, void *, int);
void *__dynamic_cast_ext(void *, void *, void *, int);
void _ZNSt8ios_base4InitC1Ev(void *);
void __cxa_end_catch_ext(void);
void __cxa_throw_ext(void *, void *, void *);
void _Unwind_Resume_ext(void);
void __cxa_rethrow_ext(void);
void FUN_00011130(int unaff_EBX);

// Forward declarations for functions used before definition
int __x86_get_pc_thunk_di(void);
unsigned int test_cpp_exception(void);
void Container_int__Container(Container_int_ *this);
void Container_int__push(Container_int_ *this,int param_1);
unsigned int Container_int__get(Container_int_ *this,int param_1);
unsigned int Container_int__getSize(Container_int_ *this);
void Container_double__Container(Container_double_ *this);
void Container_double__push(Container_double_ *this,double param_1);
double Container_double__get(Container_double_ *this,int param_1);
unsigned int Container_double__getSize(Container_double_ *this);
void RTTIDerivedA_destructor(RTTIDerivedA *this);
unsigned int RTTIDerivedA_getType(void);
void RTTIBase_destructor(RTTIBase *this);
void RTTIDerivedB_destructor(RTTIDerivedB *this);
unsigned int RTTIDerivedB_getType(void);

// Forward declaration for main
int main(int argc, char **argv, char **envp);

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
 (*(void *)(char *)0x0)();
 return;
}

// Function: <EXTERNAL>::operator.new @ 0x11040
void * operator_new(uint32_t param_1)
{
 void *pvVar1;
 pvVar1 = _Znwm(param_1);
 return pvVar1;
}

// Function: <EXTERNAL>::__cxa_begin_catch @ 0x11050
void __cxa_begin_catch(void *param_1)
{
 __cxa_begin_catch_ext(param_1);
 return;
}

// Function: <EXTERNAL>::__cxa_allocate_exception @ 0x11060
void *__cxa_allocate_exception(unsigned int size)
{
 return __cxa_allocate_exception_ext(size);
}

// Function: <EXTERNAL>::strlen @ 0x11070
size_t my_strlen(char *__s)
{
 size_t sVar1;
 sVar1 = strlen(__s);
 return sVar1;
}



// Function: <EXTERNAL>::__libc_start_main @ 0x11090
void __libc_start_main(int (*main)(void), int argc, void *ubp_av, void (*init)(void), void (*fini)(void), void (*rtld_fini)(void), void *stack_end)
{
 __libc_start_main_ext(main, argc, ubp_av, init, fini, rtld_fini, stack_end);
}

// Function: <EXTERNAL>::operator.delete @ 0x110a0
void operator_delete(void *param_1)
{
 _ZdlPv(param_1);
}

// Function: <EXTERNAL>::__dynamic_cast @ 0x110b0
void *__dynamic_cast(void *obj, void *src_type, void *dst_type, int flags)
{
 return __dynamic_cast_ext(obj, src_type, dst_type, flags);
}

// Function: <EXTERNAL>::printf @ 0x110c0
int my_printf(char *__format, unsigned int arg)
{
 int iVar1;
 iVar1 = printf(__format, arg);
 return iVar1;
}

// Function: <EXTERNAL>::__cxa_rethrow @ 0x110d0
void __cxa_rethrow(void)
{
 __cxa_rethrow_ext();
}

// Function: <EXTERNAL>::puts @ 0x110e0
int my_puts(char *__s)
{
 int iVar1;
 iVar1 = puts(__s);
 return iVar1;
}

// Function: <EXTERNAL>::std::ios_base::Init::Init @ 0x110f0
void std_ios_base_Init_Init(void *this)
{
 _ZNSt8ios_base4InitC1Ev(this);
}

// Function: <EXTERNAL>::__cxa_end_catch @ 0x11100
void __cxa_end_catch(void)
{
 __cxa_end_catch_ext();
}

// Function: <EXTERNAL>::__cxa_throw @ 0x11110
void __cxa_throw(void *param_1, void *typeinfo, void *dest)
{
 __cxa_throw_ext(param_1, typeinfo, dest);
}

// Function: <EXTERNAL>::_Unwind_Resume @ 0x11120
void _Unwind_Resume(void)
{
 _Unwind_Resume_ext();
}

// Function: FUN_00011130 @ 0x11130
void FUN_00011130(int unaff_EBX)
{
 (**(void **)(unaff_EBX + -0x18))();
 return;
}

// Function: _GLOBAL__sub_I_5_1.cpp @ 0x11140
void _GLOBAL__sub_I_5_1_cpp(void)
{
 unsigned int uVar1;
 uVar1 = 0x11148;
 _ZNSt8ios_base4InitC1Ev((void *)&std___ioinit);
 __cxa_atexit_ext((void (*)(void))0, (void *)&std___ioinit, (void *)&__dso_handle);
 return;
}

// Function: _start @ 0x11180
void _start(unsigned int param_1,unsigned int param_2)
{
 char auStack_4 [4];
 __libc_start_main_ext(main,param_2,&stack0x00000004,0,0,param_1,auStack_4);
 do {
 } while( true );
}

// Function: __i686.get_pc_thunk.bx @ 0x111ac
int __i686_get_pc_thunk_bx(void)
{
 return 0;
}

// Function: __x86.get_pc_thunk.bx @ 0x111b0
int __x86_get_pc_thunk_bx(void)
{
 return 0;
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
void __do_global_dtors_aux(int unaff_EDI)
{
 uint uVar1;
 __x86_get_pc_thunk_di();
 if (*(char *)(unaff_EDI + 0x2e03) == '\0') {
 if (*(int *)(unaff_EDI + 0x2d8b) != 0) {
 FUN_00011130(*(unsigned int *)(unaff_EDI + 0x2def));
 }
 uVar1 = *(uint *)(unaff_EDI + 0x2e07);
 while (uVar1 < ((unaff_EDI + 0x2c2f) - (unaff_EDI + 0x2c2b) >> 2) - 1U) {
 *(uint *)(unaff_EDI + 0x2e07) = uVar1 + 1;
 (**(void **)(unaff_EDI + 0x2c2b + (uVar1 + 1) * 4))();
 uVar1 = *(uint *)(unaff_EDI + 0x2e07);
 }
 deregister_tm_clones();
 *(char *)(unaff_EDI + 0x2e03) = 1;
 }
 return;
}

// Function: __x86.get_pc_thunk.dx @ 0x112e9
int __x86_get_pc_thunk_dx(void)
{
 return 0;
}

// Function: __x86.get_pc_thunk.di @ 0x112ed
int __x86_get_pc_thunk_di(void)
{
 return 0;
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
 sVar1 = my_strlen((char *)&local_28);
 return sVar1 + 0x125c;
}

// Function: test_cpp_constructor @ 0x11380
int test_cpp_constructor(void)
{
 return LifecycleClass_instance_count * 0x3e9 + 0x15;
}

// Function: FUN_00011385 @ 0x11385
int FUN_00011385(int unaff_retaddr)
{
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
 *puVar1 = &PTR__RTTIBase_00013ecc;
 piVar2 = (int *)operator_new(4);
 *piVar2 = (int)&PTR__RTTIBase_00013ee0;
 iVar3 = __dynamic_cast_ext(puVar1,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0);
 iVar5 = 0x82;
 if (iVar3 == 0) {
 iVar5 = 0x1e;
 }
 iVar4 = __dynamic_cast_ext(piVar2,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo,0);
 iVar3 = iVar5 + 200;
 if (iVar4 == 0) {
 iVar3 = iVar5;
 }
 operator_delete(puVar1);
 (*(void (*)(void *))(*piVar2 + 4))(piVar2);
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
 my_puts(&DAT_000121d8);
 uStack_18 = 0;
 local_1c = 0;
 local_20 = 0;
 local_24 = 0;
 local_28 = 0;
 local_2c = 0;
 local_30 = 0x74736554;
 uStack_14 = 0;
 sVar1 = my_strlen((char *)&local_30);
 my_printf(&DAT_00012081,sVar1 + 0x125c);
 my_printf(&DAT_0001209f,LifecycleClass_instance_count * 0x3e9 + 0x15);
 my_printf(&DAT_000120bb,0x2a);
 my_printf(&DAT_000120d7,0x47);
 my_printf(&DAT_000120f3,0x28a);
 my_printf(&DAT_00012110,0x16);
 my_printf(&DAT_0001212c,0x27);
 my_printf(&DAT_00012148,0x10);
 my_printf(&DAT_00012164,0x55);
 uVar2 = test_cpp_exception();
 my_printf(&DAT_00012180,uVar2);
 my_printf(&DAT_0001219d,0x2bf);
 puVar3 = (unsigned int *)operator_new(4);
 *puVar3 = &PTR__RTTIBase_00013ecc;
 piVar4 = (int *)operator_new(4);
 *piVar4 = (int)&PTR__RTTIBase_00013ee0;
 iVar5 = __dynamic_cast_ext(puVar3,0,0,0);
 iVar7 = 0x82;
 if (iVar5 == 0) {
 iVar7 = 0x1e;
 }
 iVar6 = __dynamic_cast_ext(piVar4,0,0,0);
 iVar5 = iVar7 + 200;
 if (iVar6 == 0) {
 iVar5 = iVar7;
 }
 operator_delete(puVar3);
 (*(void (*)(void *))(*piVar4 + 4))(piVar4);
 my_printf(&DAT_000121ba,iVar5 + 0xe);
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

// Function: Container_int__Container @ 0x11880
void Container_int__Container(Container_int_ *this)
{
 *(unsigned int *)(this + 0x28) = 0;
 return;
}

// Function: Container_int__push @ 0x11890
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

// Function: Container_int__get @ 0x118b0
unsigned int Container_int__get(Container_int_ *this,int param_1)
{
 unsigned int uVar1;
 uVar1 = 0;
 if ((-1 < param_1) && (*(int *)(this + 0x28) != param_1 && param_1 <= *(int *)(this + 0x28))) {
 uVar1 = *(unsigned int *)(this + param_1 * 4);
 }
 return uVar1;
}

// Function: Container_int__getSize @ 0x118d0
unsigned int Container_int__getSize(Container_int_ *this)
{
 return *(unsigned int *)(this + 0x28);
}

// Function: Container_double__Container @ 0x118e0
void Container_double__Container(Container_double_ *this)
{
 *(unsigned int *)(this + 0x50) = 0;
 return;
}

// Function: Container_double__push @ 0x118f0
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

// Function: Container_double__get @ 0x11910
double Container_double__get(Container_double_ *this,int param_1)
{
 double lVar1;
 lVar1 = (double)0;
 if ((-1 < param_1) && (*(int *)(this + 0x50) != param_1 && param_1 <= *(int *)(this + 0x50))) {
 lVar1 = *(double *)(this + param_1 * 8);
 }
 return lVar1;
}

// Function: Container_double__getSize @ 0x11930
unsigned int Container_double__getSize(Container_double_ *this)
{
 return *(unsigned int *)(this + 0x50);
}

// Function: RTTIDerivedA_destructor @ 0x11940
void RTTIDerivedA_destructor(RTTIDerivedA *this)
{
 operator_delete(this);
 return;
}

// Function: RTTIDerivedA_getType @ 0x11970
unsigned int RTTIDerivedA_getType(void)
{
 return 1;
}

// Function: RTTIBase_destructor @ 0x11980
void RTTIBase_destructor(RTTIBase *this)
{
 return;
}

// Function: RTTIDerivedB_destructor @ 0x11990
void RTTIDerivedB_destructor(RTTIDerivedB *this)
{
 operator_delete(this);
 return;
}

// Function: RTTIDerivedB_getType @ 0x119c0
unsigned int RTTIDerivedB_getType(void)
{
 return 2;
}

// Function: __do_global_ctors_aux @ 0x119d0
void __do_global_ctors_aux(void)
{
 return;
}

// Function: _fini @ 0x11a1c
void _fini(void)
{
 __do_global_dtors_aux();
 return;
}

// Stub implementations for external runtime functions
void __cxa_begin_catch_ext(void *param_1)
{
 (void)param_1;
}

void *__cxa_allocate_exception_ext(unsigned int size)
{
 (void)size;
 return NULL;
}

void __cxa_throw_ext(void *param_1, void *typeinfo, void *dest)
{
 (void)param_1;
 (void)typeinfo;
 (void)dest;
}

void __cxa_end_catch_ext(void)
{
 // Stub implementation
}

void __cxa_rethrow_ext(void)
{
 // Stub implementation
}

void _Unwind_Resume_ext(void)
{
 // Stub implementation
}

void __libc_start_main_ext(int (*main)(int, char**, char**), int argc, void *ubp_av, void (*init)(void), void (*fini)(void), void *rtld_fini, void *stack_end)
{
 (void)main;
 (void)argc;
 (void)ubp_av;
 (void)init;
 (void)fini;
 (void)rtld_fini;
 (void)stack_end;
}

void *__dynamic_cast_ext(void *obj, void *src_type, void *dst_type, int flags)
{
 (void)obj;
 (void)src_type;
 (void)dst_type;
 (void)flags;
 return NULL;
}

int __cxa_atexit_ext(void (*func)(void), void *arg, void *dso_handle)
{
 (void)func;
 (void)arg;
 (void)dso_handle;
 return 0;
}

