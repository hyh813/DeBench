// Decompiled by BinaryAI
// SHA256: 420c91e8a777e080ffdce20ed4104ad00abed32d704c89fa61bfe68bb8084377

// Macro definitions
#define CONCAT44(hi, lo) (((unsigned long long)(hi) << 32) | (unsigned int)(lo))
#define ROUND(x) ((int)(x))

// External variable declarations
extern void *std___ioinit;
extern void *std__ios_base__Init__Init;
extern void *__dso_handle;
extern int LifecycleClass_instance_count;
extern void *PTR__RTTIDerivedA_00013e48;
extern void *PTR__RTTIDerivedB_00013e5c;
extern int RTTIBase_typeinfo;
extern int RTTIDerivedA_typeinfo;
extern int RTTIDerivedB_typeinfo;
extern int int_typeinfo;
extern void *PTR_DerivedException_typeinfo_00013e70;
extern void *DAT_00012018;
extern void *DAT_0001203c;
extern void *DAT_0001205a;
extern void *DAT_00012076;
extern void *DAT_00012092;
extern void *DAT_000120ae;
extern void *DAT_000120cb;
extern void *DAT_000120e7;
extern void *DAT_00012103;
extern void *DAT_0001211f;
extern void *DAT_0001213b;
extern void *DAT_00012158;
extern void *DAT_00012175;
extern char *DAT_00012008;

// External function declarations
#include <stdint.h>
void __gmon_start__(void);
void frame_dummy(void);
int __do_global_ctors_aux(void);
void __x86_get_pc_thunk_di(void);
void __stack_chk_fail_local(void);
void FUN_00011030(void);
void FUN_00011150(unsigned int param_1);
void FUN_00011160(int param_1, void *param_2, int param_3);
int *FUN_00011170(int param_1);
int FUN_00011180(void);
unsigned int FUN_00011190(void);
void *FUN_000111a0(void *param_1);
void FUN_000111b0(void *param_1, void *param_2, void *param_3);
void FUN_000111c0(void *param_1, int param_2);
int FUN_000111d0(char *param_1, char *param_2);
void FUN_000111e0(void *param_1, unsigned int param_2, void *param_3, int param_4, int param_5, unsigned int param_6, char *param_7);
void FUN_000111f0(void);
int FUN_00011200(int *param_1, void *param_2, void *param_3, int param_4);
unsigned long long FUN_00011210(void);
void FUN_00011220(void *param_1);
void FUN_00011230(void *param_1);
int FUN_00011240(void);
unsigned long long FUN_00011250(void);
unsigned int FUN_00011260(void);
int test_cpp_exception(void);
void test_cpp_oo_features(void);
int test_cpp_constructor(void);
unsigned int test_cpp_diamond_inheritance(void);
int test_cpp_template_func(void);
unsigned int test_cpp_smart_ptr(void);
int test_cpp_rtti(void);
int template_max_int_(int param_1, int param_2);
double template_max_double_(double param_1, double param_2);
void template_swap_int_(int *param_1, int *param_2);

int _init(void)
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
 ((void (*)(void))0)();
 return;
}

// Function: FUN_00011150 @ 0x11150
void FUN_00011150(unsigned int param_1)
{
 int unaff_EBX;
 (*(void (**)(void))(unaff_EBX + 0x54))();
 return;
}

// Function: FUN_00011160 @ 0x11160
void FUN_00011160(int param_1, void *param_2, int param_3)
{
 int unaff_EBX;
 (*(void (**)(void))(unaff_EBX + 0xc))();
 return;
}

// Function: FUN_00011170 @ 0x11170
int *FUN_00011170(int param_1)
{
 int unaff_EBX;
 (*(void (**)(void))(unaff_EBX + 0x10))();
 return (int *)0;
}

// Function: FUN_00011180 @ 0x11180
int FUN_00011180(void)
{
 int unaff_EBX;
 (*(void (**)(void))(unaff_EBX + 0x14))();
 return 0;
}

// Function: FUN_00011190 @ 0x11190
unsigned int FUN_00011190(void)
{
 int unaff_EBX;
 (*(void (**)(void))(unaff_EBX + 0x18))();
 return 0;
}

// Function: FUN_000111a0 @ 0x111a0
void *FUN_000111a0(void *param_1)
{
 int unaff_EBX;
 (*(void (**)(void))(unaff_EBX + 0x1c))();
 return (void *)0;
}

