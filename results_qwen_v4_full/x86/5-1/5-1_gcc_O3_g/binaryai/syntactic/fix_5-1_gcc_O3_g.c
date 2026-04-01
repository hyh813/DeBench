// Decompiled by BinaryAI
// SHA256: f1d26b148cc8efa5fc4ef6235d3869a4a921559bf5cdf5908c72bb68f1cb5eac

// Type definitions for C++ classes
typedef struct Base { int vtable; int data; } Base;
typedef struct Derived { int vtable; int data; } Derived;
typedef struct MiddleA { int vtable; int data; } MiddleA;
typedef struct MiddleB { int vtable; int data; } MiddleB;
typedef struct DiamondDerived { int vtable; int data; } DiamondDerived;
typedef struct MultiDerived { int vtable; int data; } MultiDerived;
typedef struct RTTIBase { int vtable; int data; } RTTIBase;
typedef struct RTTIDerivedA { int vtable; int data; } RTTIDerivedA;
typedef struct RTTIDerivedB { int vtable; int data; } RTTIDerivedB;
typedef struct Container_int_ { int data[10]; int size; } Container_int_;
typedef struct Container_double_ { double data[10]; int size; } Container_double_;

// Forward declarations
typedef unsigned int uint;
typedef unsigned int uintptr_t;
void __stack_chk_fail_local(void);
int template_max_int_(int param_1,int param_2);
double template_max_double_(double param_1,double param_2);
void template_swap_int_(int *param_1,int *param_2);
void __gmon_start__(void);
void frame_dummy(void);
void __do_global_ctors_aux(void);
unsigned int FUN_00011200(char *param_1, char *param_2, char *param_3, int param_4);
void FUN_00011230(char *param_1);
unsigned int FUN_000111b0(char *param_1, char *param_2, char *param_3);
unsigned int FUN_00011220(char *param_1);
void test_cpp_oo_features(void);
void __x86_get_pc_thunk_di(void);
unsigned int __x86_get_pc_thunk_ax(void);
void __x86_get_pc_thunk_si(void);
void __x86_get_pc_thunk_dx(void);
void __i686_get_pc_thunk_bx(void);
void __x86_get_pc_thunk_bx(void);
unsigned int FUN_000111e0(char *param_1,unsigned int param_2,char *param_3,int param_4,int param_5,unsigned int param_6,char *param_7);
unsigned int FUN_000111d0(char *param_1,char *param_2);
unsigned int FUN_00011160(int param_1, char *param_2, int param_3);
unsigned int FUN_00011170(int param_1);
unsigned int FUN_00011180(void);
unsigned int FUN_00011190(void);
unsigned int FUN_000111a0(char *param_1);
unsigned int FUN_000111c0(char *param_1, int param_2);
unsigned int FUN_000111f0(void);
unsigned int FUN_00011210(void);
unsigned int FUN_00011240(void);
unsigned int FUN_00011250(void);
unsigned int FUN_00011260(void);

// Macro for rounding
#define ROUND(x) ((int)((x) + ((x) >= 0 ? 0.5 : -0.5)))

// Macro for concatenating 4-byte values
#define CONCAT44(hi, lo) (((unsigned long long)(hi) << 32) | (unsigned int)(lo))

// Global variables
int LifecycleClass_instance_count = 0;

// External typeinfo declarations
extern int RTTIBase_typeinfo;
extern int RTTIDerivedA_typeinfo;
extern int RTTIDerivedB_typeinfo;
extern int PTR_DerivedException_typeinfo_00014e00;
extern int PTR__RTTIDerivedA_00014e48;
extern int PTR__RTTIDerivedB_00014e5c;
extern int DAT_00013018;
extern int DAT_0001303c;
extern int DAT_0001305a;
extern int DAT_00013076;
extern int DAT_00013092;
extern int DAT_000130ae;
extern int DAT_000130cb;
extern int DAT_000130e7;
extern int DAT_00013103;
extern int DAT_0001311f;
extern int DAT_0001313b;
extern int DAT_00013158;
extern int DAT_00013175;
extern int int_typeinfo;
extern int DAT_00013008;

