// Decompiled by BinaryAI
// SHA256: 420c91e8a777e080ffdce20ed4104ad00abed32d704c89fa61bfe68bb8084377

#include <stdint.h>
#include <math.h>

// Custom ROUND macro for floating-point rounding
#define ROUND(x) (int)((x) + 0.5)

// Forward declarations for classes used in this file
struct Base {
 void **vtable;
};

struct Derived {
 void **vtable;
 int value;
};

struct MultiDerived {
 void **vtable;
};

struct MiddleA {
 void **vtable;
};

struct MiddleB {
 void **vtable;
};

struct DiamondDerived {
 void **vtable;
};

struct RTTIDerivedA {
 void **vtable;
};

struct RTTIDerivedB {
 void **vtable;
};
struct LifecycleClass {
 static int instance_count;
};
typedef struct Container_int_ Container_int_;
typedef struct Container_double_ Container_double_;
template<typename T> struct Container;

struct Container_int_ {
 int data[10];
 int size;
};

struct Container_double_ {
 double data[10];
 int size;
};

// Function declarations
void __stack_chk_fail_local(void);
void __gmon_start__(void);
void __do_global_ctors_aux(void);
void test_cpp_oo_features(void);
void __x86_get_pc_thunk_di(void);
int template_max_int_(int param_1, int param_2);
double template_max_double_(double param_1, double param_2);
void template_swap_int_(int *param_1, int *param_2);
void FUN_000111d0(void *, const char *);
#define CONCAT44(high, low) (((unsigned long long)(high) << 32) | ((unsigned long long)(low) & 0xFFFFFFFFULL))

// RTTI type descriptor declarations
extern void *PTR__RTTIDerivedA_00013e48;
extern void *PTR__RTTIDerivedB_00013e5c;

// Data declarations
extern char DAT_00012008;
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

// Function: _init @ 0x11000
int _init(void *ctx)
{
 __gmon_start__();
 __do_global_ctors_aux();
 return 0;
}

// Function: FUN_00011030 @ 0x11030
void FUN_00011030(void)
{
 return;
}

// Function: FUN_00011150 @ 0x11150
void FUN_00011150(unsigned int param_1)
{
 int unaff_EBX;
 typedef void (*func_ptr_t)(void);
 unaff_EBX = (int)param_1;
 (*(func_ptr_t)(*(int **)(unaff_EBX + 0x54)))();
 return;
}

// Function: FUN_00011160 @ 0x11160
void FUN_00011160(int param_1, void *param_2, int param_3)
{
 int unaff_EBX;
 typedef void (*func_ptr_t)(void);
 (*(func_ptr_t)(*(void **)(unaff_EBX + 0xc)))();
 return;
}

// Function: FUN_00011170 @ 0x11170
void FUN_00011170(void)
{
 return;
}

// Function: FUN_00011180 @ 0x11180
int *FUN_00011180(void)
{
 return (int *)0x4;
}

// Function: FUN_00011190 @ 0x11190
unsigned int FUN_00011190(void)
{
 return 0x2a;
}

// Function: FUN_000111a0 @ 0x111a0
void FUN_000111a0(void *param_1)
{
 int unaff_EBX;
 typedef void (*func_ptr_t)(void);
 (*(func_ptr_t)(*(void **)(unaff_EBX + 0x1c)))();
 return;
}

// Function: FUN_000111b0 @ 0x111b0
void FUN_000111b0(void *param_1, void *param_2, void *param_3)
{
 int unaff_EBX;
 typedef void (*func_ptr_t)(void);
 (*(func_ptr_t)(*(void **)(unaff_EBX + 0x20)))();
 return;
}

// Function: FUN_000111c0 @ 0x111c0
void FUN_000111c0(void *param_1, int param_2)
{
 int unaff_EBX;
 typedef void (*func_ptr_t)(void);
 (*(func_ptr_t)(*(void **)(unaff_EBX + 0x24)))();
 return;
}

// Function: FUN_000111d0 @ 0x111d0
void FUN_000111d0(void *param_1, const char *param_2)
{
 int unaff_EBX;
 typedef void (*func_ptr_t)(void);
 (*(func_ptr_t)(*(void **)(unaff_EBX + 0x28)))();
 return;
}

