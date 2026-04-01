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

#define NULL ((void *)0)

/* Forward declarations for C++ classes */
typedef struct Base Base;
typedef struct Derived Derived;
typedef struct MultiDerived MultiDerived;
typedef struct MiddleA MiddleA;
typedef struct MiddleB MiddleB;
typedef struct DiamondDerived DiamondDerived;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;
typedef struct RTTIBase RTTIBase;
typedef struct Init Init;
typedef struct Container_int_ Container_int_;
typedef struct Container_double_ Container_double_;
typedef struct LifecycleClass LifecycleClass;

/* Structure definitions for incomplete types */
struct Init {
};

struct LifecycleClass {
    int instance_count;
};

struct RTTIBase {
    void *typeinfo;
};

/* Global variable declarations */
extern char completed_0;
extern Init std___ioinit;
extern int LifecycleClass_instance_count;

/* VTable and typeinfo definitions */
void *PTR__RTTIDerivedA_00103c70;
void *PTR__RTTIDerivedB_00103c98;
void *int_typeinfo;
char DAT_00102004[] = "Base";

/* Standard library function declarations */
extern void *__gmon_start__(void);
extern void __stack_chk_fail(void);
extern void __libc_start_main(void *, unsigned long long, void *, void *, void *, unsigned long long, void *);
extern size_t strlen(char *__s);
extern int puts(char *__s);
extern void __printf_chk(int, char *, ...);
extern void *__cxa_allocate_exception(size_t size);
extern void __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle);
extern void *__dynamic_cast(void *obj, void *src_type, void *dst_type, int src2dst);
extern void deregister_tm_clones(void);

/* Function prototypes for template functions */
int template_max_int_(int param_1, int param_2);
double template_max_double_(double param_1, double param_2);
void template_swap_int_(int *param_1, int *param_2);
void test_cpp_oo_features(void);

/* Structure definitions for incomplete types */
struct Derived {
    void *vtable;
    int data;
};

struct MiddleA {
    void *vtable;
    char data[32];
};

struct MiddleB {
    void *vtable;
    char data[32];
};

struct DiamondDerived {
    void *vtable;
    char data[56];
};

struct RTTIDerivedA {
    void *vtable;
    void *typeinfo;
};

struct RTTIDerivedB {
    void *vtable;
    void *typeinfo;
};

/* External symbol declarations */
extern void *__dso_handle;

/* Data declarations */
extern char DAT_00102018;
extern char DAT_0010203c;
extern char DAT_0010205a;
extern char DAT_00102076;
extern char DAT_00102092;
extern char DAT_001020ae;
extern char DAT_001020cb;
extern char DAT_001020e7;
extern char DAT_00102103;
extern char DAT_0010211f;
extern char DAT_0010213b;
extern char DAT_00102158;
extern char DAT_00102175;

// Decompiled by BinaryAI
// SHA256: 8cf6f7bb10e67d73228cfbaefb9a875d0455777036382285cd858d3bbc547146

// Function: FUN_00101020 @ 0x101020
void FUN_00101020(void)
{
 ((void (*)(void))0x0)();
 return;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x101130
void __cxa_finalize(void *dso_handle)
{
 return;
}

// Function: <EXTERNAL>::__printf_chk @ 0x101140
void __printf_chk(void)
{
 return;
}

void *malloc(size_t size)
{
 return NULL;
}

void free(void *ptr)
{
 return;
}

// Function: <EXTERNAL>::__cxa_begin_catch @ 0x101150
void __cxa_begin_catch(void)
{
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
void *__cxa_allocate_exception(size_t size)
{
 return NULL;
}

// Function: <EXTERNAL>::__cxa_atexit @ 0x101180
void __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle)
{
 return;
}

// Function: <EXTERNAL>::operator.new @ 0x101190
void * operator_new(size_t size)
{
 void *pvVar1;
 pvVar1 = malloc(size);
 return pvVar1;
}

// Function: <EXTERNAL>::operator.delete @ 0x1011a0
void operator_delete(void *ptr,size_t size)
{
 free(ptr);
 return;
}

// Function: <EXTERNAL>::__stack_chk_fail @ 0x1011b0
void __stack_chk_fail(void)
{
 __stack_chk_fail();
}

// Function: <EXTERNAL>::__dynamic_cast @ 0x1011c0
void *__dynamic_cast(void *obj, void *src_type, void *dst_type, int src2dst)
{
 return NULL;
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
 return;
}

// Function: <EXTERNAL>::std::ios_base::Init::Init @ 0x1011f0
void std_ios_base_Init_Init(Init *self)
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
 return;
}

// Function: <EXTERNAL>::__cxa_throw @ 0x101220
void __cxa_throw(void *exception_obj,void *typeinfo,void *dest)
{
}

