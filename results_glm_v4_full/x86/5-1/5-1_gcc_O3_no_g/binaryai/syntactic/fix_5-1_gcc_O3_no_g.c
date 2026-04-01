// Decompiled by BinaryAI
// SHA256: d4488080025bddd3bb2ae89ddcee784921de9b9b481cbaf3bfa0cb6650c4c03e

// Forward declarations for C++ classes used in decompiled code
typedef struct Derived Derived;
typedef struct MultiDerived MultiDerived;

// Define incomplete types that are used
struct Base {
    int vtable[2];
    int data;
};

struct Derived {
    int vtable[2];
    int data;
    int padding;
};

struct MultiDerived {
    int vtable[4];
    int data;
};
typedef struct DiamondDerived DiamondDerived;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;
typedef struct MiddleA MiddleA;
typedef struct MiddleB MiddleB;
typedef unsigned long long ulonglong;

struct Container_int_ {
    unsigned int size;
    int data[10];
};

struct Container_double_ {
    unsigned int size;
    double data[10];
};

#define ROUND(x) ((int)((x) + 0.5))
#define NULL ((void *)0)

// Define __thiscall for MSVC compatibility (empty on GCC/clang)
#define __thiscall

// Template function forward declarations
int template_max_int_(int param_1, int param_2);
double template_max_double_(double param_1, double param_2);
void template_swap_int_(int *param_1, int *param_2);

struct MiddleA {
    int vtable[4];
    int data;
};

struct MiddleB {
    int vtable[4];
    int data;
};

struct DiamondDerived {
    int vtable[6];
    int data;
};
typedef unsigned int uint;
typedef unsigned long long uintptr_t;
typedef struct RTTIBase RTTIBase;
typedef struct LifecycleClass LifecycleClass;
typedef struct test_cpp_exception__DerivedException test_cpp_exception__DerivedException;

// Typeinfo declarations
extern void* int_typeinfo;
extern void* test_cpp_exception__DerivedException_typeinfo;

// RTTI pointer declarations
extern void* PTR__RTTIDerivedA_00014e48;
extern void* PTR__RTTIDerivedB_00014e5c;

// Forward declaration for __x86_get_pc_thunk_di
void __x86_get_pc_thunk_di(void);

// Generic pointer type for offset calculations
typedef void* pointer_____offset_0x8___;

// CONCAT44 macro for combining two 32-bit values into 64-bit
#define CONCAT44(hi, lo) (((unsigned long long)(hi) << 32) | ((unsigned long long)(lo) & 0xFFFFFFFFULL))

// std::__ioinit declaration for global constructor
struct ios_base_Init {
  static void _Init(void*, void*, void*);
};
extern ios_base_Init std___ioinit;
extern void* __dso_handle;

// RTTIBase definition with typeinfo
struct RTTIBase {
  static void* typeinfo;
};

struct RTTIDerivedA {
  static void* typeinfo;
};

struct RTTIDerivedB {
  static void* typeinfo;
};

// LifecycleClass definition with static member
struct LifecycleClass {
  static int instance_count;
};

// External data declarations
extern char DAT_00013018;
extern char DAT_0001303c;
extern char DAT_0001305a;
extern char DAT_00013076;
extern char DAT_00013092;
extern char DAT_000130ae;
extern char DAT_000130cb;
extern char DAT_000130e7;
extern char DAT_00013103;
extern char DAT_0001311f;
extern char DAT_0001313b;
extern char DAT_00013158;
extern char DAT_00013175;
extern char DAT_00013008;

// Function prototype
void __stack_chk_fail_local(void);

// External function declarations
extern void __gmon_start__(void);
extern void frame_dummy(void);
extern int __do_global_ctors_aux(void);

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
 ((void (*)(void))((uintptr_t)0))();
 return;
}