// Function: _init @ 0x11000
int _init(void *ctx)
{
 __gmon_start__();
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

// Function: FUN_00011150 @ 0x11150
unsigned int FUN_00011150(void)
{
 int unaff_EBX;
 ((void (*)(void))(uintptr_t)(*(unsigned int *)(unaff_EBX + 0x54)))();
 return 0;
}

// Function: FUN_00011160 @ 0x11160
unsigned int FUN_00011160(int param_1, char *param_2, int param_3)
{
 int unaff_EBX;
 ((void (*)(void))(uintptr_t)(*(unsigned int *)(unaff_EBX + 0xc)))();
 return 0;
}

// Function: FUN_00011170 @ 0x11170
unsigned int FUN_00011170(int param_1)
{
 int unaff_EBX;
 ((void (*)(void))(uintptr_t)(*(unsigned int *)(unaff_EBX + 0x10)))();
 return 0;
}

// Function: FUN_00011180 @ 0x11180
unsigned int FUN_00011180(void)
{
 int unaff_EBX;
 ((void (*)(void))(uintptr_t)(*(unsigned int *)(unaff_EBX + 0x14)))();
 return 0;
}

// Function: FUN_00011190 @ 0x11190
unsigned int FUN_00011190(void)
{
 int unaff_EBX;
 ((void (*)(void))(uintptr_t)(*(unsigned int *)(unaff_EBX + 0x18)))();
 return 0;
}

// Function: FUN_000111a0 @ 0x111a0
unsigned int FUN_000111a0(char *param_1)
{
 int unaff_EBX;
 ((void (*)(void))(uintptr_t)(*(unsigned int *)(unaff_EBX + 0x1c)))();
 return 0;
}

// Function: FUN_000111b0 @ 0x111b0
unsigned int FUN_000111b0(char *param_1, char *param_2, char *param_3)
{
 int unaff_EBX;
 ((void (*)(void))(uintptr_t)(*(unsigned int *)(unaff_EBX + 0x20)))();
 return 0;
}

// Function: FUN_000111c0 @ 0x111c0
unsigned int FUN_000111c0(char *param_1, int param_2)
{
 int unaff_EBX;
 ((void (*)(void))(uintptr_t)(*(unsigned int *)(unaff_EBX + 0x24)))();
 return 0;
}

// Function: FUN_000111d0 @ 0x111d0
unsigned int FUN_000111d0(void)
{
 int unaff_EBX;
 ((void (*)(void))(uintptr_t)(*(unsigned int *)(unaff_EBX + 0x28)))();
 return 0;
}

// Function: FUN_000111e0 @ 0x111e0
unsigned int FUN_000111e0(char *param_1, unsigned int param_2, char *param_3, int param_4, int param_5, unsigned int param_6, char *param_7)
{
 int unaff_EBX;
 ((void (*)(void))(uintptr_t)(*(unsigned int *)(unaff_EBX + 0x2c)))();
 return 0;
}

// Function: FUN_000111f0 @ 0x111f0
unsigned int FUN_000111f0(void)
{
 int unaff_EBX;
 ((void (*)(void))(uintptr_t)(*(unsigned int *)(unaff_EBX + 0x30)))();
 return 0;
}

// Function: FUN_00011200 @ 0x11200
unsigned int FUN_00011200(char *param_1, char *param_2, char *param_3, int param_4)
{
 int unaff_EBX;
 ((void (*)(void))(uintptr_t)(*(unsigned int *)(unaff_EBX + 0x34)))();
 return 0;
}

// Function: FUN_00011210 @ 0x11210
unsigned int FUN_00011210(void)
{
 int unaff_EBX;
 ((void (*)(void))(uintptr_t)(*(unsigned int *)(unaff_EBX + 0x38)))();
 return 0;
}

// Function: FUN_00011220 @ 0x11220
unsigned int FUN_00011220(char *param_1)
{
 int unaff_EBX;
 ((void (*)(void))(uintptr_t)(*(unsigned int *)(unaff_EBX + 0x3c)))();
 return 0;
}

// Function: FUN_00011230 @ 0x11230
void FUN_00011230(char *param_1)
{
 int unaff_EBX;
 ((void (*)(void))(uintptr_t)(*(unsigned int *)(unaff_EBX + 0x40)))();
 return;
}

// Function: FUN_00011240 @ 0x11240
unsigned int FUN_00011240(void)
{
 int unaff_EBX;
 ((void (*)(void))(uintptr_t)(*(unsigned int *)(unaff_EBX + 0x44)))();
 return 0;
}

// Function: FUN_00011250 @ 0x11250
unsigned int FUN_00011250(void)
{
 int unaff_EBX;
 ((void (*)(void))(uintptr_t)(*(unsigned int *)(unaff_EBX + 0x48)))();
 return 0;
}

// Function: FUN_00011260 @ 0x11260
unsigned int FUN_00011260(void)
{
 int unaff_EBX;
 ((void (*)(void))(uintptr_t)(*(unsigned int *)(unaff_EBX + 0x4c)))();
 return 0;
}

// Function: test_cpp_exception @ 0x11270
int test_cpp_exception(void)
{
 int *piVar1;
 unsigned int uVar2;
 int iVar3;
 char **ppuVar4;
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
 char *in_GS_OFFSET;
 puStack_3c = (unsigned int *)0x4;
 uStack_40 = 0x11291;
 in_GS_OFFSET = (char *)0x0;
 puStack_3c = (unsigned int *)FUN_00011190();
 *puStack_3c = 0x2a;
 uStack_34 = 0;
 puStack_38 = (char*)&int_typeinfo;
 ppuVar4 = (char**)&puStack_3c;
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
 ppuVar4 = (char **)auStack_4c;
 auStack_4c[0] = (int)uVar7;
 FUN_00011260();
 }
 puVar5 = (char *)((char*)ppuVar4 + -0x10);
 *(int *)puVar5 = (int)uVar7;
 *(unsigned int *)((char*)ppuVar4 + -0x14) = 0x11300;
 piVar1 = (int *)FUN_00011180();
 iVar6 = *piVar1 * 2 + local_20;
 *(unsigned int *)((char*)ppuVar4 + -0x14) = 0x1130c;
 FUN_00011240();
 *(unsigned int *)((char*)ppuVar4 + -0x10) = 1;
 *(unsigned int *)((char*)ppuVar4 + -0x14) = 0x11318;
 uVar2 = FUN_00011190();
 *(unsigned int *)((char*)ppuVar4 + -8) = 0;
 *(unsigned int **)((char*)ppuVar4 + -0xc) =
 (unsigned int *)&PTR_DerivedException_typeinfo_00014e00;
 *(unsigned int *)((char*)ppuVar4 + -0x10) = uVar2;
 *(unsigned int *)((char*)ppuVar4 + -0x14) = 0x1132a;
 uVar7 = FUN_00011250();
 iVar3 = (int)((unsigned long long)uVar7 >> 0x20);
 uVar2 = (unsigned int)uVar7;
 if (iVar3 != 2) {
 if (iVar3 == 3) {
 *(unsigned int *)((char*)ppuVar4 + -0x20) = uVar2;
 *(unsigned int *)((char*)ppuVar4 + -0x24) = 0x1136c;
 FUN_00011180();
 *(unsigned int *)((char*)ppuVar4 + -0x24) = 0x11371;
 FUN_00011240();
 return iVar6 + 200;
 }
 puVar5 = (char *)((char*)ppuVar4 + -0x20);
 *(unsigned int *)((char*)ppuVar4 + -0x20) = uVar2;
 *(unsigned int *)((char*)ppuVar4 + -0x24) = 0x11343;
 uVar2 = FUN_00011260();
 }
 *(unsigned int *)((char*)puVar5 + -0x10) = uVar2;
 *(unsigned int *)((char*)puVar5 + -0x14) = 0x11351;
 FUN_00011180();
 *(unsigned int *)((char*)puVar5 + -0x14) = 0x11356;
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
 extern int std___ioinit;
 extern int __dso_handle;
 FUN_00011230((char*)&std___ioinit);
 FUN_000111b0((char*)&std___ioinit,(char*)&std___ioinit,(char*)&__dso_handle);
 return;
}

