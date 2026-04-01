// Decompiled by BinaryAI
// SHA256: c0ef99c012439f7943635ebecda90c0a77f5c85507db876bd7aa89b66e1ad395

// Forward declarations
#define CONCAT44(hi,lo) (((unsigned long long)(hi) << 32) | (unsigned int)(lo))
struct Base;
struct Derived;
struct MultiDerived;
struct MiddleA;
struct MiddleB;
struct DiamondDerived;
struct Base { int *vtable; };
struct Derived { int *vtable; int value; };
struct MultiDerived { int *vtable; int value; };
struct MiddleA { int *vtable; int value; };
struct MiddleB { int *vtable; int value; };
struct DiamondDerived { int *vtable; int value; };
struct RTTIDerivedA { int *vtable; };
struct RTTIDerivedB { int *vtable; };
struct Container_int_ { int data[10]; int size; };
struct Container_double_ { double data[10]; int size; };
struct LifecycleClass;
int LifecycleClass_instance_count = 0;

// Helper function declarations
int __i686_get_pc_thunk_bx(void);
int __x86_get_pc_thunk_bx(void);
int __x86_get_pc_thunk_dx(void);
int __x86_get_pc_thunk_di(void);
int __x86_get_pc_thunk_ax(void);
int __x86_get_pc_thunk_si(void);
void FUN_00011030(void);
void FUN_00011150(int param_1);
void FUN_00011160(int param_1, char *param_2, int param_3);
int FUN_00011170(int);
int FUN_00011180(void);
int FUN_00011190(void);
int FUN_000111a0(char *);
void FUN_000111b0(char *, char *, char *);
void FUN_000111c0(char *param_1, int param_2);
int FUN_000111d0(char *, char *);
void FUN_000111e0(char *param_1, unsigned int param_2, char *param_3, int param_4, int param_5, unsigned int param_6, char *param_7);
void FUN_000111f0(void);
int FUN_00011200(char *, char *, char *, int);
int FUN_00011210(void);
void FUN_00011220(char *param_1);
void FUN_00011230(char *param_1);
void FUN_00011240(void);
int FUN_00011250(void);
int FUN_00011260(void);
void __stack_chk_fail_local(void);
void __do_global_ctors_aux(void);
void __do_global_dtors_aux(void);
void __gmon_start__(void);
void frame_dummy(void);
void deregister_tm_clones(void);
void register_tm_clones(void);

// Test function forward declarations
void test_cpp_oo_features(void);
int test_cpp_constructor(void);
unsigned int test_cpp_diamond_inheritance(void);
int test_cpp_template_func(void);
int test_cpp_exception(void);
unsigned int test_cpp_smart_ptr(void);
int test_cpp_rtti(void);
int template_max_int_(int, int);
double template_max_double_(double, double);
void template_swap_int_(int *, int *);

// External variables
extern char *std___ioinit;
extern char *__dso_handle;
extern char *std__ios_base_Init__Init;
extern int int_typeinfo;
extern int RTTIBase_typeinfo;
extern int RTTIDerivedA_typeinfo;
extern int RTTIDerivedB_typeinfo;
extern int *PTR__RTTIDerivedA_00013e48;
extern int *PTR__RTTIDerivedB_00013e5c;
char DAT_00012008 = 0;
extern char DAT_00012018;
extern char DAT_0001203c;
extern char DAT_0001205a;
extern char DAT_00012076;
extern char DAT_00012092;
extern char DAT_000120ae;
extern char DAT_000120cb;
extern char DAT_000120e7;
extern char DAT_00012103;
extern char DAT_0001211f;
extern char DAT_0001213b;
extern char DAT_00012158;
extern char DAT_00012175;



// Function: FUN_00011030 @ 0x11030
void FUN_00011030(void)
{
 return;
}

// Function: FUN_00011150 @ 0x11150
void FUN_00011150(int unaff_EBX)
{
 (*(void (**)(void))((char *)unaff_EBX + 0x54))();
 return;
}

// Function: FUN_00011160 @ 0x11160
void FUN_00011160(int unaff_EBX, char *param_2, int param_3)
{
 (*(void (**)(void))((char *)unaff_EBX + 0xc))();
 return;
}