// Function: FUN_000111e0 @ 0x111e0
void FUN_000111e0(int (*main_func)(void), unsigned int param_2, void *param_3, int param_4, int param_5, unsigned int param_6, char *param_7)
{
 int unaff_EBX;
 typedef void (*func_ptr_t)(void);
 (*(func_ptr_t)(*(void **)(unaff_EBX + 0x2c)))();
 return;
}

// Function: FUN_000111f0 @ 0x111f0
void FUN_000111f0(void)
{
 int unaff_EBX;
 typedef void (*func_ptr_t)(void);
 (*(func_ptr_t)(*(void **)(unaff_EBX + 0x30)))();
 return;
}

// Function: FUN_00011200 @ 0x11200
int FUN_00011200(void *param_1, int param_2, int param_3, int param_4)
{
 int unaff_EBX;
 typedef int (*func_ptr_t)(void *, int, int, int);
 unaff_EBX = (int)param_1;
 void *vfunc = *(void **)(unaff_EBX + 0x34);
 return ((func_ptr_t)vfunc)(param_1, param_2, param_3, param_4);
}

// Function: FUN_00011210 @ 0x11210
unsigned int FUN_00011210(void)
{
 int unaff_EBX;
 typedef void (*func_ptr_t)(void);
 (*(func_ptr_t)(*(void **)(unaff_EBX + 0x38)))();
 return *(unsigned int *)&unaff_EBX;
}

// Function: FUN_00011220 @ 0x11220
void FUN_00011220(void *param_1)
{
 int unaff_EBX;
 typedef void (*func_ptr_t)(void);
 (*(func_ptr_t)(*(void **)(unaff_EBX + 0x3c)))();
 return;
}

// Function: FUN_00011230 @ 0x11230
void FUN_00011230(void)
{
 int unaff_EBX;
 typedef void (*func_ptr_t)(void);
 (*(func_ptr_t)(*(void **)(unaff_EBX + 0x40)))();
 return;
}

// Function: FUN_00011240 @ 0x11240
void FUN_00011240(void)
{
 int unaff_EBX;
 typedef void (*func_ptr_t)(void);
 (*(func_ptr_t)(*(void **)(unaff_EBX + 0x44)))();
 return;
}

// Function: FUN_00011250 @ 0x11250
unsigned long long FUN_00011250(void)
{
 int unaff_EBX;
 typedef void (*func_ptr_t)(void);
 (*(func_ptr_t)(*(void **)(unaff_EBX + 0x48)))();
 return *(unsigned long long *)&unaff_EBX;
}

// Function: FUN_00011260 @ 0x11260
unsigned int FUN_00011260(void)
{
 int unaff_EBX;
 typedef void (*func_ptr_t)(void);
 (*(func_ptr_t)(*(void **)(unaff_EBX + 0x4c)))();
 return *(unsigned int *)&unaff_EBX;
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
 unsigned int uStack_34;
 unsigned int local_24;
 int local_20;
 puStack_3c = (unsigned int *)0x4;
 uStack_40 = 0x11291;
 puStack_3c = (unsigned int *)FUN_00011190();
 *puStack_3c = 0x2a;
 uStack_34 = 0;
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
 uVar7 = ((unsigned long long)(unsigned int)local_24 << 32) | ((unsigned int)uVar7 & 0xFFFFFFFF);
 }
 else {
 local_20 = 0;
 }
 if ((int)((unsigned long long)uVar7 >> 0x20) != 1) {
 ppuVar4 = (unsigned int **)auStack_4c;
 auStack_4c[0] = (int)uVar7;
 FUN_00011260();
 }
 puVar5 = (char *)((intptr_t)ppuVar4 + -0x10);
 *(int *)((intptr_t)ppuVar4 + -0x10) = (int)uVar7;
 *(unsigned int *)((intptr_t)ppuVar4 + -0x14) = 0x11300;
 piVar1 = (int *)FUN_00011180();
 iVar6 = *piVar1 * 2 + local_20;
 *(unsigned int *)((intptr_t)ppuVar4 + -0x14) = 0x1130c;
 FUN_00011240();