// Function: FUN_000111b0 @ 0x111b0
void FUN_000111b0(void *param_1, void *param_2, void *param_3)
{
 int unaff_EBX;
 (*(void (**)(void))(unaff_EBX + 0x20))();
 return;
}

// Function: FUN_000111c0 @ 0x111c0
void FUN_000111c0(void *param_1, int param_2)
{
 int unaff_EBX;
 (*(void (**)(void))(unaff_EBX + 0x24))();
 return;
}

// Function: FUN_000111d0 @ 0x111d0
int FUN_000111d0(char *param_1, char *param_2)
{
 int unaff_EBX;
 (*(void (**)(void))(unaff_EBX + 0x28))();
 return 0;
}

// Function: FUN_000111e0 @ 0x111e0
void FUN_000111e0(void *param_1, unsigned int param_2, void *param_3, int param_4, int param_5, unsigned int param_6, char *param_7)
{
 int unaff_EBX;
 (*(void (**)(void))(unaff_EBX + 0x2c))();
 return;
}

// Function: FUN_000111f0 @ 0x111f0
void FUN_000111f0(void)
{
 int unaff_EBX;
 (*(void (**)(void))(unaff_EBX + 0x30))();
 return;
}

// Function: FUN_00011200 @ 0x11200
int FUN_00011200(int *param_1, void *param_2, void *param_3, int param_4)
{
 int unaff_EBX;
 (*(void (**)(void))(unaff_EBX + 0x34))();
 return 0;
}

// Function: FUN_00011210 @ 0x11210
unsigned long long FUN_00011210(void)
{
 int unaff_EBX;
 (*(void (**)(void))(unaff_EBX + 0x38))();
 return 0;
}

// Function: FUN_00011220 @ 0x11220
void FUN_00011220(void *param_1)
{
 int unaff_EBX;
 (*(void (**)(void))(unaff_EBX + 0x3c))();
 return;
}

// Function: FUN_00011230 @ 0x11230
void FUN_00011230(void *param_1)
{
 int unaff_EBX;
 (*(void (**)(void))(unaff_EBX + 0x40))();
 return;
}

// Function: FUN_00011240 @ 0x11240
int FUN_00011240(void)
{
 int unaff_EBX;
 (*(void (**)(void))(unaff_EBX + 0x44))();
 return 0;
}

// Function: FUN_00011250 @ 0x11250
unsigned long long FUN_00011250(void)
{
 int unaff_EBX;
 (*(void (**)(void))(unaff_EBX + 0x48))();
 return 0;
}

// Function: FUN_00011260 @ 0x11260
unsigned int FUN_00011260(void)
{
 int unaff_EBX;
 (*(void (**)(void))(unaff_EBX + 0x4c))();
 return 0;
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
 puStack_3c = (unsigned int *)0x4;
 uStack_40 = 0x11291;
 puStack_3c = (unsigned int *)FUN_00011190();
 *puStack_3c = 0x2a;
 uStack_34 = 0;
 puStack_38 = (char *)&int_typeinfo;
 ppuVar4 = &puStack_3c;
 uStack_40 = 0x112a8;
 uVar7 = FUN_00011250();
 if ((int)((unsigned long long)uVar7 >> 0x20) == 1) {
 auStack_4c[0] = (int)uVar7;
 piVar1 = (int *)FUN_00011180();
 local_20 = *piVar1;
 uStack_40 = 0x112d4;
 uVar7 = FUN_00011210();
 local_24 = (unsigned int)((unsigned long long)uVar7 >> 0x20);
 uStack_40 = 0x112e4;
 FUN_00011240();
 uVar7 = CONCAT44(local_24,(int)uVar7);
 }
 else {
 local_20 = 0;
 }
 if ((int)((unsigned long long)uVar7 >> 0x20) != 1) {
 ppuVar4 = (unsigned int **)auStack_4c;
 auStack_4c[0] = (int)uVar7;
 FUN_00011260();
 }
 puVar5 = (char *)((int)ppuVar4 + -0x10);
 *(int *)((int)ppuVar4 + -0x10) = (int)uVar7;
 *(unsigned int *)((int)ppuVar4 + -0x14) = 0x11300;
 piVar1 = (int *)FUN_00011180();
 iVar6 = *piVar1 * 2 + local_20;
 *(unsigned int *)((int)ppuVar4 + -0x14) = 0x1130c;
 FUN_00011240();
 *(unsigned int *)((int)ppuVar4 + -0x10) = 1;
 *(unsigned int *)((int)ppuVar4 + -0x14) = 0x11318;
 uVar2 = FUN_00011190();
 *(unsigned int *)((int)ppuVar4 + -8) = 0;
 *(void **)((int)ppuVar4 + -0xc) =
 &PTR_DerivedException_typeinfo_00013e70;
 *(unsigned int *)((int)ppuVar4 + -0x10) = uVar2;
 *(unsigned int *)((int)ppuVar4 + -0x14) = 0x1132a;
 uVar7 = FUN_00011250();
 iVar3 = (int)((unsigned long long)uVar7 >> 0x20);
 uVar2 = (unsigned int)uVar7;
 if (iVar3 != 2) {
 if (iVar3 == 3) {
 *(unsigned int *)((int)ppuVar4 + -0x20) = uVar2;
 *(unsigned int *)((int)ppuVar4 + -0x24) = 0x1136c;
 FUN_00011180();
 *(unsigned int *)((int)ppuVar4 + -0x24) = 0x11371;
 FUN_00011240();
 return iVar6 + 200;
 }
 puVar5 = (char *)((int)ppuVar4 + -0x20);
 *(unsigned int *)((int)ppuVar4 + -0x20) = uVar2;
 *(unsigned int *)((int)ppuVar4 + -0x24) = 0x11343;
 uVar2 = FUN_00011260();
 }
 *(unsigned int *)(puVar5 + -0x10) = uVar2;
 *(unsigned int *)(puVar5 + -0x14) = 0x11351;
 FUN_00011180();
 *(unsigned int *)(puVar5 + -0x14) = 0x11356;
 FUN_00011240();
 return iVar6 + 100;
}

