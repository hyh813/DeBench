// Decompiled by BinaryAI
// SHA256: 9c3055ba20184fbde3c01d674fcd8fc147353aef95e45b3934c1af53e161e599

// Forward declarations
typedef struct Base Base;
typedef struct Derived Derived;
typedef struct MultiDerived MultiDerived;
typedef struct MiddleA MiddleA;
typedef struct MiddleB MiddleB;
typedef struct DiamondDerived DiamondDerived;
typedef struct RTTIBase RTTIBase;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;
typedef struct Container_int_ Container_int_;
typedef struct Container_double_ Container_double_;
typedef struct LifecycleClass LifecycleClass;
typedef struct DiamondDerived DiamondDerived;

// Forward declarations
void __stack_chk_fail_local(void);
void __gmon_start__(void);
void frame_dummy(void);
void __do_global_ctors_aux(void);
void __x86_get_pc_thunk_di(void);
void __x86_get_pc_thunk_ax(void);
void __x86_get_pc_thunk_si(void);
int main(void);
int __libc_start_main(int (*main)(void), int argc, void *ubp_av, void (*init)(void), void (*fini)(void), void (*rtld_fini)(void), void *stack_end);
int DiamondDerived_func(DiamondDerived *this_ptr);
int template_max_int_(int param_1,int param_2);
double template_max_double_(double param_1,double param_2);
void template_swap_int_(int *param_1,int *param_2);

// Global variables
extern int std___ioinit;
extern int __dso_handle;
extern int std_ioinit;
extern int std_ios_base_Init__Init;
extern int RTTIBase_typeinfo;
extern int RTTIDerivedA_typeinfo;
extern int RTTIDerivedB_typeinfo;
extern char *PTR_virtual_func_00014cd4;
extern char *PTR_virtual_func_00014cec;
extern int PTR__RTTIDerivedA_00014dd4;
extern int PTR__RTTIDerivedB_00014de8;
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
extern int DAT_00012008;

// Global variable for LifecycleClass static member
int LifecycleClass_instance_count = 0;

// Macro for concatenating two 32-bit values into 64-bit
#define CONCAT44(hi, lo) (((unsigned long long)(hi) << 32) | (unsigned int)(lo))

struct Container_int_ {
 int data[10];
 int size;
};

struct Container_double_ {
 double data[10];
 int size;
};

struct DiamondDerived {
 int vtable_ptr;
 int base1_offset;
 int base2_offset;
 int data[6];
};

struct MultiDerived {
 int vtable_ptr;
 int data[10];
};

struct MiddleA {
 int vtable_ptr;
 int data[10];
};

struct MiddleB {
 int vtable_ptr;
 int data[10];
};

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
 return;
}

// Function: FUN_00011170 @ 0x11170
int FUN_00011170(void *this_ptr)
{
 int ret;
 ret = (int)(*(int *)((char *)this_ptr + 0x5c));
 return ret;
}

// Function: FUN_00011180 @ 0x11180
int FUN_00011180(void *this_ptr, void *param_2, unsigned int param_3)
{
 int ret;
 ret = (int)(*(int *)((char *)this_ptr + 0xc));
 return ret;
}

// Function: FUN_00011190 @ 0x11190
void * FUN_00011190(void *this_ptr)
{
 void *ret;
 ret = *(void **)((char *)this_ptr + 0x10);
 return ret;
}

// Function: FUN_000111a0 @ 0x111a0
void * FUN_000111a0(void *this_ptr)
{
 void *ret;
 ret = *(void **)((char *)this_ptr + 0x14);
 return ret;
}

// Function: FUN_000111b0 @ 0x111b0
unsigned int FUN_000111b0(void *this_ptr)
{
 unsigned int ret;
 ret = (unsigned int)(*(unsigned int *)((char *)this_ptr + 0x18));
 return ret;
}

// Function: FUN_000111c0 @ 0x111c0
int FUN_000111c0(void *this_ptr)
{
 int ret;
 ret = (int)(*(int *)((char *)this_ptr + 0x1c));
 return ret;
}

