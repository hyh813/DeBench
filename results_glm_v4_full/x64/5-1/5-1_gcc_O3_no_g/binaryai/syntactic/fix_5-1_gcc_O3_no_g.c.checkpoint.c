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
typedef unsigned int uint;

/* Forward declarations for C++ class stubs */
typedef struct LifecycleClass LifecycleClass;
typedef struct RTTIBase RTTIBase;
extern int template_max_int_(int param_1, int param_2);
extern double template_max_double_(double param_1, double param_2);
extern void template_swap_int_(int *param_1, int *param_2);
typedef struct Base Base;
typedef struct Derived Derived;

/* Concrete struct definitions */
struct Base {
    void **vtable;
};

struct Derived {
    void **vtable;
    int value;
};
typedef struct MiddleA MiddleA;
typedef struct MiddleB MiddleB;
typedef struct MultiDerived MultiDerived;
typedef struct DiamondDerived DiamondDerived;

/* Additional struct definitions for incomplete types */
struct MiddleA {
    void **vtable;
    int value;
};

struct MiddleB {
    void **vtable;
    int value;
};

struct MultiDerived {
    void **vtable;
    int value;
};

struct DiamondDerived {
    void **vtable;
    int value;
};

struct Container_int_ {
    int data[10];
    int count;
};

struct Container_double_ {
    double data[10];
    int count;
};
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;
typedef struct RTTIBase RTTIBase;
typedef struct Container_int_ Container_int_;
typedef struct Container_double_ Container_double_;
typedef struct Init Init;
struct std_ios_base_Init;
typedef struct std_ios_base_Init std_ios_base_Init;
typedef struct LifecycleClass LifecycleClass;

/* LifecycleClass definition with static member */
struct LifecycleClass {
    int instance_count;
};

int LifecycleClass_instance_count = 0;

/* External function declarations */
extern int __gmon_start__(void);
extern void test_cpp_oo_features(void);
extern void __libc_start_main(int (*main)(void), int argc, void *ubp_av, void *init, void *fini, void *rtld_fini, void *stack_end);

/* External variable declarations */
extern void *__dso_handle;
extern std_ios_base_Init std___ioinit;
char completed_0 = 0;
extern struct type_info int_typeinfo;
extern void *PTR__RTTIDerivedA_00103c70;
extern void *PTR__RTTIDerivedB_00103c98;
char DAT_00102004[] = "Base";

/* RTTI type_info structure and definitions */
struct type_info {
    const char *name;
};

struct RTTIBase {
    static type_info typeinfo;
};

struct RTTIDerivedA {
    static type_info typeinfo;
};

struct RTTIDerivedB {
    static type_info typeinfo;
};

// Decompiled by BinaryAI
// SHA256: fc68e22ae678cc2e5a52c4765ed1ab4ba204797df24b7322475429542f74a6a6

// Function: FUN_00101020 @ 0x101020
void FUN_00101020(void)
{
 return;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x101130
void __cxa_finalize(void *dso_handle)
{
 return;
}

// Function: <EXTERNAL>::__printf_chk @ 0x101140
void __printf_chk(int flag, const char *format, ...)
{
 // External function - stub
 return;
}

// Function: <EXTERNAL>::__cxa_begin_catch @ 0x101150
void __cxa_begin_catch(void)
{
 __cxa_begin_catch();
 return;
}

// Function: <EXTERNAL>::strlen @ 0x101160
size_t strlen(char *__s)
{
 size_t sVar1;
 sVar1 = strlen(__s);
 return sVar1;
}

// Function: <EXTERNAL>::__cxa_allocate_exception @ 0x101170
void * __cxa_allocate_exception(size_t size)
{
 return __cxa_allocate_exception(size);
}

// Function: <EXTERNAL>::__cxa_atexit @ 0x101180
int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle)
{
 // External function - stub
 return 0;
}