// Function: FUN_00011150 @ 0x11150
void FUN_00011150(unsigned int param_1)
{
 int unaff_EBX;
 ((void (*)(void))(uintptr_t)*(uintptr_t *)(unaff_EBX + 0x54))();
 return;
}

// Function: FUN_00011160 @ 0x11160
void FUN_00011160(int param_1, void *param_2, int param_3)
{
 int unaff_EBX;
 ((void (*)(void))(uintptr_t)*(uintptr_t *)(unaff_EBX + 0xc))();
 return;
}

// Function: FUN_00011170 @ 0x11170
unsigned int FUN_00011170(unsigned int size)
{
 int unaff_EBX;
 ((void (*)(void))(uintptr_t)*(uintptr_t *)(unaff_EBX + 0x10))();
 return 0;
}

// Function: FUN_00011180 @ 0x11180
unsigned int *FUN_00011180(void)
{
 int unaff_EBX;
 ((void (*)(void))(uintptr_t)*(uintptr_t *)(unaff_EBX + 0x14))();
 return (unsigned int *)0;
}

// Function: FUN_00011190 @ 0x11190
unsigned int FUN_00011190(void)
{
 int unaff_EBX;
 ((void (*)(void))(uintptr_t)*(uintptr_t *)(unaff_EBX + 0x18))();
 return 0;
}

// Function: FUN_000111a0 @ 0x111a0
unsigned int FUN_000111a0(void *ptr)
{
 int unaff_EBX;
 ((void (*)(void))(uintptr_t)*(uintptr_t *)(unaff_EBX + 0x1c))();
 return 0;
}

// Function: FUN_000111b0 @ 0x111b0
void FUN_000111b0(void)
{
 int unaff_EBX;
 ((void (*)(void))(uintptr_t)*(uintptr_t *)(unaff_EBX + 0x20))();
 return;
}

// Function: FUN_000111c0 @ 0x111c0
void FUN_000111c0(void *param_1, unsigned int param_2)
{
 int unaff_EBX;
 ((void (*)(void))(uintptr_t)*(uintptr_t *)(unaff_EBX + 0x24))();
 return;
}

// Function: FUN_000111d0 @ 0x111d0
int FUN_000111d0(const char *s1, const char *s2)
{
 int unaff_EBX;
 ((void (*)(void))(uintptr_t)*(uintptr_t *)(unaff_EBX + 0x28))();
 return 0;
}

// Function: FUN_000111e0 @ 0x111e0
void FUN_000111e0(unsigned int param_1, unsigned int param_2, void *param_3, int param_4, int param_5, unsigned int param_6, void *param_7)
{
 int unaff_EBX;
 ((void (*)(void))(uintptr_t)*(uintptr_t *)(unaff_EBX + 0x2c))();
 return;
}

// Function: FUN_000111f0 @ 0x111f0
void FUN_000111f0(void)
{
 int unaff_EBX;
 ((void (*)(void))(uintptr_t)*(uintptr_t *)(unaff_EBX + 0x30))();
 return;
}

// Function: FUN_00011200 @ 0x11200
int FUN_00011200(void *obj, void *base, void *derived, int param_4)
{
 int unaff_EBX;
 ((void (*)(void))(unsigned int)*(unsigned int *)(unaff_EBX + 0x34))();
 return 0;
}

// Function: FUN_00011210 @ 0x11210
void FUN_00011210(void)
{
 int unaff_EBX;
 ((void (*)(void))(uintptr_t)*(uintptr_t *)(unaff_EBX + 0x38))();
 return;
}

// Function: FUN_00011220 @ 0x11220
void FUN_00011220(void *param_1)
{
 int unaff_EBX;
 ((void (*)(void))(uintptr_t)*(uintptr_t *)(unaff_EBX + 0x3c))();
 return;
}

// Function: FUN_00011230 @ 0x11230
void FUN_00011230(void)
{
 int unaff_EBX;
 ((void (*)(void))(uintptr_t)*(uintptr_t *)(unaff_EBX + 0x40))();
 return;
}

