// Decompiled by BinaryAI
// SHA256: 462c52223355b8655fa69c7ca08e258b68986be89a14a9fb5c68f311ae7d7096

// Forward declarations
struct Base;
struct Derived;
struct MultiDerived;
struct VirtualBase;
struct MiddleA;
struct MiddleB;
struct DiamondDerived;
struct RTTIBase;
struct RTTIDerivedA;
struct RTTIDerivedB;
struct Container_int_;
struct Container_double_;
struct unique_ptr_int_std__default_delete_int__;
struct unique_ptr_int___std__default_delete_int____;

// Type definitions
typedef unsigned int uint;
typedef unsigned long size_t;
typedef unsigned long uintptr_t;

// Global variable declarations
extern int int_typeinfo;
extern int DerivedException_typeinfo;
extern char DAT_00013015;
extern char DAT_0001301a;
extern char DAT_0001303e;
extern char DAT_0001305c;
extern char DAT_00013078;
extern char DAT_00013094;
extern char DAT_000130b0;
extern char DAT_000130cd;
extern char DAT_000130e9;
extern char DAT_00013105;
extern char DAT_00013121;
extern char DAT_0001313d;
extern char DAT_0001315a;
extern char DAT_00013177;
extern char DAT_00013008;
extern void **PTR_virtual_func_00015c58;
extern void **PTR_virtual_func_00015c70;
extern void *PTR__RTTIDerivedA_00015dd0;
extern void *PTR__RTTIDerivedB_00015de4;

// Macro definition
#define CONCAT44(hi, lo) (((unsigned long long)(hi) << 32) | (lo))

// Function declarations
void frame_dummy(void);
void __do_global_ctors_aux(void);
void test_cpp_oo_features(void);
void __x86_get_pc_thunk_di(void);
int __stack_chk_fail_local(void);
int template_max_int_(int param_1,int param_2);
double template_max_double_(double param_1,double param_2);
void template_swap_int_(int *param_1,int *param_2);
void Container_int_push(Container_int_ *this_ptr,int param_1);
void std_unique_ptr_int___std__default_delete_int_____unique_ptr(unique_ptr_int___std__default_delete_int____ *this_ptr);
void std_unique_ptr_int_std__default_delete_int____unique_ptr(unique_ptr_int_std__default_delete_int__ *this_ptr);
int DiamondDerived_func(DiamondDerived *this_ptr);
void DiamondDerived__DiamondDerived(DiamondDerived *this_ptr);

// Function: _init @ 0x11000
int _init(void)
{
 frame_dummy();
 __do_global_ctors_aux();
 return 0;
}

// Function: FUN_00011030 @ 0x11030
void FUN_00011030(void)
{
 ((void (*)(void))0x0)();
 return;
}

// Function: FUN_00011180 @ 0x11180
void FUN_00011180(unsigned int param_1)
{
 (void)param_1;
 return;
}

// Function: FUN_00011190 @ 0x11190
void FUN_00011190(int param_1, void *param_2, unsigned long long param_3)
{
 (void)param_1; (void)param_2; (void)param_3;
 return;
}

// Function: FUN_000111a0 @ 0x111a0
void *FUN_000111a0(unsigned int size)
{
 return (void *)0;
}

// Function: FUN_000111b0 @ 0x111b0
int *FUN_000111b0(void)
{
 return (int *)0;
}

// Function: FUN_000111c0 @ 0x111c0
int FUN_000111c0(void)
{
 return 0;
}

// Function: FUN_000111d0 @ 0x111d0
int FUN_000111d0(char *str)
{
 return 0;
}

// Function: FUN_000111e0 @ 0x111e0
void FUN_000111e0(void *param_1, void *param_2, void *param_3)
{
 return;
}

// Function: FUN_000111f0 @ 0x111f0
void FUN_000111f0(void *ptr, unsigned int size)
{
 return;
}

// Function: FUN_00011200 @ 0x11200
int FUN_00011200(char *s1, char *s2, int n, int flags)
{
 return 0;
}

// Function: FUN_00011210 @ 0x11210
void FUN_00011210(void *param_1, unsigned int param_2, void *param_3, int param_4, int param_5, unsigned int param_6, void *param_7)
{
 (void)param_1; (void)param_2; (void)param_3; (void)param_4; (void)param_5; (void)param_6; (void)param_7;
 return;
}

// Function: FUN_00011220 @ 0x11220
void *FUN_00011220(unsigned int size)
{
 return (void *)0;
}

// Function: FUN_00011230 @ 0x11230
void FUN_00011230(void *param_1, void *param_2, unsigned int param_3)
{
 (void)param_1; (void)param_2; (void)param_3;
 return;
}