*(unsigned int *)((intptr_t)ppuVar4 + -0x10) = 1;
	*(unsigned int *)((intptr_t)ppuVar4 + -0x14) = 0x11318;
 uVar2 = FUN_00011190();
 *(unsigned int *)((intptr_t)ppuVar4 + -8) = 0;
 *(unsigned int *)((intptr_t)ppuVar4 + -0x10) = uVar2;
 *(unsigned int *)((intptr_t)ppuVar4 + -0x14) = 0x1132a;
 uVar7 = FUN_00011250();
 iVar3 = (int)((unsigned long long)uVar7 >> 0x20);
 uVar2 = (unsigned int)uVar7;
 if (iVar3 != 2) {
 if (iVar3 == 3) {
 *(unsigned int *)((intptr_t)ppuVar4 + -0x20) = uVar2;
 *(unsigned int *)((intptr_t)ppuVar4 + -0x24) = 0x1136c;
 FUN_00011180();
 *(unsigned int *)((intptr_t)ppuVar4 + -0x24) = 0x11371;
 FUN_00011240();
 return iVar6 + 200;
 }
puVar5 = (char *)((intptr_t)ppuVar4 + -0x20);
	*(unsigned int *)((intptr_t)ppuVar4 + -0x20) = uVar2;
 *(unsigned int *)((intptr_t)ppuVar4 + -0x24) = 0x11343;
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
 static char __ioinit;
 FUN_000111b0(0,&__ioinit,0);
 return;
}