// Function: _start @ 0x113e0
void _start(unsigned int param_1,unsigned int param_2)
{
 char auStack_4 [4];
 int stack_var = 4;
 FUN_000111e0((char*)main,param_2,(char*)&stack_var,0,0,param_1,auStack_4);
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
 if (*(char *)(unaff_EDI + 0x3b5b) == '\0') {
 if (*(int *)(unaff_EDI + 0x3b2b) != 0) {
 FUN_00011150();
 }
 uVar1 = *(unsigned int *)(unaff_EDI + 0x3b5f);
 while (uVar1 < ((unaff_EDI + 0x397f) - (unaff_EDI + 0x397b) >> 2) - 1U) {
 *(unsigned int *)(unaff_EDI + 0x3b5f) = uVar1 + 1;
 (**(void **)(unaff_EDI + 0x397b + (uVar1 + 1) * 4))();
 uVar1 = *(unsigned int *)(unaff_EDI + 0x3b5f);
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
 in_GS_OFFSET = 0;
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
 iVar1 = FUN_000111a0((char*)&local_30);
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return iVar1 + 0x125c;
 }
 __stack_chk_fail_local();
}

// Function: test_cpp_constructor @ 0x11600
int test_cpp_constructor(void)
{
 return LifecycleClass_instance_count * 0x3e9 + 0x15;
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
 *piVar3 = (int)&PTR__RTTIDerivedA_00014e48;
 piVar4 = (int *)FUN_00011170(4);
 *piVar4 = (int)&PTR__RTTIDerivedB_00014e5c;
 iVar1 = *piVar3;
 pcVar2 = *(char **)(*(int *)(iVar1 + -4) + 4);
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
 iVar6 = FUN_00011200((char*)piVar3,(char*)&RTTIBase_typeinfo,(char*)&RTTIDerivedA_typeinfo,0);
 if (iVar6 != 0) {
 iVar5 = iVar5 + 100;
 }
 iVar6 = FUN_00011200((char*)piVar4,(char*)&RTTIBase_typeinfo,(char*)&RTTIDerivedB_typeinfo,0);
 if (iVar6 != 0) {
 iVar5 = iVar5 + 200;
 }
 iVar6 = FUN_000111a0(pcVar2 + (*pcVar2 == '*'));
 ((void (*)(int *))(*(void **)(iVar1 + 4)))(piVar3);
 ((void (*)(int *))(*(void **)(*piVar4 + 4)))(piVar4);
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
 in_GS_OFFSET = 0;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 FUN_00011220((char*)&DAT_00013018);
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
 iVar1 = FUN_000111a0((char*)&local_30);
  FUN_00011160(1,(char*)&DAT_0001303c,iVar1 + 0x125c);
  FUN_00011160(1,(char*)&DAT_0001305a,LifecycleClass_instance_count * 0x3e9 + 0x15);
  FUN_00011160(1,(char*)&DAT_00013076,0x2a);
  FUN_00011160(1,(char*)&DAT_00013092,0x47);
  FUN_00011160(1,(char*)&DAT_000130ae,0x28a);
  FUN_00011160(1,(char*)&DAT_000130cb,0x16);
 iVar1 = template_max_int_(3,7);
 dVar3 = template_max_double_(2.5,1.5);
 local_3c = 10;
 local_38[0] = 0x14;
 template_swap_int_(&local_3c,&local_38[0]);
  FUN_00011160(1,(char*)&DAT_000130e7,(int)ROUND(dVar3) + iVar1 + local_3c + local_38[0]);
  FUN_00011160(1,(char*)&DAT_00013103,0x10);
  FUN_00011160(1,(char*)&DAT_0001311f,0x55);
  uVar2 = test_cpp_exception();
  FUN_00011160(1,(char*)&DAT_0001313b,uVar2);
  FUN_00011160(1,(char*)&DAT_00013158,0x2bf);
  uVar2 = test_cpp_rtti();
  FUN_00011160(1,(char*)&DAT_00013175,uVar2);
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return;
 }
 __stack_chk_fail_local();
}

