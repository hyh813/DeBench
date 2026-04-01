// Decompiled by BinaryAI
// SHA256: c0ef99c012439f7943635ebecda90c0a77f5c85507db876bd7aa89b66e1ad395

#include <stdlib.h>
#include <stdint.h>

typedef void (*vptr_func_t)(void);
typedef void (*generic_func_t)(void);

/* Type definitions for C++ classes */
typedef unsigned long long ulonglong;
typedef unsigned int uint;

/* Macro for concatenating 32-bit values into 64-bit */
#define CONCAT44(hi, lo) ((((unsigned long long)(hi)) << 32) | ((unsigned long long)(lo) & 0xFFFFFFFFULL))

/* Type info declarations for RTTI */
extern const void *__typeinfo_name;
#define RTTIBase_typeinfo (__typeinfo_name)
#define RTTIDerivedA_typeinfo (__typeinfo_name)
#define RTTIDerivedB_typeinfo (__typeinfo_name)
#define int_typeinfo (__typeinfo_name)

/* Global data symbols */
extern int DAT_00012008;
extern int DAT_00012018;
extern int DAT_0001203c;
extern int DAT_0001205a;
extern int DAT_00012076;
extern int DAT_00012092;
extern int DAT_000120ae;
extern int DAT_000120cb;
extern int DAT_000120e7;
extern int DAT_00012103;
extern int DAT_0001211f;
extern int DAT_0001213b;
extern int DAT_00012158;
extern int DAT_00012175;

const void *__typeinfo_name = "typeinfo";

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
typedef struct pointer_____offset_0x8___ pointer_____offset_0x8___;
typedef struct RTTIBase RTTIBase;

struct RTTIBase {
    vptr_func_t *vptr;
};

/* Forward declarations */
void __stack_chk_fail_local(void);
void __gmon_start__(void);
void frame_dummy(void);
void __do_global_ctors_aux(void);
void test_cpp_oo_features(void);
int std___ioinit;
void __x86_get_pc_thunk_di(void);
int template_max_int_(int param_1, int param_2);
double template_max_double_(double param_1, double param_2);
void template_swap_int_(int *param_1, int *param_2);

struct Base {
    vptr_func_t *vptr;
};

struct Derived {
    vptr_func_t *vptr;
    int multiplier;
};

struct MultiDerived {
    vptr_func_t *vptr;
    char data[16];
};

struct MiddleA {
    vptr_func_t *vptr;
    char data[12];
};

struct MiddleB {
    vptr_func_t *vptr;
    char data[12];
};

struct DiamondDerived {
    vptr_func_t *vptr;
    char data[24];
};

struct RTTIDerivedA {
    vptr_func_t *vptr;
};

struct RTTIDerivedB {
    vptr_func_t *vptr;
};

struct Container_int_ {
    char data[44];
    unsigned int size;
};

struct Container_double_ {
    char data[84];
    unsigned int size;
};

struct pointer_____offset_0x8___ {
    void *ptr;
};

// Function: _init @ 0x11000
int _init(void *ctx)
{
 int iVar1;
 __gmon_start__();
 frame_dummy();
 __do_global_ctors_aux();
 iVar1 = 0;
 return iVar1;
}

// Function: FUN_00011030 @ 0x11030
void FUN_00011030(void)
{
 ((void (*)(void))0)();
 return;
}

// Function: FUN_00011150 @ 0x11150
int FUN_00011150(void *ptr)
{
 return (*(int (*)(void))(*(void **)((char *)ptr + 0x54)))();
}

// Function: FUN_00011160 @ 0x11160
int FUN_00011160(void *ptr)
{
 return (*(int (*)(void))(*(void **)((char *)ptr + 0xc)))();
}

// Function: FUN_00011170 @ 0x11170
void *FUN_00011170(int size)
{
 return malloc(size);
}

// Function: FUN_00011180 @ 0x11180
void *FUN_00011180(void)
{
 return (void *)0;
}