// Function: <EXTERNAL>::operator.new @ 0x101190
void * operator_new(unsigned long param_1)
{
 void *pvVar1;
 pvVar1 = operator_new(param_1);
 return pvVar1;
}

// Function: <EXTERNAL>::operator.delete @ 0x1011a0
void operator_delete(void *param_1,unsigned long param_2)
{
 operator_delete(param_1,param_2);
 return;
}

// Function: <EXTERNAL>::__stack_chk_fail @ 0x1011b0
void __stack_chk_fail(void)
{
 __stack_chk_fail();
}

// Function: <EXTERNAL>::__dynamic_cast @ 0x1011c0
void *__dynamic_cast(void *obj, const struct type_info *src, const struct type_info *dst, ptrdiff_t src2dst_offset)
{
 return __dynamic_cast(obj, src, dst, src2dst_offset);
}

// Function: <EXTERNAL>::strcmp @ 0x1011d0
int strcmp(char *__s1,char *__s2)
{
 int iVar1;
 iVar1 = strcmp(__s1,__s2);
 return iVar1;
}

// Function: <EXTERNAL>::__cxa_rethrow @ 0x1011e0
void __cxa_rethrow(void)
{
 __cxa_rethrow();
 return;
}

// Function: std_ios_base_Init_Init @ 0x1011f0
void std_ios_base_Init_constructor(void *self)
{
 return;
}

// Function: <EXTERNAL>::puts @ 0x101200
int puts(char *__s)
{
 int iVar1;
 iVar1 = puts(__s);
 return iVar1;
}

// Function: <EXTERNAL>::__cxa_end_catch @ 0x101210
void __cxa_end_catch(void)
{
 __cxa_end_catch();
 return;
}

// Function: <EXTERNAL>::__cxa_throw @ 0x101220
void __cxa_throw(void *thrown_exception, struct type_info *tinfo, void (*dest)(void *))
{
 // External function - stub
}

// Function: <EXTERNAL>::_Unwind_Resume @ 0x101230
void _Unwind_Resume(void)
{
 _Unwind_Resume();
}

// Function: test_cpp_exception @ 0x101240
unsigned int test_cpp_exception(void)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 __cxa_throw(puVar1,&int_typeinfo,0);
 return 0;
}

// Function: main @ 0x101310
int main(void)
{
 test_cpp_oo_features();
 return 0;
}

// Function: _GLOBAL__sub_I_test_cpp_member_func @ 0x101330
void _GLOBAL__sub_I_test_cpp_member_func(void)
{
 std_ios_base_Init_constructor(&std___ioinit);
 __cxa_atexit((void (*)(void *))std_ios_base_Init_constructor,&std___ioinit,&__dso_handle);
 return;
}





// Function: test_cpp_member_func @ 0x101450
int test_cpp_member_func(void)
{
 size_t sVar1;
 long in_FS_OFFSET;
 unsigned long long local_34;
 unsigned long long local_2c;
 unsigned long long local_24;
 unsigned int local_1c;
 unsigned short local_18;
 char local_16;
 char local_15;
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_16 = 0;
 local_34 = 0x74736554;
 local_2c = 0;
 local_24 = 0;
 local_1c = 0;
 local_18 = 0;
 local_15 = 0;
 sVar1 = strlen((char *)&local_34);
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return (int)sVar1 + 0x125c;
 }
 __stack_chk_fail();
}

// Function: test_cpp_constructor @ 0x1014d0
int test_cpp_constructor(void)
{
 return LifecycleClass_instance_count * 0x3e9 + 0x15;
}

// Function: call_virtual_func @ 0x1014f0
void call_virtual_func(Base *param_1,int param_2)
{
 void (**vtable)(void) = (void (**)(void))*(void **)param_1;
 vtable[0]();
 return;
}

// Function: test_cpp_virtual_func @ 0x101500
unsigned long long test_cpp_virtual_func(void)
{
 return 0x2a;
}

// Function: test_cpp_multiple_inheritance @ 0x101510
unsigned long long test_cpp_multiple_inheritance(void)
{
 return 0x47;
}

