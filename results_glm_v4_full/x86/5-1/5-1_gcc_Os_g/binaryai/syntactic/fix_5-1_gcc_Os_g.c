// Decompiled by BinaryAI
// SHA256: 462c52223355b8655fa69c7ca08e258b68986be89a14a9fb5c68f311ae7d7096

#include <stdlib.h>
#include <string.h>
#include <stdint.h>

// Global virtual function pointers
static int (*PTR_virtual_func_00015c58)(void *, int);
static int (*PTR_virtual_func_00015c70)(void *, int);
static int LifecycleClass_instance_count;
extern void *PTR__RTTIDerivedA_00015dd0;
extern void *PTR__RTTIDerivedB_00015de4;

// Forward declarations and stubs
void __stack_chk_fail_local(void);
void __gmon_start__(void);
void frame_dummy(void);
void FUN_000111d0(void);
void FUN_000112c0(void);
int __do_global_ctors_aux(void);
void *FUN_000111c0(void);
void *FUN_000112b0(void);
int *FUN_000111b0(void);
void FUN_000111f0(void *ptr, unsigned int size);
void std_unique_ptr_int_constructor(int *ptr);
void std_unique_ptr_int_array_constructor(int *ptr);
void *FUN_000111a0(unsigned int size);
void *FUN_00011220(unsigned int size);
void FUN_00011210(void *main_func, unsigned int param2, void *stack_ptr, int a, int b, unsigned int param1, void *auStack);
void __x86_get_pc_thunk_di(void);
unsigned long long FUN_00011270(void);
int FUN_00011200(char *s1, char *s2, int param3, int param4);
#define CONCAT44(hi,lo) (((unsigned long long)(hi) << 32) | (unsigned int)(lo))
typedef void *pointer_____offset_0x8___;

// Class declarations
typedef struct Base Base;
typedef struct Derived Derived;
typedef struct MultiDerived MultiDerived;
typedef struct VirtualBase VirtualBase;
typedef struct MiddleA MiddleA;
typedef struct MiddleB MiddleB;
typedef struct DiamondDerived DiamondDerived;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;
typedef struct RTTIBase RTTIBase;

struct Base { int dummy; };
struct Derived { Base base; int value; };
struct MultiDerived { Base base1; int value1; Base base2; int value2; };
struct VirtualBase { int dummy; };
struct MiddleA { int dummy; };
struct MiddleB { int dummy; };
struct DiamondDerived { int dummy[6]; };
struct RTTIDerivedA { int dummy; };
struct RTTIDerivedB { int dummy; };
struct RTTIBase { int dummy; void *typeinfo; };

typedef struct Container_int_ { int data[10]; int count; } Container_int_;
typedef struct Container_double_ { double data[10]; int count; } Container_double_;
typedef struct unique_ptr_int_std__default_delete_int__ { int *ptr; } unique_ptr_int_std__default_delete_int__;
typedef struct unique_ptr_int___std__default_delete_int____ { int *ptr; } unique_ptr_int___std__default_delete_int____;

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
 return;
}

// Function: FUN_00011180 @ 0x11180
void FUN_00011180(unsigned int p1)
{
 (void)p1;
 void *unaff_EBX = NULL;
 void (*func_ptr)(void) = (void (*)(void))(*(char **)((char *)unaff_EBX + 0x60));
 if (func_ptr) func_ptr();
 return;
}

// Function: FUN_00011190 @ 0x11190
void FUN_00011190(...)
{
 void *unaff_EBX;
 void (*func_ptr)(void) = (void (*)(void))(*(char **)((char *)unaff_EBX + 0xc));
 if (func_ptr) func_ptr();
 return;
}

// Function: FUN_000111a0 (replaced) @ 0x111a0
// Already defined above as malloc wrapper

// Function: FUN_000111b0 (replaced) @ 0x111b0
// Already defined above as malloc wrapper

// Function: FUN_000111c0 @ 0x111c0
void *FUN_000111c0(void)
{
 return malloc(4);
}