// Function: FUN_00011190 @ 0x11190
unsigned int FUN_00011190(void)
{
 return 0;
}

// Function: FUN_000111a0 @ 0x111a0
int FUN_000111a0(void *ptr)
{
 (*(void (*)(void))(*(void **)((char *)ptr + 0x1c)))();
 return 0;
}

// Function: FUN_000111b0 @ 0x111b0
void FUN_000111b0(void *ptr, generic_func_t arg1, void *arg2)
{
 (*(void (*)(void*, void*, void*))(void *)((char *)ptr + 0x20))(ptr, (void*)arg1, arg2);
 return;
}

// Function: FUN_000111c0 @ 0x111c0
void FUN_000111c0(void *ptr, int offset)
{
 (*(vptr_func_t *)(void *)((char *)ptr + 0x24))();
 return;
}

// Function: FUN_000111d0 @ 0x111d0
int FUN_000111d0(void *ptr)
{
 return (*(int (*)(void))(*(void **)((char *)ptr + 0x28)))();
}

// Function: FUN_000111e0 @ 0x111e0
void FUN_000111e0(int (*main_func)(void), int argc, void *argv, void *envp, void *init, void *fini, void *stack_end)
{
 main_func();
 return;
}

// Function: FUN_000111f0 @ 0x111f0
void FUN_000111f0(void)
{
 return;
}

// Function: FUN_00011200 @ 0x11200
void FUN_00011200(void *src_ptr, const void *dst_type, const void *src_type, int offset)
{
 (*(vptr_func_t *)(void *)((char *)src_ptr + 0x34))();
 return;
}

// Function: FUN_00011210 @ 0x11210
unsigned long long FUN_00011210(void)
{
 return 0;
}

// Function: FUN_00011220 @ 0x11220
void FUN_00011220(void *ptr)
{
 (*(vptr_func_t *)(void *)((char *)ptr + 0x3c))();
 return;
}

// Function: FUN_00011230 @ 0x11230
void FUN_00011230(void *ptr)
{
 (*(vptr_func_t *)(void *)((char *)ptr + 0x40))();
 return;
}

// Function: FUN_00011240 @ 0x11240
void FUN_00011240(void)
{
 return;
}

// Function: FUN_00011250 @ 0x11250
unsigned long long FUN_00011250(void)
{
 return 0;
}