// Function: FUN_00011240 @ 0x11240
void FUN_00011240(void)
{
 return;
}

// Function: FUN_00011250 @ 0x11250
int FUN_00011250(void *param_1, void *param_2, void *param_3, int param_4, void *param_5)
{
 return 0;
}

// Function: FUN_00011260 @ 0x11260
void FUN_00011260(void *ptr)
{
 return;
}

// Function: FUN_00011270 @ 0x11270
unsigned long long FUN_00011270(void)
{
 return 0;
}

// Function: FUN_00011280 @ 0x11280
void FUN_00011280(void *param_1)
{
 (void)param_1;
 return;
}

// Function: FUN_00011290 @ 0x11290
void FUN_00011290(void *param_1)
{
 return;
}

// Function: FUN_000112a0 @ 0x112a0
void FUN_000112a0(void)
{
 return;
}

// Function: FUN_000112b0 @ 0x112b0
unsigned long long FUN_000112b0(void)
{
 return 0;
}

// Function: FUN_000112c0 @ 0x112c0
unsigned int FUN_000112c0(void)
{
 return 0;
}

// Function: test_cpp_exception @ 0x112d0
int test_cpp_exception(void)
{
 int *piVar1;
 unsigned int uVar2;
 int iVar3;
 unsigned int **ppuVar4;
 unsigned int *puVar5;
 unsigned int *puVar6;
 int iVar7;
 unsigned long long uVar8;
 unsigned int auStack_5c [3];
 unsigned int uStack_50;
 unsigned int local_4c;
 void *ppuStack_48;
 unsigned int uStack_44;
 unsigned int uStack_40;
 unsigned int *puStack_3c;
 char *puStack_38;
 unsigned int uStack_34;
 unsigned int local_24;
 unsigned int local_20;
 puStack_3c = (unsigned int *)0x4;
 uStack_40 = 0x112f1;
 puStack_3c = (unsigned int *)FUN_000111c0();
 *puStack_3c = 0x2a;
 uStack_34 = 0;
 puStack_38 = (char *)&int_typeinfo;
 ppuVar4 = &puStack_3c;
 uStack_40 = 0x11308;
 uVar8 = FUN_000112b0();
 iVar7 = 0;
 if ((int)((unsigned long long)uVar8 >> 0x20) == 1) {
 uStack_50 = 0x1131e;
 local_4c = (int)uVar8;
 piVar1 = (int *)FUN_000111b0();
 iVar7 = *piVar1;
 uStack_40 = 0x11328;
 uVar8 = FUN_00011270();
 local_24 = (unsigned int)((unsigned long long)uVar8 >> 0x20);
 local_20 = (unsigned int)uVar8;
 uStack_40 = 0x11339;
 FUN_000112a0();
 uVar8 = CONCAT44(local_24,local_20);
 }
 uVar2 = (unsigned int)uVar8;
 if ((int)((unsigned long long)uVar8 >> 0x20) == 1) {
 ppuVar4 = (unsigned int **)&local_4c;
 puVar5 = &local_4c;
 uStack_50 = 0x1134d;
 local_4c = uVar2;
 piVar1 = (int *)FUN_000111b0();
 iVar7 = iVar7 + *piVar1 * 2;
 uStack_50 = 0x11358;
 FUN_000112a0();
 local_4c = 1;
 uStack_50 = 0x11364;
 local_4c = FUN_000111c0();
 ppuStack_48 = (void *)&DerivedException_typeinfo;
 uStack_44 = 0;
 uStack_50 = 0x11376;
 uVar8 = FUN_000112b0();
 iVar3 = (int)((unsigned long long)uVar8 >> 0x20);
 uVar2 = (unsigned int)uVar8;
 if (iVar3 != 2) {
 if (iVar3 == 3) {
 iVar7 = iVar7 + 200;
 puVar6 = auStack_5c;
 auStack_5c[0] = uVar2;
 FUN_000111b0();
 goto LAB_000113b0;
 }
 goto LAB_00011384;
 }
 }
 else {
LAB_00011384:
 puVar5 = (unsigned int *)((int)ppuVar4 + -0x10);
 *(unsigned int *)((int)ppuVar4 + -0x10) = uVar2;
 *(unsigned int *)((int)ppuVar4 + -0x14) = 0x1138f;
 uVar2 = FUN_000112c0();
 }
 iVar7 = iVar7 + 100;
 puVar6 = (unsigned int *)((int)puVar5 + -0x10);
 *(unsigned int *)((int)puVar5 + -0x10) = uVar2;
 *(unsigned int *)((int)puVar5 + -0x14) = 0x1139d;
 FUN_000111b0();
LAB_000113b0:
 *(unsigned int *)((int)puVar6 + -4) = 0x113b5;
 FUN_000112a0();
 return iVar7;
}