// Function: main @ 0x11380
int main(void)
{
 test_cpp_oo_features();
 return 0;
}

// Function: _GLOBAL__sub_I_test_cpp_member_func @ 0x113a0
void _GLOBAL__sub_I_test_cpp_member_func(void)
{
 FUN_00011230(&std___ioinit);
 FUN_000111b0((void *)std__ios_base__Init__Init,&std___ioinit,&__dso_handle);
 return;
}

// Function: _start @ 0x113e0
void _start(unsigned int param_1,unsigned int param_2)
{
 char auStack_4 [4];
 FUN_000111e0(main,param_2,auStack_4,0,0,param_1,auStack_4);
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
 unsigned int uVar1;
 int unaff_EDI;
 __x86_get_pc_thunk_di();
 if (*(char *)(unaff_EDI + 0x2b5b) == '\0') {
 if (*(int *)(unaff_EDI + 0x2b2b) != 0) {
 FUN_00011150(*(unsigned int *)(unaff_EDI + 0x2b47));
 }
 uVar1 = *(unsigned int *)(unaff_EDI + 0x2b5f);
 while (uVar1 < ((unaff_EDI + 0x297f) - (unaff_EDI + 0x297b) >> 2) - 1U) {
 *(unsigned int *)(unaff_EDI + 0x2b5f) = uVar1 + 1;
 (**(void (**)(void))(unaff_EDI + 0x297b + (uVar1 + 1) * 4))();
 uVar1 = *(unsigned int *)(unaff_EDI + 0x2b5f);
 }
 deregister_tm_clones();
 *(char *)(unaff_EDI + 0x2b5b) = 1;
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
 iVar1 = (int)FUN_000111a0(&local_30);
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return iVar1 + 0x125c;
 }
 __stack_chk_fail_local();
}

void __stack_chk_fail_local(void)
{
 FUN_000111f0();
 return;
}

// Function: test_cpp_constructor @ 0x11600
int test_cpp_constructor(void)
{
 return LifecycleClass_instance_count * 0x3e9 + 0x15;
}

// Function: call_virtual_func @ 0x11620
void call_virtual_func(void *param_1,int param_2)
{
 (***(void (***)())param_1)();
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
 unsigned int uVar7;
 uVar7 = 10;
 piVar3 = (int *)FUN_00011170(4);
 *piVar3 = (int)&PTR__RTTIDerivedA_00013e48;
 piVar4 = (int *)FUN_00011170(4);
 *piVar4 = (int)&PTR__RTTIDerivedB_00013e5c;
 iVar1 = *piVar3;
 pcVar2 = *(char **)(*(int *)(iVar1 + -4) + 4);
 if ((pcVar2 != "12RTTIDerivedA") && (uVar7 = 0, *pcVar2 != '*')) {
 iVar5 = FUN_000111d0(pcVar2,"12RTTIDerivedA");
 uVar7 = -(unsigned int)(iVar5 == 0) & 10;
 }
 iVar6 = FUN_00011200(piVar3,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0);
 iVar5 = uVar7 + 0x14;
 if (iVar6 != 0) {
 iVar5 = uVar7 + 0x78;
 }
 iVar6 = FUN_00011200(piVar4,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo,0);
 if (iVar6 != 0) {
 iVar5 = iVar5 + 200;
 }
iVar6 = (int)(intptr_t)FUN_000111a0((void *)((char *)pcVar2 + (int)(*pcVar2 == '*')));
((void (*)(int *))(uintptr_t)*(int *)(iVar1 + 4))(piVar3);
((void (*)(int *))(uintptr_t)*(int *)(*piVar4 + 4))(piVar4);
 return iVar5 + iVar6;
}

