#include <stdlib.h>

/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Forward declarations for C++ classes */
struct Base;
struct Derived;
struct MultiDerived;
struct DiamondDerived;
struct MiddleA;
struct MiddleB;
struct RTTIDerivedA;
struct RTTIDerivedB;
struct RTTIBase;
struct LifecycleClass;
struct Init;
template<typename T> struct Container;

/* std::ios_base namespace and __ioinit */
namespace std {
  struct ios_base {
    struct Init {
      static void _Init(void);
    };
  };
  extern ios_base::Init __ioinit;
}

/* External symbols */
extern void *__dso_handle;
extern char completed_0;
char DAT_00102004[] = "Base";
extern char DAT_00102018;
extern char DAT_0010203c;
extern void __gmon_start__(void);
extern void *PTR_INT_typeinfo_00103c40;
extern void *PTR__RTTIDerivedA_00103c70;
extern void *PTR__RTTIDerivedB_00103c98;
extern void *__libc_start_main(int (*)(void), unsigned long long, void *, int (*)(void), void (*)(void), unsigned long long, void *);
extern int __cxa_atexit(void (*)(void), void *, void *);
extern void __cxa_finalize(void *);
extern char DAT_00102076;
extern char DAT_00102092;
extern char DAT_001020cb;
extern char DAT_001020e7;
extern char DAT_00102103;
extern char DAT_0010211f;
extern char DAT_0010213b;
extern char DAT_00102175;