// Function: FUN_000111b0 @ 0x111b0
int *FUN_000111b0(void)
{
 return (int *)malloc(4);
}

// Function: FUN_000111a0 @ 0x111a0
void *FUN_000111a0(unsigned int size)
{
 return malloc(size);
}

// Function: FUN_00011220 @ 0x11220
void *FUN_00011220(unsigned int size)
{
 return malloc(size);
}

// Function: FUN_000111d0 @ 0x111d0
void FUN_000111d0(void)
{
 return;
}

// Function: FUN_000111e0 @ 0x111e0
void FUN_000111e0(void)
{
 return;
}

// Function: FUN_000111f0 @ 0x111f0
void FUN_000111f0(void *ptr, unsigned int size)
{
 (void)ptr;
 (void)size;
 return;
}

// Function: FUN_00011200 @ 0x11200
int FUN_00011200(char *s1, char *s2, int param3, int param4)
{
 (void)s1;
 (void)s2;
 (void)param3;
 (void)param4;
 return 0;
}



// Function: FUN_00011220 (replaced) @ 0x11220
// Already defined above as malloc wrapper

// Function: FUN_00011230 @ 0x11230
void FUN_00011230(void)
{
 void *unaff_EBX = NULL;
 void (*func_ptr)(void) = (void (*)(void))(*(void **)((char *)unaff_EBX + 0x34));
 if (func_ptr) func_ptr();
 return;
}

// Function: FUN_00011240 @ 0x11240
void FUN_00011240(void)
{
 void *unaff_EBX;
 void (*func_ptr)(void) = (void (*)(void))(**(void **)((char *)unaff_EBX + 0x38));
 if (func_ptr) func_ptr();
 return;
}

// Function: FUN_00011250 @ 0x11250
void FUN_00011250(void *param1, void *param2, void *param3, void *param4, void *param5)
{
 (void)param1;
 (void)param2;
 (void)param3;
 (void)param4;
 (void)param5;
 return;
}

// Function: FUN_00011260 @ 0x11260
void FUN_00011260(void *ptr)
{
 (void)ptr;
 return;
}

// Function: FUN_00011270 @ 0x11270
unsigned long long FUN_00011270(void)
{
 return 0x100000001ULL;
}

// Function: FUN_00011280 @ 0x11280
void FUN_00011280(void)
{
 return;
}

// Function: FUN_00011290 @ 0x11290
void FUN_00011290(void)
{
 return;
}

// Function: FUN_000112a0 @ 0x112a0
void FUN_000112a0(void)
{
 return;
}

// Function: FUN_000112b0 @ 0x112b0
void *FUN_000112b0(void)
{
 return (void *)0x100000001ULL;
}

// Function: FUN_000112c0 @ 0x112c0
void FUN_000112c0(void)
{
 return;
}

// Forward declarations
void test_cpp_oo_features(void);