// Function: main @ 0x113c2
int main(void)
{
 test_cpp_oo_features();
 return 0;
}

// Global variables
int std___ioinit;
int __dso_handle;
int int_typeinfo;
int DerivedException_typeinfo;
int RTTIBase_typeinfo;
int RTTIDerivedA_typeinfo;
int RTTIDerivedB_typeinfo;

// Function: _GLOBAL__sub_I_test_cpp_member_func @ 0x113d5
void _GLOBAL__sub_I_test_cpp_member_func(void)
{
 FUN_00011290(&std___ioinit);
 FUN_000111e0(&std___ioinit,&std___ioinit,&__dso_handle);
 return;
}

// Function: _start @ 0x11420
void _start(unsigned int param_1,unsigned int param_2)
{
 char auStack_4 [4];
 int stack0x00000004 = 4;
 FUN_00011210(main,param_2,&stack0x00000004,0,0,param_1,auStack_4);
 do {
 } while( true );
}

// Function: __i686.get_pc_thunk.bx @ 0x1144c
void __i686_get_pc_thunk_bx(void)
{
 return;
}

// Function: __x86.get_pc_thunk.bx @ 0x11450
void __x86_get_pc_thunk_bx(void)
{
 return;
}

// Function: deregister_tm_clones @ 0x11460
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x114a0
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x114f0
void __do_global_dtors_aux(void)
{
 unsigned int uVar1;
 int unaff_EDI;
 __x86_get_pc_thunk_di();
 if (*(char *)(unaff_EDI + 0x4b1b) == '\0') {
 if (*(int *)(unaff_EDI + 0x4aeb) != 0) {
 FUN_00011180(*(unsigned int *)(unaff_EDI + 0x4b07));
 }
 (void)unaff_EDI;
 uVar1 = *(unsigned int *)(unaff_EDI + 0x4b1f);
 while (uVar1 < ((unaff_EDI + 0x474f) - (unaff_EDI + 0x474b) >> 2) - 1U) {
 *(unsigned int *)(unaff_EDI + 0x4b1f) = uVar1 + 1;
 (*(void (**)(void))((char *)(unaff_EDI + 0x474b) + (uVar1 + 1) * 4))();
 uVar1 = *(uint *)(unaff_EDI + 0x4b1f);
 }
 deregister_tm_clones();
 *(char *)(unaff_EDI + 0x4b1b) = 1;
 }
 return;
}

// Function: __x86.get_pc_thunk.dx @ 0x11589
void __x86_get_pc_thunk_dx(void)
{
 return;
}

// Function: __x86.get_pc_thunk.di @ 0x1158d
void __x86_get_pc_thunk_di(void)
{
 return;
}

// Function: test_cpp_member_func @ 0x11591
int test_cpp_member_func(void)
{
 int iVar1;
 int in_GS_OFFSET;
 char local_30 [31];
 char local_11;
 int local_10;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 FUN_00011230(local_30,&DAT_00013015,0x1f);
 local_11 = 0;
 iVar1 = FUN_000111d0(local_30);
 iVar1 = iVar1 + 0x125c;
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar1 = __stack_chk_fail_local();
 }
 return iVar1;
}

// Function: __stack_chk_fail_local @ 0x12270
int __stack_chk_fail_local(void)
{
 FUN_00011240();
 return 0;
}

// Function: test_cpp_constructor @ 0x115f1
int test_cpp_constructor(void)
{
 return *(int *)0x0 * 0x3e9 + 0x15;
}

// Function: call_virtual_func @ 0x1160d
void call_virtual_func(Base *param_1,int param_2)
{
 (***(void ***)param_1)();
 return;
}

// Function: test_cpp_virtual_func @ 0x11621
int test_cpp_virtual_func(void)
{
 int iVar1;
 int iVar2;
 int in_GS_OFFSET;
 void **local_1c;
 void **local_18;
 unsigned int local_14;
 int local_10;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 local_1c = PTR_virtual_func_00015c58;
 local_18 = PTR_virtual_func_00015c70;
 local_14 = 3;
 call_virtual_func((Base *)local_1c,5);
 call_virtual_func((Base *)local_18,5);
 iVar2 = 0x15;
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar2 = __stack_chk_fail_local();
 }
 return iVar2;
}

// Function: test_cpp_multiple_inheritance @ 0x1168f
unsigned int test_cpp_multiple_inheritance(void)
{
 return 0x47;
}