// Function: FUN_00011240 @ 0x11240
void FUN_00011240(void)
{
 int unaff_EBX;
 ((void (*)(void))(uintptr_t)*(uintptr_t *)(unaff_EBX + 0x44))();
 return;
}

// Function: FUN_00011250 @ 0x11250
void FUN_00011250(void)
{
 int unaff_EBX;
 ((void (*)(void))(uintptr_t)*(uintptr_t *)(unaff_EBX + 0x48))();
 return;
}

// Function: FUN_00011260 @ 0x11260
void FUN_00011260(void)
{
 int unaff_EBX;
 ((void (*)(void))(uintptr_t)*(uintptr_t *)(unaff_EBX + 0x4c))();
 return;
}

// Function: test_cpp_exception @ 0x11270
int test_cpp_exception(void)
{
 int *piVar1;
 unsigned int uVar2;
 int iVar3;
 unsigned int **ppuVar4;
 char *puVar5;
 int iVar6;
 unsigned long long uVar7;
 unsigned int auStack_80 [13];
 unsigned int auStack_4c [3];
 unsigned int uStack_40;
 unsigned int *puStack_3c;
 char *puStack_38;
 unsigned int uStack_34;
 unsigned int local_24;
 int local_20;
 unsigned long long tmp_var7;
 unsigned long long tmp_uVar7;
 puStack_3c = (unsigned int *)0x4;
 uStack_40 = 0x11291;
 puStack_3c = (unsigned int *)FUN_00011190();
 *puStack_3c = 0x2a;
 uStack_34 = 0;
 puStack_38 = (char *)&int_typeinfo;
 ppuVar4 = &puStack_3c;
 uStack_40 = 0x112a8;
 FUN_00011250();
 uVar7 = 0;
 if (0) {
 auStack_4c[0] = (int)uVar7;
 piVar1 = (int *)FUN_00011180();
 local_20 = *piVar1;
 uStack_40 = 0x112d4;
 FUN_00011210();
 tmp_var7 = 0;
 local_24 = (unsigned int)(tmp_var7 >> 0x20);
 uStack_40 = 0x112e4;
 FUN_00011240();
 uVar7 = CONCAT44(local_24,(int)tmp_var7);
 }
 else {
 local_20 = 0;
 }
 if ((int)((ulonglong)uVar7 >> 0x20) != 1) {
 ppuVar4 = (unsigned int **)auStack_4c;
 auStack_4c[0] = (int)uVar7;
 FUN_00011260();
 }
 puVar5 = (char *)((uintptr_t)ppuVar4 + -0x10);
 *(int *)((uintptr_t)ppuVar4 + -0x10) = (int)uVar7;
 *(unsigned int *)((uintptr_t)ppuVar4 + -0x14) = 0x11300;
 piVar1 = (int *)FUN_00011180();
 iVar6 = *piVar1 * 2 + local_20;
 *(unsigned int *)((uintptr_t)ppuVar4 + -0x14) = 0x1130c;
FUN_00011240();
*(unsigned int *)((uintptr_t)ppuVar4 + -0x10) = 1;
*(unsigned int *)((uintptr_t)ppuVar4 + -0x14) = 0x11318;
 uVar2 = FUN_00011190();
 *(unsigned int *)((uintptr_t)ppuVar4 + -8) = 0;
 *(test_cpp_exception__DerivedException **)((uintptr_t)ppuVar4 + -0xc) =
 (test_cpp_exception__DerivedException *)&test_cpp_exception__DerivedException_typeinfo;
 *(unsigned int *)((uintptr_t)ppuVar4 + -0x10) = uVar2;
 *(unsigned int *)((uintptr_t)ppuVar4 + -0x14) = 0x1132a;
 FUN_00011250();
 tmp_uVar7 = 0;
 iVar3 = (int)(tmp_uVar7 >> 0x20);
 uVar2 = (unsigned int)tmp_uVar7;
 if (iVar3 != 2) {
 if (iVar3 == 3) {
 *(unsigned int *)((uintptr_t)ppuVar4 + -0x20) = uVar2;
 *(unsigned int *)((uintptr_t)ppuVar4 + -0x24) = 0x1136c;
 FUN_00011180();
 *(unsigned int *)((uintptr_t)ppuVar4 + -0x24) = 0x11371;
 FUN_00011240();
 return iVar6 + 200;
 }
 puVar5 = (char *)((uintptr_t)ppuVar4 + -0x20);
 *(unsigned int *)((uintptr_t)ppuVar4 + -0x20) = uVar2;
 *(unsigned int *)((uintptr_t)ppuVar4 + -0x24) = 0x11343;
 FUN_00011260();
 uVar2 = 0;
 }
 *(unsigned int *)(puVar5 + (uintptr_t)-0x10) = uVar2;
 *(unsigned int *)(puVar5 + (uintptr_t)-0x14) = 0x11351;
 FUN_00011180();
 *(unsigned int *)(puVar5 + -0x14) = 0x11356;
 FUN_00011240();
 return iVar6 + 100;
 return iVar6 + 100;
}