// Function: <EXTERNAL>::_Unwind_Resume @ 0x101230
void _Unwind_Resume(void)
{
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

/* Definitions for undefined symbols */
int LifecycleClass_instance_count = 0;
char completed_0 = 0;
Init std___ioinit;

void deregister_tm_clones(void)
{
 return;
}

// Function: _GLOBAL__sub_I_test_cpp_member_func @ 0x101330
void _GLOBAL__sub_I_test_cpp_member_func(void)
{
 std_ios_base_Init_Init((Init *)&std___ioinit);
 __cxa_atexit((void (*)(void *))std_ios_base_Init_Init,&std___ioinit,&__dso_handle);
 return;
}

// Function: __do_global_dtors_aux @ 0x1013c0
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
void call_virtual_func(Base *obj,int param_1)
{
 ((int (*)(Base *, int))(**(void ***)obj))(obj, param_1);
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
 *plVar3 = (intptr_t)&PTR__RTTIDerivedA_00103c70;
 plVar4 = (long *)operator_new(8);
 lVar1 = (intptr_t)*plVar3;
 *plVar4 = (intptr_t)&PTR__RTTIDerivedB_00103c98;
 __s1 = *(char **)(*(long *)((char *)lVar1 - 8) + 8);
 if (__s1 == "12RTTIDerivedA") {
 iVar2 = 0x1e;
 }
 else if (*__s1 == '*') {
 iVar2 = 0x14;
 }
 else {
 iVar2 = strcmp(__s1,"12RTTIDerivedA");
 iVar2 = (-(unsigned int)(iVar2 == 0) & 10) + 0x14;
 }
 lVar5 = (intptr_t)__dynamic_cast(plVar3,(void *)&int_typeinfo,(void *)&int_typeinfo,0);
 if (lVar5 != 0) {
 iVar2 = iVar2 + 100;
 }
  lVar5 = (intptr_t)__dynamic_cast(plVar4,(void *)&int_typeinfo,(void *)&int_typeinfo,0);
 if (lVar5 != 0) {
 iVar2 = iVar2 + 200;
 }
 sVar6 = strlen(__s1 + (*__s1 == '*'));
 ((void (*)(void *))(*(void **)((char *)lVar1 + 8)))(plVar3);
 ((void (*)(void *))(*(void **)((char *)*plVar4 + 8)))(plVar4);
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
 puts(&DAT_00102018);
 local_34 = 0x74736554;
 local_2c = 0;
 local_24 = 0;
 local_1c = 0;
 local_18 = 0;
 local_16 = 0;
 local_15 = 0;
 sVar3 = strlen((char *)&local_34);
 __printf_chk(1,&DAT_0010203c,(int)sVar3 + 0x125c);
 __printf_chk(1,&DAT_0010205a,LifecycleClass_instance_count * 0x3e9 + 0x15);
 __printf_chk(1,&DAT_00102076,0x2a);
 __printf_chk(1,&DAT_00102092,0x47);
 __printf_chk(1,&DAT_001020ae,0x28a);
 __printf_chk(1,&DAT_001020cb,0x16);
 iVar1 = template_max_int_(3,7);
 dVar4 = template_max_double_(2.5,1.5);
 local_40 = 10;
 local_3c[0] = 0x14;
 template_swap_int_(&local_40,local_3c);
 __printf_chk(1,&DAT_001020e7,(int)dVar4 + iVar1 + local_40 + local_3c[0]);
 __printf_chk(1,&DAT_00102103,0x10);
 __printf_chk(1,&DAT_0010211f,0x55);
 uVar2 = test_cpp_exception();
 __printf_chk(1,&DAT_0010213b,0);
 __printf_chk(1,&DAT_00102158,0x2bf);
 test_cpp_rtti();
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 __printf_chk(1,&DAT_00102175);
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
char * Base_getName(Base *self)
{
 return DAT_00102004;
}

// Function: Base::~Base @ 0x1019b0
void Base_destructor_1(Base *self)
{
 return;
}

// Function: Derived::virtual_func @ 0x1019c0
int Derived_virtual_func(Derived *self,int param_1)
{
 return *(int *)(self + 8) * param_1;
}

// Function: Derived::getName @ 0x1019d0
char * Derived_getName(Derived *self)
{
 return "Derived";
}

// Function: MultiDerived::funcA @ 0x1019e0
unsigned long long MultiDerived_funcA(MultiDerived *self)
{
 return 0x1e;
}

// Function: MultiDerived::funcB @ 0x1019f0
unsigned long long MultiDerived_funcB(MultiDerived *self)
{
 return 0x28;
}

// Function: MultiDerived::funcB @ 0x101a00
unsigned long long MultiDerived_funcB_2(MultiDerived *self)
{
 return 0x28;
}

// Function: MiddleA::func @ 0x101a10
int MiddleA_func(MiddleA *self)
{
 return *(int *)(self + *(long *)(*(long *)self + -0x18) + 8) + 0x96;
}

// Function: MiddleA::func @ 0x101a30
int MiddleA_func_1(MiddleA *self)
{
 return *(int *)((long)(self + *(long *)(*(long *)self + -0x18)) +
 *(long *)(*(long *)(self + *(long *)(*(long *)self + -0x18)) + -0x18) + 8) + 0x96;
}

// Function: MiddleB::func @ 0x101a50
int MiddleB_func(MiddleB *self)
{
 return *(int *)(self + *(long *)(*(long *)self + -0x18) + 8) + 200;
}

// Function: MiddleB::func @ 0x101a70
int MiddleB_func_1(MiddleB *self)
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
int DiamondDerived_func_1(DiamondDerived *self)
{
 return *(int *)((long)(self + *(long *)(*(long *)self + -0x18)) +
 *(long *)(*(long *)(self + *(long *)(*(long *)self + -0x18)) + -0x18) + 8) + 0xfa;
}

// Function: DiamondDerived::func @ 0x101ad0
int DiamondDerived_func_2(DiamondDerived *self)
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
void RTTIDerivedB_destructor_1(RTTIDerivedB *self)
{
 return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x101b20
void RTTIDerivedA_destructor_1(RTTIDerivedA *self)
{
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x101b30
void DiamondDerived_destructor_1(DiamondDerived *self)
{
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x101b40
void DiamondDerived_destructor_2(DiamondDerived *self)
{
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x101b50
void DiamondDerived_destructor_3(DiamondDerived *self)
{
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x101b60
void MultiDerived_destructor_1(MultiDerived *self)
{
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x101b70
void MultiDerived_destructor_2(MultiDerived *self)
{
 return;
}

// Function: Derived::~Derived @ 0x101b80
void Derived_destructor_1(Derived *self)
{
 return;
}

// Function: Base::~Base @ 0x101b90
void Base_destructor(Base *self)
{
 operator_delete(self,(size_t)8);
 return;
}

// Function: Derived::~Derived @ 0x101ba0
void Derived_destructor(Derived *self)
{
 operator_delete(self,(size_t)0x10);
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x101bb0
void MultiDerived_destructor(MultiDerived *self)
{
 operator_delete(self,(size_t)0x20);
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x101bc0
void MultiDerived_destructor_3(MultiDerived *self)
{
 operator_delete((char *)self + -0x10,(size_t)0x20);
 return;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x101be0
void RTTIDerivedB_destructor(RTTIDerivedB *self)
{
 operator_delete(self,(size_t)8);
 return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x101bf0
void RTTIDerivedA_destructor(RTTIDerivedA *self)
{
 operator_delete(self,(size_t)8);
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x101c00
void DiamondDerived_destructor(DiamondDerived *self)
{
 operator_delete(self,(size_t)0x30);
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x101c10
void DiamondDerived_destructor_4(DiamondDerived *self)
{
 operator_delete((char *)self + *(long *)((char *)*(long *)self + -0x20),(size_t)0x30);
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x101c30
void DiamondDerived_destructor_5(DiamondDerived *self)
{
 operator_delete((char *)self + -0x10,(size_t)0x30);
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
void Container_int__Container(Container_int_ *self)
{
 *(unsigned int *)((char *)self + 0x28) = 0;
 return;
}

// Function: Container<int>::push @ 0x101c90
void Container_int__push(Container_int_ *self,int param_1)
{
 int iVar1;
 iVar1 = *(int *)((char *)self + 0x28);
 if (iVar1 < 10) {
 *(int *)((char *)self + 0x28) = iVar1 + 1;
 *(int *)((char *)self + (long)iVar1 * 4) = param_1;
 }
 return;
}

// Function: Container<int>::get @ 0x101cb0
unsigned int Container_int__get(Container_int_ *self,int param_1)
{
 if ((-1 < param_1) && (*(int *)((char *)self + 0x28) != param_1 && param_1 <= *(int *)((char *)self + 0x28))) {
 return *(unsigned int *)((char *)self + (long)param_1 * 4);
 }
 return 0;
}

// Function: Container<int>::getSize @ 0x101cd0
unsigned int Container_int__getSize(Container_int_ *self)
{
 return *(unsigned int *)((char *)self + 0x28);
}

// Function: Container<double>::Container @ 0x101ce0
void Container_double__Container(Container_double_ *self)
{
 *(unsigned int *)((char *)self + 0x50) = 0;
 return;
}

// Function: Container<double>::push @ 0x101cf0
void Container_double__push(Container_double_ *self,double param_1)
{
 int iVar1;
 iVar1 = *(int *)((char *)self + 0x50);
 if (iVar1 < 10) {
 *(int *)((char *)self + 0x50) = iVar1 + 1;
 *(double *)((char *)self + (long)iVar1 * 8) = param_1;
 }
 return;
}

// Function: Container<double>::get @ 0x101d10
unsigned long long Container_double__get(Container_double_ *self,int param_1)
{
 if ((-1 < param_1) && (*(int *)((char *)self + 0x50) != param_1 && param_1 <= *(int *)((char *)self + 0x50))) {
 return *(unsigned long long *)((char *)self + (long)param_1 * 8);
 }
 return 0;
}

// Function: Container<double>::getSize @ 0x101d40
unsigned int Container_double__getSize(Container_double_ *self)
{
 return *(unsigned int *)((char *)self + 0x50);
}

// Function: _fini @ 0x101d48
void _fini(void)
{
 return;
}