// Function: test_cpp_operator_overload @ 0x11699
unsigned int test_cpp_operator_overload(void)
{
 return 0x16;
}

// Function: test_cpp_template_func @ 0x116a3
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
 iVar1 = (int)dVar2 + iVar1 + local_18 + local_14;
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar1 = __stack_chk_fail_local();
 }
 return iVar1;
}

// Function: test_cpp_template_class @ 0x11735
int test_cpp_template_class(void)
{
 int iVar1;
 int in_GS_OFFSET;
 int local_3c [10];
 int local_14;
 int local_10;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 local_14 = 1;
 local_3c[0] = 10;
 Container_int_push((Container_int_ *)local_3c,0x14);
 Container_int_push((Container_int_ *)local_3c,0x1e);
 iVar1 = 0;
 if (0 < local_14) {
 iVar1 = local_3c[0];
 }
 iVar1 = local_14 + 3 + iVar1;
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar1 = __stack_chk_fail_local();
 }
 return iVar1;
}

// Function: test_cpp_lambda @ 0x11797
unsigned int test_cpp_lambda(void)
{
 return 0x55;
}

// Function: test_cpp_rtti @ 0x117a1
int test_cpp_rtti(void)
{
 void *iVar1;
 int *piVar2;
 int *piVar3;
 int iVar4;
 unsigned int uVar5;
 int iVar6;
 char *pcVar7;
 char *ppuVar8;
 int iVar5;
 uVar5 = 10;
 piVar2 = (int *)FUN_000111a0(4);
 *piVar2 = (int)&PTR__RTTIDerivedA_00015dd0;
 piVar3 = (int *)FUN_000111a0(4);
 *piVar3 = (int)&PTR__RTTIDerivedB_00015de4;
iVar1 = *(void **)piVar2;
pcVar7 = *(char **)((char *)iVar1 + -4 + 4);
 if ((pcVar7 != (char *)"12RTTIDerivedA") && (uVar5 = 0, *pcVar7 != '*')) {
 iVar4 = FUN_00011200(pcVar7,"12RTTIDerivedA",0,0);
 uVar5 = -(unsigned int)(iVar4 == 0) & 10;
 }
 iVar6 = uVar5 + 0x14;
 ppuVar8 = (char *)&RTTIBase_typeinfo;
  iVar4 = FUN_00011250((void *)piVar2,(void *)&RTTIBase_typeinfo,(void *)&RTTIDerivedA_typeinfo,0,(void *)&RTTIBase_typeinfo);
 if (iVar4 != 0) {
 iVar6 = uVar5 + 0x78;
 }
 iVar4 = FUN_00011250((void *)piVar3,ppuVar8,(void *)&RTTIDerivedB_typeinfo,0,(void *)0);
 if (iVar4 != 0) {
 iVar6 = iVar6 + 200;
 }
 if (*pcVar7 == '*') {
 pcVar7 = pcVar7 + 1;
 }
 iVar4 = FUN_000111d0(pcVar7);
 iVar4 = iVar4 + iVar6;
  ((void (*)(void *))((char *)iVar1 + 4))(piVar2);
 iVar5 = *piVar3;
  ((void (*)(void *))((char *)(void *)iVar5 + 4))(piVar3);
 return iVar4;
}

// Function: test_cpp_smart_ptr @ 0x118c9
unsigned int test_cpp_smart_ptr(void)
{
 unsigned int uVar1;
 int in_GS_OFFSET;
 unsigned int local_2c;
 unsigned int *local_28;
 unsigned int *local_24;
 int local_20;
 local_20 = *(int *)(in_GS_OFFSET + 0x14);
 local_28 = (unsigned int *)FUN_000111a0(4);
 local_2c = 0;
 *local_28 = 200;
 local_24 = (unsigned int *)FUN_00011220(0x14);
 *local_24 = 1;
 local_24[1] = 2;
 local_24[2] = 3;
 local_24[3] = 4;
 local_24[4] = 5;
 std_unique_ptr_int___std__default_delete_int_____unique_ptr
 ((unique_ptr_int___std__default_delete_int____ *)local_24);
 std_unique_ptr_int_std__default_delete_int____unique_ptr
 ((unique_ptr_int_std__default_delete_int__ *)local_28);
 std_unique_ptr_int_std__default_delete_int____unique_ptr
 ((unique_ptr_int_std__default_delete_int__ *)&local_2c);
 if (local_20 != *(int *)(in_GS_OFFSET + 0x14)) {
 uVar1 = __stack_chk_fail_local();
 }
 return 0x2bf;
}