// Function: FUN_000111d0 @ 0x111d0
int FUN_000111d0(void *this_ptr, void *param_2, void *param_3)
{
 int ret;
 ret = (int)(*(int *)((char *)this_ptr + 0x20));
 return ret;
}

// Function: FUN_000111e0 @ 0x111e0
int FUN_000111e0(void *this_ptr,int param_2)
{
 int ret;
 ret = (int)(*(int *)((char *)this_ptr + 0x24));
 return ret;
}

// Function: FUN_000111f0 @ 0x111f0
int FUN_000111f0(void *this_ptr)
{
 int ret;
 ret = (int)(*(int *)((char *)this_ptr + 0x28));
 return ret;
}

// Function: FUN_00011200 @ 0x11200
int FUN_00011200(void *this_ptr)
{
 int ret;
 ret = (int)(*(int *)((char *)this_ptr + 0x2c));
 return ret;
}

// Function: FUN_00011210 @ 0x11210
int FUN_00011210(void *this_ptr)
{
 int ret;
 ret = (int)(*(int *)((char *)this_ptr + 0x30));
 return ret;
}

// Function: FUN_00011220 @ 0x11220
int FUN_00011220(void *this_ptr)
{
 int ret;
 ret = (int)(*(int *)((char *)this_ptr + 0x34));
 return ret;
}

// Function: FUN_00011230 @ 0x11230
int FUN_00011230(void *this_ptr, void *param_2, void *param_3, int param_4)
{
 int ret;
 ret = (int)(*(int *)((char *)this_ptr + 0x38));
 return ret;
}

// Function: FUN_00011240 @ 0x11240
int FUN_00011240(void *this_ptr)
{
 int ret;
 ret = (int)(*(int *)((char *)this_ptr + 0x3c));
 return ret;
}

// Function: FUN_00011250 @ 0x11250
int FUN_00011250(void *this_ptr)
{
 int ret;
 ret = (int)(*(int *)((char *)this_ptr + 0x40));
 return ret;
}

// Function: FUN_00011260 @ 0x11260
int FUN_00011260(void *this_ptr)
{
 int ret;
 ret = (int)(*(int *)((char *)this_ptr + 0x44));
 return ret;
}

// Function: FUN_00011270 @ 0x11270
int FUN_00011270(void *this_ptr)
{
 int ret;
 ret = (int)(*(int *)((char *)this_ptr + 0x48));
 return ret;
}

// Function: FUN_00011280 @ 0x11280
int FUN_00011280(void *this_ptr)
{
 int ret;
 ret = (int)(*(int *)((char *)this_ptr + 0x4c));
 return ret;
}

// Function: FUN_00011290 @ 0x11290
unsigned long long FUN_00011290(void *this_ptr)
{
 unsigned long long ret;
 ret = (unsigned long long)(*(unsigned long long *)((char *)this_ptr + 0x50));
 return ret;
}

// Function: FUN_000112a0 @ 0x112a0
unsigned int FUN_000112a0(void *this_ptr)
{
 unsigned int ret;
 ret = (unsigned int)(*(unsigned int *)((char *)this_ptr + 0x54));
 return ret;
}

// Function: _start @ 0x112b0
void _start(unsigned int param_1,unsigned int param_2)
{
 char auStack_4 [4];
 int stack_param;
 __libc_start_main(main,param_2,&stack_param,0,0,param_1,auStack_4);
 do {
 } while( true );
}

// Function: __i686.get_pc_thunk.bx @ 0x112dc
void __i686_get_pc_thunk_bx(void)
{
 return;
}

// Function: __x86.get_pc_thunk.bx @ 0x112e0
void __x86_get_pc_thunk_bx(void)
{
 return;
}