void FUN_00011290(void *ptr);
void FUN_000111e0(void *param1, void *param2, void *param3);
void FUN_00011190(...);
int template_max_int_(int param_1, int param_2);
double template_max_double_(double param_1, double param_2);
void template_swap_int_(int *param_1, int *param_2);
void Container_int__push(Container_int_ *ptr, int param_1);
void FUN_00011240(void);
unsigned int FUN_00011280(void *ptr);
int DiamondDerived__func(DiamondDerived *self);
void DiamondDerived_destructor(DiamondDerived *self);
extern int DAT_0001301a;
extern int DAT_0001303e;
extern int DAT_0001305c;
extern int DAT_00013078;
extern int DAT_00013094;
extern int DAT_000130b0;
extern int DAT_000130cd;
extern int DAT_000130e9;
extern int DAT_00013105;
extern int DAT_00013121;
extern int DAT_0001313d;
extern int DAT_0001315a;
extern int DAT_00013177;

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
 pointer_____offset_0x8___ *ppuStack_48;
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
 puStack_38 = (char *)0;
 ppuVar4 = &puStack_3c;
 uStack_40 = 0x11308;
 uVar8 = (unsigned long long)FUN_000112b0();
 iVar7 = 0;
 if ((int)((unsigned long long)uVar8 >> 0x20) == 1) {
 uStack_50 = 0x1131c;
 local_4c = (int)uVar8;
 piVar1 = (int *)FUN_000111b0();
 iVar7 = *piVar1;
 uStack_40 = 0x11328;
 uVar8 = (unsigned long long)FUN_00011270();
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
 local_4c = (unsigned int)FUN_000111c0();
 ppuStack_48 = 0;
 uStack_44 = 0;
 uStack_50 = 0x11376;
 uVar8 = (unsigned long long)FUN_000112b0();
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
 puVar5 = (unsigned int *)((char *)ppuVar4 - 0x10);
 *(unsigned int *)((char *)ppuVar4 - 0x10) = uVar2;
 *(unsigned int *)((char *)ppuVar4 - 0x14) = 0x1138f;
 FUN_000112c0();
 uVar2 = 0;
 }
 iVar7 = iVar7 + 100;
 puVar6 = (unsigned int *)((char *)puVar5 - 0x10);
 *(unsigned int *)((char *)puVar5 - 0x10) = uVar2;
 *(unsigned int *)((char *)puVar5 - 0x14) = 0x1139d;
 (void)FUN_000111b0();
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

// Function: _GLOBAL__sub_I_test_cpp_member_func @ 0x113d5
void _GLOBAL__sub_I_test_cpp_member_func(void)
{
 static int __ioinit;
 FUN_00011290(&__ioinit);
 FUN_000111e0(0,&__ioinit,0);
 return;
}

// Function: _start @ 0x11420
void _start(unsigned int param_1,unsigned int param_2)
{
 char auStack_4 [4];
 void *stack0x00000004 = 0;
 FUN_00011210((void*)main,param_2,&stack0x00000004,0,0,param_1,auStack_4);
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
 uint uVar1;
 int unaff_EDI;
 __x86_get_pc_thunk_di();
 if (*(char *)(unaff_EDI + 0x4b1b) == '\0') {
 if (*(int *)(unaff_EDI + 0x4aeb) != 0) {
 FUN_00011180(*(unsigned int *)(unaff_EDI + 0x4b07));
 }
 uVar1 = *(uint *)(unaff_EDI + 0x4b1f);
 while (uVar1 < ((unaff_EDI + 0x474f) - (unaff_EDI + 0x474b) >> 2) - 1U) {
 *(uint *)(unaff_EDI + 0x4b1f) = uVar1 + 1;
 (**(void **)(unaff_EDI + 0x474b + (uVar1 + 1) * 4))();
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
 unsigned int in_GS_OFFSET;
 char local_30 [31];
 char local_11;
 int local_10;
 __asm__ ("movl %%gs:0, %0" : "=r" (in_GS_OFFSET));
 local_10 = *(int *)((char*)in_GS_OFFSET + 0x14);
  memset(local_30, 0, 0x1f);
  local_11 = 0;
  /* FUN_000111d0 called */
  FUN_000111d0();
  iVar1 = 0x125c;
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
    __stack_chk_fail_local();
    iVar1 = 0;
  }
 return iVar1;
}

// Function: test_cpp_constructor @ 0x115f1
int test_cpp_constructor(void)
{
 return LifecycleClass_instance_count * 0x3e9 + 0x15;
}

// Function: call_virtual_func @ 0x1160d
void call_virtual_func(Base *param_1,int param_2)
{
 void (**vtable)(void);
 vtable = (void (**)(void))param_1;
 (*vtable)();
 return;
}

// Function: test_cpp_virtual_func @ 0x11621
int test_cpp_virtual_func(void)
{
 int iVar2;
 unsigned int in_GS_OFFSET;
 Base local_1c;
 Base local_18;
 unsigned int local_14;
 int local_10;
 __asm__ ("movl %%gs:0, %0" : "=r" (in_GS_OFFSET));
 local_10 = *(int *)((char*)in_GS_OFFSET + 0x14);
 local_14 = 3;
  call_virtual_func(&local_1c,5);
 call_virtual_func(&local_18,5);
 iVar2 = 42;
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
 unsigned int in_GS_OFFSET;
 double dVar2;
 int local_18;
 int local_14;
 int local_10;
 __asm__ ("movl %%gs:0, %0" : "=r" (in_GS_OFFSET));
 local_10 = *(int *)((char*)in_GS_OFFSET + 0x14);
 iVar1 = template_max_int_(3,7);
 dVar2 = template_max_double_(2.5,1.5);
 local_18 = 10;
 local_14 = 0x14;
  template_swap_int_(&local_18,&local_14);
  iVar1 = (int)(dVar2) + iVar1 + local_18 + local_14;
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
    __stack_chk_fail_local();
    iVar1 = 0;
  }
 return iVar1;
}

