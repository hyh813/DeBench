// Decompiled by BinaryAI
// SHA256: 8bbe137c2e0a46de512efe2cf96f4f1735cab1238b7a8d910c5fc86228d0cf98

#include <stddef.h>
#include <stdlib.h>
#include <stdint.h>

typedef void *pointer_____offset_0x8___;

/* Opaque struct typedefs */
typedef struct Base Base;
typedef struct Derived Derived;
typedef struct VirtualBase VirtualBase;
typedef struct MultiDerived MultiDerived;
typedef struct MiddleA MiddleA;
typedef struct MiddleB MiddleB;
typedef struct DiamondDerived DiamondDerived;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;
typedef struct LifecycleClass LifecycleClass;

/* Forward declarations */
void test_cpp_oo_features(void);
void __x86_get_pc_thunk_di(void);

/* Stack protector variable */
extern unsigned int in_GS_OFFSET;

/* Typeinfo and RTTI placeholder declarations */
extern const char int_typeinfo[];
extern const char test_cpp_exception_DerivedException_typeinfo[];
extern const char std_ios_base_Init_Init[];
extern char std__ioinit;
extern char __dso_handle;
extern char RTTIBase_typeinfo;
extern const char RTTIDerivedA_typeinfo;
extern const char RTTIDerivedB_typeinfo;
extern const char PTR__RTTIDerivedA_00015dd0;
extern const void *PTR__RTTIDerivedB_00015de4;
extern int (*PTR_virtual_func_00015c58)(void *,int);
extern int (*PTR_virtual_func_00015c70)(void *,int);
extern int DAT_00013015;
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
extern int DAT_00013008;

#define CONCAT44(hi,lo) (((unsigned long long)(hi) << 32) | (unsigned int)(lo))
#define ROUND(x) (int)((x) + 0.5)

void __gmon_start__(void);
void frame_dummy(void);
int __do_global_ctors_aux(void);
void __stack_chk_fail_local_impl(void);

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
 (void)(*(void (**)(void))((void *)0x0))();
 return;
}

// Function: FUN_00011180 @ 0x11180
void FUN_00011180(void)
{
 int unaff_EBX;
 (*(void (*)(void))(*(void **)(unaff_EBX + 0x60)))();
 return;
}

// Function: FUN_00011190 @ 0x11190
void FUN_00011190(int param1, void *param2)
{
 int unaff_EBX;
 ((void (*)(int,void *))(*(void **)(unaff_EBX + 0xc)))(param1, param2);
 return;
}

// Function: FUN_000111a0 @ 0x111a0
void *FUN_000111a0(size_t size)
{
 int unaff_EBX;
 return ((void *(*)(size_t))(*(void **)(unaff_EBX + 0x10)))(size);
}

// Function: FUN_000111b0 @ 0x111b0
void FUN_000111b0(void)
{
 int unaff_EBX;
 (*(void (*)(void))(*(void **)(unaff_EBX + 0x14)))();
 return;
}

// Function: FUN_000111c0 @ 0x111c0
void FUN_000111c0(void)
{
 int unaff_EBX;
 (*(void (*)(void))(*(void **)(unaff_EBX + 0x18)))();
 return;
}

// Function: FUN_000111d0 @ 0x111d0
int FUN_000111d0(void *param)
{
 int unaff_EBX;
 return ((int (*)(const void *))(*(void **)(unaff_EBX + 0x1c)))(param);
}

// Function: FUN_000111e0 @ 0x111e0
void FUN_000111e0(void *param1, const void *param2, const void *param3)
{
 int unaff_EBX;
 ((void (*)(void *, const void *, const void *))(*(void **)(unaff_EBX + 0x20)))(param1, param2, param3);
 return;
}

// Function: FUN_000111f0 @ 0x111f0
void *FUN_000111f0(void *ptr, size_t size)
{
 int unaff_EBX;
 return ((void *(*)(void *,size_t))(*(void **)(unaff_EBX + 0x24)))(ptr, (size_t)size);
}

// Function: FUN_00011200 @ 0x11200
int FUN_00011200(const void *param1, const char *param2, const void *param3, const void *param4)
{
 int unaff_EBX;
 return ((int (*)(const void *, const char *, const void *, const void *))(*(void **)(unaff_EBX + 0x28)))(param1, param2, param3, param4);
}