// Function: test_cpp_diamond_inheritance @ 0x1199d
int test_cpp_diamond_inheritance(void)
{
 int iVar1;
 int iVar2;
 int in_GS_OFFSET;
 unsigned int local_38 [2];
 unsigned int local_30;
 unsigned int local_28;
 unsigned int local_24;
 int local_20;
 local_38[0] = 0x15d88;
 local_20 = *(int *)(in_GS_OFFSET + 0x14);
 local_28 = 0x15dbc;
 local_30 = 0x15da0;
 local_24 = 0x32;
 iVar1 = DiamondDerived_func((DiamondDerived *)&local_28);
 local_24 = 100;
 iVar2 = DiamondDerived_func((DiamondDerived *)&local_28);
 iVar2 = iVar2 + iVar1;
 DiamondDerived__DiamondDerived((DiamondDerived *)local_38);
 if (local_20 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar2 = __stack_chk_fail_local();
 }
 return iVar2;
}

// Function: test_cpp_oo_features @ 0x11a22
void test_cpp_oo_features(void)
{
 unsigned int uVar1;
 unsigned int extraout_ECX;
 unsigned int extraout_ECX_00;
 unsigned long long uVar2;
 FUN_00011280(&DAT_0001301a);
 uVar1 = test_cpp_member_func();
 FUN_00011190(1,&DAT_0001303e,uVar1);
 uVar1 = test_cpp_constructor();
 FUN_00011190(1,&DAT_0001305c,uVar1);
 uVar2 = test_cpp_virtual_func();
 FUN_00011190(1,&DAT_00013078,uVar2);
 uVar1 = test_cpp_multiple_inheritance();
 FUN_00011190(1,&DAT_00013094,uVar1);
 uVar1 = test_cpp_diamond_inheritance();
 FUN_00011190(1,&DAT_000130b0,uVar1);
 uVar1 = test_cpp_operator_overload();
 FUN_00011190(1,&DAT_000130cd,uVar1);
 uVar1 = test_cpp_template_func();
 FUN_00011190(1,&DAT_000130e9,uVar1);
 uVar1 = test_cpp_template_class();
 FUN_00011190(1,&DAT_00013105,uVar1);
 uVar1 = test_cpp_lambda();
 FUN_00011190(1,&DAT_00013121,uVar1);
 uVar2 = test_cpp_exception();
 FUN_00011190(1,&DAT_0001313d,uVar2);
 uVar1 = test_cpp_smart_ptr();
 FUN_00011190(1,&DAT_0001315a,uVar1);
 uVar2 = test_cpp_rtti();
 FUN_00011190(1,&DAT_00013177,uVar2);
 return;
}

// Function: Base_virtual_func @ 0x11b66
int Base_virtual_func(Base *this_ptr,int param_1)
{
 (void)this_ptr;
 return param_1 + 1;
}

// Function: Base_getName @ 0x11b74
char * Base_getName(void)
{
 return &DAT_00013008;
}

// Function: Base__Base @ 0x11b8a
void Base__Base_1(Base *this_ptr)
{
 (void)this_ptr;
 return;
}

// Function: Derived_virtual_func @ 0x11b90
int Derived_virtual_func(Derived *this_ptr,int param_1)
{
 return param_1 * *(int *)((char *)this_ptr + 4);
}

// Function: Derived_getName @ 0x11ba4
char * Derived_getName(void)
{
 return "Derived";
}

// Function: MultiDerived_funcA @ 0x11bba
unsigned int MultiDerived_funcA(void)
{
 return 0x1e;
}

// Function: MultiDerived_funcB @ 0x11bc4
unsigned int MultiDerived_funcB(void)
{
 return 0x28;
}

// Function: MultiDerived_funcB @ 0x11bce
unsigned int MultiDerived_funcB(MultiDerived *this_ptr)
{
 (void)this_ptr;
 return 0x28;
}

// Function: VirtualBase_func @ 0x11bd8
unsigned int VirtualBase_func(void)
{
 return 100;
}

// Function: VirtualBase__VirtualBase @ 0x11be2
void VirtualBase__VirtualBase(VirtualBase *this_ptr)
{
 (void)this_ptr;
}

// Function: MiddleA_func @ 0x11be8
int MiddleA_func(MiddleA *this_ptr)
{
 return *(int *)((char *)this_ptr + *(int *)((char *)*(int *)this_ptr + -0xc) + 4) + 0x96;
}

// Forward declaration for MiddleA
struct MiddleA;

// Function: MiddleA_func @ 0x11c02
void MiddleA_func2(MiddleA *this_ptr)
{
 MiddleA_func((MiddleA *)((char *)this_ptr + *(int *)(*(int *)this_ptr + -0xc)));
}