// Function: deregister_tm_clones @ 0x112f0
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x11330
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x11380
void __do_global_dtors_aux(void)
{
 unsigned int uVar1;
 int unaff_EDI;
 union { void *p; void (*f)(void); } _u;
 __x86_get_pc_thunk_di();
 if (*(char *)(unaff_EDI + 0x3c8b) == '\0') {
 if (*(int *)(unaff_EDI + 0x3c5b) != 0) {
 FUN_00011170((void *)(*(unsigned int *)(unaff_EDI + 0x3c77)));
 }
 uVar1 = *(unsigned int *)(unaff_EDI + 0x3c8f);
 while (uVar1 < ((unaff_EDI + 0x393b) - (unaff_EDI + 0x3937) >> 2) - 1U) {
 *(unsigned int *)(unaff_EDI + 0x3c8f) = uVar1 + 1;
   _u.p = (void *)((char *)unaff_EDI + 0x3937 + (uVar1 + 1) * 4);
   _u.f();
 uVar1 = *(unsigned int *)(unaff_EDI + 0x3c8f);
 }
 deregister_tm_clones();
 *(char *)(unaff_EDI + 0x3c8b) = 1;
 }
 return;
}

// Function: __x86.get_pc_thunk.dx @ 0x11419
void __x86_get_pc_thunk_dx(void)
{
 return;
}

// Function: __x86.get_pc_thunk.di @ 0x1141d
void __x86_get_pc_thunk_di(void)
{
 return;
}

// Function: test_cpp_member_func @ 0x11421
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
 iVar1 = FUN_000111c0(&local_30);
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return iVar1 + 0x125c;
 }
 __stack_chk_fail_local();
 return 0;
}

// Function: test_cpp_constructor @ 0x114b5
int test_cpp_constructor(void)
{
 int iVar1;
 int iVar2;
 iVar1 = FUN_00011210((void *)0x14);
 *(unsigned int *)(iVar1 + 4) = 10;
 *(unsigned int *)(iVar1 + 8) = 0x14;
 *(unsigned int *)(iVar1 + 0xc) = 0x1e;
 *(unsigned int *)(iVar1 + 0x10) = 0x28;
 iVar2 = LifecycleClass_instance_count + 0x15;
 LifecycleClass_instance_count = LifecycleClass_instance_count + 1;
 FUN_00011240((void *)iVar1);
 LifecycleClass_instance_count = LifecycleClass_instance_count + -1;
 return LifecycleClass_instance_count * 1000 + iVar2;
}

// Function: call_virtual_func @ 0x11523
void call_virtual_func(Base *param_1,int param_2)
{
 (*(void (**)(Base *, int))(*(void **)param_1))(param_1, param_2);
 return;
}

// Function: test_cpp_virtual_func @ 0x1153b
int test_cpp_virtual_func(void)
{
 int iVar1;
 int iVar2;
 int in_GS_OFFSET;
 char **local_1c;
 char **local_18;
 unsigned int local_14;
 int local_10;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 local_1c = &PTR_virtual_func_00014cd4;
 local_18 = &PTR_virtual_func_00014cec;
 local_14 = 3;
 call_virtual_func((Base *)&local_1c,5);
 call_virtual_func((Base *)&local_18,5);
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return 0x15;
 }
 __stack_chk_fail_local();
 return 0;
}

// Function: test_cpp_multiple_inheritance @ 0x115b1
unsigned int test_cpp_multiple_inheritance(void)
{
 return 0x47;
}

// Function: test_cpp_diamond_inheritance @ 0x115bb
int test_cpp_diamond_inheritance(void)
{
 int iVar1;
 int iVar2;
 int in_GS_OFFSET;
 unsigned int local_18;
 unsigned int local_14;
 int local_10;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 local_18 = 0x14dc0;
 local_14 = 0x32;
 iVar1 = DiamondDerived_func((DiamondDerived *)&local_18);
 local_14 = 100;
 iVar2 = DiamondDerived_func((DiamondDerived *)&local_18);
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return iVar2 + iVar1;
 }
 __stack_chk_fail_local();
}