// Function: test_cpp_template_class @ 0x11735
int test_cpp_template_class(void)
{
 int iVar1;
 unsigned int in_GS_OFFSET;
 int local_3c [10];
 int local_14;
 int local_10;
 __asm__ ("movl %%gs:0, %0" : "=r" (in_GS_OFFSET));
 local_10 = *(int *)((char*)in_GS_OFFSET + 0x14);
 local_14 = 1;
 local_3c[0] = 10;
  Container_int__push((Container_int_ *)local_3c,0x14);
  Container_int__push((Container_int_ *)local_3c,0x1e);
 iVar1 = 0;
  if (0 < local_14) {
    iVar1 = local_3c[0];
  }
  iVar1 = local_14 + 3 + iVar1;
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
    __stack_chk_fail_local();
    iVar1 = 0;
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
 int iVar1;
 int *piVar2;
 int *piVar3;
 int iVar4;
 uint uVar5;
 int iVar6;
 char *pcVar7;
 pointer_____offset_0x8___ *ppuVar8;
 uVar5 = 10;
 piVar2 = (int *)malloc(4);
 *piVar2 = (int)&PTR__RTTIDerivedA_00015dd0;
 piVar3 = (int *)malloc(4);
 *piVar3 = (int)&PTR__RTTIDerivedB_00015de4;
  iVar1 = *piVar2;
  pcVar7 = (char*)*(int *)(iVar1 + -4);
  if ((pcVar7 != "12RTTIDerivedA") && (uVar5 = 0, *pcVar7 != '*')) {
 iVar4 = FUN_00011200(pcVar7,"12RTTIDerivedA",0,0);
 uVar5 = -(uint)(iVar4 == 0) & 10;
 }
 iVar6 = uVar5 + 0x14;
 ppuVar8 = 0;
 FUN_00011250(piVar2,0,0,0,0);
 if (uVar5 != 0) {
 iVar6 = uVar5 + 0x78;
 }
 FUN_00011250(piVar3,ppuVar8,0,0,0);
 if (iVar6 != 0) {
 iVar6 = iVar6 + 200;
 }
 if (*pcVar7 == '*') {
 pcVar7 = pcVar7 + 1;
 }
 FUN_000111d0();
 iVar4 = iVar6;
 return iVar4;
}

// Function: test_cpp_smart_ptr @ 0x118c9
unsigned int test_cpp_smart_ptr(void)
{
 unsigned int uVar1;
 unsigned int in_GS_OFFSET;
 unsigned int local_2c;
 unsigned int *local_28;
 unsigned int *local_24;
 int local_20;
 __asm__ ("movl %%gs:0, %0" : "=r" (in_GS_OFFSET));
 local_20 = *(int *)((char*)in_GS_OFFSET + 0x14);
 local_28 = (unsigned int *)malloc(4);
 local_2c = 0;
 *local_28 = 200;
 local_24 = (unsigned int *)FUN_00011220(0x14);
 *local_24 = 1;
 local_24[1] = 2;
 local_24[2] = 3;
 local_24[3] = 4;
 local_24[4] = 5;
 std_unique_ptr_int_array_constructor((int *)local_24);
 std_unique_ptr_int_constructor((int *)local_28);
  std_unique_ptr_int_constructor((int *)&local_2c);
  if (local_20 != *(int *)(in_GS_OFFSET + 0x14)) {
    __stack_chk_fail_local();
    std_unique_ptr_int_constructor((int *)local_28);
    std_unique_ptr_int_constructor((int *)&local_2c);
    uVar1 = 0;
  } else {
    uVar1 = 0;
  }
 return 0x2bf;
}