/* Define opaque struct types to avoid incomplete type errors */
struct type_info {
    const char* name;
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

/* Define forward-declared structs with necessary members */
struct Base {
    void *vptr;
    int base_data;
};

struct Derived {
    void *vptr;
    int derived_data;
};

struct MultiDerived {
    void *vptr_a;
    void *vptr_b;
    char extra[8];
};

struct DiamondDerived { char opaque[48]; };
struct MiddleA { char opaque[1]; };
struct MiddleB { char opaque[1]; };

/* Type definitions for template instantiations */
typedef struct Container_int_ { char data[48]; } Container_int_;
typedef struct Container_double_ { char data[80]; } Container_double_;

// Decompiled by BinaryAI
// SHA256: 436ad07bdf577c26fb3a12339d016f2d035b8245377271a3adbecd940c1f377c



// Function: FUN_00101020 @ 0x101020
void FUN_00101020(void)
{
 ((void (*)(void))0x0)();
 return;
}



// Function: <EXTERNAL>::__printf_chk @ 0x101140
void __printf_chk(int flag, const char *format, ...)
{
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
void *__cxa_allocate_exception(size_t size)
{
 return __cxa_allocate_exception(size);
}

// Function: <EXTERNAL>::__cxa_atexit @ 0x101180
void __cxa_atexit(void)
{
 __cxa_atexit();
 return;
}

// Function: <EXTERNAL>::operator.new @ 0x101190
void * operator_new(unsigned long param_1)
{
 void *pvVar1;
 pvVar1 = malloc(param_1);
 return pvVar1;
}

// Function: <EXTERNAL>::operator.delete @ 0x1011a0
void operator_delete(void *ptr,unsigned long size)
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
void *__dynamic_cast(void *src_ptr, const void *src_type, const void *dst_type, ptrdiff_t src2dst_offset)
{
 return __dynamic_cast(src_ptr, src_type, dst_type, src2dst_offset);
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

// Function: <EXTERNAL>::std::ios_base::Init::Init @ 0x1011f0
void std_ios_base_Init_Init(std::ios_base::Init *self)
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
void __cxa_throw(void *thrown_exception, void *type_info, void *dest)
{
 __cxa_throw(thrown_exception, type_info, dest);
}

// Function: <EXTERNAL>::_Unwind_Resume @ 0x101230
void _Unwind_Resume(void)
{
 _Unwind_Resume();
}

// Function: test_cpp_exception @ 0x101240
void test_cpp_exception(void);

// Function: test_cpp_oo_features @ 0x101740
void test_cpp_oo_features(void);

// Function: main @ 0x101310
int main(void)
{
 test_cpp_oo_features();
 return 0;
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
 return 0x15;
}

// Function: call_virtual_func @ 0x1014f0
void call_virtual_func(Base *param_1,int param_2)
{
 ((void (*)(Base *, int))(*(void **)param_1))(param_1, param_2);
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

// Function: template_max<int> @ 0x101bb0
int template_max_int_(int param_1,int param_2)
{
 if (param_2 <= param_1) {
 param_2 = param_1;
 }
 return param_2;
}

// Function: template_max<double> @ 0x101bc0
double template_max_double_(double param_1,double param_2)
{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: template_swap<int> @ 0x101bd0
void template_swap_int_(int *param_1,int *param_2)
{
 int iVar1;
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
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

// Function: test_cpp_exception @ 0x101240
void test_cpp_exception(void)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 __cxa_throw(puVar1,&PTR_INT_typeinfo_00103c40,(void *)0);
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
 uint uVar7;
 uVar7 = 10;
 plVar3 = (long *)operator_new(8);
 *plVar3 = (long)&PTR__RTTIDerivedA_00103c70;
 plVar4 = (long *)operator_new(8);
 lVar1 = *plVar3;
 *plVar4 = (long)&PTR__RTTIDerivedB_00103c98;
 __s1 = *(char **)(*(long *)(lVar1 + -8) + 8);
 if ((__s1 != "12RTTIDerivedA") && (uVar7 = 0, *__s1 != '*')) {
 iVar2 = strcmp(__s1,"12RTTIDerivedA");
 uVar7 = -(uint)(iVar2 == 0) & 10;
 }
 lVar5 = (long)__dynamic_cast(plVar3,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
 iVar2 = uVar7 + 0x14;
 if (lVar5 != 0) {
 iVar2 = uVar7 + 0x78;
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

// Function: test_cpp_oo_features @ 0x101740
void test_cpp_oo_features(void)
{
 unsigned int uVar1;
 size_t sVar2;
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
 puts(&DAT_00102018);
 local_34 = 0x74736554;
 local_2c = 0;
 local_24 = 0;
 local_1c = 0;
 local_18 = 0;
 local_16 = 0;
 local_15 = 0;
 sVar2 = strlen((char *)&local_34);
 __printf_chk(1,&DAT_0010203c,(int)sVar2 + 0x125c);
 test_cpp_constructor();
 __printf_chk(1,&DAT_00102076,0x2a);
 __printf_chk(1,&DAT_00102092,0x47);
 test_cpp_diamond_inheritance();
 __printf_chk(1,"",0);
 __printf_chk(1,&DAT_001020cb,0x16);
 uVar1 = test_cpp_template_func();
 __printf_chk(1,"",uVar1);
 __printf_chk(1,"",0x10);
 __printf_chk(1,"",0x55);
 test_cpp_exception();
 __printf_chk(1,&DAT_0010213b,0);
 test_cpp_smart_ptr();
 test_cpp_rtti();
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 puts(&DAT_00102175);
 return;
 }
 __stack_chk_fail();
}

// Function: Base::virtual_func @ 0x1018f0
int Base_virtual_func(Base *self,int param_1)
{
 return param_1 + 1;
}

// Function: Base::getName @ 0x101900
char * Base_getName(void)
{
 return DAT_00102004;
}

// Function: Base::~Base @ 0x101910
void Base_destructor_1(Base *self)
{
 return;
}

// Function: Derived::virtual_func @ 0x101920
int Derived_virtual_func(Derived *self,int param_1)
{
 return *(int *)(self + 8) * param_1;
}

// Function: Derived::getName @ 0x101930
char * Derived_getName(void)
{
 return "Derived";
}

// Function: MultiDerived::funcA @ 0x101940
unsigned long long MultiDerived_funcA(void)
{
 return 0x1e;
}

// Function: MultiDerived::funcB @ 0x101950
unsigned long long MultiDerived_funcB(void)
{
 return 0x28;
}

// Function: MultiDerived::funcB @ 0x101960
unsigned long long MultiDerived_funcB_1(MultiDerived *self)
{
 return 0x28;
}

// Function: MiddleA::func @ 0x101970
int MiddleA_func_1(MiddleA *self)
{
 return *(int *)(self + *(long *)(*(long *)self + -0x18) + 8) + 0x96;
}

// Function: MiddleA::func @ 0x101990
int MiddleA_func_2(MiddleA *self)
{
 return *(int *)((long)(self + *(long *)(*(long *)self + -0x18)) +
 *(long *)(*(long *)(self + *(long *)(*(long *)self + -0x18)) + -0x18) + 8) + 0x96;
}

// Function: MiddleB::func @ 0x1019b0
int MiddleB_func_1(MiddleB *self)
{
 return *(int *)(self + *(long *)(*(long *)self + -0x18) + 8) + 200;
}

// Function: MiddleB::func @ 0x1019d0
int MiddleB_func_2(MiddleB *self)
{
 return *(int *)((long)(self + *(long *)(*(long *)self + -0x18)) +
 *(long *)(*(long *)(self + *(long *)(*(long *)self + -0x18)) + -0x18) + 8) + 200;
}

// Function: DiamondDerived::func @ 0x1019f0
int DiamondDerived_func_1(DiamondDerived *self)
{
 return *(int *)(self + *(long *)(*(long *)self + -0x18) + 8) + 0xfa;
}

// Function: DiamondDerived::func @ 0x101a10
int DiamondDerived_func_2(DiamondDerived *self)
{
 return *(int *)((long)(self + *(long *)(*(long *)self + -0x18)) +
 *(long *)(*(long *)(self + *(long *)(*(long *)self + -0x18)) + -0x18) + 8) + 0xfa;
}

// Function: DiamondDerived::func @ 0x101a30
int DiamondDerived_func_3(DiamondDerived *self)
{
 return *(int *)(self + *(long *)(*(long *)(self + -0x10) + -0x18) + -8) + 0xfa;
}

// Function: RTTIDerivedA::getType @ 0x101a50
unsigned long long RTTIDerivedA_getType(void)
{
 return 1;
}

// Function: RTTIDerivedB::getType @ 0x101a60
unsigned long long RTTIDerivedB_getType(void)
{
 return 2;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x101a70
void RTTIDerivedB_destructor_1(RTTIDerivedB *self)
{
 return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x101a80
void RTTIDerivedA_destructor_1(RTTIDerivedA *self)
{
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x101a90
void DiamondDerived_destructor_1(DiamondDerived *self)
{
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x101aa0
void DiamondDerived_destructor_2(DiamondDerived *self)
{
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x101ab0
void DiamondDerived_destructor_3(DiamondDerived *self)
{
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x101ac0
void MultiDerived_destructor_1(MultiDerived *self)
{
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x101ad0
void MultiDerived_destructor_2(MultiDerived *self)
{
 return;
}

// Function: Derived::~Derived @ 0x101ae0
void Derived_destructor_1(Derived *self)
{
 return;
}

// Function: Base::~Base @ 0x101af0
void Base_destructor_2(Base *self)
{
 operator_delete(self,8);
 return;
}

// Function: Derived::~Derived @ 0x101b00
void Derived_destructor_2(Derived *self)
{
 operator_delete(self,0x10);
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x101b10
void MultiDerived_destructor_3(MultiDerived *self)
{
 operator_delete(self,0x20);
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x101b20
void MultiDerived_destructor_4(MultiDerived *self)
{
 operator_delete(self - 0x10,0x20);
 return;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x101b40
void RTTIDerivedB_destructor_2(RTTIDerivedB *self)
{
 operator_delete(self,8);
 return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x101b50
void RTTIDerivedA_destructor_2(RTTIDerivedA *self)
{
 operator_delete(self,8);
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x101b60
void DiamondDerived_destructor_4(DiamondDerived *self)
{
 operator_delete(self,0x30);
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x101b70
void DiamondDerived_destructor_5(DiamondDerived *self)
{
 operator_delete(self + *(long *)(*(long *)self + -0x20),0x30);
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x101b90
void DiamondDerived_destructor_6(DiamondDerived *self)
{
 operator_delete(self - 0x10,0x30);
 return;
}

// Function: Container<int>::Container @ 0x101be0
void Container_int_Container(Container_int_ *self)
{
 *(unsigned int *)(self + 0x28) = 0;
 return;
}

// Function: Container<int>::push @ 0x101bf0
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

// Function: Container<int>::get @ 0x101c10
unsigned int Container_int_get(Container_int_ *self,int param_1)
{
 if ((-1 < param_1) && (*(int *)(self + 0x28) != param_1 && param_1 <= *(int *)(self + 0x28))) {
 return *(unsigned int *)(self + (long)param_1 * 4);
 }
 return 0;
}

// Function: Container<int>::getSize @ 0x101c30
unsigned int Container_int_getSize(Container_int_ *self)
{
 return *(unsigned int *)(self + 0x28);
}

// Function: Container<double>::Container @ 0x101c40
void Container_double_Container(Container_double_ *self)
{
 *(unsigned int *)(self + 0x50) = 0;
 return;
}

// Function: Container<double>::push @ 0x101c50
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

// Function: Container<double>::get @ 0x101c70
unsigned long long Container_double_get(Container_double_ *self,int param_1)
{
 if ((-1 < param_1) && (*(int *)(self + 0x50) != param_1 && param_1 <= *(int *)(self + 0x50))) {
 return *(unsigned long long *)(self + (long)param_1 * 8);
 }
 return 0;
}

// Function: Container<double>::getSize @ 0x101ca0
unsigned int Container_double_getSize(Container_double_ *self)
{
 return *(unsigned int *)(self + 0x50);
}