// Function: FUN_00011210 @ 0x11210
void FUN_00011210(void *a,void *b,void *c,void *d,void *e,void *f,void *g)
{
 int unaff_EBX;
 ((void (*)(void *,void *,void *,void *,void *,void *,void *))(*(void **)(unaff_EBX + 0x2c)))((void *)0,(void *)0,(void *)0,(void *)0,(void *)0,(void *)0,(void *)0);
 return;
}

// Function: FUN_00011220 @ 0x11220
void *FUN_00011220(void)
{
 int unaff_EBX;
 return ((void *(*)(size_t))(*(void **)(unaff_EBX + 0x30)))(0);
}

// Function: FUN_00011230 @ 0x11230
void FUN_00011230(void *param1, void *param2, size_t param3)
{
 int unaff_EBX;
 ((void (*)(void *,void *,size_t))(*(void **)(unaff_EBX + 0x34)))(param1, param2, param3);
 return;
}

// Function: FUN_00011240 @ 0x11240
void FUN_00011240(void)
{
 int unaff_EBX;
 (*(void (*)(void))(*(void **)(unaff_EBX + 0x38)))();
 return;
}

// Function: FUN_00011250 @ 0x11250
int FUN_00011250(void *a, void *b, const void *c, const void *d, const void *e)
{
 int unaff_EBX;
 return ((int (*)(void *,void *,const void *,const void *,const void *))(*(void **)(unaff_EBX + 0x3c)))(a,b,c,d,e);
}

// Function: FUN_00011260 @ 0x11260
void FUN_00011260(void)
{
 int unaff_EBX;
 (*(void (*)(void *))(*(void **)(unaff_EBX + 0x40)))(0);
 return;
}

// Function: FUN_00011270 @ 0x11270
void *FUN_00011270(void)
{
 int unaff_EBX;
 return ((void *(*)(void))(*(void **)(unaff_EBX + 0x44)))();
}

// Function: FUN_00011280 @ 0x11280
void FUN_00011280(void)
{
 int unaff_EBX;
 ((void (*)(void *))(*(void **)(unaff_EBX + 0x48)))(0);
 return;
}

// Function: FUN_00011290 @ 0x11290
void FUN_00011290(void *param1)
{
 int unaff_EBX;
 ((void (*)(void *))(*(void **)(unaff_EBX + 0x4c)))(param1);
 return;
}

// Function: FUN_000112a0 @ 0x112a0
void FUN_000112a0(void)
{
 int unaff_EBX;
 (*(void (*)(void))(*(void **)(unaff_EBX + 0x50)))();
 return;
}

// Function: FUN_000112b0 @ 0x112b0
void *FUN_000112b0(void)
{
 int unaff_EBX;
 return ((void *(*)(void))(*(void **)(unaff_EBX + 0x54)))();
}

// Function: FUN_000112c0 @ 0x112c0
unsigned int FUN_000112c0(void)
{
 int unaff_EBX;
 return ((unsigned int (*)(void))(*(void **)(unaff_EBX + 0x58)))();
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
 FUN_000111c0();
 puStack_3c = (unsigned int *)0x4;
 *puStack_3c = 0x2a;
 uStack_34 = 0;
 puStack_38 = (char *)&int_typeinfo;
 ppuVar4 = &puStack_3c;
 uStack_40 = 0x11308;
 uVar8 = (unsigned long long)FUN_000112b0();
 iVar7 = 0;
	if (uVar8 != 0) {
uStack_50 = 0x1131e;
	local_4c = (int)uVar8;
	FUN_000111b0();
	iVar7 = 0;
	uStack_40 = 0x11328;
 FUN_00011270();
 local_24 = (unsigned int)((unsigned long long)uVar8 >> 0x20);
	local_20 = (unsigned int)uVar8;
uStack_40 = 0x11339;
	(void)FUN_000112a0();
	uVar8 = (unsigned long long)FUN_000112b0();
 }
 uVar2 = (unsigned int)uVar8;
 if ((int)((unsigned long long)uVar8 >> 0x20) == 1) {
 ppuVar4 = (unsigned int **)&local_4c;
 puVar5 = &local_4c;
uStack_50 = 0x1134d;
	local_4c = uVar2;
	(void)FUN_000111b0();
	iVar7 = iVar7 + 0 * 2;
	uStack_50 = 0x11358;
	FUN_000112a0();
local_4c = 1;
	uStack_50 = 0x11364;
	FUN_000111c0();
	ppuStack_48 = (void **)(void *)&test_cpp_exception_DerivedException_typeinfo;
 uStack_44 = 0;
 uStack_50 = 0x11376;
 FUN_000112b0();
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
puVar5 = (unsigned int *)((char *)ppuVar4 + -0x10);
	*(unsigned int *)((char *)ppuVar4 + -0x10) = uVar2;
	*(unsigned int *)((char *)ppuVar4 + -0x14) = 0x1138f;
	FUN_000112c0();
 }
	iVar7 = iVar7 + 100;
	puVar6 = (unsigned int *)((char *)puVar5 + -0x10);
	*(unsigned int *)((char *)puVar5 + -0x10) = uVar2;
	*(unsigned int *)((char *)puVar5 + -0x14) = 0x1139d;
	FUN_000111b0();
LAB_000113b0:
	*(unsigned int *)((char *)puVar6 + -4) = 0x113b5;
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
 FUN_00011290(&std__ioinit);
 FUN_000111e0((void *)&std_ios_base_Init_Init,&std__ioinit,&__dso_handle);
 return;
}