// Forward declaration
void test_cpp_oo_features(void);

// Function: main @ 0x11380
int main(void)
{
 test_cpp_oo_features();
 return 0;
}

// Function: _GLOBAL__sub_I_test_cpp_member_func @ 0x113a0
void _GLOBAL__sub_I_test_cpp_member_func(void)
{
 void (*tmp1)(void*) = (void (*)(void*))FUN_00011230;
 tmp1(&std___ioinit);
 void (*tmp2)(void*, void*, void*) = (void (*)(void*, void*, void*))FUN_000111b0;
 tmp2((void*)ios_base_Init::_Init,&std___ioinit,__dso_handle);
 return;
}

// Function: _start @ 0x113e0
void _start(unsigned int param_1,unsigned int param_2)
{
 unsigned int stack0x00000004;
 char auStack_4 [4];
 FUN_000111e0((unsigned int)(uintptr_t)main,param_2,&stack0x00000004,0,0,param_1,auStack_4);
 do {
 } while( true );
}

// Function: __i686.get_pc_thunk.bx @ 0x1140c
void __i686_get_pc_thunk_bx(void)
{
 return;
}

// Function: __x86.get_pc_thunk.bx @ 0x11410
void __x86_get_pc_thunk_bx(void)
{
 return;
}

// Function: deregister_tm_clones @ 0x11420
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x11460
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x114b0
void __do_global_dtors_aux(void)
{
 uint uVar1;
 int unaff_EDI;
 __x86_get_pc_thunk_di();
 if (*(char *)(unaff_EDI + 0x3b5b) == '\0') {
 if (*(int *)(unaff_EDI + 0x3b2b) != 0) {
 FUN_00011150(*(unsigned int *)(unaff_EDI + 0x3b47));
 }
 uVar1 = *(uint *)(unaff_EDI + 0x3b5f);
 while (uVar1 < ((unaff_EDI + 0x397f) - (unaff_EDI + 0x397b) >> 2) - 1U) {
 *(uint *)(unaff_EDI + 0x3b5f) = uVar1 + 1;
 void (*tmp_fn)(void) = (void (*)(void))*(void **)(unaff_EDI + 0x397b + (uVar1 + 1) * 4);
 tmp_fn();
 uVar1 = *(uint *)(unaff_EDI + 0x3b5f);
 }
 deregister_tm_clones();
 *(char *)(unaff_EDI + 0x3b5b) = 1;
 }
 return;
}

// Function: __x86.get_pc_thunk.dx @ 0x11549
void __x86_get_pc_thunk_dx(void)
{
 return;
}