// Function: MiddleB_func @ 0x11c16
int MiddleB_func(MiddleB *this_ptr)
{
 return *(int *)((char *)this_ptr + *(int *)(*(int *)this_ptr + -0xc) + 4) + 200;
}

// Function: MiddleB_func @ 0x11c30
void MiddleB_func2(MiddleB *this_ptr)
{
 MiddleB_func((MiddleB *)((char *)this_ptr + *(int *)(*(int *)this_ptr + -0xc)));
}

// Function: DiamondDerived_func @ 0x11c44
int DiamondDerived_func(DiamondDerived *this_ptr)
{
 return *(int *)((char *)this_ptr + *(int *)(*(int *)this_ptr + -0xc) + 4) + 0xfa;
}

// Function: DiamondDerived_func @ 0x11c5e
void DiamondDerived_func2(DiamondDerived *this_ptr)
{
 DiamondDerived_func((DiamondDerived *)((char *)this_ptr + *(int *)(*(int *)this_ptr + -0xc)));
}

// Function: DiamondDerived_func @ 0x11c71
void DiamondDerived_func3(DiamondDerived *this_ptr)
{
 DiamondDerived_func((DiamondDerived *)((char *)this_ptr + -8));
}

// Function: MiddleA__MiddleA @ 0x11c7c
void MiddleA__MiddleA(MiddleA *this_ptr)
{
 *(unsigned int *)this_ptr = 0x15c94;
 *(unsigned int *)((char *)this_ptr + 8) = 0x15cb0;
}

// Function: MiddleA__MiddleA @ 0x11ca1
void MiddleA__MiddleA2(MiddleA *this_ptr)
{
 int iVar1;
 iVar1 = *(int *)(*(int *)this_ptr + -0x10);
 *(unsigned int *)((char *)this_ptr + iVar1) = 0x15c94;
 *(unsigned int *)((char *)this_ptr + iVar1 + 8) = 0x15cb0;
}

// Function: MiddleB__MiddleB @ 0x11ccc
void MiddleB__MiddleB(MiddleB *this_ptr)
{
 *(unsigned int *)this_ptr = 0x15cd0;
 *(unsigned int *)((char *)this_ptr + 8) = 0x15cec;
}

// Function: MiddleB__MiddleB @ 0x11cf1
void MiddleB__MiddleB2(MiddleB *this_ptr)
{
 int iVar1;
 iVar1 = *(int *)(*(int *)this_ptr + -0x10);
 *(unsigned int *)((char *)this_ptr + iVar1) = 0x15cd0;
 *(unsigned int *)((char *)this_ptr + iVar1 + 8) = 0x15cec;
}

// Function: RTTIDerivedA_getType @ 0x11d1c
unsigned int RTTIDerivedA_getType(void)
{
 return 1;
}

// Function: RTTIDerivedB_getType @ 0x11d26
unsigned int RTTIDerivedB_getType(void)
{
 return 2;
}

// Function: RTTIDerivedB__RTTIDerivedB @ 0x11d30
void RTTIDerivedB__RTTIDerivedB(RTTIDerivedB *this_ptr)
{
 (void)this_ptr;
}

// Function: RTTIDerivedA__RTTIDerivedA_2 @ 0x11d36
void RTTIDerivedA__RTTIDerivedA_2(RTTIDerivedA *this_ptr)
{
 (void)this_ptr;
}

// Function: MultiDerived__MultiDerived @ 0x11d3c
void MultiDerived__MultiDerived(MultiDerived *this_ptr)
{
 (void)this_ptr;
}

// Function: MultiDerived__MultiDerived2 @ 0x11d41
void MultiDerived__MultiDerived2(MultiDerived *this_ptr)
{
 (void)this_ptr;
}

// Function: Derived__Derived @ 0x11d46
void Derived__Derived(Derived *this_ptr)
{
 (void)this_ptr;
}

// Function: Base__Base_2 @ 0x11d4c
void Base__Base_2(Base *this_ptr)
{
 FUN_000111f0(this_ptr,4);
}



// Function: MultiDerived__MultiDerived3 @ 0x11d9c
void MultiDerived__MultiDerived3(MultiDerived *this_ptr)
{
 FUN_000111f0(this_ptr,0x10);
}

// Function: MultiDerived__MultiDerived4 @ 0x11dc4
void MultiDerived__MultiDerived4(MultiDerived *this_ptr)
{
 MultiDerived__MultiDerived((MultiDerived *)((char *)this_ptr + -8));
}





// Function: RTTIDerivedA__RTTIDerivedA @ 0x11e20
void RTTIDerivedA__RTTIDerivedA(RTTIDerivedA *this_ptr)
{
 FUN_000111f0(this_ptr,4);
}

