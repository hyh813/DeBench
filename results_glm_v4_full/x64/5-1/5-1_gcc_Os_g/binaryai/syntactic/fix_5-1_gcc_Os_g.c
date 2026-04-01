/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;

/* RTTI type info structures */
struct RTTIBase {
    static const void *typeinfo;
};

struct RTTIDerivedA {
    static const void *typeinfo;
};

struct RTTIDerivedB {
    static const void *typeinfo;
};

typedef unsigned int uint;

/* Forward declarations */
struct Base;
struct RTTIBase;
struct RTTIDerivedA;
struct RTTIDerivedB;
struct DiamondDerived;
struct MiddleA;
struct MiddleB;
struct Derived;
struct MultiDerived;
struct VirtualBase;
struct LifecycleClass {
    static int instance_count;
};

/* Complete struct definitions needed for compilation */
struct Base {
    long vtable;
};

struct VirtualBase {
    long vtable;
};

struct MiddleA {
    long vtable_A;
    int data;
    long vtable_B;
};

struct MiddleB {
    long vtable_A;
    int data;
    long vtable_B;
};

struct DiamondDerived {
    long vtable_A;
    int data;
    long vtable_B;
    long vtable_C;
};

struct Derived {
    long vtable;
    int data;
};

/* Complete struct definitions */
struct MultiDerived {
    long vtable_A;
    long vtable_B;
};

struct Container_int_ {
    int _0_4_[10];
    int _28_4_;
    char _2c_4_[12];
};

struct Container_double_ {
    double _0_8_[10];
    int _50_4_;
    char _54_4_[12];
};

struct unique_ptr_int_std__default_delete_int__ {
    void *ptr;
};

struct unique_ptr_int___std__default_delete_int____ {
    void *ptr;
};

struct Container_int_;
struct Container_double_;
struct RTTIDerivedB;
struct RTTIDerivedA;
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

/* Global variable declarations */
struct std_ios_base_Init {};
extern struct std_ios_base_Init std___ioinit;
extern void *__dso_handle;
extern char completed_0;
extern char DAT_00103016[];
extern char DAT_0010303a[];
extern char DAT_00103074[];
extern char DAT_001030ac[];
extern char DAT_001030e5[];
extern char DAT_00103101[];
extern char DAT_00103139[];
extern char DAT_00103156[];
extern char DAT_00103173[];
extern char DAT_00103004[];

// Decompiled by BinaryAI
// SHA256: 86a094d4a776a4afb7d86ac9d863cba1a699d28a1b98bde0c69c9bd03d738f25

/* External function prototypes */
int __gmon_start__(void);
void *malloc(unsigned long size);
void free(void *ptr);
void __libc_start_main(int (*main)(void), unsigned long long argc, void **argv, void (*init)(void), void (*fini)(void), void (*rtld_fini)(void), void *stack_end);
int template_max_int_(int param_1,int param_2);
double template_max_double_(double param_1,double param_2);
void template_swap_int_(int *param_1,int *param_2);
void Container_int__push(Container_int_ *self,int param_1);

/* VTable pointer declarations */
extern void *PTR_virtual_func_001058a8;
extern void *PTR_virtual_func_001058d8;

/* RTTI type info for int */
extern const void *int_typeinfo;

/* Forward declarations for smart pointer functions */
void std_unique_ptr_int_std__default_delete_int___unique_ptr(struct unique_ptr_int_std__default_delete_int__ *self);
void std_unique_ptr_int_array_std__default_delete_int_array___unique_ptr(struct unique_ptr_int___std__default_delete_int____ *self);

/* Forward declaration for DiamondDerived_func */
int DiamondDerived_func(struct DiamondDerived *self);

/* Forward declaration for DiamondDerived_destructor_1 */
void DiamondDerived_destructor_1(struct DiamondDerived *self, long *rdx_param, int esi_param);

/* RTTI type info pointers */
extern void *PTR__RTTIDerivedA_00105b98;
extern void *PTR__RTTIDerivedB_00105bc0;

/* Forward declarations */
void test_cpp_oo_features(void);