// Function: __x86.get_pc_thunk.di @ 0x1154d
void __x86_get_pc_thunk_di(void)
{
 return;
}

// Function: test_cpp_member_func @ 0x11560
int test_cpp_member_func(void)
{
 int iVar1;
 int in_GS_OFFSET;
 unsigned int local_30;
 unsigned int local_2c;
 unsigned int local_28;
 unsigned int local_24;
 unsigned int local_20;
 unsigned int local_1c;
 unsigned int local_18;
 unsigned short local_14;
 char local_12;
 char local_11;
 int local_10;
 unsigned int uStack_8;
 uStack_8 = 0x1156c;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 local_30 = 0x74736554;
 local_2c = 0;
 local_28 = 0;
 local_24 = 0;
 local_20 = 0;
 local_1c = 0;
 local_18 = 0;
 local_14 = 0;
 local_12 = 0;
 local_11 = 0;
 iVar1 = FUN_000111a0(&local_30);
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return iVar1 + 0x125c;
 }
 __stack_chk_fail_local();
}

// Function: test_cpp_constructor @ 0x11600
int test_cpp_constructor(void)
{
 return LifecycleClass::instance_count * 0x3e9 + 0x15;
}

// Function: call_virtual_func @ 0x11620
void call_virtual_func(Base *param_1,int param_2)
{
 (***(void ***)param_1)();
 return;
}

// Function: test_cpp_virtual_func @ 0x11630
unsigned int test_cpp_virtual_func(void)
{
 return 0x2a;
}

// Function: test_cpp_multiple_inheritance @ 0x11640
unsigned int test_cpp_multiple_inheritance(void)
{
 return 0x47;
}

// Function: test_cpp_diamond_inheritance @ 0x11650
unsigned int test_cpp_diamond_inheritance(void)
{
 return 0x28a;
}

// Function: test_cpp_operator_overload @ 0x11660
unsigned int test_cpp_operator_overload(void)
{
 return 0x16;
}

// Function: test_cpp_template_func @ 0x11670
int test_cpp_template_func(void)
{
 int iVar1;
 int in_GS_OFFSET;
 double dVar2;
 int local_18;
 int local_14;
 int local_10;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 iVar1 = template_max_int_(3,7);
 dVar2 = template_max_double_(2.5,1.5);
 local_18 = 10;
 local_14 = 0x14;
 template_swap_int_(&local_18,&local_14);
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return (int)ROUND(dVar2) + iVar1 + local_18 + local_14;
 }
 __stack_chk_fail_local();
}

// Function: test_cpp_template_class @ 0x11720
unsigned int test_cpp_template_class(void)
{
 return 0x10;
}

// Function: test_cpp_lambda @ 0x11730
unsigned int test_cpp_lambda(void)
{
 return 0x55;
}

// Function: test_cpp_smart_ptr @ 0x11740
unsigned int test_cpp_smart_ptr(void)
{
 return 0x2bf;
}