// Function: MiddleA__MiddleA @ 0x11e48
void MiddleA__MiddleA3(MiddleA *this_ptr)
{
 *(unsigned int *)this_ptr = 0x15c94;
 *(unsigned int *)((char *)this_ptr + 8) = 0x15cb0;
 FUN_000111f0(this_ptr,0x10);
}

// Function: MiddleA__MiddleA @ 0x11e7f
void MiddleA__MiddleA4(MiddleA *this_ptr)
{
 MiddleA__MiddleA((MiddleA *)((char *)this_ptr + *(int *)(*(int *)this_ptr + -0x10)));
}

// Function: MiddleB__MiddleB @ 0x11e92
void MiddleB__MiddleB3(MiddleB *this_ptr)
{
 *(unsigned int *)this_ptr = 0x15cd0;
 *(unsigned int *)((char *)this_ptr + 8) = 0x15cec;
 FUN_000111f0(this_ptr,0x10);
}

// Function: MiddleB__MiddleB @ 0x11ec9
void MiddleB__MiddleB4(MiddleB *this_ptr)
{
 MiddleB__MiddleB((MiddleB *)((char *)this_ptr + *(int *)(*(int *)this_ptr + -0x10)));
}

// Function: MiddleA__MiddleA @ 0x11edc
void MiddleA__MiddleA5(MiddleA *this_ptr)
{
 int iVar1;
 iVar1 = 0x15c94;
 *(int *)this_ptr = iVar1;
 iVar1 = 8;
 *(int *)((char *)this_ptr + iVar1) = 0x15cb0;
}

// Function: MiddleA__MiddleA @ 0x11f26
void MiddleA__MiddleA6(MiddleA *this_ptr)
{
 MiddleA__MiddleA(this_ptr);
}

// Function: MiddleB__MiddleB @ 0x11f42
void MiddleB__MiddleB5(MiddleB *this_ptr)
{
 int iVar1;
 iVar1 = 0x15cd0;
 *(int *)this_ptr = iVar1;
 iVar1 = 8;
 *(int *)((char *)this_ptr + iVar1) = 0x15cec;
}

// Function: MiddleB__MiddleB @ 0x11f8c
void MiddleB__MiddleB6(MiddleB *this_ptr)
{
 MiddleB__MiddleB(this_ptr);
}