// Function: FUN_00011170 @ 0x11170
int FUN_00011170(int param_1)
{
 int unaff_EBX = param_1;
 (*(void (**)(void))((char *)unaff_EBX + 0x10))();
 return 0;
}

// Function: FUN_00011180 @ 0x11180
int FUN_00011180(void)
{
 return 0;
}

// Function: FUN_00011190 @ 0x11190
int FUN_00011190(void)
{
 return 0;
}

// Function: FUN_000111a0 @ 0x111a0
int FUN_000111a0(char *param_1)
{
 return 0;
}

// Function: FUN_000111b0 @ 0x111b0
void FUN_000111b0(char *param_1, char *param_2, char *param_3)
{
 return;
}

// Function: FUN_000111c0 @ 0x111c0
void FUN_000111c0(char *param_1, int param_2)
{
 return;
}

// Function: FUN_000111d0 @ 0x111d0
int FUN_000111d0(char *param_1, char *param_2)
{
 return 0;
}

// Function: FUN_000111e0 @ 0x111e0
void FUN_000111e0(char *param_1, unsigned int param_2, char *param_3, int param_4, int param_5, unsigned int param_6, char *param_7)
{
 return;
}

// Function: FUN_000111f0 @ 0x111f0
void FUN_000111f0(void)
{
 return;
}

// Function: FUN_00011200 @ 0x11200
int FUN_00011200(char *param_1, char *param_2, char *param_3, int param_4)
{
 return 0;
}

// Function: FUN_00011210 @ 0x11210
int FUN_00011210(void)
{
 return 0;
}

// Function: FUN_00011220 @ 0x11220
void FUN_00011220(char *param_1)
{
 return;
}

// Function: FUN_00011230 @ 0x11230
void FUN_00011230(char *param_1)
{
 return;
}

// Function: FUN_00011240 @ 0x11240
void FUN_00011240(void)
{
 return;
}

// Function: FUN_00011250 @ 0x11250
int FUN_00011250(void)
{
 return 0;
}

// Function: FUN_00011260 @ 0x11260
int FUN_00011260(void)
{
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
 FUN_00011190();
 puStack_3c = (unsigned int *)0x4;
 *puStack_3c = 0x2a;
 uStack_34 = 0;
 puStack_38 = &DAT_00012008;
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
 uVar7 = ((unsigned long long)local_24 << 32) | (unsigned int)uVar7;
 }
 else {
 local_20 = 0;
 }
 if ((int)((unsigned long long)uVar7 >> 0x20) != 1) {
 ppuVar4 = (unsigned int **)auStack_4c;
 auStack_4c[0] = (int)uVar7;
 FUN_00011260();
 }
 puVar5 = (char *)((char *)ppuVar4 + -0x10);
 *(int *)(puVar5) = (int)uVar7;
 *(unsigned int *)((char *)ppuVar4 + -0x14) = 0x11300;
 piVar1 = (int *)FUN_00011180();
 iVar6 = *piVar1 * 2 + local_20;
 *(unsigned int *)((char *)ppuVar4 + -0x14) = 0x1130c;
 FUN_00011240();
 *(unsigned int *)((char *)ppuVar4 + -0x10) = 1;
 *(unsigned int *)((char *)ppuVar4 + -0x14) = 0x11318;
 uVar2 = FUN_00011190();
 *(unsigned int *)((char *)ppuVar4 + -8) = 0;
 *(int **)(puVar5 + 4) =
 (int *)0;
 *(unsigned int *)((char *)ppuVar4 + -0x10) = uVar2;
 *(unsigned int *)((char *)ppuVar4 + -0x14) = 0x1132a;
 uVar7 = FUN_00011250();
 iVar3 = (int)((unsigned long long)uVar7 >> 0x20);
 uVar2 = (unsigned int)uVar7;
 if (iVar3 != 2) {
 if (iVar3 == 3) {
 *(unsigned int *)(puVar5) = uVar2;
 *(unsigned int *)((char *)ppuVar4 + -0x24) = 0x1136c;
 FUN_00011180();
 *(unsigned int *)((char *)ppuVar4 + -0x24) = 0x11371;
 FUN_00011240();
 return iVar6 + 200;
 }
 puVar5 = (char *)((char *)ppuVar4 + -0x20);
 *(unsigned int *)(puVar5) = uVar2;
 *(unsigned int *)((char *)ppuVar4 + -0x24) = 0x11343;
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
 FUN_00011230((char *)std___ioinit);
 FUN_000111b0((char *)std__ios_base_Init__Init,(char *)std___ioinit,(char *)__dso_handle);
 return;
}