// Function: _init @ 0x102000
int _init(void *ctx)
{
 int iVar1;
 iVar1 = __gmon_start__();
 return iVar1;
}

// Function: FUN_00102020 @ 0x102020
void FUN_00102020(void)
{
 ((void (*)(void))0)();
 return;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x102160
void __cxa_finalize(void *dso_handle)
{
 return;
}

#include <stdarg.h>
#include <stdio.h>

// Function: <EXTERNAL>::__printf_chk @ 0x102170
int __printf_chk(int flag, const char *format, ...)
{
 va_list args;
 int result;
 va_start(args, format);
 result = vprintf(format, args);
 va_end(args);
 return result;
}

// Function: <EXTERNAL>::operator.new[] @ 0x102180
void * operator_new__(unsigned long param_1)
{
 void *pvVar1;
 pvVar1 = malloc(param_1);
 return pvVar1;
}

// Function: <EXTERNAL>::__cxa_begin_catch @ 0x102190
void *__cxa_begin_catch(void)
{
 return (void *)0;
}

// Function: <EXTERNAL>::__cxa_pure_virtual @ 0x10219a
void __cxa_pure_virtual(void)
{
 return;
}

// Function: <EXTERNAL>::strlen @ 0x1021a0
size_t strlen(char *__s)
{
 size_t sVar1;
 sVar1 = strlen(__s);
 return sVar1;
}

// Function: <EXTERNAL>::__cxa_allocate_exception @ 0x1021b0
void *__cxa_allocate_exception(size_t thrown_size)
{
 return __cxa_allocate_exception(thrown_size);
}

// Function: <EXTERNAL>::strncpy @ 0x1021c0
char * strncpy(char *__dest,char *__src,size_t __n)
{
 char *pcVar1;
 pcVar1 = strncpy(__dest,__src,__n);
 return pcVar1;
}

// Function: <EXTERNAL>::__cxa_atexit @ 0x1021d0
int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle)
{
 return __cxa_atexit(func, arg, dso_handle);
}

// Function: <EXTERNAL>::operator.new @ 0x1021e0
void * operator_new(unsigned long param_1)
{
 void *pvVar1;
 pvVar1 = malloc(param_1);
 return pvVar1;
}

// Function: <EXTERNAL>::operator.delete @ 0x1021f0
void operator_delete(void *param_1)
{
 free(param_1);
 return;
}

// Function: <EXTERNAL>::__stack_chk_fail @ 0x102200
void __stack_chk_fail(void)
{
 return;
}

// Function: <EXTERNAL>::__dynamic_cast @ 0x102210
void *__dynamic_cast(void *sub_obj, const void *src_type, const void *dst_type, int src2dst_offset)
{
 return (void *)0;
}

// Function: <EXTERNAL>::operator.delete[] @ 0x102220
void operator_delete__(void *param_1)
{
 free(param_1);
 return;
}

// Function: <EXTERNAL>::strcmp @ 0x102230
int strcmp(char *__s1,char *__s2)
{
 return 0;
}

// Function: <EXTERNAL>::__cxa_rethrow @ 0x102240
void __cxa_rethrow(void)
{
 return;
}

// Function: <EXTERNAL>::std::ios_base::Init::Init @ 0x102250
void std_ios_base_Init_init(struct std_ios_base_Init *self)
{
 return;
}

// Function: <EXTERNAL>::puts @ 0x102260
int puts(char *__s)
{
 int iVar1;
 iVar1 = puts(__s);
 return iVar1;
}

// Function: <EXTERNAL>::__cxa_end_catch @ 0x102270
void __cxa_end_catch(void)
{
 return;
}

// Function: <EXTERNAL>::__cxa_throw @ 0x102280
void __cxa_throw(void *thrown_exception, void *tinfo, void *dest)
{
 return;
}

// Function: <EXTERNAL>::_Unwind_Resume @ 0x102290
void _Unwind_Resume(void *exception_object)
{
 return;
}

// Function: test_cpp_exception @ 0x1022a0
void test_cpp_exception(void)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 __cxa_throw(puVar1,&int_typeinfo,0);
}