// Function: Base::virtual_func @ 0x11ae0
int Base_virtual_func(Base *this_ptr,int param_1)
{
 return param_1 + 1;
}

// Function: Base::getName @ 0x11af0
char * Base_getName(void)
{
 return (char *)&DAT_00013008;
}

// Function: Base::~Base @ 0x11b10
void Base__Base(Base *this_ptr)
{
 return;
}

// Function: Derived::virtual_func @ 0x11b20
int Derived_virtual_func(Derived *this_ptr,int param_1)
{
 return param_1 * *(int *)(this_ptr + 4);
}

// Function: Derived::getName @ 0x11b40
char * Derived_getName(void)
{
 return "Derived";
}

// Function: MultiDerived_funcA @ 0x11b60
unsigned int MultiDerived_funcA(void)
{
 return 0x1e;
}

// Function: MultiDerived_funcB @ 0x11b70
unsigned int MultiDerived_funcB(void)
{
 return 0x28;
}

// Function: MultiDerived_funcB_this @ 0x11b80
unsigned int MultiDerived_funcB_this(char *this_ptr)
{
 return 0x28;
}

// Function: MiddleA::func @ 0x11b90
int MiddleA_func(MiddleA *this_ptr)
{
 return *(int *)(this_ptr + *(int *)(*(int *)this_ptr + -0xc) + 4) + 0x96;
}