// Function: _start @ 0x113e0
void _start(unsigned int param_1,unsigned int param_2)
{
 char auStack_4 [4];
 int stack_4 = 4;
 FUN_000111e0((char *)main,param_2,(char *)&stack_4,0,0,param_1,auStack_4);
 do {
 } while( true );
}

// Function: __i686.get_pc_thunk.bx @ 0x1140c
int __i686_get_pc_thunk_bx(void)
{
 return 0;
}

// Function: __x86.get_pc_thunk.bx @ 0x11410
int __x86_get_pc_thunk_bx(void)
{
 return 0;
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
   (*(void (**)(void))((char *)unaff_EDI + 0x297b + (uVar1 + 1) * 4))();
   uVar1 = *(unsigned int *)(unaff_EDI + 0x2b5f);
  }
 deregister_tm_clones();
 *(char *)(unaff_EDI + 0x2b5b) = 1;
 }
 return;
}

// Function: __x86.get_pc_thunk.dx @ 0x11549
int __x86_get_pc_thunk_dx(void)
{
 return 0;
}

// Function: __x86.get_pc_thunk.di @ 0x1154d
int __x86_get_pc_thunk_di(void)
{
 return 0;
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
 iVar1 = FUN_000111a0((char *)&local_30);
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return iVar1 + 0x125c;
 }
 __stack_chk_fail_local();
 return 0;
}

// Function: test_cpp_constructor @ 0x11600
int test_cpp_constructor(void)
{
 return LifecycleClass_instance_count * 0x3e9 + 0x15;
}

// Function: call_virtual_func @ 0x11620
void call_virtual_func(Base *param_1,int param_2)
{
 ((void (*)(void))(*param_1->vtable))();
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
 return (int)dVar2 + iVar1 + local_18 + local_14;
 }
 __stack_chk_fail_local();
 return 0;
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
 iVar6 = FUN_00011200((char *)piVar3,(char *)&RTTIBase_typeinfo,(char *)&RTTIDerivedA_typeinfo,0);
 iVar5 = (int)(uVar7 + 0x14);
 if (iVar6 != 0) {
 iVar5 = (int)(uVar7 + 0x78);
 }
 iVar6 = FUN_00011200((char *)piVar4,(char *)&RTTIBase_typeinfo,(char *)&RTTIDerivedB_typeinfo,0);
 if (iVar6 != 0) {
 iVar5 = iVar5 + 200;
 }
	iVar6 = FUN_000111a0((char *)(pcVar2 + (*pcVar2 == '*')));
	(*(void (**)(char *))(iVar1 + 4))((char *)piVar3);
	(*(void (**)(char *))(*piVar4 + 4))((char *)piVar4);
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
 iVar1 = FUN_000111a0((char *)&local_30);
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

// Function: Base_virtual_func @ 0x11a30
int Base_virtual_func(Base *this_,int param_1)
{
 return param_1 + 1;
}

// Function: Base_getName @ 0x11a40
char * Base_getName(Base *this_)
{
 return &DAT_00012008;
}

// Function: Base__D @ 0x11a60
void Base__D(Base *this_)
{
 return;
}

// Function: Derived_virtual_func @ 0x11a70
int Derived_virtual_func(Derived *this_,int param_1)
{
 return param_1 * *(int *)((char *)this_ + 4);
}

// Function: Derived_getName @ 0x11a90
char * Derived_getName(Derived *this_)
{
 return "Derived";
}

// Function: MultiDerived_funcA @ 0x11ab0
unsigned int MultiDerived_funcA(void)
{
 return 0x1e;
}

// Function: MultiDerived_funcB @ 0x11ac0
unsigned int MultiDerived_funcB(void)
{
 return 0x28;
}

// Function: MultiDerived_funcB_this @ 0x11ad0
unsigned int MultiDerived_funcB_this(MultiDerived *this_)
{
 return 0x28;
}