// Function: test_cpp_rtti @ 0x11750
int test_cpp_rtti(void)
{
 int iVar1;
 char *pcVar2;
 int *piVar3;
 int *piVar4;
 int iVar5;
 int iVar6;
 piVar3 = (int *)FUN_00011170(4);
 *piVar3 = (int)PTR__RTTIDerivedA_00014e48;
 piVar4 = (int *)FUN_00011170(4);
 *piVar4 = (int)PTR__RTTIDerivedB_00014e5c;
 iVar1 = *piVar3;
 pcVar2 = *(char **)((char *)(*(int *)(iVar1 + -4)) + 4);
 if (pcVar2 == "12RTTIDerivedA") {
 iVar5 = 0x1e;
 }
 else if (*pcVar2 == '*') {
 iVar5 = 0x14;
 }
 else {
 iVar5 = FUN_000111d0(pcVar2,"12RTTIDerivedA");
 iVar5 = (-(uint)(iVar5 == 0) & 10) + 0x14;
 }
 iVar6 = FUN_00011200(piVar3,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
 if (iVar6 != 0) {
 iVar5 = iVar5 + 100;
 }
 iVar6 = FUN_00011200(piVar4,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
 if (iVar6 != 0) {
 iVar5 = iVar5 + 200;
 }
char *tmp_ptr = pcVar2;
if (pcVar2 != NULL && *pcVar2 == '*') {
    tmp_ptr = (char *)(((uintptr_t)(char *)pcVar2) + 1);
}
iVar6 = FUN_000111a0(tmp_ptr);
uintptr_t vtable_ptr1 = *(uintptr_t*)(uintptr_t)piVar3;
void (*tmp_fn1)(Derived*) = (void (*)(Derived*))(((uintptr_t)vtable_ptr1) + 4);
tmp_fn1((Derived*)piVar3);
uintptr_t vtable_ptr2 = *(uintptr_t*)(uintptr_t)piVar4;
void (*tmp_fn2)(Derived*) = (void (*)(Derived*))(((uintptr_t)vtable_ptr2) + 4);
tmp_fn2((Derived*)piVar4);
 return iVar5 + iVar6;
}

// Function: test_cpp_oo_features @ 0x118c0
void test_cpp_oo_features(void)
{
 int iVar1;
 unsigned int uVar2;
 int in_GS_OFFSET;
 double dVar3;
 int local_3c;
 int local_38 [2];
 unsigned int local_30;
 unsigned int local_2c;
 unsigned int local_28;
 unsigned int local_24;
 unsigned int local_20;
 unsigned int local_1c;
 unsigned int local_18;
 unsigned short local_14;
 char local_12;
 char local_11;
 int local_10;
 unsigned int uStack_c;
 uStack_c = 0x118cb;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 FUN_00011220(&DAT_00013018);
 local_12 = 0;
 local_14 = 0;
 local_30 = 0x74736554;
 local_2c = 0;
 local_28 = 0;
 local_24 = 0;
 local_20 = 0;
 local_1c = 0;
 local_18 = 0;
 local_11 = 0;
 iVar1 = FUN_000111a0(&local_30);
 FUN_00011160(1,&DAT_0001303c,iVar1 + 0x125c);
 FUN_00011160(1,&DAT_0001305a,LifecycleClass::instance_count * 0x3e9 + 0x15);
 FUN_00011160(1,&DAT_00013076,0x2a);
 FUN_00011160(1,&DAT_00013092,0x47);
 FUN_00011160(1,&DAT_000130ae,0x28a);
 FUN_00011160(1,&DAT_000130cb,0x16);
 iVar1 = template_max_int_(3,7);
 dVar3 = template_max_double_(2.5,1.5);
 local_3c = 10;
 local_38[0] = 0x14;
 template_swap_int_(&local_3c,local_38);
 int tmp_val = (int)ROUND(dVar3) + iVar1 + local_3c + local_38[0];
 FUN_00011160(1,&DAT_000130e7,tmp_val);
 FUN_00011160(1,&DAT_00013103,0x10);
 FUN_00011160(1,&DAT_0001311f,0x55);
 uVar2 = test_cpp_exception();
 FUN_00011160(1,&DAT_0001313b,uVar2);
 FUN_00011160(1,&DAT_00013158,0x2bf);
 uVar2 = test_cpp_rtti();
 FUN_00011160(1,&DAT_00013175,uVar2);
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return;
 }
 __stack_chk_fail_local();
}

// Base virtual function
int Base_virtual_func(Base *self,int param_1)
{
 return param_1 + 1;
}

char * Base_getName(void)
{
 return &DAT_00013008;
}

// Base destructor
void Base_dtor_impl(Base *ptr_this)
{
 return;
}

// Function: Derived::virtual_func @ 0x11b20
int __thiscall Derived_virtual_func(Derived *self,int param_1)
{
 return param_1 * *(int *)((char *)self + 4);
}

char * Derived_getName(void)
{
 return "Derived";
}

unsigned int MultiDerived_funcA(void)
{
 return 0x1e;
}

unsigned int MultiDerived_funcB(void)
{
 return 0x28;
}

unsigned int MultiDerived_funcB_thiscall(MultiDerived *self)
{
 return 0x28;
}

int MiddleA_func(MiddleA *self)
{
 return *(int *)((char *)self + *(int *)(*(int *)self + -0xc) + 4) + 0x96;
}

int MiddleA_func2(MiddleA *self)
{
 return *(int *)((char *)((char *)self + *(int *)(*(int *)self + -0xc)) +
 *(int *)(*(int *)((char *)self + *(int *)(*(int *)self + -0xc)) + -0xc) + 4) + 0x96;
}

int MiddleB_func(MiddleB *self)
{
 return *(int *)((char *)self + *(int *)(*(int *)self + -0xc) + 4) + 200;
}

int MiddleB_func2(MiddleB *self)
{
 return *(int *)((char *)((char *)self + *(int *)(*(int *)self + -0xc)) +
 *(int *)(*(int *)((char *)self + *(int *)(*(int *)self + -0xc)) + -0xc) + 4) + 200;
}

int DiamondDerived_func(DiamondDerived *self)
{
 return *(int *)((char *)self + *(int *)(*(int *)self + -0xc) + 4) + 0xfa;
}

int DiamondDerived_func2(DiamondDerived *self)
{
 return *(int *)((char *)((char *)self + *(int *)(*(int *)self + -0xc)) +
 *(int *)(*(int *)((char *)self + *(int *)(*(int *)self + -0xc)) + -0xc) + 4) + 0xfa;
}

int DiamondDerived_func3(DiamondDerived *self)
{
 return *(int *)((char *)self + *(int *)(*(int *)((char *)self + -8) + -0xc) + -4) + 0xfa;
}

unsigned int RTTIDerivedA_getType(void)
{
 return 1;
}

unsigned int RTTIDerivedB_getType(void)
{
 return 2;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x11c90
void __thiscall RTTIDerivedB_dtor_impl(RTTIDerivedB *ptr_this)
{
 return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x11ca0
void __thiscall RTTIDerivedA_dtor_impl(RTTIDerivedA *ptr_this)
{
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x11cb0
void __thiscall DiamondDerived_dtor_impl(DiamondDerived *ptr_this)
{
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x11cc0
void __thiscall DiamondDerived_dtor2_impl(DiamondDerived *ptr_this)
{
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x11cd0
void __thiscall DiamondDerived_dtor3_impl(DiamondDerived *ptr_this)
{
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x11ce0
void __thiscall MultiDerived_dtor_impl(MultiDerived *ptr_this)
{
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x11cf0
void __thiscall MultiDerived_dtor2_impl(MultiDerived *ptr_this)
{
 return;
}

// Function: Derived::~Derived @ 0x11d00
void __thiscall Derived_dtor_impl(Derived *ptr_this)
{
 return;
}

// Function: Base::~Base @ 0x11d10
void __thiscall Base_dtor(Base *ptr_this)
{
 FUN_000111c0(ptr_this,4);
 return;
}

// Function: Derived::~Derived @ 0x11d40
void __thiscall Derived_dtor2(Derived *ptr_this)
{
 FUN_000111c0(ptr_this,8);
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x11d70
void __thiscall MultiDerived_dtor3(MultiDerived *ptr_this)
{
 FUN_000111c0(ptr_this,0x10);
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x11da0
void __thiscall MultiDerived_dtor4(MultiDerived *ptr_this)
{
 FUN_000111c0(ptr_this + -8,0x10);
 return;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x11dd0
void __thiscall RTTIDerivedB_dtor(RTTIDerivedB *ptr_this)
{
 FUN_000111c0(ptr_this,4);
 return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x11e00
void __thiscall RTTIDerivedA_dtor(RTTIDerivedA *ptr_this)
{
 FUN_000111c0(ptr_this,4);
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x11e30
void __thiscall DiamondDerived_dtor4(DiamondDerived *ptr_this)
{
 FUN_000111c0(ptr_this,0x18);
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x11e60
void __thiscall DiamondDerived_dtor5(DiamondDerived *ptr_this)
{
 FUN_000111c0(ptr_this + *(int *)(*(int *)ptr_this + -0x10),0x18);
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x11e90
void __thiscall DiamondDerived_dtor6(DiamondDerived *ptr_this)
{
 FUN_000111c0(ptr_this + -8,0x18);
 return;
}

// Function: template_max<int> @ 0x11ec0
int template_max_int_(int param_1,int param_2)
{
 if (param_1 < param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: template_max<double> @ 0x11ee0
double template_max_double_(double param_1,double param_2)
{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: template_swap<int> @ 0x11f00
void template_swap_int_(int *param_1,int *param_2)
{
 int iVar1;
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}

// Function: Container<int>::Container @ 0x11f20
void __thiscall Container_int__ctor(Container_int_ *ptr_this)
{
 ptr_this->size = 0;
 return;
}

// Function: Container<int>::push @ 0x11f30
void __thiscall Container_int__push(Container_int_ *ptr_this,int param_1)
{
 int iVar1;
 iVar1 = ptr_this->size;
 if (iVar1 < 10) {
 ptr_this->size = iVar1 + 1;
 ptr_this->data[iVar1] = param_1;
 }
 return;
}

// Function: Container<int>::get @ 0x11f50
unsigned int __thiscall Container_int__get(Container_int_ *ptr_this,int param_1)
{
 if ((-1 < param_1) && (ptr_this->size != param_1 && param_1 <= ptr_this->size)) {
 return (unsigned int)ptr_this->data[param_1];
 }
 return 0;
}

// Function: Container<int>::getSize @ 0x11f80
unsigned int __thiscall Container_int__getSize(Container_int_ *ptr_this)
{
 return ptr_this->size;
}

// Function: Container<double>::Container @ 0x11f90
void __thiscall Container_double__ctor(Container_double_ *ptr_this)
{
 ptr_this->size = 0;
 return;
}

// Function: Container<double>::push @ 0x11fa0
void __thiscall Container_double__push(Container_double_ *ptr_this,double param_1)
{
 int iVar1;
 iVar1 = ptr_this->size;
 if (iVar1 < 10) {
 ptr_this->size = iVar1 + 1;
 ptr_this->data[iVar1] = param_1;
 }
 return;
}

// Function: Container<double>::get @ 0x11fd0
long double __thiscall Container_double__get(Container_double_ *ptr_this,int param_1)
{
 if ((-1 < param_1) && (ptr_this->size != param_1 && param_1 <= ptr_this->size)) {
 return (long double)ptr_this->data[param_1];
 }
 return (long double)0;
}

// Function: Container<double>::getSize @ 0x12000
unsigned int __thiscall Container_double__getSize(Container_double_ *ptr_this)
{
 return ptr_this->size;
}

// Function: __x86.get_pc_thunk.ax @ 0x1200c
unsigned int __x86_get_pc_thunk_ax(void)
{
 return 0;
}

// Function: __x86.get_pc_thunk.si @ 0x12010
void __x86_get_pc_thunk_si(void)
{
 return;
}

// Function: __stack_chk_fail_local @ 0x12020
void __stack_chk_fail_local(void)
{
 FUN_000111f0();
 return;
}

// Function: __do_global_ctors_aux @ 0x12040
int __do_global_ctors_aux(void)
{
 return 0;
}

// Function: _fini @ 0x1208c
void _fini(void)
{
 __do_global_dtors_aux();
 return;
}