// Function: main @ 0x102367
int main(void)
{
 union {
   char _0_16_[16];
   struct {
     unsigned long long _0_8_;
     unsigned long long _8_8_;
   };
 } auVar1;
 unsigned long long in_RAX;
 test_cpp_oo_features();
 auVar1._8_8_ = 0;
 auVar1._0_8_ = in_RAX;
 return (int)((unsigned long long)auVar1._0_8_ >> 0x40);
}

// Function: _GLOBAL__sub_I_test_cpp_member_func @ 0x102375
void _GLOBAL__sub_I_test_cpp_member_func(void)
{
 std_ios_base_Init_init(&std___ioinit);
 __cxa_atexit((void (*)(void *))std_ios_base_Init_init,&std___ioinit,__dso_handle);
 return;
}

// Function: _start @ 0x1023a0
void _start(unsigned long long param_1,unsigned long long param_2)
{
 char auStack_8 [8];
 __libc_start_main(main,param_2,(void **)&auStack_8,0,0,param_1,auStack_8);
 do {
 } while( true );
}

// Function: deregister_tm_clones @ 0x1023d0
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x102400
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x102440
void __do_global_dtors_aux(void)
{
 if (completed_0 != '\0') {
 return;
 }
 __cxa_finalize((void *)__dso_handle);
 deregister_tm_clones();
 completed_0 = 1;
 return;
}

// Function: test_cpp_member_func @ 0x102489
int test_cpp_member_func(void)
{
 char *__s;
 size_t sVar1;
 long in_FS_OFFSET;
 char local_30 [31];
 char local_11;
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 __s = strncpy(local_30,"Test",0x1f);
 local_11 = 0;
 sVar1 = strlen(__s);
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return (int)sVar1 + 0x125c;
}

// Function: test_cpp_constructor @ 0x1024e3
int test_cpp_constructor(void)
{
 return LifecycleClass::instance_count * 0x3e9 + 0x15;
}

// Function: call_virtual_func @ 0x1024f5
int call_virtual_func(Base *self,int param_2)
{
    return ((int (*)(Base *, int))(**(void ***)self))(self, param_2);
}

// Function: test_cpp_virtual_func @ 0x1024fe
int test_cpp_virtual_func(void)
{
 int iVar1;
 int iVar2;
 long in_FS_OFFSET = 0;
 char **local_28;
 char **local_20;
 unsigned int local_18;
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_18 = 3;
 local_28 = (char **)&PTR_virtual_func_001058a8;
 local_20 = (char **)&PTR_virtual_func_001058d8;
 iVar1 = call_virtual_func((Base *)&local_28,5);
 iVar2 = call_virtual_func((Base *)&local_20,5);
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return iVar1 + 0x15 + iVar2;
}

// Function: test_cpp_multiple_inheritance @ 0x102571
unsigned long long test_cpp_multiple_inheritance(void)
{
 return 0x47;
}

// Function: test_cpp_operator_overload @ 0x10257b
unsigned long long test_cpp_operator_overload(void)
{
 return 0x16;
}

// Function: test_cpp_template_func @ 0x102585
int test_cpp_template_func(void)
{
 int iVar1;
 long in_FS_OFFSET;
 double dVar2;
 int local_18;
 int local_14;
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 iVar1 = template_max_int_(3,7);
 dVar2 = template_max_double_(2.5,1.5);
 local_18 = 10;
 local_14 = 0x14;
 template_swap_int_(&local_18,&local_14);
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return (int)dVar2 + iVar1 + local_18 + local_14;
}

// Function: test_cpp_template_class @ 0x102618
int test_cpp_template_class(void)
{
 int iVar1;
 long in_FS_OFFSET;
 Container_int_ local_3c;
 int local_14;
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_14 = 1;
 local_3c._0_4_[0] = 10;
 Container_int__push(&local_3c,20);
 Container_int__push(&local_3c,30);
 iVar1 = 0;
 if (0 < local_14) {
 iVar1 = local_3c._0_4_[0];
 }
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return local_14 + 3 + iVar1;
}

// Function: test_cpp_lambda @ 0x10268d
unsigned long long test_cpp_lambda(void)
{
 return 0x55;
}