// Function: MiddleA::func @ 0x11ae0
int MiddleA_func(MiddleA *this_)
{
 return *(int *)((char *)this_ + *(int *)(*(int *)this_ + -0xc) + 4) + 0x96;
}

// Function: MiddleA::func @ 0x11b00
int MiddleA_func_2(MiddleA *this_)
{
 return *(int *)((int)((char *)this_ + *(int *)(*(int *)this_ + -0xc)) +
 *(int *)(*(int *)((char *)this_ + *(int *)(*(int *)this_ + -0xc)) + -0xc) + 4) + 0x96;
}

// Function: MiddleB::func @ 0x11b20
int MiddleB_func(MiddleB *this_)
{
 return *(int *)((char *)this_ + *(int *)(*(int *)this_ + -0xc) + 4) + 200;
}

// Function: MiddleB::func @ 0x11b40
int MiddleB_func_2(MiddleB *this_)
{
 return *(int *)((int)((char *)this_ + *(int *)(*(int *)this_ + -0xc)) +
 *(int *)(*(int *)((char *)this_ + *(int *)(*(int *)this_ + -0xc)) + -0xc) + 4) + 200;
}

// Function: DiamondDerived_func @ 0x11b60
int DiamondDerived_func(DiamondDerived *this_)
{
 return *(int *)((char *)this_ + *(int *)(*(int *)this_ + -0xc) + 4) + 0xfa;
}

// Function: DiamondDerived_func_2 @ 0x11b80
int DiamondDerived_func_2(DiamondDerived *this_)
{
 return *(int *)((int)((char *)this_ + *(int *)(*(int *)this_ + -0xc)) +
 *(int *)(*(int *)((char *)this_ + *(int *)(*(int *)this_ + -0xc)) + -0xc) + 4) + 0xfa;
}

// Function: DiamondDerived_func_3 @ 0x11ba0
int DiamondDerived_func_3(DiamondDerived *this_)
{
 return *(int *)((char *)this_ + *(int *)(*(int *)((char *)this_ + -8) + -0xc) + -4) + 0xfa;
}

// Function: RTTIDerivedA_getType @ 0x11bc0
unsigned int RTTIDerivedA_getType(RTTIDerivedA *this_)
{
 return 1;
}