// Function: test_cpp_oo_features @ 0x11880
void test_cpp_oo_features(void)
{
 int iVar1;
 unsigned int uVar2;
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
 uStack_8 = 0x1188a;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 FUN_00011220(&DAT_00012018);
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
 iVar1 = (int)FUN_000111a0(&local_30);
 FUN_00011160(1,&DAT_0001203c,iVar1 + 0x125c);
 uVar2 = test_cpp_constructor();
 FUN_00011160(1,&DAT_0001205a,uVar2);
 FUN_00011160(1,&DAT_00012076,0x2a);
 FUN_00011160(1,&DAT_00012092,0x47);
 uVar2 = test_cpp_diamond_inheritance();
 FUN_00011160(1,&DAT_000120ae,uVar2);
 FUN_00011160(1,&DAT_000120cb,0x16);
 uVar2 = test_cpp_template_func();
 FUN_00011160(1,&DAT_000120e7,uVar2);
 FUN_00011160(1,&DAT_00012103,0x10);
 FUN_00011160(1,&DAT_0001211f,0x55);
 uVar2 = test_cpp_exception();
 FUN_00011160(1,&DAT_0001213b,uVar2);
 uVar2 = test_cpp_smart_ptr();
 FUN_00011160(1,&DAT_00012158,uVar2);
 uVar2 = test_cpp_rtti();
 FUN_00011160(1,&DAT_00012175,uVar2);
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return;
 }
 __stack_chk_fail_local();
}

// Type definitions
typedef struct Base Base;
typedef struct Derived Derived;
typedef struct MultiDerived MultiDerived;
typedef struct MiddleA MiddleA;
typedef struct MiddleB MiddleB;
typedef struct DiamondDerived DiamondDerived;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;
typedef struct Container_int_ Container_int_;
typedef struct Container_double_ Container_double_;
typedef struct RTTIBase RTTIBase;



struct Base {
 void *vtable;
 int data;
};

struct Derived {
 void *vtable;
 int data[2];
};

struct MultiDerived {
 void *vtable;
 int data[4];
};

struct MiddleA {
 void *vtable;
 int data[2];
};

struct MiddleB {
 void *vtable;
 int data[2];
};

struct RTTIDerivedA {
 void *vtable;
 int data;
};

struct RTTIDerivedB {
 void *vtable;
 int data;
};

struct DiamondDerived {
 void *vtable;
 int data[5];
};

struct Container_int_ {
 int data[10];
 int size;
};

struct Container_double_ {
 double data[10];
 int size;
};

// Function: Base::virtual_func @ 0x11a30
int Base_virtual_func(Base *this_ptr,int param_1)
{
 return param_1 + 1;
}

// Function: Base::getName @ 0x11a40
char * Base_getName(void)
{
 return DAT_00012008;
}

// Function: Base::~Base @ 0x11a60
void Base__Base(Base *this_ptr)
{
 return;
}

// Function: Derived::virtual_func @ 0x11a70
int Derived_virtual_func(Derived *this_ptr,int param_1)
{
 return param_1 * *(int *)(this_ptr + 4);
}

// Function: Derived::getName @ 0x11a90
char * Derived_getName(void)
{
 return "Derived";
}

// Function: MultiDerived::funcA @ 0x11ab0
unsigned int MultiDerived_funcA(void)
{
 return 0x1e;
}

// Function: MultiDerived::funcB @ 0x11ac0
unsigned int MultiDerived_funcB(void)
{
 return 0x28;
}

// Function: MultiDerived::funcB @ 0x11ad0
unsigned int MultiDerived_funcB(MultiDerived *this_ptr)
{
 return 0x28;
}