// Function: test_cpp_operator_overload @ 0x11634
unsigned int test_cpp_operator_overload(void)
{
 return 0x16;
}

// Function: test_cpp_template_func @ 0x1163e
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
}

// Function: test_cpp_template_class @ 0x116e2
unsigned int test_cpp_template_class(void)
{
 return 0x10;
}

// Function: test_cpp_lambda @ 0x116ec
unsigned int test_cpp_lambda(void)
{
 return 0x55;
}

// Function: test_cpp_exception @ 0x116f6
int test_cpp_exception(void)
{
 unsigned int uVar1;
 int *piVar2;
 int iVar3;
 char **ppuVar4;
 char **ppuVar5;
 char *puVar6;
 int iVar7;
 unsigned long long uVar8;
 char *apuStack_60 [11];
 unsigned int uStack_34;
 unsigned int local_24;
 int local_20;
 unsigned int uVar9;
 apuStack_60[9] = (char *)0x4;
 apuStack_60[9] = (char *)FUN_000111b0((void *)0);
 *(unsigned int *)apuStack_60[9] = 0x2a;
 uStack_34 = 0;
   apuStack_60[10] = (char *)&RTTIBase_typeinfo;
 ppuVar5 = apuStack_60 + 9;
 uVar8 = FUN_00011290((void *)0);
 uVar1 = (unsigned int)uVar8;
 if ((int)((unsigned long long)uVar8 >> 0x20) == 1) goto LAB_00011750;
 local_20 = 0;
 ppuVar4 = apuStack_60 + 9;
 for (; (int)((unsigned long long)uVar8 >> 0x20) != 1; uVar8 = CONCAT44(local_24,(unsigned int)uVar8)) {
 ppuVar5 = (char **)((int)ppuVar4 + -0x10);
 *(int *)((int)ppuVar4 + -0x10) = (int)uVar8;
 *(unsigned int *)((int)ppuVar4 + -0x14) = 0x11750;
 uVar1 = FUN_000112a0((void *)0);
LAB_00011750:
 *(unsigned int *)((int)ppuVar5 + -0x10) = uVar1;
 *(unsigned int *)((int)ppuVar5 + -0x14) = 0x1175b;
 piVar2 = (int *)FUN_000111a0((void *)0);
 local_20 = *piVar2;
 *(unsigned int *)((int)ppuVar5 + -4) = 0x11768;
 uVar8 = FUN_00011250((void *)0);
 local_24 = (unsigned int)((unsigned long long)uVar8 >> 0x20);
 *(unsigned int *)((int)ppuVar5 + -4) = 0x11778;
 FUN_00011280((void *)0);
 ppuVar4 = ppuVar5;
 }
 puVar6 = (char *)((int)ppuVar4 + -0x10);
 *(int *)((int)ppuVar4 + -0x10) = (int)uVar8;
 *(unsigned int *)((int)ppuVar4 + -0x14) = 0x11788;
 piVar2 = (int *)FUN_000111a0((void *)0);
 iVar7 = *piVar2 * 2 + local_20;
 *(unsigned int *)((int)ppuVar4 + -0x14) = 0x11794;
 FUN_00011280((void *)0);
 *(unsigned int *)((int)ppuVar4 + -0x10) = 1;
 *(unsigned int *)((int)ppuVar4 + -0x14) = 0x117a0;
 uVar1 = FUN_000111b0((void *)0);
 *(unsigned int *)((int)ppuVar4 + -8) = 0;
 *(void **)((int)ppuVar4 + -0xc) = (void *)0;
 *(unsigned int *)((int)ppuVar4 + -0x10) = uVar1;
 *(unsigned int *)((int)ppuVar4 + -0x14) = 0x117b2;
 uVar8 = FUN_00011290((void *)0);
 iVar3 = (int)((unsigned long long)uVar8 >> 0x20);
 uVar1 = (unsigned int)uVar8;
 if (iVar3 != 2) {
 if (iVar3 == 3) {
 *(unsigned int *)((int)ppuVar4 + -0x20) = uVar1;
 *(unsigned int *)((int)ppuVar4 + -0x24) = 0x117f6;
 FUN_000111a0((void *)0);
 *(unsigned int *)((int)ppuVar4 + -0x24) = 0x11801;
 FUN_00011280((void *)0);
 return iVar7 + 200;
 }
 puVar6 = (char *)((int)ppuVar4 + -0x20);
 *(unsigned int *)((int)ppuVar4 + -0x20) = uVar1;
 *(unsigned int *)((int)ppuVar4 + -0x24) = 0x117cb;
 uVar1 = FUN_000112a0((void *)0);
 }
 *(unsigned int *)((int)puVar6 + -0x10) = uVar1;
 *(unsigned int *)((int)puVar6 + -0x14) = 0x117d6;
 FUN_000111a0((void *)0);
 *(unsigned int *)((int)puVar6 + -0x14) = 0x117de;
 FUN_00011280((void *)0);
 return iVar7 + 100;
}