// Function: test_cpp_rtti @ 0x102697
unsigned long long test_cpp_rtti(void)
{
 void *lVar1;
 int iVar2;
 long *plVar3;
 long *plVar4;
 long lVar5;
 size_t sVar6;
 unsigned long long in_RCX;
 uint uVar7;
 char *__s1;
 char auVar8 [16];
 uVar7 = 10;
 plVar3 = (long *)operator_new(8);
 *plVar3 = (long)(intptr_t)*(void **)&PTR__RTTIDerivedA_00105b98;
 plVar4 = (long *)operator_new(8);
 lVar1 = (void *)(uintptr_t)*plVar3;
 *plVar4 = (long)(intptr_t)*(void **)&PTR__RTTIDerivedB_00105bc0;
 *(long *)plVar4 = (long)(intptr_t)&PTR__RTTIDerivedB_00105bc0;
 __s1 = *(char **)(*(long *)((long)(uintptr_t)lVar1 + -8) + 8);
 if ((__s1 != "12RTTIDerivedA") && (uVar7 = 0, *__s1 != '*')) {
 iVar2 = strcmp(__s1,"12RTTIDerivedA");
 uVar7 = -(uint)(iVar2 == 0) & 10;
 }
 iVar2 = uVar7 + 0x14;
 lVar5 = (long)__dynamic_cast(plVar3,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
 if (lVar5 != 0) {
 iVar2 = uVar7 + 0x78;
 }
 lVar5 = (long)__dynamic_cast(plVar4,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
 if (lVar5 != 0) {
 iVar2 = iVar2 + 200;
 }
 if (*__s1 == '*') {
 __s1 = __s1 + 1;
 }
sVar6 = strlen(__s1);
{
 void (*fp)(void *) = (void (*)(void *))(*(void **)((char *)lVar1 + 8));
 fp(plVar3);
}
{
 void (*fp)(void *) = (void (*)(void *))((intptr_t)(uintptr_t)*(void **)*plVar4 + 8);
 fp(plVar4);
}
 ((unsigned int *)&auVar8)[1] = 0;
 ((unsigned int *)&auVar8)[0] = iVar2 + (int)sVar6;
 ((unsigned long long *)&auVar8)[1] = in_RCX;
 return *(unsigned long long *)&auVar8;
}

// Function: test_cpp_smart_ptr @ 0x1027ac
unsigned long long test_cpp_smart_ptr(void)
{
 long in_FS_OFFSET;
 unsigned long long local_38;
 unsigned int *local_30;
 unsigned long long *local_28;
 long local_20;
 local_20 = *(long *)(in_FS_OFFSET + 0x28);
 local_30 = (unsigned int *)operator_new(4);
 local_38 = 0;
 *local_30 = 200;
 local_28 = (unsigned long long *)operator_new__(0x14);
 *local_28 = 0x200000001;
 local_28[1] = 0x400000003;
 *(unsigned int *)(local_28 + 2) = 5;
 std_unique_ptr_int_array_std__default_delete_int_array___unique_ptr((unique_ptr_int___std__default_delete_int____ *)&local_28);
 std_unique_ptr_int_std__default_delete_int___unique_ptr((unique_ptr_int_std__default_delete_int__ *)&local_30);
 std_unique_ptr_int_std__default_delete_int___unique_ptr((unique_ptr_int_std__default_delete_int__ *)&local_38);
 if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return 0x2bf;
}

// Function: test_cpp_diamond_inheritance @ 0x10287c
int test_cpp_diamond_inheritance(void)
{
 int iVar1;
 int iVar2;
 long in_FS_OFFSET;
 unsigned long long local_50 [2];
 unsigned long long local_40;
 unsigned long long local_30;
 unsigned int local_28;
 long local_20;
 local_20 = *(long *)(in_FS_OFFSET + 0x28);
 local_28 = 0x32;
 local_50[0] = 0x105b08;
 local_30 = 0x105b70;
 local_40 = 0x105b38;
 iVar1 = DiamondDerived_func((DiamondDerived *)&local_30);
 local_28 = 100;
 iVar2 = DiamondDerived_func((DiamondDerived *)&local_30);
 (void)DiamondDerived_destructor_1((DiamondDerived *)local_50, 0, 1);
 if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return iVar1 + iVar2;
}

// Function: test_cpp_oo_features @ 0x10290d
void test_cpp_oo_features(void)
{
 unsigned int uVar1;
 unsigned long long in_RAX;
 puts(DAT_00103016);
 uVar1 = test_cpp_member_func();
 __printf_chk(1,DAT_0010303a,uVar1);
 test_cpp_constructor();
 __printf_chk(1,"%u\n",uVar1);
 uVar1 = test_cpp_virtual_func();
 __printf_chk(1,DAT_00103074,uVar1);
 test_cpp_multiple_inheritance();
 __printf_chk(1,"%u\n",uVar1);
 test_cpp_diamond_inheritance();
 __printf_chk(1,DAT_001030ac,uVar1);
 test_cpp_operator_overload();
 __printf_chk(1,"%u\n",uVar1);
 uVar1 = test_cpp_template_func();
 __printf_chk(1,DAT_001030e5,uVar1);
 uVar1 = test_cpp_template_class();
 __printf_chk(1,DAT_00103101,uVar1);
 test_cpp_lambda();
 __printf_chk(1,"%u\n",uVar1);
 test_cpp_exception();
 __printf_chk(1,DAT_00103139,uVar1);
 uVar1 = test_cpp_smart_ptr();
 __printf_chk(1,DAT_00103156,uVar1);
 uVar1 = test_cpp_rtti();
 __printf_chk(1,DAT_00103173,uVar1,in_RAX);
 return;
}

// Function: Base::virtual_func @ 0x102a58
int Base_virtual_func(Base *self, int param_1)
{
    return param_1 + 1;
}

// Function: Base::getName @ 0x102a60
char * Base_getName(Base *self)
{
    return (char *)&DAT_00103004;
}

// Function: Base::~Base @ 0x102a6c
void Base_destructor_0(Base *self)
{
    return;
}

// Function: Derived::virtual_func @ 0x102a72
int Derived_virtual_func(Derived *self,int param_1)
{
    return *(int *)(self + 8) * param_1;
}

// Function: Derived::getName @ 0x102a7e
char * Derived_getName(Derived *self)
{
    return "Derived";
}

// Function: MultiDerived::funcA @ 0x102a8a
unsigned long long MultiDerived_funcA(MultiDerived *self)
{
    return 0x1e;
}

// Function: MultiDerived::funcB @ 0x102a94
unsigned long long MultiDerived_funcB_static(MultiDerived *self)
{
    return 0x28;
}

// Function: MultiDerived::funcB @ 0x102a9e
unsigned long long MultiDerived_funcB(MultiDerived *self)
{
    return 0x28;
}

// Function: VirtualBase::func @ 0x102aa8
unsigned long long VirtualBase_func(VirtualBase *self)
{
    return 100;
}

// Function: VirtualBase::~VirtualBase @ 0x102ab2
void VirtualBase_destructor_0(VirtualBase *self)
{
    return;
}

// Function: MiddleA::func @ 0x102ab8
int MiddleA_func(MiddleA *self)
{
    return *(int *)(self + *(long *)(*(long *)self + -0x18) + 8) + 0x96;
}

// Function: MiddleA::func @ 0x102acd
void MiddleA_func_void(MiddleA *self)
{
    MiddleA_func(self + *(long *)(*(long *)self + -0x18));
    return;
}

// Function: MiddleB::func @ 0x102ada
int MiddleB_func(MiddleB *self)
{
    return *(int *)(self + *(long *)(*(long *)self + -0x18) + 8) + 200;
}

// Function: MiddleB::func @ 0x102aef
void MiddleB_func_void(MiddleB *self)
{
    MiddleB_func(self + *(long *)(*(long *)self + -0x18));
    return;
}

// Function: DiamondDerived::func @ 0x102afc
int DiamondDerived_func(DiamondDerived *self)
{
    return *(int *)(self + *(long *)(*(long *)self + -0x18) + 8) + 0xfa;
}

// Function: DiamondDerived::func @ 0x102b11
void DiamondDerived_func_void(DiamondDerived *self)
{
    DiamondDerived_func(self + *(long *)(*(long *)self + -0x18));
    return;
}

// Function: DiamondDerived::func @ 0x102b1e
void DiamondDerived_func_2(DiamondDerived *self)
{
    DiamondDerived_func(self + -0x10);
    return;
}

// Function: MiddleA::~MiddleA @ 0x102b28
void MiddleA_destructor_1(MiddleA *self)
{
    *(unsigned long long *)self = 0x105920;
    *(unsigned long long *)(self + 0x10) = 0x105958;
    return;
}

// Function: MiddleA::~MiddleA @ 0x102b3f
void MiddleA_destructor_2(MiddleA *self)
{
    long lVar1;
    lVar1 = *(long *)(*(long *)self + -0x20);
    *(unsigned long long *)(self + lVar1) = 0x105920;
    *(unsigned long long *)((long)(self + lVar1) + 0x10) = 0x105958;
    return;
}

// Function: MiddleB::~MiddleB @ 0x102b5e
void MiddleB_destructor_1(MiddleB *self)
{
    *(unsigned long long *)self = 0x105998;
    *(unsigned long long *)(self + 0x10) = 0x1059d0;
    return;
}

// Function: MiddleB::~MiddleB @ 0x102b75
void MiddleB_destructor_2(MiddleB *self)
{
    long lVar1;
    lVar1 = *(long *)(*(long *)self + -0x20);
    *(unsigned long long *)(self + lVar1) = 0x105998;
    *(unsigned long long *)((long)(self + lVar1) + 0x10) = 0x1059d0;
    return;
}

// Function: RTTIDerivedA::getType @ 0x102b94
unsigned long long RTTIDerivedA_getType(RTTIDerivedA *self)
{
    return 1;
}

// Function: RTTIDerivedB::getType @ 0x102b9e
unsigned long long RTTIDerivedB_getType(RTTIDerivedB *self)
{
    return 2;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x102ba8
void RTTIDerivedB_destructor(RTTIDerivedB *self)
{
    return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x102bae
void RTTIDerivedA_destructor(RTTIDerivedA *self)
{
    return;
}

// Function: MultiDerived::~MultiDerived @ 0x102bb4
void MultiDerived_destructor_1(MultiDerived *self)
{
    return;
}

// Function: MultiDerived::~MultiDerived @ 0x102bb9
void MultiDerived_destructor_2(MultiDerived *self)
{
    return;
}

// Function: Derived::~Derived @ 0x102bbe
void Derived_destructor_0(Derived *self)
{
    return;
}

// Function: Base::~Base @ 0x102bc4
void Base_destructor(Base *self)
{
    operator_delete(self);
    return;
}

// Function: Derived::~Derived @ 0x102bd2
void Derived_destructor(Derived *self)
{
    operator_delete(self);
    return;
}

// Function: MultiDerived::~MultiDerived @ 0x102be0
void MultiDerived_destructor_3(MultiDerived *self)
{
    operator_delete(self);
    return;
}

// Function: MultiDerived::~MultiDerived @ 0x102bee
void MultiDerived_destructor_4(MultiDerived *self)
{
    MultiDerived_destructor_3(self + -0x10);
    return;
}

// Function: VirtualBase::~VirtualBase @ 0x102bf8
void VirtualBase_destructor(VirtualBase *self)
{
    operator_delete(self);
    return;
}





// Function: MiddleA::~MiddleA @ 0x102c22
void MiddleA_destructor_3(MiddleA *self)
{
    *(unsigned long long *)self = 0x105920;
    *(unsigned long long *)(self + 0x10) = 0x105958;
    operator_delete(self);
    return;
}

// Function: MiddleA::~MiddleA @ 0x102c42
void MiddleA_destructor_4(MiddleA *self)
{
    MiddleA_destructor_3(self + *(long *)(*(long *)self + -0x20));
    return;
}

// Function: MiddleB::~MiddleB @ 0x102c50
void MiddleB_destructor_3(MiddleB *self)
{
    *(unsigned long long *)self = 0x105998;
    *(unsigned long long *)(self + 0x10) = 0x1059d0;
    operator_delete(self);
    return;
}

// Function: MiddleB::~MiddleB @ 0x102c70
void MiddleB_destructor_4(MiddleB *self)
{
    MiddleB_destructor_3(self + *(long *)(*(long *)self + -0x20));
    return;
}

// Function: MiddleA::~MiddleA @ 0x102c7e
void MiddleA_destructor_5(MiddleA *self, long *rdx_param, int esi_param)
{
    long lVar1;
    long lVar2;
    long *plVar3;
    int iVar4;
    long lVar5;
    lVar1 = 0x105920;
    iVar4 = esi_param;
    plVar3 = rdx_param;
    if (iVar4 == 0) {
        lVar1 = *plVar3;
    }
    *(long *)self = lVar1;
    lVar5 = 0x105958;
    lVar2 = 0x10;
    if (iVar4 == 0) {
        lVar5 = plVar3[1];
        lVar2 = *(long *)(lVar1 + -0x18);
    }
    *(long *)(self + lVar2) = lVar5;
    return;
}

// Function: MiddleA::~MiddleA @ 0x102cb0
void MiddleA_destructor_6(MiddleA *self)
{
    MiddleA_destructor_3(self);
    return;
}

// Function: MiddleB::~MiddleB @ 0x102cbe
void MiddleB_destructor_5(MiddleB *self, long *rdx_param, int esi_param)
{
    long lVar1;
    long lVar2;
    long *plVar3;
    int iVar4;
    long lVar5;
    lVar1 = 0x105998;
    iVar4 = esi_param;
    plVar3 = rdx_param;
    if (iVar4 == 0) {
        lVar1 = *plVar3;
    }
    *(long *)self = lVar1;
    lVar5 = 0x1059d0;
    lVar2 = 0x10;
    if (iVar4 == 0) {
        lVar5 = plVar3[1];
        lVar2 = *(long *)(lVar1 + -0x18);
    }
    *(long *)(self + lVar2) = lVar5;
    return;
}

// Function: MiddleB::~MiddleB @ 0x102cf0
void MiddleB_destructor_6(MiddleB *self)
{
    MiddleB_destructor_3(self);
    return;
}

// Function: template_max<int> @ 0x102cfe
int template_max_int_(int param_1,int param_2)
{
 if (param_2 <= param_1) {
 param_2 = param_1;
 }
 return param_2;
}

// Function: template_max<double> @ 0x102d0a
double template_max_double_(double param_1,double param_2)
{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: template_swap<int> @ 0x102d13
void template_swap_int_(int *param_1,int *param_2)
{
 int iVar1;
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}

// Function: Container<int>::Container @ 0x102d20
void Container_int__constructor(Container_int_ *self)
{
    *(unsigned int *)(self + 0x28) = 0;
    return;
}

// Function: Container<int>::push @ 0x102d2c
void Container_int__push(Container_int_ *self,int param_1)
{
    int iVar1;
    iVar1 = *(int *)(self + 0x28);
    if (iVar1 < 10) {
        *(int *)(self + 0x28) = iVar1 + 1;
        *(int *)(self + (long)iVar1 * 4) = param_1;
    }
    return;
}

// Function: Container<int>::get @ 0x102d44
unsigned int Container_int__get(Container_int_ *self,int param_1)
{
    unsigned int uVar1;
    uVar1 = 0;
    if ((-1 < param_1) && (*(int *)(self + 0x28) != param_1 && param_1 <= *(int *)(self + 0x28))) {
        uVar1 = *(unsigned int *)(self + (long)param_1 * 4);
    }
    return uVar1;
}

// Function: Container<int>::getSize @ 0x102d5a
unsigned int Container_int__getSize(Container_int_ *self)
{
    return *(unsigned int *)(self + 0x28);
}

// Function: Container<double>::Container @ 0x102d62
void Container_double__constructor(Container_double_ *self)
{
    *(unsigned int *)(self + 0x50) = 0;
    return;
}

// Function: Container<double>::push @ 0x102d6e
void Container_double__push(Container_double_ *self,double param_1)
{
    int iVar1;
    iVar1 = *(int *)(self + 0x50);
    if (iVar1 < 10) {
        *(int *)(self + 0x50) = iVar1 + 1;
        *(double *)(self + (long)iVar1 * 8) = param_1;
    }
    return;
}

// Function: Container<double>::get @ 0x102d88
unsigned long long Container_double__get(Container_double_ *self,int param_1)
{
    unsigned long long uVar1;
    uVar1 = 0;
    if ((-1 < param_1) && (*(int *)(self + 0x50) != param_1 && param_1 <= *(int *)(self + 0x50))) {
        uVar1 = *(unsigned long long *)(self + (long)param_1 * 8);
    }
    return uVar1;
}

// Function: Container<double>::getSize @ 0x102da2
unsigned int Container_double__getSize(Container_double_ *self)
{
    return *(unsigned int *)(self + 0x50);
}

// Function: std::unique_ptr<int,std::default_delete<int>>::~unique_ptr @ 0x102daa
void
std_unique_ptr_int_std__default_delete_int___unique_ptr
 (unique_ptr_int_std__default_delete_int__ *self)
{
    if (*(void **)self != (void *)0x0) {
        operator_delete(*(void **)self);
        return;
    }
    return;
}

// Function: std::unique_ptr<int[],std::default_delete<int[]>>::~unique_ptr @ 0x102dc2
void
std_unique_ptr_int_array_std__default_delete_int_array___unique_ptr
 (unique_ptr_int___std__default_delete_int____ *self)
{
    if (*(void **)self != (void *)0x0) {
        operator_delete__(*(void **)self);
        return;
    }
    return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x102dd4
void DiamondDerived_destructor_1(DiamondDerived *self, long *rdx_param, int esi_param)
{
    long lVar1;
    long lVar2;
    long *plVar3;
    long lVar4;
    int iVar5;
    lVar1 = 0x105b08;
    iVar5 = esi_param;
    plVar3 = rdx_param;
    if (iVar5 == 0) {
        lVar1 = *plVar3;
    }
    *(long *)self = lVar1;
    lVar2 = 0x105b70;
    lVar4 = 0x20;
    if (iVar5 == 0) {
        lVar2 = plVar3[5];
        lVar4 = *(long *)(lVar1 + -0x18);
    }
    *(long *)(self + lVar4) = lVar2;
    lVar1 = 0x105b38;
    if (iVar5 == 0) {
        lVar1 = plVar3[6];
    }
    *(long *)(self + 0x10) = lVar1;
    MiddleB_destructor_3((MiddleB *)(self + 0x10));
    MiddleA_destructor_3((MiddleA *)self);
    return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x102e5e
void DiamondDerived_destructor_2(DiamondDerived *self)
{
    DiamondDerived_destructor_1(self, 0, 1);
    return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x102e6e
void DiamondDerived_destructor_3(DiamondDerived *self)
{
    DiamondDerived_destructor_1(self + -0x10, 0, 1);
    return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x102e78
void DiamondDerived_destructor_4(DiamondDerived *self)
{
    DiamondDerived_destructor_1(self + *(long *)(*(long *)self + -0x20), 0, 1);
    return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x102e86
void DiamondDerived_destructor_5(DiamondDerived *self)
{
    DiamondDerived_destructor_1(self, 0, 1);
    operator_delete(self);
    return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x102eab
void DiamondDerived_destructor_6(DiamondDerived *self)
{
    DiamondDerived_destructor_1(self + -0x10, 0, 1);
    return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x102eb5
void DiamondDerived_destructor_7(DiamondDerived *self)
{
    DiamondDerived_destructor_1(self + *(long *)(*(long *)self + -0x20), 0, 1);
    return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x102ec2
void DiamondDerived_destructor_8(DiamondDerived *self)
{
    DiamondDerived_destructor_1(self, 0, 1);
    return;
}

// Function: _fini @ 0x102ed0
void _fini(void)
{
 return;
}