// Function: MiddleA::func @ 0x11ae0
int MiddleA_func_1(MiddleA *this_ptr)
{
 return *(int *)(this_ptr + *(int *)(*(int *)this_ptr + -0xc) + 4) + 0x96;
}

// Function: MiddleA::func @ 0x11b00
int MiddleA_func_2(MiddleA *this_ptr)
{
 return *(int *)((int)(this_ptr + *(int *)(*(int *)this_ptr + -0xc)) +
 *(int *)(*(int *)(this_ptr + *(int *)(*(int *)this_ptr + -0xc)) + -0xc) + 4) + 0x96;
}

// Function: MiddleB::func @ 0x11b20
int MiddleB_func_1(MiddleB *this_ptr)
{
 return *(int *)(this_ptr + *(int *)(*(int *)this_ptr + -0xc) + 4) + 200;
}

// Function: MiddleB::func @ 0x11b40
int MiddleB_func_2(MiddleB *this_ptr)
{
 return *(int *)((int)(this_ptr + *(int *)(*(int *)this_ptr + -0xc)) +
 *(int *)(*(int *)(this_ptr + *(int *)(*(int *)this_ptr + -0xc)) + -0xc) + 4) + 200;
}

// Function: DiamondDerived::func @ 0x11b60
int DiamondDerived_func_1(DiamondDerived *this_ptr)
{
 return *(int *)(this_ptr + *(int *)(*(int *)this_ptr + -0xc) + 4) + 0xfa;
}

// Function: DiamondDerived::func @ 0x11b80
int DiamondDerived_func_2(DiamondDerived *this_ptr)
{
 return *(int *)((int)(this_ptr + *(int *)(*(int *)this_ptr + -0xc)) +
 *(int *)(*(int *)(this_ptr + *(int *)(*(int *)this_ptr + -0xc)) + -0xc) + 4) + 0xfa;
}

// Function: DiamondDerived::func @ 0x11ba0
int DiamondDerived_func_3(DiamondDerived *this_ptr)
{
 return *(int *)(this_ptr + *(int *)(*(int *)(this_ptr + -8) + -0xc) + -4) + 0xfa;
}

// Function: RTTIDerivedA::getType @ 0x11bc0
unsigned int RTTIDerivedA_getType(void)
{
 return 1;
}