// Function: _start @ 0x11420
void _start(unsigned int param_1,unsigned int param_2)
{
 char auStack_4 [4];
 unsigned int stack0x00000004 = 0;
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
 uint uVar1;
 int unaff_EDI;
 __x86_get_pc_thunk_di();
 if (*(char *)(unaff_EDI + 0x4b1b) == '\0') {
 if (*(int *)(unaff_EDI + 0x4aeb) != 0) {
 FUN_00011180();
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

/* Forward declaration */
void __x86_get_pc_thunk_di(void);



// Function: test_cpp_member_func @ 0x11591
int test_cpp_member_func(void)
{
 int iVar1;
 char local_30 [31];
 char local_11;
 int local_10;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 FUN_00011230(local_30,(void *)&DAT_00013015,0x1f);
 local_11 = 0;
 iVar1 = FUN_000111d0(local_30);
 iVar1 = iVar1 + 0x125c;
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar1 = __stack_chk_fail_local_impl();
 }
 return iVar1;
}

// Function: test_cpp_constructor @ 0x115f1
int test_cpp_constructor(void)
{
 return LifecycleClass::instance_count * 0x3e9 + 0x15;
}

// Function: call_virtual_func @ 0x1160d
int call_virtual_func(void *param_1,int param_2)
{
 void *vtable = *(void **)param_1;
 void *func_ptr = *(void **)vtable;
 return ((int (*)(void *,int))(intptr_t)func_ptr)(param_1, param_2);
}

// Function: test_cpp_virtual_func @ 0x11621
int test_cpp_virtual_func(void)
{
 int iVar1;
 int iVar2;
 int in_GS_OFFSET;
 void *local_1c;
 void *local_18;
 unsigned int local_14;
 int local_10;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
	local_1c = (void *)(intptr_t)PTR_virtual_func_00015c58;
	local_18 = (void *)(intptr_t)PTR_virtual_func_00015c70;
 local_14 = 3;
	iVar1 = call_virtual_func(local_1c,5);
	iVar1 = iVar1 + call_virtual_func(local_18,5);
	iVar2 = iVar1 + 0x15;
	if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar2 = __stack_chk_fail_local_impl();
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
	iVar1 = 0;
	iVar1 += template_max_int_(3,7);
	dVar2 = template_max_double_(2.5,1.5);
local_18 = 10;
	local_14 = 0x14;
	(void)template_swap_int_(&local_18,&local_14);
 iVar1 = (int)ROUND(dVar2) + iVar1 + local_18 + local_14;
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar1 = __stack_chk_fail_local_impl();
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
iVar1 = 0;
local_14 = 1;
	local_3c[0] = 10;
	Container_int__push(local_3c,0x14);
	Container_int__push(local_3c,0x1e);
	iVar1 = 0;
 if (0 < local_14) {
 iVar1 = *(int *)local_3c;
 }
 iVar1 = local_14 + 3 + iVar1;
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar1 = __stack_chk_fail_local_impl();
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
	piVar2 = (int *)FUN_000111a0(4);
	*piVar2 = (int)(intptr_t)&PTR__RTTIDerivedA_00015dd0;
	piVar3 = (int *)FUN_000111a0(4);
	*piVar3 = (int)(intptr_t)&PTR__RTTIDerivedB_00015de4;
	iVar1 = *piVar2;
	pcVar7 = *(char **)((char *)(intptr_t)piVar2 + (intptr_t)*(const int *)(iVar1 + -4) + 4);
	if ((pcVar7 != (char *)"12RTTIDerivedA") && (uVar5 = 0, *pcVar7 != '*')) {
		iVar4 = FUN_00011200(pcVar7,"12RTTIDerivedA",(void *)0,(void *)0);
		uVar5 = -(uint)(iVar4 == 0) & 10;
	}
	iVar6 = uVar5 + 0x14;
	ppuVar8 = (pointer_____offset_0x8___ *)&RTTIBase_typeinfo;
	iVar4 = FUN_00011250(piVar2,ppuVar8,(void *)&RTTIDerivedA_typeinfo,(void *)0,ppuVar8);
	if (iVar4 != 0) {
		iVar6 = uVar5 + 0x78;
	}
	iVar4 = FUN_00011250(piVar3,ppuVar8,(const void *)&RTTIDerivedB_typeinfo,(void *)0,(void *)0);
	if (iVar4 != 0) {
		iVar6 = iVar6 + 200;
	}
	if (*pcVar7 == '*') {
		pcVar7 = pcVar7 + 1;
	}
	iVar4 = FUN_000111d0(pcVar7);
	(*(void (**)(void *))((char *)(intptr_t)piVar2 + 4))((void *)(intptr_t)piVar2);
	(*(void (**)(void *))((char *)(intptr_t)piVar3 + 4))((void *)(intptr_t)piVar3);
	return iVar6;
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
 uVar1 = 0;
 local_28 = (unsigned int *)FUN_000111a0(4);
 local_2c = 0;
 *local_28 = 200;
 local_24 = (unsigned int *)FUN_00011220(0x14);
 *local_24 = 1;
 local_24[1] = 2;
 local_24[2] = 3;
 local_24[3] = 4;
 local_24[4] = 5;
/* unique_ptr construction for array */
std_unique_ptr_int____std__default_delete_int_______unique_ptr((void **)&local_24);
	/* unique_ptr construction for single int */
	std_unique_ptr_int___std__default_delete_int______unique_ptr((void **)&local_28);
	std_unique_ptr_int___std__default_delete_int______unique_ptr((void **)&local_2c);
	FUN_000112c0();
	if (local_20 != *(int *)(in_GS_OFFSET + 0x14)) {
		__stack_chk_fail_local_impl();
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
	local_28 = (unsigned int)(uintptr_t)&PTR_virtual_func_00015c58;
	local_30 = (unsigned int)(uintptr_t)&PTR_virtual_func_00015c70;
	local_30 = 0x15da0;
	local_24 = 0x32;
	iVar1 = DiamondDerived_func(&local_28);
	local_24 = 100;
	iVar2 = DiamondDerived_func(&local_28);
	iVar2 = iVar2 + iVar1;
	DiamondDerived__DiamondDerived((void *)local_38);
	if (local_20 != *(int *)(in_GS_OFFSET + 0x14)) {
		iVar2 = __stack_chk_fail_local_impl();
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
	test_cpp_member_func();
	FUN_00011190(1,(void *)&DAT_0001303e);
	test_cpp_constructor();
	FUN_00011190(1,&DAT_0001305c);
	test_cpp_virtual_func();
	FUN_00011190(1,&DAT_00013078);
	test_cpp_multiple_inheritance();
	FUN_00011190(1,(void *)&DAT_00013094);
	test_cpp_diamond_inheritance();
	FUN_00011190(1,(void *)&DAT_000130b0);
	test_cpp_operator_overload();
	FUN_00011190(1,&DAT_000130cd);
	test_cpp_template_func();
	FUN_00011190(1,&DAT_000130e9);
	test_cpp_template_class();
	FUN_00011190(1,&DAT_00013105);
	test_cpp_lambda();
	FUN_00011190(1,&DAT_00013121);
	test_cpp_exception();
	FUN_00011190(1,&DAT_0001313d);
	test_cpp_smart_ptr();
	FUN_00011190(1,&DAT_0001315a);
	test_cpp_rtti();
	FUN_00011190(1,&DAT_00013177);
}

// Function: Base::virtual_func @ 0x11b66
int Base_virtual_func(void *_this,int param_1)
{
 (void)_this;
 return param_1 + 1;
}

// Function: Base::getName @ 0x11b74
void * Base_getName(void *_this)
{
 return (void *)(intptr_t)&DAT_00013008;
}

// Function: Base::~Base @ 0x11b8a
void Base__Base(void *_this)
{
 (void)_this;
 return;
}

// Function: Derived::virtual_func @ 0x11b90
int Derived_virtual_func(void *_this,int param_1)
{
 return param_1 * *(int *)((char *)_this + 4);
}

// Function: Derived::getName @ 0x11ba4
char * Derived_getName(void *_this)
{
 return "Derived";
}

// Function: MultiDerived::funcA @ 0x11bba
unsigned int MultiDerived_funcA(void *_this)
{
 return 0x1e;
}

// Function: MultiDerived::funcB @ 0x11bc4
unsigned int MultiDerived_funcB(void *_this)
{
 return 0x28;
}

// Function: MultiDerived::funcB @ 0x11bce
unsigned int MultiDerived_funcB2(void *_this)
{
 return 0x28;
}

// Function: VirtualBase::func @ 0x11bd8
unsigned int VirtualBase_func(void *_this)
{
 (void)_this;
 return 100;
}

// Function: VirtualBase::~VirtualBase @ 0x11be2
void VirtualBase__VirtualBase(void *_this)
{
 (void)_this;
 return;
}

// Function: MiddleA::func @ 0x11be8
int MiddleA_func(void *_this)
{
 return *(int *)(((char *)_this) + *(int *)(*(int *)((char *)_this) + -0xc) + 4) + 0x96;
}

// Function: MiddleA::func @ 0x11c02
void MiddleA_func2(void *_this)
{
 (void)_this;
 return;
}

// Function: MiddleB::func @ 0x11c16
int MiddleB_func(void *_this)
{
 return *(int *)(((char *)_this) + *(int *)(*(int *)((char *)_this) + -0xc) + 4) + 200;
}

// Function: MiddleB::func @ 0x11c30
void MiddleB_func2(void *_this)
{
 (void)_this;
 return;
}

// Function: DiamondDerived::func @ 0x11c44
int DiamondDerived_func(void *_this)
{
 return *(int *)((char *)(intptr_t)_this + *(int *)(*(int *)((char *)(intptr_t)_this) + -0xc) + 4) + 0xfa;
}

// Function: DiamondDerived::func @ 0x11c5e
void DiamondDerived_func2(void *_this)
{
 (void)_this;
 return;
}

// Function: DiamondDerived::func @ 0x11c71
void DiamondDerived_func3(void *_this)
{
 (void)_this;
 return;
}

// Function: MiddleA::~MiddleA @ 0x11c7c
void MiddleA__MiddleA(void *_this)
{
 *(unsigned int *)_this = 0x15c94;
 *(unsigned int *)((char *)_this + 8) = 0x15cb0;
 return;
}

// Function: MiddleA::~MiddleA @ 0x11ca1
void MiddleA__MiddleA2(void *_this)
{
 int iVar1;
 iVar1 = *(int *)(*(int *)_this + -0x10);
 *(unsigned int *)((char *)_this + iVar1) = 0x15c94;
 *(unsigned int *)((int)((char *)_this + iVar1) + 8) = 0x15cb0;
 return;
}

// Function: MiddleB::~MiddleB @ 0x11ccc
void MiddleB__MiddleB(void *_this)
{
 *(unsigned int *)_this = 0x15cd0;
 *(unsigned int *)((char *)_this + 8) = 0x15cec;
 return;
}

// Function: MiddleB::~MiddleB @ 0x11cf1
void MiddleB__MiddleB2(void *_this)
{
 int iVar1;
 iVar1 = *(int *)(*(int *)_this + -0x10);
 *(unsigned int *)((char *)_this + iVar1) = 0x15cd0;
 *(unsigned int *)((int)((char *)_this + iVar1) + 8) = 0x15cec;
 return;
}

// Function: RTTIDerivedA::getType @ 0x11d1c
unsigned int RTTIDerivedA_getType(void *_this)
{
 return 1;
}

// Function: RTTIDerivedB::getType @ 0x11d26
unsigned int RTTIDerivedB_getType(void *_this)
{
 return 2;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x11d30
void RTTIDerivedB__RTTIDerivedB(void *_this)
{
 return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x11d36
void RTTIDerivedA__RTTIDerivedA(void *_this)
{
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x11d3c
void MultiDerived__MultiDerived(void *_this)
{
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x11d41
void MultiDerived__MultiDerived2(void *_this)
{
 return;
}

// Function: Derived::~Derived @ 0x11d46
void Derived__Derived(void *_this)
{
 return;
}

// Function: Base::~Base @ 0x11d4c
void Base__Base2(void *_this)
{
 FUN_000111f0(_this, (size_t)4);
}

// Function: Derived::~Derived @ 0x11d74
void Derived__Derived2(void *_this)
{
 FUN_000111f0(_this, (size_t)8);
}

// Function: MultiDerived::~MultiDerived @ 0x11d9c
void MultiDerived__MultiDerived3(void *_this)
{
 FUN_000111f0(_this, (size_t)0x10);
}

// Function: MultiDerived::~MultiDerived @ 0x11dc4
void MultiDerived__MultiDerived4(void *_this)
{
 MultiDerived__MultiDerived3((char *)_this + -8);
}

// Function: VirtualBase::~VirtualBase @ 0x11dd0
void VirtualBase__VirtualBase2(void *_this)
{
 FUN_000111f0(_this, (size_t)8);
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x11df8
void RTTIDerivedB__RTTIDerivedB2(void *_this)
{
 FUN_000111f0(_this, (size_t)4);
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x11e20
void RTTIDerivedA__RTTIDerivedA2(void *_this)
{
 FUN_000111f0(_this, (size_t)4);
}

// Function: MiddleA::~MiddleA @ 0x11e48
void MiddleA__MiddleA3(void *_this)
{
 *(unsigned int *)_this = 0x15c94;
 *(unsigned int *)(_this + 8) = 0x15cb0;
 FUN_000111f0(_this, (size_t)0x10);
}

// Function: MiddleA::~MiddleA @ 0x11e7f
void MiddleA__MiddleA4(void *_this)
{
 return;
}

// Function: MiddleB::~MiddleB @ 0x11e92
void MiddleB__MiddleB3(void *_this)
{
 *(unsigned int *)_this = 0x15cd0;
 *(unsigned int *)(_this + 8) = 0x15cec;
 FUN_000111f0(_this, (size_t)0x10);
}

// Function: MiddleB::~MiddleB @ 0x11ec9
void MiddleB__MiddleB4(void *_this)
{
 return;
}

// Function: MiddleA::~MiddleA @ 0x11edc
void MiddleA__MiddleA5(void *_this)
{
 int iVar1;
 int iVar2;
 int in_stack_00000008;
 int *in_stack_0000000c;
 iVar1 = 0x15c94;
 if (in_stack_00000008 == 0) {
 iVar1 = *in_stack_0000000c;
 }
 *(int *)_this = iVar1;
 if (in_stack_00000008 == 0) {
 iVar2 = in_stack_0000000c[1];
 iVar1 = *(int *)(iVar1 + -0xc);
 }
 else {
 iVar2 = 0x15cb0;
 iVar1 = 8;
 }
 *(int *)(_this + iVar1) = iVar2;
 return;
}

// Function: MiddleA::~MiddleA @ 0x11f26
void MiddleA__MiddleA6(void *_this)
{
 return;
}

// Function: MiddleB::~MiddleB @ 0x11f42
void MiddleB__MiddleB5(void *_this)
{
 int iVar1;
 int iVar2;
 int in_stack_00000008;
 int *in_stack_0000000c;
 iVar1 = 0x15cd0;
 if (in_stack_00000008 == 0) {
 iVar1 = *in_stack_0000000c;
 }
 *(int *)_this = iVar1;
 if (in_stack_00000008 == 0) {
 iVar2 = in_stack_0000000c[1];
 iVar1 = *(int *)(iVar1 + -0xc);
 }
 else {
 iVar2 = 0x15cec;
 iVar1 = 8;
 }
 *(int *)(_this + iVar1) = iVar2;
 return;
}

// Function: MiddleB::~MiddleB @ 0x11f8c
void MiddleB__MiddleB6(void *_this)
{
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

// Function: Container<int>::Constructor @ 0x11fee
void Container_int__Constructor(void *_this)
{
 *(unsigned int *)(_this + 0x28) = 0;
 return;
}

// Function: Container<int>::push @ 0x12002
void Container_int__push(void *_this,int param_1)
{
 int iVar1;
 iVar1 = *(int *)(_this + 0x28);
 if (iVar1 < 10) {
 *(int *)(_this + 0x28) = iVar1 + 1;
 *(int *)(_this + iVar1 * 4) = param_1;
 }
 return;
}

// Function: Container<int>::get @ 0x12022
unsigned int Container_int__get(void *_this,int param_1)
{
 unsigned int uVar1;
 uVar1 = 0;
 if ((-1 < param_1) && (*(int *)(_this + 0x28) != param_1 && param_1 <= *(int *)(_this + 0x28))) {
 uVar1 = *(unsigned int *)(_this + param_1 * 4);
 }
 return uVar1;
}

// Function: Container<int>::getSize @ 0x12040
unsigned int Container_int__getSize(void *_this)
{
 return *(unsigned int *)(_this + 0x28);
}

// Function: Container<double>::Constructor @ 0x12050
void Container_double__Constructor(void *_this)
{
 *(unsigned int *)(_this + 0x50) = 0;
 return;
}

// Function: Container<double>::push @ 0x12064
void Container_double__push(void *_this,double param_1)
{
 int iVar1;
 iVar1 = *(int *)(_this + 0x50);
 if (iVar1 < 10) {
 *(int *)(_this + 0x50) = iVar1 + 1;
 *(double *)(_this + iVar1 * 8) = param_1;
 }
 return;
}

// Function: Container<double>::get @ 0x12088
long double Container_double__get(void *_this,int param_1)
{
 long double lVar1;
 lVar1 = (long double)0;
 if ((-1 < param_1) && (param_1 < *(int *)(_this + 0x50))) {
 lVar1 = (long double)*(double *)(_this + param_1 * 8);
 }
 return lVar1;
}

// Function: Container<double>::getSize @ 0x120a8
unsigned int Container_double__getSize(void *_this)
{
 return *(unsigned int *)(_this + 0x50);
}

// Function: std::unique_ptr<int,std::default_delete<int>>::~unique_ptr @ 0x120b8
void
std_unique_ptr_int___std__default_delete_int______unique_ptr
 (void *_this)
{
 if (*(int *)_this != 0) {
 FUN_000111f0(*(int *)_this,4);
 }
 return;
}

// Function: std::unique_ptr<int[],std::default_delete<int[]>>::~unique_ptr @ 0x120e8
void
std_unique_ptr_int____std__default_delete_int_______unique_ptr
 (void *_this)
{
 if (*(int *)_this != 0) {
 FUN_00011260(*(int *)_this);
 }
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x12116
void DiamondDerived__DiamondDerived(void *_this)
{
 int iVar1;
 int iVar2;
 int in_stack_00000008;
 int *in_stack_0000000c;
 iVar2 = 0x15d88;
 if (in_stack_00000008 == 0) {
 iVar2 = *in_stack_0000000c;
 }
*(int *)((char *)_this) = iVar2;
	if (in_stack_00000008 == 0) {
	iVar1 = in_stack_0000000c[5];
	iVar2 = *(int *)(iVar2 + -0xc);
	}
	else {
 iVar1 = 0x15dbc;
 iVar2 = 0x10;
	}
	*(int *)(((char *)_this) + iVar2) = iVar1;
	iVar2 = 0x15da0;
	if (in_stack_00000008 == 0) {
 iVar2 = in_stack_0000000c[6];
	}
	*(int *)(((char *)_this) + 8) = iVar2;
	MiddleB__MiddleB((void *)((char *)_this + 8));
	MiddleA__MiddleA(_this);
	return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x121b0
void DiamondDerived__DiamondDerived2(void *_this)
{
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x121cb
void DiamondDerived__DiamondDerived3(void *_this)
{
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x121d6
void DiamondDerived__DiamondDerived4(void *_this)
{
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x121ea
void DiamondDerived__DiamondDerived5(void *_this)
{
 DiamondDerived__DiamondDerived(_this);
 FUN_000111f0(_this, (size_t)0x18);
	return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x1221e
void DiamondDerived__DiamondDerived6(void *_this)
{
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x12229
void DiamondDerived__DiamondDerived7(void *_this)
{
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x1223c
void DiamondDerived__DiamondDerived8(void *_this)
{
 DiamondDerived__DiamondDerived(_this);
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

void __stack_chk_fail_local(void);
void __stack_chk_fail_local_impl(void);

// Function: __stack_chk_fail_local @ 0x12270
void __stack_chk_fail_local_impl(void)
{
 FUN_00011240();
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