// Function: RTTIDerivedB_getType @ 0x11bd0
unsigned int RTTIDerivedB_getType(RTTIDerivedB *this_)
{
 return 2;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x11be0
void RTTIDerivedB__RTTIDerivedB(RTTIDerivedB *this_)
{
 return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x11bf0
void RTTIDerivedA__RTTIDerivedA(RTTIDerivedA *this_)
{
 return;
}

// Function: DiamondDerived__DiamondDerived @ 0x11c00
void DiamondDerived__DiamondDerived(DiamondDerived *this_)
{
 return;
}

// Function: DiamondDerived__DiamondDerived_2 @ 0x11c10
void DiamondDerived__DiamondDerived_2(DiamondDerived *this_)
{
 return;
}

// Function: DiamondDerived__DiamondDerived_3 @ 0x11c20
void DiamondDerived__DiamondDerived_3(DiamondDerived *this_)
{
 return;
}

// Function: MultiDerived__MultiDerived @ 0x11c30
void MultiDerived__MultiDerived(MultiDerived *this_)
{
 return;
}

// Function: MultiDerived__MultiDerived_2 @ 0x11c40
void MultiDerived__MultiDerived_2(MultiDerived *this_)
{
 return;
}

// Function: Derived__D @ 0x11c50
void Derived__D(Derived *this_)
{
 return;
}

// Function: Base__D_3 @ 0x11c60
void Base__D_3(Base *this_)
{
 FUN_000111c0((char *)this_,4);
 return;
}

// Function: Derived__D_2 @ 0x11c90
void Derived__D_2(Derived *this_)
{
 FUN_000111c0((char *)this_,8);
 return;
}

// Function: MultiDerived__MultiDerived_3 @ 0x11cc0
void MultiDerived__MultiDerived_3(MultiDerived *this_)
{
 FUN_000111c0((char *)this_,0x10);
 return;
}

// Function: MultiDerived__MultiDerived_4 @ 0x11cf0
void MultiDerived__MultiDerived_4(MultiDerived *this_)
{
 FUN_000111c0((char *)this_ + -8,0x10);
 return;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x11d20
void RTTIDerivedB__RTTIDerivedB_2(RTTIDerivedB *this_)
{
 FUN_000111c0((char *)this_,4);
 return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x11d50
void RTTIDerivedA__RTTIDerivedA_2(RTTIDerivedA *this_)
{
 FUN_000111c0((char *)this_,4);
 return;
}

// Function: DiamondDerived__DiamondDerived_4 @ 0x11d80
void DiamondDerived__DiamondDerived_4(DiamondDerived *this_)
{
 FUN_000111c0((char *)this_,0x18);
 return;
}

// Function: DiamondDerived__DiamondDerived_5 @ 0x11db0
void DiamondDerived__DiamondDerived_5(DiamondDerived *this_)
{
 FUN_000111c0((char *)((char *)this_ + *(int *)(*(int *)this_ + -0x10)),0x18);
 return;
}

// Function: DiamondDerived__DiamondDerived_6 @ 0x11de0
void DiamondDerived__DiamondDerived_6(DiamondDerived *this_)
{
 FUN_000111c0((char *)((char *)this_ + -8),0x18);
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

// Function: Container_int__Container @ 0x11e70
void Container_int__Container(Container_int_ *this_)
{
 *(unsigned int *)((char *)this_ + 0x28) = 0;
 return;
}

// Function: Container_int__push @ 0x11e80
void Container_int__push(Container_int_ *this_,int param_1)
{
 int iVar1;
 iVar1 = *(int *)((char *)this_ + 0x28);
 if (iVar1 < 10) {
 *(int *)((char *)this_ + 0x28) = iVar1 + 1;
 *(int *)((char *)this_ + iVar1 * 4) = param_1;
 }
 return;
}

// Function: Container_int__get @ 0x11ea0
unsigned int Container_int__get(Container_int_ *this_,int param_1)
{
 if ((-1 < param_1) && (*(int *)((char *)this_ + 0x28) != param_1 && param_1 <= *(int *)((char *)this_ + 0x28))) {
 return *(unsigned int *)((char *)this_ + param_1 * 4);
 }
 return 0;
}

// Function: Container_int__getSize @ 0x11ed0
unsigned int Container_int__getSize(Container_int_ *this_)
{
 return *(unsigned int *)((char *)this_ + 0x28);
}

// Function: Container_double__Container @ 0x11ee0
void Container_double__Container(Container_double_ *this_)
{
 *(unsigned int *)((char *)this_ + 0x50) = 0;
 return;
}

// Function: Container_double__push @ 0x11ef0
void Container_double__push(Container_double_ *this_,double param_1)
{
 int iVar1;
 iVar1 = *(int *)((char *)this_ + 0x50);
 if (iVar1 < 10) {
 *(int *)((char *)this_ + 0x50) = iVar1 + 1;
 *(double *)((char *)this_ + iVar1 * 8) = param_1;
 }
 return;
}

// Function: Container_double__get @ 0x11f20
long double Container_double__get(Container_double_ *this_,int param_1)
{
 if ((-1 < param_1) && (param_1 < *(int *)((char *)this_ + 0x50))) {
 return (long double)*(double *)((char *)this_ + param_1 * 8);
 }
 return (long double)0;
}

// Function: Container_double__getSize @ 0x11f50
unsigned int Container_double__getSize(Container_double_ *this_)
{
 return *(unsigned int *)((char *)this_ + 0x50);
}

// Function: __x86.get_pc_thunk.ax @ 0x11f5c
int __x86_get_pc_thunk_ax(void)
{
 return 0;
}

// Function: __x86.get_pc_thunk.si @ 0x11f60
int __x86_get_pc_thunk_si(void)
{
 return 0;
}

// Function: __stack_chk_fail_local @ 0x11f70
void __stack_chk_fail_local(void)
{
 FUN_000111f0();
 return;
}

// Function: __do_global_ctors_aux @ 0x11f90
void __do_global_ctors_aux(void)
{
 return;
}

// Function: _fini @ 0x11fdc
void _fini(void)
{
 __do_global_dtors_aux();
 return;
}