// Function: template_max<int> @ 0x11fa8
int template_max_int_(int param_1,int param_2)
{
 if (param_1 < param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: template_max<double> @ 0x11fbc
double template_max_double_(double param_1,double param_2)
{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: template_swap<int> @ 0x11fd5
void template_swap_int_(int *param_1,int *param_2)
{
 int iVar1;
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}

// Function: Container_int_Container @ 0x11fee
void Container_int_Container(Container_int_ *this_ptr)
{
 *(unsigned int *)((char *)this_ptr + 0x28) = 0;
}

// Function: Container_int_push @ 0x12002
void Container_int_push(Container_int_ *this_ptr,int param_1)
{
 int iVar1;
 iVar1 = *(int *)((char *)this_ptr + 0x28);
 if (iVar1 < 10) {
 *(int *)((char *)this_ptr + 0x28) = iVar1 + 1;
 *(int *)((char *)this_ptr + iVar1 * 4) = param_1;
 }
}

// Function: Container_int_get @ 0x12022
unsigned int Container_int_get(Container_int_ *this_ptr,int param_1)
{
 unsigned int uVar1;
 uVar1 = 0;
 if ((-1 < param_1) && (*(int *)((char *)this_ptr + 0x28) != param_1 && param_1 <= *(int *)((char *)this_ptr + 0x28))) {
 uVar1 = *(unsigned int *)((char *)this_ptr + param_1 * 4);
 }
 return uVar1;
}

// Function: Container_int_getSize @ 0x12040
unsigned int Container_int_getSize(Container_int_ *this_ptr)
{
 return *(unsigned int *)((char *)this_ptr + 0x28);
}

// Function: Container_double_Container @ 0x12050
void Container_double_Container(Container_double_ *this_ptr)
{
 *(unsigned int *)((char *)this_ptr + 0x50) = 0;
}

// Function: Container_double_push @ 0x12064
void Container_double_push(Container_double_ *this_ptr,double param_1)
{
 int iVar1;
 iVar1 = *(int *)((char *)this_ptr + 0x50);
 if (iVar1 < 10) {
 *(int *)((char *)this_ptr + 0x50) = iVar1 + 1;
 *(double *)((char *)this_ptr + iVar1 * 8) = param_1;
 }
}

// Function: Container_double_get @ 0x12088
double Container_double_get(Container_double_ *this_ptr,int param_1)
{
 double lVar1;
 lVar1 = (double)0;
 if ((-1 < param_1) && (param_1 < *(int *)((char *)this_ptr + 0x50))) {
 lVar1 = *(double *)((char *)this_ptr + (size_t)param_1 * 8);
 }
 return lVar1;
}

// Function: Container_double_getSize @ 0x120a8
unsigned int Container_double_getSize(Container_double_ *this_ptr)
{
 return *(unsigned int *)((char *)this_ptr + 0x50);
}

// Function: std_unique_ptr_int_std__default_delete_int____unique_ptr @ 0x120b8
void
std_unique_ptr_int_std__default_delete_int____unique_ptr
 (unique_ptr_int_std__default_delete_int__ *this_ptr)
{
 if (this_ptr != (unique_ptr_int_std__default_delete_int__ *)0) {
  FUN_000111f0((void *)*(int *)this_ptr,4);
 }
}

// Function: std_unique_ptr_int___std__default_delete_int_____unique_ptr @ 0x120e8
void
std_unique_ptr_int___std__default_delete_int_____unique_ptr
 (unique_ptr_int___std__default_delete_int____ *this_ptr)
{
 if (this_ptr != (unique_ptr_int___std__default_delete_int____ *)0) {
 FUN_00011260((void *)*(int *)this_ptr);
 }
}

// Function: DiamondDerived__DiamondDerived @ 0x12116
void DiamondDerived__DiamondDerived(DiamondDerived *this_ptr)
{
 int iVar1;
 int iVar2;
 iVar2 = 0x15d88;
 *(int *)this_ptr = iVar2;
 iVar1 = 0x15dbc;
 iVar2 = 0x10;
 *(int *)((char *)this_ptr + iVar2) = iVar1;
 iVar2 = 0x15da0;
 *(int *)((char *)this_ptr + 8) = iVar2;
 MiddleB__MiddleB((MiddleB *)((char *)this_ptr + 8));
 MiddleA__MiddleA((MiddleA *)this_ptr);
}

// Function: DiamondDerived__DiamondDerived @ 0x121b0
void DiamondDerived__DiamondDerived2(DiamondDerived *this_ptr)
{
 DiamondDerived__DiamondDerived(this_ptr);
}

// Function: DiamondDerived__DiamondDerived @ 0x121cb
void DiamondDerived__DiamondDerived3(DiamondDerived *this_ptr)
{
 DiamondDerived__DiamondDerived((DiamondDerived *)((char *)this_ptr + -8));
}

// Function: DiamondDerived__DiamondDerived @ 0x121d6
void DiamondDerived__DiamondDerived4(DiamondDerived *this_ptr)
{
 DiamondDerived__DiamondDerived((DiamondDerived *)((char *)this_ptr + *(int *)(*(int *)this_ptr + -0x10)));
}

// Function: DiamondDerived__DiamondDerived @ 0x121ea
void DiamondDerived__DiamondDerived5(DiamondDerived *this_ptr)
{
 DiamondDerived__DiamondDerived(this_ptr);
 FUN_000111f0(this_ptr,0x18);
}

// Function: DiamondDerived__DiamondDerived @ 0x1221e
void DiamondDerived__DiamondDerived6(DiamondDerived *this_ptr)
{
 DiamondDerived__DiamondDerived((DiamondDerived *)((char *)this_ptr + -8));
}

// Function: DiamondDerived__DiamondDerived @ 0x12229
void DiamondDerived__DiamondDerived7(DiamondDerived *this_ptr)
{
 DiamondDerived__DiamondDerived((DiamondDerived *)((char *)this_ptr + *(int *)(*(int *)this_ptr + -0x10)));
}

// Function: DiamondDerived__DiamondDerived @ 0x1223c
void DiamondDerived__DiamondDerived8(DiamondDerived *this_ptr)
{
 DiamondDerived__DiamondDerived(this_ptr);
}

// Function: __x86.get_pc_thunk.ax @ 0x12258
unsigned int __x86_get_pc_thunk_ax(void)
{
 unsigned int unaff_retaddr;
 return unaff_retaddr;
}

// Function: __x86.get_pc_thunk.cx @ 0x1225c
void __x86_get_pc_thunk_cx(void)
{
 return;
}

// Function: __x86.get_pc_thunk.si @ 0x12260
void __x86_get_pc_thunk_si(void)
{
 return;
}



// Function: __do_global_ctors_aux @ 0x12290
void __do_global_ctors_aux(void)
{
 return;
}

// Function: _fini @ 0x122dc
void _fini(void)
{
 __do_global_dtors_aux();
 return;
}