// Function: test_cpp_diamond_inheritance @ 0x101520
unsigned long long test_cpp_diamond_inheritance(void)
{
 return 0x28a;
}

// Function: test_cpp_operator_overload @ 0x101530
unsigned long long test_cpp_operator_overload(void)
{
 return 0x16;
}

// Function: test_cpp_template_func @ 0x101540
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
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return (int)dVar2 + iVar1 + local_18 + local_14;
 }
 __stack_chk_fail();
}

// Function: test_cpp_template_class @ 0x1015e0
unsigned long long test_cpp_template_class(void)
{
 return 0x10;
}

// Function: test_cpp_lambda @ 0x1015f0
unsigned long long test_cpp_lambda(void)
{
 return 0x55;
}

// Function: test_cpp_smart_ptr @ 0x101600
unsigned long long test_cpp_smart_ptr(void)
{
 return 0x2bf;
}

// Function: test_cpp_rtti @ 0x101610
int test_cpp_rtti(void)
{
 long lVar1;
 char *__s1;
 int iVar2;
 long *plVar3;
 long *plVar4;
 long lVar5;
 size_t sVar6;
 plVar3 = (long *)operator_new(8);
 *plVar3 = (long)(uintptr_t)&PTR__RTTIDerivedA_00103c70;
 plVar4 = (long *)operator_new(8);
 lVar1 = (long)(uintptr_t)*plVar3;
 *plVar4 = (long)(uintptr_t)&PTR__RTTIDerivedB_00103c98;
 __s1 = *(char **)(*(long *)((intptr_t)lVar1 + -8) + 8);
 if (__s1 == "12RTTIDerivedA") {
 iVar2 = 0x1e;
 }
 else if (*__s1 == '*') {
 iVar2 = 0x14;
 }
 else {
 iVar2 = strcmp(__s1,"12RTTIDerivedA");
 iVar2 = (-(uint)(iVar2 == 0) & 10) + 0x14;
 }
 lVar5 = (long)__dynamic_cast(plVar3,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
 if (lVar5 != 0) {
 iVar2 = iVar2 + 100;
 }
 lVar5 = (long)__dynamic_cast(plVar4,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
 if (lVar5 != 0) {
 iVar2 = iVar2 + 200;
 }
 sVar6 = strlen(__s1 + (*__s1 == '*'));
 ((void (*)(void *))(*(void **)(lVar1 + 8)))(plVar3);
 ((void (*)(void *))(*(void **)(*plVar4 + 8)))(plVar4);
 return iVar2 + (int)sVar6;
}

// Function: test_cpp_oo_features @ 0x101780
void test_cpp_oo_features(void)
{
 int iVar1;
 unsigned int uVar2;
 size_t sVar3;
 long in_FS_OFFSET;
 double dVar4;
 int local_40;
 int local_3c [2];
 unsigned long long local_34;
 unsigned long long local_2c;
 unsigned long long local_24;
 unsigned int local_1c;
 unsigned short local_18;
 char local_16;
 char local_15;
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 static char DAT_00102018[] = "Testing C++ OO features:";
 puts(DAT_00102018);
 local_34 = 0x74736554;
 local_2c = 0;
 local_24 = 0;
 local_1c = 0;
 local_18 = 0;
 local_16 = 0;
 local_15 = 0;
 sVar3 = strlen((char *)&local_34);
 static char DAT_0010203c[] = "Member func result: %d\n";
 static char DAT_0010205a[] = "Constructor result: %d\n";
 static char DAT_00102076[] = "Virtual func result: %d\n";
 static char DAT_00102092[] = "Multiple inheritance: %d\n";
 static char DAT_001020ae[] = "Diamond inheritance: %d\n";
 static char DAT_001020cb[] = "Operator overload: %d\n";
 __printf_chk(1,(char *)&DAT_0010203c,(int)sVar3 + 0x125c);
 __printf_chk(1,(char *)&DAT_0010205a,LifecycleClass_instance_count * 0x3e9 + 0x15);
 __printf_chk(1,(char *)&DAT_00102076,0x2a);
 __printf_chk(1,(char *)&DAT_00102092,0x47);
 __printf_chk(1,(char *)&DAT_001020ae,0x28a);
 __printf_chk(1,(char *)&DAT_001020cb,0x16);
 iVar1 = template_max_int_(3,7);
 dVar4 = template_max_double_(2.5,1.5);
 local_40 = 10;
 local_3c[0] = 0x14;
 template_swap_int_(&local_40,local_3c);
 static char DAT_001020e7[] = "Template func result: %d\n";
 static char DAT_00102103[] = "Template class result: %d\n";
 static char DAT_0010211f[] = "Lambda result: %d\n";
 static char DAT_0010213b[] = "Exception result: %u\n";
 static char DAT_00102158[] = "Smart ptr result: %d\n";
 static char DAT_00102175[] = "All tests completed.\n";
 __printf_chk(1,(char *)&DAT_001020e7,(int)dVar4 + iVar1 + local_40 + local_3c[0]);
 __printf_chk(1,(char *)&DAT_00102103,0x10);
 __printf_chk(1,(char *)&DAT_0010211f,0x55);
 uVar2 = test_cpp_exception();
 __printf_chk(1,(char *)&DAT_0010213b,uVar2);
 __printf_chk(1,(char *)&DAT_00102158,0x2bf);
 test_cpp_rtti();
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 __printf_chk(1,(char *)&DAT_00102175);
 return;
 }
 __stack_chk_fail();
}

// Function: Base::virtual_func @ 0x101990
int Base_virtual_func(Base *self,int param_1)
{
 return param_1 + 1;
}

// Function: Base::getName @ 0x1019a0
char * Base_getName(void)
{
 return DAT_00102004;
}

// Function: Derived::virtual_func @ 0x1019c0
int Derived_virtual_func(Derived *self,int param_1)
{
 return *(int *)(self + 8) * param_1;
}

// Function: Derived::getName @ 0x1019d0
char * Derived_getName(void)
{
 return "Derived";
}

// Function: MultiDerived::funcA @ 0x1019e0
unsigned long long MultiDerived_funcA(void)
{
 return 0x1e;
}

// Function: MultiDerived::funcB @ 0x1019f0
unsigned long long MultiDerived_funcB(void)
{
 return 0x28;
}

// Function: MultiDerived::funcB @ 0x101a00
unsigned long long MultiDerived_funcB_this(MultiDerived *self)
{
 return 0x28;
}

// Function: MiddleB::func @ 0x101a50
int MiddleB_func(MiddleB *self)
{
 return *(int *)(self + *(long *)(*(long *)self + -0x18) + 8) + 200;
}

// Function: MiddleB::func @ 0x101a70
int MiddleB_func_v2(MiddleB *self)
{
 return *(int *)((long)(self + *(long *)(*(long *)self + -0x18)) +
 *(long *)(*(long *)(self + *(long *)(*(long *)self + -0x18)) + -0x18) + 8) + 200;
}

// Function: DiamondDerived::func @ 0x101a90
int DiamondDerived_func(DiamondDerived *self)
{
  return *(int *)(self + *(long *)(*(long *)self + -0x18) + 8) + 0xfa;
}

// Function: DiamondDerived::func @ 0x101ab0
int DiamondDerived_func_v2(DiamondDerived *self)
{
  return *(int *)((long)(self + *(long *)(*(long *)self + -0x18)) +
  *(long *)(*(long *)(self + *(long *)(*(long *)self + -0x18)) + -0x18) + 8) + 0xfa;
}

// Function: DiamondDerived::func @ 0x101ad0
int DiamondDerived_func_v3(DiamondDerived *self)
{
 return *(int *)(self + *(long *)(*(long *)(self + -0x10) + -0x18) + -8) + 0xfa;
}

// Function: RTTIDerivedA::getType @ 0x101af0
unsigned long long RTTIDerivedA_getType(void)
{
 return 1;
}

// Function: RTTIDerivedB::getType @ 0x101b00
unsigned long long RTTIDerivedB_getType(void)
{
 return 2;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x101b10
void RTTIDerivedB_destructor(RTTIDerivedB *self)
{
 return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x101b20
void RTTIDerivedA_destructor(RTTIDerivedA *self)
{
 return;
}





// Function: Base::~Base @ 0x101b90
void Base_destructor_void(void *obj)
{
 operator_delete(obj,8);
 return;
}

// Function: Derived::~Derived @ 0x101ba0
void Derived_destructor_void(void *obj)
{
 operator_delete(obj,0x10);
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x101bb0
void MultiDerived_destructor(MultiDerived *self)
{
 operator_delete(self,0x20);
 return;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x101be0
void RTTIDerivedB_destructor_v2(RTTIDerivedB *self)
{
 operator_delete(self,8);
 return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x101bf0
void RTTIDerivedA_destructor_v2(RTTIDerivedA *self)
{
 operator_delete(self,8);
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x101c00
void DiamondDerived_destructor_void(void *obj)
{
 operator_delete(obj,0x30);
 return;
}

// Function: template_max<int> @ 0x101c50
int template_max_int_(int param_1,int param_2)
{
 if (param_2 <= param_1) {
 param_2 = param_1;
 }
 return param_2;
}

// Function: template_max<double> @ 0x101c60
double template_max_double_(double param_1,double param_2)
{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: template_swap<int> @ 0x101c70
void template_swap_int_(int *param_1,int *param_2)
{
 int iVar1;
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}

// Function: Container<int>::Container @ 0x101c80
void Container_int_Constructor(Container_int_ *self)
{
 *(unsigned int *)(self + 0x28) = 0;
 return;
}

// Function: Container<int>::push @ 0x101c90
void Container_int_push(Container_int_ *self,int param_1)
{
 int iVar1;
 iVar1 = *(int *)(self + 0x28);
 if (iVar1 < 10) {
 *(int *)(self + 0x28) = iVar1 + 1;
 *(int *)(self + (long)iVar1 * 4) = param_1;
 }
 return;
}

// Function: Container<int>::get @ 0x101cb0
unsigned int Container_int_get(Container_int_ *self,int param_1)
{
 if ((-1 < param_1) && (*(int *)(self + 0x28) != param_1 && param_1 <= *(int *)(self + 0x28))) {
 return *(unsigned int *)(self + (long)param_1 * 4);
 }
 return 0;
}

// Function: Container<int>::getSize @ 0x101cd0
unsigned int Container_int_getSize(Container_int_ *self)
{
 return *(unsigned int *)(self + 0x28);
}

// Function: Container<double>::Container @ 0x101ce0
void Container_double_Constructor(Container_double_ *self)
{
 *(unsigned int *)(self + 0x50) = 0;
 return;
}

// Function: Container<double>::push @ 0x101cf0
void Container_double_push(Container_double_ *self,double param_1)
{
 int iVar1;
 iVar1 = *(int *)(self + 0x50);
 if (iVar1 < 10) {
 *(int *)(self + 0x50) = iVar1 + 1;
 *(double *)(self + (long)iVar1 * 8) = param_1;
 }
 return;
}

// Function: Container<double>::get @ 0x101d10
unsigned long long Container_double_get(Container_double_ *self,int param_1)
{
 if ((-1 < param_1) && (*(int *)(self + 0x50) != param_1 && param_1 <= *(int *)(self + 0x50))) {
 return *(unsigned long long *)(self + (long)param_1 * 8);
 }
 return 0;
}

// Function: Container<double>::getSize @ 0x101d40
unsigned int Container_double_getSize(Container_double_ *self)
{
 return *(unsigned int *)(self + 0x50);
}

// Function: _fini @ 0x101d48
void _fini(void)
{
 return;
}