// Function: test_cpp_smart_ptr @ 0x11806
unsigned int test_cpp_smart_ptr(void)
{
 return 0x2bf;
}

// Function: test_cpp_rtti @ 0x11810
int test_cpp_rtti(void)
{
 int iVar1;
 char *pcVar2;
 int *piVar3;
 int *piVar4;
 int iVar5;
 int iVar6;
 unsigned int uVar7;
 piVar3 = (int *)FUN_00011190((void *)4);
 *piVar3 = (int)&PTR__RTTIDerivedA_00014dd4;
 piVar4 = (int *)FUN_00011190((void *)4);
 *piVar4 = (int)&PTR__RTTIDerivedB_00014de8;
 iVar1 = *piVar3;
 pcVar2 = *(char **)(*(int *)(iVar1 + -4) + 4);
 uVar7 = 10;
 if ((pcVar2 != "12RTTIDerivedA") && (uVar7 = 0, *pcVar2 != '*')) {
 iVar5 = FUN_000111f0(pcVar2);
   uVar7 = -(unsigned int)(iVar5 == 0) & 10;
 }
 iVar6 = FUN_00011230(piVar3,(void *)&RTTIBase_typeinfo,(void *)&RTTIDerivedA_typeinfo,0);
 iVar5 = uVar7 + 0x14;
 if (iVar6 != 0) {
 iVar5 = uVar7 + 0x78;
 }
 iVar6 = FUN_00011230(piVar4,(void *)&RTTIBase_typeinfo,(void *)&RTTIDerivedB_typeinfo,0);
 if (iVar6 != 0) {
 iVar5 = iVar5 + 200;
 }
 iVar6 = FUN_000111c0(pcVar2 + (*pcVar2 == '*'));
 ((void (*)(void *))(**(void ***)(iVar1 + 4)))(piVar3);
 ((void (*)(void *))(**(void ***)(*piVar4 + 4)))(piVar4);
 return iVar5 + iVar6;
}

// Function: test_cpp_oo_features @ 0x1193a
void test_cpp_oo_features(void)
{
 unsigned int uVar1;
 FUN_00011260(&DAT_00012018);
 uVar1 = test_cpp_member_func();
 FUN_00011180((void *)1,&DAT_0001203c,uVar1);
 uVar1 = test_cpp_constructor();
 FUN_00011180((void *)1,&DAT_0001205a,uVar1);
 uVar1 = test_cpp_virtual_func();
 FUN_00011180((void *)1,&DAT_00012076,uVar1);
 uVar1 = test_cpp_multiple_inheritance();
 FUN_00011180((void *)1,&DAT_00012092,uVar1);
 uVar1 = test_cpp_diamond_inheritance();
 FUN_00011180((void *)1,&DAT_000120ae,uVar1);
 FUN_00011180((void *)1,&DAT_000120cb,0x16);
 uVar1 = test_cpp_template_func();
 FUN_00011180((void *)1,&DAT_000120e7,uVar1);
 FUN_00011180((void *)1,&DAT_00012103,0x10);
 FUN_00011180((void *)1,&DAT_0001211f,0x55);
 uVar1 = test_cpp_exception();
 FUN_00011180((void *)1,&DAT_0001213b,uVar1);
 uVar1 = test_cpp_smart_ptr();
 FUN_00011180((void *)1,&DAT_00012158,uVar1);
 uVar1 = test_cpp_rtti();
 FUN_00011180((void *)1,&DAT_00012175,uVar1);
 return;
}