// Function: RTTIDerivedB::getType @ 0x11bd0
unsigned int RTTIDerivedB_getType(void)
{
 return 2;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x11be0
void RTTIDerivedB__RTTIDerivedB_1(RTTIDerivedB *this_ptr)
{
 return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x11bf0
void RTTIDerivedA__RTTIDerivedA_1(RTTIDerivedA *this_ptr)
{
 return;
}

// Function: DiamondDerived::_DiamondDerived @ 0x11c00
void DiamondDerived__DiamondDerived(DiamondDerived *this_ptr)
{
 return;
}

// Function: DiamondDerived::_DiamondDerived @ 0x11c10
void DiamondDerived__DiamondDerived_2(DiamondDerived *this_ptr)
{
 return;
}

// Function: DiamondDerived::_DiamondDerived @ 0x11c20
void DiamondDerived__DiamondDerived_3(DiamondDerived *this_ptr)
{
 return;
}

// Function: MultiDerived::_MultiDerived @ 0x11c30
void MultiDerived__MultiDerived(MultiDerived *this_ptr)
{
 return;
}

// Function: MultiDerived::_MultiDerived @ 0x11c40
void MultiDerived__MultiDerived_2(MultiDerived *this_ptr)
{
 return;
}

// Function: Derived::~Derived @ 0x11c50
void Derived__Derived_1(Derived *this_ptr)
{
 return;
}

// Function: Base::~Base @ 0x11c60
void Base__Base_2(Base *this_ptr)
{
 FUN_000111c0(this_ptr,4);
 return;
}

// Function: Derived::~Derived @ 0x11c90
void Derived__Derived_2(Derived *this_ptr)
{
 FUN_000111c0(this_ptr,8);
 return;
}

// Function: MultiDerived::_MultiDerived @ 0x11cc0
void MultiDerived__MultiDerived_3(MultiDerived *this_ptr)
{
 FUN_000111c0(this_ptr,0x10);
 return;
}

// Function: MultiDerived::_MultiDerived @ 0x11cf0
void MultiDerived__MultiDerived_4(MultiDerived *this_ptr)
{
 FUN_000111c0((char *)this_ptr + -8,0x10);
 return;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x11d20
void RTTIDerivedB__RTTIDerivedB_2(RTTIDerivedB *this_ptr)
{
 FUN_000111c0(this_ptr,4);
 return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x11d50
void RTTIDerivedA__RTTIDerivedA_2(RTTIDerivedA *this_ptr)
{
 FUN_000111c0(this_ptr,4);
 return;
}

// Function: DiamondDerived::_DiamondDerived @ 0x11d80
void DiamondDerived__DiamondDerived_4(DiamondDerived *this_ptr)
{
 FUN_000111c0(this_ptr,0x18);
 return;
}

// Function: DiamondDerived::_DiamondDerived @ 0x11db0
void DiamondDerived__DiamondDerived_5(DiamondDerived *this_ptr)
{
 FUN_000111c0((char *)this_ptr + *(int *)(*(int *)this_ptr + -0x10),0x18);
 return;
}

// Function: DiamondDerived::_DiamondDerived @ 0x11de0
void DiamondDerived__DiamondDerived_6(DiamondDerived *this_ptr)
{
 FUN_000111c0((char *)this_ptr + -8,0x18);
 return;
}

// Function: template_max<int> @ 0x11e10
int template_max_int_(int param_1,int param_2)
{
 if (param_1 < param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: template_max<double> @ 0x11e30
double template_max_double_(double param_1,double param_2)
{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: template_swap<int> @ 0x11e50
void template_swap_int_(int *param_1,int *param_2)
{
 int iVar1;
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}

// Function: Container_int_::Container @ 0x11e70
void Container_int__Container(Container_int_ *this_ptr)
{
 *(unsigned int *)(this_ptr + 0x28) = 0;
 return;
}

// Function: Container_int_::push @ 0x11e80
void Container_int__push(Container_int_ *this_ptr,int param_1)
{
 int iVar1;
 iVar1 = *(int *)(this_ptr + 0x28);
 if (iVar1 < 10) {
 *(int *)(this_ptr + 0x28) = iVar1 + 1;
 *(int *)(this_ptr + iVar1 * 4) = param_1;
 }
 return;
}

// Function: Container_int_::get @ 0x11ea0
unsigned int Container_int__get(Container_int_ *this_ptr,int param_1)
{
 if ((-1 < param_1) && (*(int *)(this_ptr + 0x28) != param_1 && param_1 <= *(int *)(this_ptr + 0x28))) {
 return *(unsigned int *)(this_ptr + param_1 * 4);
 }
 return 0;
}

// Function: Container_int_::getSize @ 0x11ed0
unsigned int Container_int__getSize(Container_int_ *this_ptr)
{
 return *(unsigned int *)(this_ptr + 0x28);
}

// Function: Container_double_::Container @ 0x11ee0
void Container_double__Container(Container_double_ *this_ptr)
{
 *(unsigned int *)(this_ptr + 0x50) = 0;
 return;
}

// Function: Container_double_::push @ 0x11ef0
void Container_double__push(Container_double_ *this_ptr,double param_1)
{
 int iVar1;
 iVar1 = *(int *)(this_ptr + 0x50);
 if (iVar1 < 10) {
 *(int *)(this_ptr + 0x50) = iVar1 + 1;
 *(double *)(this_ptr + iVar1 * 8) = param_1;
 }
 return;
}

// Function: Container_double_::get @ 0x11f20
long double Container_double__get(Container_double_ *this_ptr,int param_1)
{
 if ((-1 < param_1) && (param_1 < *(int *)(this_ptr + 0x50))) {
 return (long double)*(double *)(this_ptr + param_1 * 8);
 }
 return (long double)0;
}

// Function: Container_double_::getSize @ 0x11f50
unsigned int Container_double__getSize(Container_double_ *this_ptr)
{
 return *(unsigned int *)(this_ptr + 0x50);
}

// Function: __x86.get_pc_thunk.ax @ 0x11f5c
unsigned int __x86_get_pc_thunk_ax(void)
{
 unsigned int unaff_retaddr;
 return unaff_retaddr;
}

// Function: __x86.get_pc_thunk.si @ 0x11f60
void __x86_get_pc_thunk_si(void)
{
 return;
}

// Function: __stack_chk_fail_local @ 0x11f70
void __stack_chk_fail_local(void);

void __stack_chk_fail_local_impl(void)
{
 FUN_000111f0();
 return;
}

// Function: __do_global_ctors_aux @ 0x11f90
int __do_global_ctors_aux(void)
{
 return 0;
}

// Function: _fini @ 0x11fdc
void _fini(void)
{
 __do_global_dtors_aux();
 return;
}