// Function: MiddleA::func @ 0x11bb0
int MiddleA_func2(MiddleA *this_ptr)
{
 return *(int *)((int)(this_ptr + *(int *)(*(int *)this_ptr + -0xc)) +
 *(int *)(*(int *)(this_ptr + *(int *)(*(int *)this_ptr + -0xc)) + -0xc) + 4) + 0x96;
}

// Function: MiddleB::func @ 0x11bd0
int MiddleB_func(MiddleB *this_ptr)
{
 return *(int *)(this_ptr + *(int *)(*(int *)this_ptr + -0xc) + 4) + 200;
}

// Function: MiddleB::func @ 0x11bf0
int MiddleB_func2(MiddleB *this_ptr)
{
 return *(int *)((int)(this_ptr + *(int *)(*(int *)this_ptr + -0xc)) +
 *(int *)(*(int *)(this_ptr + *(int *)(*(int *)this_ptr + -0xc)) + -0xc) + 4) + 200;
}

// Function: DiamondDerived_func @ 0x11c10
int DiamondDerived_func(int *this_ptr)
{
 return *(int *)((char *)this_ptr + *(int *)(*(int *)this_ptr + -0xc) + 4) + 0xfa;
}

// Function: DiamondDerived_func2 @ 0x11c30
int DiamondDerived_func2(int *this_ptr)
{
 return *(int *)((int)((char *)this_ptr + *(int *)(*(int *)this_ptr + -0xc)) +
 *(int *)(*(int *)((char *)this_ptr + *(int *)(*(int *)this_ptr + -0xc)) + -0xc) + 4) + 0xfa;
}

// Function: DiamondDerived_func3 @ 0x11c50
int DiamondDerived_func3(int *this_ptr)
{
 return *(int *)((char *)this_ptr + *(int *)(*(int *)((char *)this_ptr + -8) + -0xc) + -4) + 0xfa;
}

// Function: RTTIDerivedA::getType @ 0x11c70
unsigned int RTTIDerivedA_getType(void)
{
 return 1;
}