// Function: main @ 0x11a75
int main(void)
{
 test_cpp_oo_features();
 return 0;
}

// Function: _GLOBAL__sub_I_test_cpp_member_func @ 0x11a8b
void _GLOBAL__sub_I_test_cpp_member_func(void)
{
 FUN_00011270(&std_ioinit);
 FUN_000111d0((void *)std_ios_base_Init__Init,&std_ioinit,&__dso_handle);
 return;
}

// Function: Base_virtual_func @ 0x11ac8
int Base_virtual_func(Base *this_ptr,int param_1)
{
 return param_1 + 1;
}

// Function: Base_getName @ 0x11ad4
char * Base_getName(void)
{
 return (char *)&DAT_00012008;
}

// Function: Base__Base @ 0x11aea
void Base__Base(Base *this_ptr)
{
 return;
}

// Function: Derived_virtual_func @ 0x11af0
int Derived_virtual_func(void *this_ptr,int param_1)
{
 return param_1 * *(int *)((char *)this_ptr + 4);
}

// Function: Derived_getName @ 0x11b02
char * Derived_getName(void)
{
 return "Derived";
}

// Function: MultiDerived_funcA @ 0x11b18
unsigned int MultiDerived_funcA(void)
{
 return 0x1e;
}

// Function: MultiDerived_funcB @ 0x11b22
unsigned int MultiDerived_funcB(void)
{
 return 0x28;
}

// Function: MultiDerived_funcB_2 @ 0x11b2c
unsigned int MultiDerived_funcB_2(MultiDerived *this_ptr)
{
 return 0x28;
}

// Function: MiddleA_func @ 0x11b36
int MiddleA_func(MiddleA *this_ptr)
{
 return *(int *)((char *)this_ptr + *(int *)(*(int *)this_ptr + -0xc) + 4) + 0x96;
}

// Function: MiddleA_func_2 @ 0x11b4d
int MiddleA_func_2(MiddleA *this_ptr)
{
 return *(int *)((int)((char *)this_ptr + *(int *)(*(int *)this_ptr + -0xc)) +
 *(int *)(*(int *)((char *)this_ptr + *(int *)(*(int *)this_ptr + -0xc)) + -0xc) + 4) + 0x96;
}

// Function: MiddleB_func @ 0x11b6a
int MiddleB_func(MiddleB *this_ptr)
{
 return *(int *)((char *)this_ptr + *(int *)(*(int *)this_ptr + -0xc) + 4) + 200;
}

// Function: MiddleB_func_2 @ 0x11b81
int MiddleB_func_2(MiddleB *this_ptr)
{
 return *(int *)((int)((char *)this_ptr + *(int *)(*(int *)this_ptr + -0xc)) +
 *(int *)(*(int *)((char *)this_ptr + *(int *)(*(int *)this_ptr + -0xc)) + -0xc) + 4) + 200;
}

// Function: DiamondDerived_func @ 0x11b9e
int DiamondDerived_func(DiamondDerived *this_ptr)
{
 return *(int *)((char *)this_ptr + *(int *)(*(int *)this_ptr + -0xc) + 4) + 0xfa;
}

// Function: DiamondDerived_func_2 @ 0x11bb5
int DiamondDerived_func_2(DiamondDerived *this_ptr)
{
 return *(int *)((char *)this_ptr + *(int *)(*(int *)this_ptr + -0xc) +
 *(int *)(*(int *)((char *)this_ptr + *(int *)(*(int *)this_ptr + -0xc)) + -0xc) + 4) + 0xfa;
}