// Function: _start @ 0x113e0
void _start(unsigned int param_1,unsigned int param_2)
{
 char auStack_4 [4];
 FUN_000111e0(main,param_2,&auStack_4,0,0,param_1,auStack_4);
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
 if (*(char *)(unaff_EDI + 0x2b5b) == '\0') {
 if (*(int *)(unaff_EDI + 0x2b2b) != 0) {
 FUN_00011150(*(unsigned int *)(unaff_EDI + 0x2b47));
 }
 uVar1 = *(unsigned int *)(unaff_EDI + 0x2b5f);
 while (uVar1 < ((unaff_EDI + 0x297f) - (unaff_EDI + 0x297b) >> 2) - 1U) {
 *(unsigned int *)(unaff_EDI + 0x2b5f) = uVar1 + 1;
 (**(int **)(unaff_EDI + 0x297b + (uVar1 + 1) * 4))();
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
 FUN_000111a0(&local_30);
 iVar1 = 0;
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
	void (*func)(Base *);
	func = (void (*)(Base *))(*(void **)param_1);
	func(param_1);
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
 FUN_00011170();
 piVar3 = (int *)(char *)(intptr_t)0x4;
 *piVar3 = (int)&PTR__RTTIDerivedA_00013e48;
 FUN_00011170();
 piVar4 = (int *)(char *)(intptr_t)0x4;
 *piVar4 = (int)&PTR__RTTIDerivedB_00013e5c;
 iVar1 = *piVar3;
 pcVar2 = *(char **)(*(int *)(iVar1 + -4) + 4);
 if ((pcVar2 != "12RTTIDerivedA") && (uVar7 = 0, *pcVar2 != '*')) {
 FUN_000111d0(pcVar2,(char *)"12RTTIDerivedA");
iVar5 = 0;
	uVar7 = -(unsigned int)(iVar5 == 0) & 10;
 }
	iVar6 = FUN_00011200((void *)piVar3,0,0,0);
	iVar5 = uVar7 + 0x14;
	if (iVar6 != 0) {
 iVar5 = uVar7 + 0x78;
 }
iVar6 = FUN_00011200((void *)piVar4, 0, 0, 0);
	if (iVar6 != 0) {
 iVar5 = iVar5 + 200;
 }
 FUN_000111a0((void *)((char *)pcVar2 + (*pcVar2 == '*')));
	iVar6 = 0;
	
	void **vtable1 = *(void **)(iVar1);
	typedef void (*destructor_func_t)(void *);
	destructor_func_t func_ptr1 = (destructor_func_t)vtable1[1];
	if (func_ptr1 != NULL) {
		func_ptr1(piVar3);
	}
	
	void **vtable2 = *(void **)(piVar4);
	destructor_func_t func_ptr2 = (destructor_func_t)vtable2[1];
	if (func_ptr2 != NULL) {
		func_ptr2(piVar4);
	}
	iVar6 = 0;
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
 FUN_000111a0(&local_30);
 iVar1 = 0;
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

// Function: Base::virtual_func @ 0x11a30
int Base_virtual_func(Base *self,int param_1)
{
	return param_1 + 1;
}

// Function: Base::getName @ 0x11a40
char * Base_getName(void)
{
 return &DAT_00012008;
}

// Function: Base::~Base @ 0x11a60
void Base_destructor(Base *param_1)
{
	return;
}

// Function: Derived::virtual_func @ 0x11a70
int Derived_virtual_func(Derived *self,int param_1)
{
	return param_1 * *(int *)(self + 4);
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

unsigned int MultiDerived_funcB(MultiDerived *self)
{
	return 0x28;
}

int MiddleA_func(MiddleA *param_1)
{
	return *(int *)((char *)param_1 + *(int *)(*(int *)param_1 + -0xc) + 4) + 0x96;
}

int MiddleA_func_1(MiddleA *param_1)
{
	return *(int *)((char *)param_1 + *(int *)(*(int *)param_1 + -0xc) +
 *(int *)(*(int *)((char *)param_1 + *(int *)(*(int *)param_1 + -0xc)) + -0xc) + 4) + 0x96;
}

int MiddleB_func(MiddleB *param_1)
{
	return *(int *)((char *)param_1 + *(int *)(*(int *)param_1 + -0xc) + 4) + 200;
}

int MiddleB_func_1(MiddleB *param_1)
{
	return *(int *)((char *)param_1 + *(int *)(*(int *)param_1 + -0xc) +
 *(int *)(*(int *)((char *)param_1 + *(int *)(*(int *)param_1 + -0xc)) + -0xc) + 4) + 200;
}

int DiamondDerived_func(DiamondDerived *param_1)
{
	return *(int *)((char *)param_1 + *(int *)(*(int *)param_1 + -0xc) + 4) + 0xfa;
}

int DiamondDerived_func_1(DiamondDerived *param_1)
{
	return *(int *)((char *)param_1 + *(int *)(*(int *)param_1 + -0xc) +
 *(int *)(*(int *)((char *)param_1 + *(int *)(*(int *)param_1 + -0xc)) + -0xc) + 4) + 0xfa;
}

int DiamondDerived_func_2(DiamondDerived *param_1)
{
	return *(int *)((char *)param_1 + *(int *)(*(int *)((char *)param_1 - 8) + -0xc) + -4) + 0xfa;
}

// Function: RTTIDerivedA::getType @ 0x11bc0
unsigned int RTTIDerivedA_getType(RTTIDerivedA *param_1)
{
	return 1;
}

// Function: RTTIDerivedB::getType @ 0x11bd0
unsigned int RTTIDerivedB_getType(RTTIDerivedB *param_1)
{
	return 2;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x11be0
void RTTIDerivedB_destructor(RTTIDerivedB *param_1)
{
	return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x11bf0
void RTTIDerivedA_destructor(RTTIDerivedA *param_1)
{
	return;
}

void DiamondDerived_destructor(DiamondDerived *param_1)
{
	return;
}

void DiamondDerived_destructor_1(DiamondDerived *param_1)
{
	return;
}

void DiamondDerived_destructor_2(DiamondDerived *param_1)
{
 return;
}

void MultiDerived_destructor(MultiDerived *param_1)
{
	return;
}

void MultiDerived_destructor_1(MultiDerived *param_1)
{
	return;
}

// Function: Derived::~Derived @ 0x11c50
void Derived_destructor(Derived *param_1)
{
	return;
}

// Function: Base::~Base @ 0x11c60
void Base_destructor_1(Base *param_1)
{
	FUN_000111c0(param_1,4);
	return;
}

// Function: Derived::~Derived @ 0x11c90
void Derived_destructor_1(Derived *param_1)
{
	FUN_000111c0(param_1,8);
	return;
}

void MultiDerived_destructor_2(MultiDerived *param_1)
{
	FUN_000111c0(param_1,0x10);
	return;
}

void MultiDerived_destructor_3(MultiDerived *param_1)
{
	FUN_000111c0((MultiDerived *)((char *)param_1 - 8),0x10);
	return;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x11d20
void RTTIDerivedB_destructor_1(RTTIDerivedB *param_1)
{
	FUN_000111c0(param_1,4);
	return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x11d50
void RTTIDerivedA_destructor_1(RTTIDerivedA *param_1)
{
	FUN_000111c0(param_1,4);
	return;
}

void DiamondDerived_destructor_3(DiamondDerived *param_1)
{
	FUN_000111c0(param_1,0x18);
	return;
}

void DiamondDerived_destructor_4(DiamondDerived *param_1)
{
	FUN_000111c0((DiamondDerived *)((char *)param_1 + *(int *)(*(int *)param_1 + -0x10)),0x18);
	return;
}

void DiamondDerived_destructor_5(DiamondDerived *param_1)
{
	FUN_000111c0((DiamondDerived *)((char *)param_1 - 8),0x18);
	return;
}

// Function: template_max<int>
int template_max_int_(int param_1,int param_2)
{
 if (param_1 < param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: template_max<double>
double template_max_double_(double param_1,double param_2)
{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: template_swap<int>
void template_swap_int_(int *param_1,int *param_2)
{
 int iVar1;
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}

void Container_int__Container(Container_int_ *param_1)
{
 *(unsigned int *)(param_1 + 0x28) = 0;
 return;
}

void Container_int__push(Container_int_ *param_1,int param_2)
{
	int iVar1;
	iVar1 = *(int *)((char *)param_1 + 0x28);
	if (iVar1 < 10) {
		*(int *)((char *)param_1 + 0x28) = iVar1 + 1;
		*(int *)((char *)param_1 + iVar1 * 4) = param_2;
	}
	return;
}

unsigned int Container_int__get(Container_int_ *param_1,int param_2)
{
	if ((-1 < param_2) && (*(int *)((char *)param_1 + 0x28) != param_2 && param_2 <= *(int *)((char *)param_1 + 0x28))) {
		return *(unsigned int *)(((char *)param_1 + param_2 * 4));
	}
	return 0;
}

unsigned int Container_int__getSize(Container_int_ *param_1)
{
	return *(unsigned int *)((char *)param_1 + 0x28);
}

void Container_double__Container(Container_double_ *param_1)
{
 *(unsigned int *)(param_1 + 0x50) = 0;
 return;
}

void Container_double__push(Container_double_ *param_1,double param_2)
{
	int iVar1;
	iVar1 = *(int *)((char *)param_1 + 0x50);
	if (iVar1 < 10) {
		*(int *)((char *)param_1 + 0x50) = iVar1 + 1;
		*(double *)((char *)param_1 + iVar1 * 8) = param_2;
	}
	return;
}

long double Container_double__get(Container_double_ *param_1,int param_2)
{
	if ((-1 < param_2) && (param_2 < *(int *)((char *)param_1 + 0x50))) {
		return (long double)*(double *)(((char *)param_1 + param_2 * 8));
	}
	return (long double)0;
}

unsigned int Container_double__getSize(Container_double_ *param_1)
{
	return *(unsigned int *)((char *)param_1 + 0x50);
}

// Function: __x86.get_pc_thunk.ax @ 0x11f5c
unsigned int __x86_get_pc_thunk_ax(void)
{
 unsigned int ret_val;
 __asm__ volatile ("movl %%esp, %0" : "=r" (ret_val));
 return ret_val;
}

void __stack_chk_fail_local(void);

// Function: __x86.get_pc_thunk.si @ 0x11f60
void __x86_get_pc_thunk_si(void)
{
 return;
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