// Function: RTTIDerivedB::getType @ 0x11c80
unsigned int RTTIDerivedB_getType(void)
{
 return 2;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x11c90
void RTTIDerivedB__RTTIDerivedB(RTTIDerivedB *this_ptr)
{
 return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x11ca0
void RTTIDerivedA__RTTIDerivedA(RTTIDerivedA *this_ptr)
{
 return;
}

// Function: DiamondDerived_destructor @ 0x11cb0
void DiamondDerived_destructor(char *this_ptr)
{
 return;
}

// Function: DiamondDerived_destructor2 @ 0x11cc0
void DiamondDerived_destructor2(char *this_ptr)
{
 return;
}

// Function: DiamondDerived_destructor3 @ 0x11cd0
void DiamondDerived_destructor3(char *this_ptr)
{
 return;
}

// Function: MultiDerived_destructor @ 0x11ce0
void MultiDerived_destructor(char *this_ptr)
{
 return;
}

// Function: MultiDerived_destructor2 @ 0x11cf0
void MultiDerived_destructor2(char *this_ptr)
{
 return;
}

// Function: Derived::~Derived @ 0x11d00
void Derived__Derived(Derived *this_ptr)
{
 return;
}

// Function: Base::~Base @ 0x11d10
void Base__Base2(Base *this_ptr)
{
 FUN_000111c0((char*)this_ptr,4);
 return;
}

// Function: Derived::~Derived @ 0x11d40
void Derived__Derived2(Derived *this_ptr)
{
 FUN_000111c0((char*)this_ptr,8);
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x11d70
void MultiDerived__MultiDerived(MultiDerived *this_ptr)
{
 FUN_000111c0((char*)this_ptr,0x10);
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x11da0
void MultiDerived__MultiDerived2(MultiDerived *this_ptr)
{
 FUN_000111c0((char*)this_ptr + -8,0x10);
 return;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x11dd0
void RTTIDerivedB__RTTIDerivedB2(RTTIDerivedB *this_ptr)
{
 FUN_000111c0((char*)this_ptr,4);
 return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x11e00
void RTTIDerivedA__RTTIDerivedA2(RTTIDerivedA *this_ptr)
{
 FUN_000111c0((char*)this_ptr,4);
 return;
}

// Function: DiamondDerived_destructor4 @ 0x11e30
void DiamondDerived_destructor4(char *this_ptr)
{
 FUN_000111c0(this_ptr,0x18);
 return;
}

// Function: DiamondDerived_destructor5 @ 0x11e60
void DiamondDerived_destructor5(char *this_ptr)
{
 int offset = *(int *)(*(int *)this_ptr + -0x10);
 FUN_000111c0((char *)this_ptr + offset,0x18);
 return;
}

// Function: DiamondDerived_destructor6 @ 0x11e90
void DiamondDerived_destructor6(char *this_ptr)
{
 FUN_000111c0((char *)this_ptr + -8,0x18);
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

// Function: Container_int_Constructor @ 0x11f20
void Container_int_Constructor(Container_int_ *this_ptr)
{
 *(unsigned int *)(this_ptr + 0x28) = 0;
 return;
}

// Function: Container_int_push @ 0x11f30
void Container_int_push(Container_int_ *this_ptr,int param_1)
{
 int iVar1;
 iVar1 = *(int *)(this_ptr + 0x28);
 if (iVar1 < 10) {
 *(int *)(this_ptr + 0x28) = iVar1 + 1;
 *(int *)(this_ptr + iVar1 * 4) = param_1;
 }
 return;
}

// Function: Container_int_get @ 0x11f50
unsigned int Container_int_get(Container_int_ *this_ptr,int param_1)
{
 if ((-1 < param_1) && (*(int *)(this_ptr + 0x28) != param_1 && param_1 <= *(int *)(this_ptr + 0x28))) {
 return *(unsigned int *)(this_ptr + param_1 * 4);
 }
 return 0;
}

// Function: Container_int_getSize @ 0x11f80
unsigned int Container_int_getSize(Container_int_ *this_ptr)
{
 return *(unsigned int *)(this_ptr + 0x28);
}

// Function: Container_double_Constructor @ 0x11f90
void Container_double_Constructor(Container_double_ *this_ptr)
{
 *(unsigned int *)(this_ptr + 0x50) = 0;
 return;
}

// Function: Container_double_push @ 0x11fa0
void Container_double_push(Container_double_ *this_ptr,double param_1)
{
 int iVar1;
 iVar1 = *(int *)(this_ptr + 0x50);
 if (iVar1 < 10) {
 *(int *)(this_ptr + 0x50) = iVar1 + 1;
 *(double *)(this_ptr + iVar1 * 8) = param_1;
 }
 return;
}

// Function: Container_double_get @ 0x11fd0
double Container_double_get(Container_double_ *this_ptr,int param_1)
{
 if ((-1 < param_1) && (*(int *)(this_ptr + 0x50) != param_1 && param_1 <= *(int *)(this_ptr + 0x50))) {
 return *(double *)(this_ptr + param_1 * 8);
 }
 return 0;
}

// Function: Container_double_getSize @ 0x12000
unsigned int Container_double_getSize(Container_double_ *this_ptr)
{
 return *(unsigned int *)(this_ptr + 0x50);
}

// Function: __x86.get_pc_thunk.ax @ 0x1200c
unsigned int __x86_get_pc_thunk_ax(void)
{
 unsigned int unaff_retaddr;
 return unaff_retaddr;
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
void __do_global_ctors_aux(void)
{
 return;
}

// Function: _fini @ 0x1208c
void _fini(void)
{
 __do_global_dtors_aux();
 return;
}