// Function: DiamondDerived_func_3 @ 0x11bd1
int DiamondDerived_func_3(DiamondDerived *this_ptr)
{
 return *(int *)((char *)this_ptr + *(int *)(*(int *)((char *)this_ptr + -8) + -0xc) + -4) + 0xfa;
}

// Function: RTTIDerivedA_getType @ 0x11bea
unsigned int RTTIDerivedA_getType(void)
{
 return 1;
}

// Function: RTTIDerivedB_getType @ 0x11bf4
unsigned int RTTIDerivedB_getType(void)
{
 return 2;
}

// Function: RTTIDerivedB__RTTIDerivedB_2 @ 0x11bfe
void RTTIDerivedB__RTTIDerivedB_2(RTTIDerivedB *this_ptr)
{
 return;
}

// Function: RTTIDerivedA__RTTIDerivedA_2 @ 0x11c04
void RTTIDerivedA__RTTIDerivedA_2(RTTIDerivedA *this_ptr)
{
 return;
}

// Function: DiamondDerived__DiamondDerived_6 @ 0x11c0a
void DiamondDerived__DiamondDerived_6(DiamondDerived *this_ptr)
{
 return;
}

// Function: DiamondDerived__DiamondDerived_2 @ 0x11c0f
void DiamondDerived__DiamondDerived_2(DiamondDerived *this_ptr)
{
 return;
}

// Function: DiamondDerived__DiamondDerived_3 @ 0x11c14
void DiamondDerived__DiamondDerived_3(DiamondDerived *this_ptr)
{
 return;
}

// Function: MultiDerived__MultiDerived_4 @ 0x11c1a
void MultiDerived__MultiDerived_4(MultiDerived *this_ptr)
{
 return;
}

// Function: MultiDerived__MultiDerived_5 @ 0x11c1f
void MultiDerived__MultiDerived_5(MultiDerived *this_ptr)
{
 return;
}

// Function: Derived__Derived_2 @ 0x11c24
void Derived__Derived_2(Derived *this_ptr)
{
 return;
}

// Function: Base__Base_2 @ 0x11c2a
void Base__Base_2(Base *this_ptr)
{
 FUN_000111e0(this_ptr,4);
 return;
}

// Function: Derived__Derived @ 0x11c4e
void Derived__Derived(Derived *this_ptr)
{
 FUN_000111e0(this_ptr,8);
 return;
}

// Function: MultiDerived__MultiDerived @ 0x11c72
void MultiDerived__MultiDerived(MultiDerived *this_ptr)
{
 FUN_000111e0(this_ptr,0x10);
 return;
}

// Function: MultiDerived__MultiDerived_3 @ 0x11c95
void MultiDerived__MultiDerived_3(MultiDerived *this_ptr)
{
 FUN_000111e0(this_ptr + -8,0x10);
 return;
}

// Function: RTTIDerivedA__RTTIDerivedA @ 0x11cbc
void RTTIDerivedA__RTTIDerivedA(RTTIDerivedA *this_ptr)
{
 FUN_000111e0(this_ptr,4);
 return;
}

// Function: RTTIDerivedB__RTTIDerivedB @ 0x11ce0
void RTTIDerivedB__RTTIDerivedB(RTTIDerivedB *this_ptr)
{
 FUN_000111e0(this_ptr,4);
 return;
}

// Function: DiamondDerived__DiamondDerived @ 0x11d04
void DiamondDerived__DiamondDerived(DiamondDerived *this_ptr)
{
 FUN_000111e0(this_ptr,0x18);
 return;
}

// Function: DiamondDerived__DiamondDerived_4 @ 0x11d27
void DiamondDerived__DiamondDerived_4(DiamondDerived *this_ptr)
{
 FUN_000111e0(this_ptr + *(int *)(*(int *)this_ptr + -0x10),0x18);
 return;
}