// Function: test_cpp_diamond_inheritance @ 0x1199d
int test_cpp_diamond_inheritance(void)
{
 int iVar1;
 int iVar2;
 unsigned int in_GS_OFFSET;
 unsigned int local_38 [2];
 unsigned int local_30;
 unsigned int local_28;
 unsigned int local_24;
 int local_20;
  local_38[0] = 0x15d88;
 __asm__ ("movl %%gs:0, %0" : "=r" (in_GS_OFFSET));
 local_20 = *(int *)((char*)in_GS_OFFSET + 0x14);
 local_28 = 0x15dbc;
 local_30 = 0x15da0;
 local_24 = 0x32;
 iVar1 = DiamondDerived__func((DiamondDerived *)&local_28);
 local_24 = 100;
 iVar2 = DiamondDerived__func((DiamondDerived *)&local_28);
  iVar2 = iVar2 + iVar1;
  DiamondDerived_destructor((DiamondDerived *)local_38);
  if (local_20 != *(int *)(in_GS_OFFSET + 0x14)) {
    __stack_chk_fail_local();
    iVar2 = 0;
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
 unsigned int extraout_dummy;
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
 FUN_00011190(1,&DAT_000130e9,uVar1,extraout_ECX);
 uVar1 = test_cpp_template_class();
 FUN_00011190(1,&DAT_00013105,uVar1);
 uVar1 = test_cpp_lambda();
 FUN_00011190(1,&DAT_00013121,uVar1);
 uVar2 = test_cpp_exception();
 FUN_00011190(1,&DAT_0001313d,uVar2);
 uVar1 = test_cpp_smart_ptr();
 FUN_00011190(1,&DAT_0001315a,uVar1,extraout_ECX_00);
 uVar2 = test_cpp_rtti();
 FUN_00011190(1,&DAT_00013177,uVar2);
 return;
}

// Function: Base::virtual_func @ 0x11b66
int Base__virtual_func(Base *self,int param_1)
{
 return param_1 + 1;
}

// Function: Base::getName @ 0x11b74
char * Base__getName(void)
{
 return "Base";
}

// Function: Base::~Base @ 0x11b8a
void Base__Base(Base *self)
{
 return;
}

// Function: Derived::virtual_func @ 0x11b90
int Derived__virtual_func(Derived *self,int param_1)
{
 return param_1 * self->value;
}

// Function: Derived::getName @ 0x11ba4
char * Derived__getName(void)
{
 return "Derived";
}

// Function: MultiDerived::funcA @ 0x11bba
unsigned int MultiDerived__funcA(MultiDerived *self)
{
 return 0x1e;
}

// Function: MultiDerived::funcB @ 0x11bc4
unsigned int MultiDerived__funcB(MultiDerived *self)
{
 return 0x28;
}

// Function: MultiDerived::funcB @ 0x11bce
unsigned int MultiDerived__funcB_2(MultiDerived *self)
{
 return 0x28;
}

// Function: VirtualBase::func @ 0x11bd8
unsigned int VirtualBase__func(VirtualBase *self)
{
 return 100;
}

// Function: VirtualBase::~VirtualBase @ 0x11be2
void VirtualBase__VirtualBase(VirtualBase *self)
{
 return;
}

// Function: MiddleA::func @ 0x11be8
int MiddleA__func(MiddleA *self)
{
 (void)self;
 return 150;
}

// Function: MiddleA::func @ 0x11c02
void MiddleA__func_2(MiddleA *self)
{
 (void)self;
 return;
}

// Function: MiddleB::func @ 0x11c16
int MiddleB__func(MiddleB *self)
{
 (void)self;
 return 250;
}

// Function: MiddleB::func @ 0x11c30
void MiddleB__func_2(MiddleB *self)
{
 (void)self;
 return;
}

// Function: DiamondDerived::func @ 0x11c44
int DiamondDerived__func(DiamondDerived *self)
{
 (void)self;
 return 250;
}

// Function: DiamondDerived::func @ 0x11c5e
void DiamondDerived__func_2(DiamondDerived *self)
{
 (void)self;
 return;
}

// Function: DiamondDerived::func @ 0x11c71
void DiamondDerived__func_3(DiamondDerived *self)
{
 (void)self;
 return;
}

// Function: MiddleA::~MiddleA @ 0x11c7c
void MiddleA__destructor(MiddleA *self)
{
 return;
}

// Function: MiddleA::~MiddleA @ 0x11ca1
void MiddleA__destructor_2(MiddleA *self)
{
 return;
}

// Function: MiddleB::~MiddleB @ 0x11ccc
void MiddleB__destructor(MiddleB *self)
{
 return;
}

// Function: MiddleB::~MiddleB @ 0x11cf1
void MiddleB__destructor_2(MiddleB *self)
{
 return;
}

// Function: RTTIDerivedA::getType @ 0x11d1c
unsigned int RTTIDerivedA_getType(void)
{
 return 1;
}

// Function: RTTIDerivedB::getType @ 0x11d26
unsigned int RTTIDerivedB_getType(void)
{
 return 2;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x11d30
void RTTIDerivedB_destructor_stub(RTTIDerivedB *self)
{
  (void)self;
  return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x11d36
void RTTIDerivedA_destructor_stub(RTTIDerivedA *this_)
{
  (void)this_;
  return;
}

 // Function: MultiDerived::~MultiDerived @ 0x11d3c
void MultiDerived_destructor(MultiDerived *this_)
{
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x11d41
void MultiDerived_destructor_2(MultiDerived *this_)
{
 return;
}

// Function: Derived::~Derived @ 0x11d46
void Derived_destructor(Derived *this_)
{
 (void)this_;
 return;
}

// Function: Base::~Base @ 0x11d4c
void Base_destructor(Base *this_)
{
 FUN_000111f0(this_,4);
 return;
}

// Function: Derived::~Derived @ 0x11d74
void Derived_destructor_2(Derived *this_)
{
 FUN_000111f0(this_,8);
}

// Function: MultiDerived::~MultiDerived @ 0x11d9c
void MultiDerived_destructor_3(MultiDerived *this_)
{
 FUN_000111f0(this_,0x10);
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x11dc4
void MultiDerived_destructor_4(MultiDerived *this_)
{
 MultiDerived_destructor_3((MultiDerived*)((char*)this_ - 8));
 return;
}

// Function: VirtualBase::~VirtualBase @ 0x11dd0
void VirtualBase_destructor(VirtualBase *this_)
{
 FUN_000111f0(this_,8);
 return;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x11df8
void RTTIDerivedB_destructor_2(RTTIDerivedB *self)
{
 FUN_000111f0(self,4);
 return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x11e20
void RTTIDerivedA_destructor_2(RTTIDerivedA *self)
{
 FUN_000111f0(self,4);
 return;
}

// Function: MiddleA::MiddleA @ 0x11e48
void MiddleA__constructor(MiddleA *self)
{
 *(unsigned int *)self = 0x15c94;
 *(unsigned int *)(self + 8) = 0x15cb0;
 FUN_000111f0(self,0x10);
 return;
}

// Function: MiddleA::MiddleA @ 0x11e7f
void MiddleA__constructor_2(MiddleA *self)
{
 MiddleA__constructor(self + *(int *)(*(int *)self + -0x10));
 return;
}

// Function: MiddleB::MiddleB @ 0x11e92
void MiddleB__constructor(MiddleB *self)
{
 *(unsigned int *)self = 0x15cd0;
 *(unsigned int *)(self + 8) = 0x15cec;
 FUN_000111f0(self,0x10);
 return;
}

// Function: MiddleB::MiddleB @ 0x11ec9
void MiddleB__constructor_2(MiddleB *self)
{
 MiddleB__constructor(self + *(int *)(*(int *)self + -0x10));
 return;
}

// Function: MiddleA::MiddleA @ 0x11edc
void MiddleA__constructor_3(MiddleA *self, int in_stack_00000008, int *in_stack_0000000c)
{
 int iVar1;
 int iVar2;
 iVar1 = 0x15c94;
 if (in_stack_00000008 == 0) {
 iVar1 = *in_stack_0000000c;
 }
 *(int *)self = iVar1;
 if (in_stack_00000008 == 0) {
 iVar2 = in_stack_0000000c[1];
 iVar1 = *(int *)(iVar1 + -0xc);
 }
 else {
 iVar2 = 0x15cb0;
 iVar1 = 8;
 }
 *(int *)((char*)self + iVar1) = iVar2;
 return;
}

// Function: MiddleA::MiddleA @ 0x11f26
void MiddleA__constructor_4(MiddleA *self)
{
 MiddleA__constructor_3(self, 1, NULL);
 return;
}

// Function: MiddleB::MiddleB @ 0x11f42
void MiddleB__constructor_3(MiddleB *self, int in_stack_00000008, int *in_stack_0000000c)
{
 int iVar1;
 int iVar2;
 iVar1 = 0x15cd0;
 if (in_stack_00000008 == 0) {
 iVar1 = *in_stack_0000000c;
 }
 *(int *)self = iVar1;
 if (in_stack_00000008 == 0) {
 iVar2 = in_stack_0000000c[1];
 iVar1 = *(int *)(iVar1 + -0xc);
 }
 else {
 iVar2 = 0x15cec;
 iVar1 = 8;
 }
 *(int *)((char*)self + iVar1) = iVar2;
 return;
}

// Function: MiddleB::MiddleB @ 0x11f8c
void MiddleB__constructor_4(MiddleB *this)
{
 MiddleB__constructor_3(this, 1, NULL);
 return;
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

// Function: Container<int>::Container @ 0x11fee
void Container_int__Container(Container_int_ *self)
{
 *(unsigned int *)((char *)self + 0x28) = 0;
 return;
}

// Function: Container<int>::push @ 0x12002
void Container_int__push(Container_int_ *self,int param_1)
{
 int iVar1;
 iVar1 = *(int *)((char *)self + 0x28);
 if (iVar1 < 10) {
 *(int *)((char *)self + 0x28) = iVar1 + 1;
 *(int *)((char *)self + iVar1 * 4) = param_1;
 }
 return;
}

// Function: Container<int>::get @ 0x12022
unsigned int Container_int__get(Container_int_ *self,int param_1)
{
 unsigned int uVar1;
 uVar1 = 0;
 if ((-1 < param_1) && (*(int *)((char *)self + 0x28) != param_1 && param_1 <= *(int *)((char *)self + 0x28))) {
 uVar1 = *(unsigned int *)((char *)self + param_1 * 4);
 }
 return uVar1;
}

// Function: Container<int>::getSize @ 0x12040
unsigned int Container_int__getSize(Container_int_ *self)
{
 return *(unsigned int *)((char *)self + 0x28);
}

// Function: Container<double>::Container @ 0x12050
void Container_double__Container(Container_double_ *self)
{
 *(unsigned int *)((char *)self + 0x50) = 0;
 return;
}

// Function: Container<double>::push @ 0x12064
void Container_double__push(Container_double_ *this,double param_1)
{
 int iVar1;
 iVar1 = *(int *)((char *)this + 0x50);
 if (iVar1 < 10) {
 *(int *)((char *)this + 0x50) = iVar1 + 1;
 *(double *)((char *)this + iVar1 * 8) = param_1;
 }
 return;
}

// Function: Container<double>::get @ 0x12088
long double Container_double__get(Container_double_ *self,int param_1)
{
 long double lVar1;
 lVar1 = (long double)0;
 if ((-1 < param_1) && (param_1 < *(int *)((char *)self + 0x50))) {
 lVar1 = (long double)*(double *)((char *)self + param_1 * 8);
 }
 return lVar1;
}

// Function: Container<double>::getSize @ 0x120a8
unsigned int Container_double__getSize(Container_double_ *self)
{
 return *(unsigned int *)((char *)self + 0x50);
}

// Function: std::unique_ptr<int,std::default_delete<int>>::~unique_ptr @ 0x120b8
void std_unique_ptr_int_destructor(unique_ptr_int_std__default_delete_int__ *this)
{
 if (*(int *)this != 0) {
 FUN_000111f0(*(int *)this,4);
 }
 return;
}

// Function: std::unique_ptr<int[],std::default_delete<int[]>>::~unique_ptr @ 0x120e8
void
std_unique_ptr_int_array_destructor(unique_ptr_int___std__default_delete_int____ *self)
{
 if (*(int *)self != 0) {
 FUN_00011260(*(int *)self);
 }
 return;
}

// Function: DiamondDerived::DiamondDerived @ 0x12116
void DiamondDerived__constructor(DiamondDerived *self)
{
 int iVar1;
 int iVar2;
 int in_stack_00000008;
 int *in_stack_0000000c;
 iVar2 = 0x15d88;
 if (in_stack_00000008 == 0) {
 iVar2 = *in_stack_0000000c;
 }
 *(int *)self = iVar2;
 if (in_stack_00000008 == 0) {
 iVar1 = in_stack_0000000c[5];
 iVar2 = *(int *)(iVar2 + -0xc);
 }
 else {
 iVar1 = 0x15dbc;
 iVar2 = 0x10;
 }
 *(int *)((char *)self + iVar2) = iVar1;
 iVar2 = 0x15da0;
 if (in_stack_00000008 == 0) {
 iVar2 = in_stack_0000000c[6];
 }
 *(int *)((char *)self + 8) = iVar2;
 MiddleB__constructor((MiddleB *)((char *)self + 8));
 MiddleA__constructor((MiddleA *)self);
 return;
}

// Function: DiamondDerived::DiamondDerived @ 0x121b0
void DiamondDerived__constructor_2(DiamondDerived *self)
{
 DiamondDerived__constructor(self);
 return;
}

// Function: DiamondDerived::DiamondDerived @ 0x121cb
void DiamondDerived__constructor_3(DiamondDerived *self)
{
 DiamondDerived__constructor(self - 8);
 return;
}

// Function: DiamondDerived::DiamondDerived @ 0x121d6
void DiamondDerived__constructor_4(DiamondDerived *self)
{
 DiamondDerived__constructor(self + *(int *)(*(int *)self + -0x10));
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x121ea
void DiamondDerived_destructor(DiamondDerived *self)
{
 (void)self;
 FUN_000111f0(self,0x18);
}

// Function: DiamondDerived::~DiamondDerived @ 0x1221e
void DiamondDerived_destructor_2(DiamondDerived *self)
{
 (void)self;
}

// Function: DiamondDerived::~DiamondDerived @ 0x12229
void DiamondDerived_destructor_3(DiamondDerived *self)
{
 (void)self;
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x1223c
void DiamondDerived__destructor_4(DiamondDerived *self)
{
 (void)self;
 return;
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

// Function: __stack_chk_fail_local @ 0x12270
int __stack_chk_fail_local(void)
{
 FUN_00011240();
 return 0;
}

// Stub function definitions
void FUN_000111d0_stub(void *param) { (void)param; }
void FUN_000112c0_stub(int param) { (void)param; }

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