// Function: FUN_00011260 @ 0x11260
void FUN_00011260(void)
{
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
 const void *puStack_38;
 unsigned int uStack_34;
 unsigned int local_24;
 int local_20;
 puStack_3c = (unsigned int *)(void *)0x4;
 uStack_40 = 0x11291;
 puStack_3c = (unsigned int *)FUN_00011190();
 *puStack_3c = 0x2a;
 uStack_34 = 0;
 puStack_38 = &int_typeinfo;
 ppuVar4 = &puStack_3c;
 uStack_40 = 0x112a8;
 uVar7 = FUN_00011250();
 if ((int)((ulonglong)uVar7 >> 0x20) == 1) {
 auStack_4c[0] = (int)uVar7;
 piVar1 = (int *)FUN_00011180();
 local_20 = *piVar1;
 uStack_40 = 0x112d4;
 uVar7 = FUN_00011210();
 local_24 = (unsigned int)((ulonglong)uVar7 >> 0x20);
 uStack_40 = 0x112e4;
 FUN_00011240();
 uVar7 = CONCAT44(local_24,(int)uVar7);
 }
 else {
 local_20 = 0;
 }
 if ((int)((ulonglong)uVar7 >> 0x20) != 1) {
 ppuVar4 = (unsigned int **)auStack_4c;
 auStack_4c[0] = (int)uVar7;
 FUN_00011260();
 }
 puVar5 = (char *)(ppuVar4) + -0x10;
 *(int *)(ppuVar4 + -0x10) = (int)uVar7;
 *(unsigned int *)(ppuVar4 + -0x14) = 0x11300;
 piVar1 = (int *)FUN_00011180();
 iVar6 = *piVar1 * 2 + local_20;
 *(unsigned int *)((char *)ppuVar4 - 0x14) = 0x1130c;
 FUN_00011240();
*(unsigned int *)((char *)ppuVar4 - 0x10) = 1;
	*(unsigned int *)((char *)ppuVar4 - 0x14) = 0x11318;
 uVar2 = FUN_00011190();
 *(unsigned int *)((char *)ppuVar4 - 8) = 0;
*(void **)((char *)ppuVar4 - 0xc) = (void *)__typeinfo_name;
	*(unsigned int *)((char *)ppuVar4 - 0x10) = uVar2;
	*(unsigned int *)((char *)ppuVar4 - 0x14) = 0x1132a;
	uVar7 = FUN_00011250();
	iVar3 = (int)((ulonglong)uVar7 >> 0x20);
	uVar2 = (unsigned int)uVar7;
	if (iVar3 != 2) {
	if (iVar3 == 3) {
	*(unsigned int *)((char *)ppuVar4 - 0x20) = uVar2;
	*(unsigned int *)((char *)ppuVar4 - 0x24) = 0x1136c;
	FUN_00011180();
	*(unsigned int *)((char *)ppuVar4 - 0x24) = 0x11371;
	FUN_00011240();
	return iVar6 + 200;
	}
	puVar5 = (char *)ppuVar4 - 0x20;
	*(unsigned int *)((char *)ppuVar4 - 0x20) = uVar2;
	*(unsigned int *)((char *)ppuVar4 - 0x24) = 0x11343;
	FUN_00011260();
	uVar2 = 0;
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

/* C++ runtime symbols */
extern void std_ios_base_Init__Init(void *obj, void *init, void *handle);
extern void *__dso_handle;

// Function: _GLOBAL__sub_I_test_cpp_member_func @ 0x113a0
void _GLOBAL__sub_I_test_cpp_member_func(void)
{
 FUN_00011230(&std___ioinit);
 FUN_000111b0(&std___ioinit,(generic_func_t)std_ios_base_Init__Init,&__dso_handle);
 return;
}

// Function: _start @ 0x113e0
void _start(unsigned int param_1,unsigned int param_2)
{
 char auStack_4 [4];
 char *stack_ptr = auStack_4;
 FUN_000111e0(main,(int)param_2,(void *)&stack_ptr,(void *)0,(void *)0,(void *)(size_t)param_1,auStack_4);
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
 uVar1 = *(uint *)(unaff_EDI + 0x2b5f);
 while (uVar1 < ((unaff_EDI + 0x297f) - (unaff_EDI + 0x297b) >> 2) - 1U) {
 *(uint *)(unaff_EDI + 0x2b5f) = uVar1 + 1;
 (**(void **)(unaff_EDI + 0x297b + (uVar1 + 1) * 4))();
 uVar1 = *(uint *)(unaff_EDI + 0x2b5f);
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
	if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return iVar1 + 0x125c;
 }
 __stack_chk_fail_local();
}

// Function: test_cpp_constructor @ 0x11600
int test_cpp_constructor(void)
{
 int dummy_instance_count = 1;
 return dummy_instance_count * 0x3e9 + 0x15;
}

// Function: call_virtual_func @ 0x11620
void call_virtual_func(Base *param_1,int param_2)
{
 if (param_1 != NULL) {
 (*(void (**)(void))(*(void **)param_1))();
 }
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
 return (int)(int)dVar2 + iVar1 + local_18 + local_14;
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
 void *piVar3;
 void *piVar4;
 int iVar5;
 int iVar6;
 unsigned int uVar7;
void *PTR__RTTIDerivedA_00013e48 = (void *)0x13e48;
	void *PTR__RTTIDerivedB_00013e5c = (void *)0x13e5c;
	uVar7 = 10;
	piVar3 = (void *)FUN_00011170(4);
	*(void **)piVar3 = PTR__RTTIDerivedA_00013e48;
	piVar4 = (void *)FUN_00011170(4);
	*(void **)piVar4 = PTR__RTTIDerivedB_00013e5c;
iVar1 = *piVar3;
	pcVar2 = *(char **)((char *)*(uintptr_t *)piVar3 - 4);
	pcVar2 = *(char **)((char *)pcVar2 + 4);
	if ((pcVar2 != (char *)"12RTTIDerivedA") && (uVar7 = 0, *pcVar2 != '*')) {
	iVar5 = FUN_000111d0(pcVar2);
	uVar7 = -(uint)(iVar5 == 0) & 10;
	}
	iVar5 = uVar7 + 0x14;
	iVar6 = FUN_000111d0(piVar3);
	if (iVar6 != 0) {
	iVar5 = uVar7 + 0x78;
	}
iVar6 = FUN_000111d0(piVar4);
	if (iVar6 != 0) {
	iVar5 = iVar5 + 200;
	}
FUN_000111a0((void *)((char *)pcVar2 + (*pcVar2 == '*')));
	iVar6 = 0;
 ((void (*)(void *))(*(int **)((char *)(*(int *)piVar3) + 4)))(piVar3);
 ((void (*)(void *))(*(int **)((char *)(*(int *)piVar4) + 4)))(piVar4);
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
	FUN_00011160(&DAT_0001203c);
 uVar2 = test_cpp_constructor();
 FUN_00011160(&DAT_0001205a);
 FUN_00011160(&DAT_00012076);
 FUN_00011160(&DAT_00012092);
 uVar2 = test_cpp_diamond_inheritance();
 FUN_00011160(&DAT_000120ae);
 FUN_00011160(&DAT_000120cb);
 uVar2 = test_cpp_template_func();
 FUN_00011160(&DAT_000120e7);
 FUN_00011160(&DAT_00012103);
 FUN_00011160(&DAT_0001211f);
 uVar2 = test_cpp_exception();
 FUN_00011160(&DAT_0001213b);
 uVar2 = test_cpp_smart_ptr();
 FUN_00011160(&DAT_00012158);
 uVar2 = test_cpp_rtti();
 FUN_00011160(&DAT_00012175);
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
 return (char *)&DAT_00012008;
}

// Function: Base::~Base @ 0x11a60
void __Base_1(Base *self)
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

// Function: MultiDerived::funcB @ 0x11ac0
unsigned int MultiDerived_funcB(void)
{
 return 0x28;
}

// Function: MultiDerived::funcB @ 0x11ad0
unsigned int MultiDerived_funcB_2(MultiDerived *self)
{
 return 0x28;
}

// Function: MiddleA::func @ 0x11ae0
int MiddleA_func(MiddleA *self)
{
 return *(int *)(self + *(int *)(*(int *)self + -0xc) + 4) + 0x96;
}

// Function: MiddleA::func @ 0x11b00
int MiddleA_func_2(MiddleA *self)
{
 return *(int *)((int)(self + *(int *)(*(int *)self + -0xc)) +
 *(int *)(*(int *)(self + *(int *)(*(int *)self + -0xc)) + -0xc) + 4) + 0x96;
}

// Function: MiddleB::func @ 0x11b20
int MiddleB_func(MiddleB *self)
{
 return *(int *)(self + *(int *)(*(int *)self + -0xc) + 4) + 200;
}

// Function: MiddleB::func @ 0x11b40
int MiddleB_func_2(MiddleB *self)
{
 return *(int *)((int)(self + *(int *)(*(int *)self + -0xc)) +
 *(int *)(*(int *)(self + *(int *)(*(int *)self + -0xc)) + -0xc) + 4) + 200;
}

// Function: DiamondDerived::func @ 0x11b60
int DiamondDerived_func(DiamondDerived *self)
{
 return *(int *)(self + *(int *)(*(int *)self + -0xc) + 4) + 0xfa;
}

// Function: DiamondDerived::func @ 0x11b80
int DiamondDerived_func_2(DiamondDerived *self)
{
 return *(int *)((int)(self + *(int *)(*(int *)self + -0xc)) +
 *(int *)(*(int *)(self + *(int *)(*(int *)self + -0xc)) + -0xc) + 4) + 0xfa;
}

// Function: DiamondDerived::func @ 0x11ba0
int DiamondDerived_func_3(DiamondDerived *self)
{
 return *(int *)(self + *(int *)(*(int *)(self + 8) + -0xc) + -4) + 0xfa;
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









// Function: Base::~Base @ 0x11c60
void __Base(Base *self)
{
 FUN_000111c0(self,4);
 return;
}

// Function: Derived::~Derived @ 0x11c90
void __Derived(Derived *self)
{
 FUN_000111c0(self,8);
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x11cc0
void __MultiDerived(MultiDerived *self)
{
 FUN_000111c0(self,0x10);
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x11cf0
void __MultiDerived_2(MultiDerived *self)
{
 FUN_000111c0(self + -8,0x10);
 return;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x11d20
void __RTTIDerivedB(RTTIDerivedB *self)
{
 FUN_000111c0(self,4);
 return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x11d50
void __RTTIDerivedA(RTTIDerivedA *self)
{
 FUN_000111c0(self,4);
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x11d80
void __DiamondDerived(DiamondDerived *self)
{
 FUN_000111c0(self,0x18);
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

// Function: Container<int>::Container @ 0x11e70
void Container_int__Container(Container_int_ *self)
{
 *(unsigned int *)(self + 0x28) = 0;
 return;
}

// Function: Container<int>::push @ 0x11e80
void Container_int__push(Container_int_ *self,int param_1)
{
 int iVar1;
 iVar1 = *(int *)(self + 0x28);
 if (iVar1 < 10) {
 *(int *)(self + 0x28) = iVar1 + 1;
 *(int *)(self + iVar1 * 4) = param_1;
 }
 return;
}

// Function: Container<int>::get @ 0x11ea0
unsigned int Container_int__get(Container_int_ *self,int param_1)
{
 if ((-1 < param_1) && (*(int *)(self + 0x28) != param_1 && param_1 <= *(int *)(self + 0x28))) {
 return *(unsigned int *)(self + param_1 * 4);
 }
 return 0;
}

// Function: Container<int>::getSize @ 0x11ed0
unsigned int Container_int__getSize(Container_int_ *self)
{
 return *(unsigned int *)(self + 0x28);
}

// Function: Container<double>::Container @ 0x11ee0
void Container_double__Container(Container_double_ *self)
{
 *(unsigned int *)(self + 0x50) = 0;
 return;
}

// Function: Container<double>::push @ 0x11ef0
void Container_double__push(Container_double_ *self,double param_1)
{
 int iVar1;
 iVar1 = *(int *)(self + 0x50);
 if (iVar1 < 10) {
 *(int *)(self + 0x50) = iVar1 + 1;
 *(double *)(self + iVar1 * 8) = param_1;
 }
 return;
}

// Function: Container<double>::get @ 0x11f20
long double Container_double__get(Container_double_ *self,int param_1)
{
 if ((-1 < param_1) && (param_1 < *(int *)(self + 0x50))) {
 return *(long double *)(self + param_1 * 8);
 }
 return (long double)0;
}

// Function: Container<double>::getSize @ 0x11f50
unsigned int Container_double__getSize(Container_double_ *self)
{
 return *(unsigned int *)(self + 0x50);
}

// Function: __x86.get_pc_thunk.ax @ 0x11f5c
void *__x86_get_pc_thunk_ax(void)
{
 void *unaff_retaddr;
 return unaff_retaddr;
}

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