// Function: DiamondDerived__DiamondDerived_5 @ 0x11d50
void DiamondDerived__DiamondDerived_5(DiamondDerived *this_ptr)
{
 FUN_000111e0(this_ptr + -8,0x18);
 return;
}

// Function: template_max<int> @ 0x11d77
int template_max_int_(int param_1,int param_2)
{
 if (param_1 < param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: template_max<double> @ 0x11d89
double template_max_double_(double param_1,double param_2)
{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: template_swap<int> @ 0x11d9c
void template_swap_int_(int *param_1,int *param_2)
{
 int iVar1;
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}

// Function: Container_int__Container @ 0x11db4
void Container_int__Container(Container_int_ *this_ptr)
{
 *(unsigned int *)((char *)this_ptr + 0x28) = 0;
 return;
}

// Function: Container_int__push @ 0x11dc4
void Container_int__push(Container_int_ *this_ptr,int param_1)
{
 int iVar1;
 iVar1 = *(int *)((char *)this_ptr + 0x28);
 if (iVar1 < 10) {
 *(int *)((char *)this_ptr + 0x28) = iVar1 + 1;
 *(int *)((char *)this_ptr + iVar1 * 4) = param_1;
 }
 return;
}

// Function: Container_int__get @ 0x11de2
unsigned int Container_int__get(Container_int_ *this_ptr,int param_1)
{
 unsigned int uVar1;
 uVar1 = 0;
 if ((-1 < param_1) && (*(int *)((char *)this_ptr + 0x28) != param_1 && param_1 <= *(int *)((char *)this_ptr + 0x28))) {
 uVar1 = *(unsigned int *)((char *)this_ptr + param_1 * 4);
 }
 return uVar1;
}

// Function: Container_int__getSize @ 0x11e02
unsigned int Container_int__getSize(Container_int_ *this_ptr)
{
 return *(unsigned int *)((char *)this_ptr + 0x28);
}

// Function: Container_double__Container @ 0x11e0e
void Container_double__Container(Container_double_ *this_ptr)
{
 *(unsigned int *)((char *)this_ptr + 0x50) = 0;
 return;
}

// Function: Container_double__push @ 0x11e1e
void Container_double__push(Container_double_ *this_ptr,double param_1)
{
 int iVar1;
 iVar1 = *(int *)((char *)this_ptr + 0x50);
 if (iVar1 < 10) {
 *(int *)((char *)this_ptr + 0x50) = iVar1 + 1;
 *(double *)((char *)this_ptr + iVar1 * 8) = param_1;
 }
 return;
}

// Function: Container_double__get @ 0x11e40
long double Container_double__get(Container_double_ *this_ptr,int param_1)
{
 if (param_1 < 0) {
 return (long double)0;
 }
 if (*(int *)((char *)this_ptr + 0x50) == param_1 || *(int *)((char *)this_ptr + 0x50) < param_1) {
 return (long double)0;
 }
 return (long double)*(double *)((char *)this_ptr + param_1 * 8);
}

// Function: Container_double__getSize @ 0x11e60
unsigned int Container_double__getSize(Container_double_ *this_ptr)
{
 return *(unsigned int *)((char *)this_ptr + 0x50);
}

// Function: __x86.get_pc_thunk.ax @ 0x11e6c
void __x86_get_pc_thunk_ax(void)
{
 return;
}

// Function: __x86.get_pc_thunk.si @ 0x11e70
void __x86_get_pc_thunk_si(void)
{
 return;
}

// Function: __stack_chk_fail_local @ 0x11e80
void __stack_chk_fail_local(void)
{
 FUN_00011220((void *)0);
 return;
}

// Function: __do_global_ctors_aux @ 0x11ea0
void __do_global_ctors_aux(void)
{
 return;
}

// Function: _fini @ 0x11eec
void _fini(void)
{
 __do_global_dtors_aux();
 return;
}

