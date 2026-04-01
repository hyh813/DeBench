/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;
typedef unsigned int uint;
typedef unsigned char byte;

/* Global variables */
unsigned long long handle1_1 = 0;

/* External function declarations */
extern int __libc_start_main(int (*main)(void), int argc, void *ubp_start, void (*init)(void), void (*fini)(void), void (*rtld_fini)(void), void (*stack_end));
extern void __cxa_finalize(void);
extern void __stack_chk_fail(void);
extern int puts(const char *s);
extern int __printf_chk(int flag, const char *format, ...);
extern size_t strlen(const char *s);
unsigned long long handle2_0 = 0;
int completed_0 = 0;
char DAT_00102004[] = "Calling Convention Tests";
char DAT_001020c5[] = "VARARGS-L1-01: %d\n";
char DAT_001020ed[] = "NOARGS-L1-01: %d\n";
char DAT_0010210f[] = "MANYARGS-L1-01: %d\n";
char DAT_00102136[] = "test";
char DAT_0010213b[] = "MIXED-L1-01: %d\n";
char DAT_00102163[] = "STRUCTBYVAL-L1-01: %d\n";
char DAT_0010218f[] = "STACK-L1-01: %d\n";
char DAT_001021bc[] = "abc";
char DAT_001021c0[] = "def";
char DAT_001021c4[] = "ghi";
char DAT_001021c8[] = "Parameter Passing Tests";
char DAT_001022a4[] = "Return Value Tests";
char DAT_001022c2[] = "RET-L1-01: %d\n";
char DAT_001022de[] = "RET-L1-02: %d\n";
char DAT_001022fa[] = "RET-L1-03: %d\n";
char DAT_00102315[] = "RET-L1-04: %d\n";
char DAT_00102332[] = "RET-L1-05: %d\n";
char DAT_0010234e[] = "RET-L1-06: %d\n";
char DAT_0010236b[] = "RET-L1-07: %d\n";
char DAT_00102387[] = "RET-L1-08: %d\n";
char DAT_001023a3[] = "RET-L1-09: %d\n";

// Decompiled by BinaryAI
// SHA256: 39b81bcdf32b68cc0d463d4ae9a7b984870edd9a51f76a75e65ac1a8f8952c1a



// Function: FUN_00101020 @ 0x101020
static void FUN_00101020(void)
{
 return;
}











// Forward declarations
static void test_calling_conventions(void);
static void test_parameter_passing(void);
static void test_return_values(void);
static int varargs_func(int param_1,unsigned long long param_2,unsigned long long param_3,unsigned long long param_4,
 unsigned long long param_5,unsigned long long param_6);
static int param_varargs(int param_1,unsigned long long param_2,unsigned long long param_3,unsigned long long param_4,
 unsigned long long param_5,unsigned long long param_6);
static int func_mixed_args(double param_1,int param_2,char *param_3,long param_4);
static int param_ptr_array(long param_1,int param_2);
static int param_func_ptr(void *param_1,unsigned int param_2);
static int call_struct_byval(void);
static void deregister_tm_clones(void);
static void register_tm_clones(void);
static void __do_global_dtors_aux(void);
static int func_a(int param_1);
static int func_b(int param_1);
static int callback_func(int param_1);
static int cdecl_func(int param_1,int param_2);
static unsigned long long call_cdecl(void);
static int stdcall_func(int param_1,int param_2);
static unsigned long long call_stdcall(void);
static int fastcall_func(int param_1,int param_2,int param_3);
static unsigned long long call_fastcall(void);
static unsigned long long call_thiscall(void);
static int arm_aapcs_func(int param_1,int param_2,int param_3,int param_4,int param_5);
static unsigned long long call_arm_aapcs(void);
static int mips_func(int param_1,int param_2,int param_3,int param_4);
static unsigned long long call_mips(void);
static int amd64_sysv_func(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6);
static unsigned long long call_amd64_sysv(void);
static int ms_x64_func(int param_1,int param_2,int param_3,int param_4,int param_5);
static unsigned long long call_ms_x64(void);
static int vectorcall_func(int param_1,int param_2,int param_3,int param_4);
static unsigned long long call_vectorcall(void);
static unsigned long long mixed_conventions_test(void);
static unsigned long long func_no_args(void);
static int func_many_args(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
 int param_7,int param_8);
static long func_struct_byval(void);
static int func_struct_byptr(int *param_1);
static int param_by_value_int(int param_1);
static unsigned long long call_by_value_int(void);
static unsigned long long param_by_value_ptr(int *param_1);
static unsigned long long call_by_value_ptr(void);
static unsigned long long param_array_decay(void);
static unsigned long long call_array_decay(void);
static int param_string(char *param_1);
static unsigned long long call_string_param(void);
static void call_ptr_array(void);
static void call_varargs_param(void);
static void call_func_ptr_param(void);
static unsigned long long param_double_ptr(long *param_1,unsigned int param_2);
static unsigned long long call_double_ptr(void);
static int param_complex_cast(int *param_1,int param_2);
static unsigned long long call_complex_cast(void);
static int param_struct_byval(void);
static int param_order_dep(int param_1,int param_2);
static unsigned long long call_order_dep(void);
static int ret_basic_type(int param_1);
static unsigned long long call_ret_basic(void);
static long ret_pointer(long param_1);
static unsigned long long call_ret_pointer(void);
static unsigned long ret_small_struct(uint param_1,long param_2);
static unsigned long long call_ret_small_struct(void);
static void ret_large_struct(int *param_1,int param_2);
static int call_ret_large_struct(void);
static void * ret_func_ptr(int param_1);
static unsigned long long call_ret_func_ptr(void);
static unsigned long long * ret_opaque_handle(int param_1);
static unsigned int call_ret_opaque(void);
static int ret_complex_expr(int param_1,int param_2,int param_3);
static unsigned long long call_ret_complex_expr(void);
static int ret_multi_branch(uint param_1);
static unsigned long long call_ret_multi_branch(void);
static void ret_void(int param_1,int *param_2);
static unsigned long long call_ret_void(void);

// Function: main @ 0x1010c0
int main(void)
{
 test_calling_conventions();
 test_parameter_passing();
 test_return_values();
 return 0;
}



// Function: deregister_tm_clones @ 0x101110
static void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x101140
static void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x101180
static void __do_global_dtors_aux(void)
{
 if (completed_0 != '\0') {
 return;
 }
 __cxa_finalize();
 deregister_tm_clones();
 completed_0 = 1;
 return;
}

// Function: func_a @ 0x1011c9
static int func_a(int param_1)
{
 return param_1 + 10;
}

// Function: func_b @ 0x1011d1
static int func_b(int param_1)
{
 return param_1 * 2;
}

// Function: callback_func @ 0x1011d9
static int callback_func(int param_1)
{
 return param_1 * 2;
}

// Function: cdecl_func @ 0x1011e1
static int cdecl_func(int param_1,int param_2)
{
 return param_1 + param_2;
}

// Function: call_cdecl @ 0x1011e9
static unsigned long long call_cdecl(void)
{
 return 0xf;
}

// Function: stdcall_func @ 0x1011f3
static int stdcall_func(int param_1,int param_2)
{
 return param_1 * param_2;
}

// Function: call_stdcall @ 0x1011fd
static unsigned long long call_stdcall(void)
{
 return 0x32;
}

// Function: fastcall_func @ 0x101207
static int fastcall_func(int param_1,int param_2,int param_3)
{
 return param_1 + param_2 + param_3;
}

// Function: call_fastcall @ 0x101211
static unsigned long long call_fastcall(void)
{
 return 6;
}

// Function: call_thiscall @ 0x10121b
static unsigned long long call_thiscall(void)
{
 return 0xf;
}

// Function: arm_aapcs_func @ 0x101225
static int arm_aapcs_func(int param_1,int param_2,int param_3,int param_4,int param_5)
{
 return param_1 + param_2 + param_3 + param_4 + param_5;
}

// Function: call_arm_aapcs @ 0x101234
static unsigned long long call_arm_aapcs(void)
{
 return 0xf;
}

// Function: mips_func @ 0x10123e
static int mips_func(int param_1,int param_2,int param_3,int param_4)
{
 return param_1 + param_2 + param_3 + param_4;
}

// Function: call_mips @ 0x10124a
static unsigned long long call_mips(void)
{
 return 100;
}

// Function: amd64_sysv_func @ 0x101254
static int amd64_sysv_func(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)
{
 return param_1 + param_2 + param_3 + param_4 + param_5 + param_6;
}

// Function: call_amd64_sysv @ 0x101266
static unsigned long long call_amd64_sysv(void)
{
 return 0x15;
}

// Function: ms_x64_func @ 0x101270
static int ms_x64_func(int param_1,int param_2,int param_3,int param_4,int param_5)
{
 return param_1 + param_2 + param_3 + param_4 + param_5;
}

// Function: call_ms_x64 @ 0x10127f
static unsigned long long call_ms_x64(void)
{
 return 0xf;
}

// Function: vectorcall_func @ 0x101289
static int vectorcall_func(int param_1,int param_2,int param_3,int param_4)
{
 return param_1 + param_2 + param_3 + param_4;
}

// Function: call_vectorcall @ 0x101295
static unsigned long long call_vectorcall(void)
{
 return 10;
}

// Function: mixed_conventions_test @ 0x10129f
static unsigned long long mixed_conventions_test(void)
{
 return 0x21;
}

// Function: varargs_func @ 0x1012a9
static int varargs_func(int param_1,unsigned long long param_2,unsigned long long param_3,unsigned long long param_4,
 unsigned long long param_5,unsigned long long param_6)
{
 (void)param_1;
 (void)param_2;
 (void)param_3;
 (void)param_4;
 (void)param_5;
 (void)param_6;
 return 15;
}

// Function: func_no_args @ 0x101345
static unsigned long long func_no_args(void)
{
 return 0x2a;
}

// Function: func_many_args @ 0x10134f
static int func_many_args(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
 int param_7,int param_8)
{
 return param_1 + param_2 + param_3 + param_4 + param_5 + param_6 + param_7 + param_8;
}

// Function: func_mixed_args @ 0x101369
static int func_mixed_args(double param_1,int param_2,char *param_3,long param_4)
{
 int iVar1;
 size_t sVar2;
 iVar1 = 0;
 if (param_3 != (char *)0x0) {
 sVar2 = strlen(param_3);
 iVar1 = (int)sVar2;
 }
 return (int)((double)(iVar1 + param_2) + param_1 + (double)param_4);
}

// Function: func_struct_byval @ 0x1013ad
static long func_struct_byval(void)
{
 long lVar1;
 long lVar2;
 long local_88 [16];
 lVar2 = 0;
 lVar1 = 0;
 do {
 lVar1 = lVar1 + local_88[lVar2];
 lVar2 = lVar2 + 1;
 } while (lVar2 != 0x10);
 return lVar1;
}

// Function: func_struct_byptr @ 0x1013c4
static int func_struct_byptr(int *param_1)
{
 int iVar1;
 iVar1 = -1;
 if (param_1 != (int *)0x0) {
 iVar1 = *param_1 * param_1[1];
 }
 return iVar1;
}

// Function: test_calling_conventions @ 0x1013d7
static void test_calling_conventions(void)
{
 unsigned int uVar1;
 long lVar2;
 long lVar3;
 long lVar4;
 long *plVar5;
 long *plVar6;
 long in_FS_OFFSET;
 byte bVar7;
 long alStack_118 [17];
 long local_90 [16];
 long local_10;
 bVar7 = 0;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 puts(&DAT_00102004);
 __printf_chk(1,"CALL-L1-01: %d\n",0xf);
 __printf_chk(1,"CALL-L1-02: %d\n",0x32);
 __printf_chk(1,"CALL-L1-03: %d\n",6);
 __printf_chk(1,"CALL-L1-04: %d\n",0xf);
 __printf_chk(1,"CALL-L1-05: %d\n",0xf);
 __printf_chk(1,"CALL-L1-06: %d\n",100);
 __printf_chk(1,"CALL-L1-07: %d\n",0x15);
 __printf_chk(1,"CALL-L1-08: %d\n",0xf);
 __printf_chk(1,"CALL-L1-09: %d\n",10);
 __printf_chk(1,"CALL-L1-10: %d\n",0x21);
 uVar1 = varargs_func(5,1,2,3,4,5);
 __printf_chk(1,&DAT_001020c5,uVar1);
 __printf_chk(1,&DAT_001020ed,0x2a);
 __printf_chk(1,&DAT_0010210f,0x24);
 uVar1 = func_mixed_args(0x40091eb851eb851f,10,&DAT_00102136,100);
 __printf_chk(1,&DAT_0010213b,uVar1);
 lVar2 = 1;
 do {
 alStack_118[lVar2] = lVar2;
 lVar2 = lVar2 + 1;
 } while (lVar2 != 0x11);
 lVar2 = 0;
 lVar4 = 0;
 plVar5 = alStack_118 + 1;
 plVar6 = local_90;
 for (lVar3 = 0x20; lVar3 != 0; lVar3 = lVar3 + -1) {
 *(unsigned int *)plVar6 = *(unsigned int *)plVar5;
 plVar5 = (long *)((long)plVar5 + ((unsigned long)bVar7 * -2 + 1) * 4);
 plVar6 = (long *)((long)plVar6 + (unsigned long)bVar7 * -8 + 4);
 }
 do {
 lVar4 = lVar4 + local_90[lVar2];
 lVar2 = lVar2 + 1;
 } while (lVar2 != 0x10);
 __printf_chk(1,&DAT_00102163,lVar4);
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 __printf_chk(1,&DAT_0010218f,0x32);
 return;
 }
 __stack_chk_fail();
}

// Function: param_by_value_int @ 0x101619
static int param_by_value_int(int param_1)
{
 return param_1 * 2;
}

// Function: call_by_value_int @ 0x101621
static unsigned long long call_by_value_int(void)
{
 return 0xf;
}

// Function: param_by_value_ptr @ 0x10162b
static unsigned long long param_by_value_ptr(int *param_1)
{
 *param_1 = *param_1 << 1;
 return 1;
}

// Function: call_by_value_ptr @ 0x101642
static unsigned long long call_by_value_ptr(void)
{
 return 0xb;
}

// Function: param_array_decay @ 0x10164c
static unsigned long long param_array_decay(void)
{
 return 8;
}

// Function: call_array_decay @ 0x101656
static unsigned long long call_array_decay(void)
{
 return 8;
}

// Function: param_string @ 0x101660
static int param_string(char *param_1)
{
 return (int)*param_1 + (int)param_1[1];
}

// Function: call_string_param @ 0x10166e
static unsigned long long call_string_param(void)
{
 return 0xad;
}

// Function: param_ptr_array @ 0x101678
static int param_ptr_array(long param_1,int param_2)
{
 long lVar1;
 int iVar2;
 iVar2 = 0;
 for (lVar1 = 0; (int)lVar1 < param_2; lVar1 = lVar1 + 1) {
 iVar2 = iVar2 + **(char **)(param_1 + lVar1 * 8);
 }
 return iVar2;
}

// Function: call_ptr_array @ 0x101698
static void call_ptr_array(void)
{
 long in_FS_OFFSET;
 char *local_28;
 char *local_20;
 char *local_18;
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_28 = &DAT_001021bc;
 local_20 = &DAT_001021c0;
 local_18 = &DAT_001021c4;
 param_ptr_array(&local_28,3);
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return;
}

// Function: param_varargs @ 0x1016f8
static int param_varargs(int param_1,unsigned long long param_2,unsigned long long param_3,unsigned long long param_4,
 unsigned long long param_5,unsigned long long param_6)
{
 (void)param_1;
 (void)param_2;
 (void)param_3;
 (void)param_4;
 (void)param_5;
 (void)param_6;
 return 0;
}

// Function: call_varargs_param @ 0x101794
static void call_varargs_param(void)
{
 param_varargs(4,10,0x14,0x1e,0x28,0);
 return;
}

// Function: param_func_ptr @ 0x1017b9
static int param_func_ptr(void *param_1,unsigned int param_2)
{
 int iVar1;
 iVar1 = ((int (*)(unsigned int))param_1)(param_2);
 return iVar1 + 10;
}

// Function: call_func_ptr_param @ 0x1017cb
static void call_func_ptr_param(void)
{
 param_func_ptr(callback_func,5);
 return;
}

// Function: param_double_ptr @ 0x1017dd
static unsigned long long param_double_ptr(long *param_1,unsigned int param_2)
{
 unsigned long long uVar1;
 uVar1 = 0xffffffff;
 if ((param_1 != (long *)0x0) && (uVar1 = 0xffffffff, (unsigned int *)*param_1 != (unsigned int *)0x0))
 {
 *(unsigned int *)*param_1 = param_2;
 uVar1 = 1;
 *param_1 = 0;
 }
 return uVar1;
}

// Function: call_double_ptr @ 0x101800
static unsigned long long call_double_ptr(void)
{
 return 0x15;
}

// Function: param_complex_cast @ 0x10180a
static int param_complex_cast(int *param_1,int param_2)
{
 int iVar1;
 if (param_2 == 0) {
 return *param_1;
 }
 iVar1 = -1;
 if (param_2 == 1) {
 iVar1 = param_1[1] + *param_1;
 }
 return iVar1;
}

// Function: call_complex_cast @ 0x101822
static unsigned long long call_complex_cast(void)
{
 return 0x12345678;
}

// Function: param_struct_byval @ 0x10182c
static int param_struct_byval(void)
{
 int param_7;
 unsigned long long in_stack_00000040;
 return (int)(in_stack_00000040 >> 32) + param_7;
}

// Function: call_struct_byval @ 0x101839
static int call_struct_byval(void)
{
 long lVar1;
 long in_FS_OFFSET;
 int local_50 [16];
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 lVar1 = 0;
 do {
 local_50[lVar1] = (int)lVar1;
 lVar1 = lVar1 + 1;
 } while (lVar1 != 0x10);
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return local_50[15] + local_50[0];
}

// Function: param_order_dep @ 0x101880
static int param_order_dep(int param_1,int param_2)
{
 return param_1 + param_2;
}

// Function: call_order_dep @ 0x101888
static unsigned long long call_order_dep(void)
{
 return 4;
}

// Function: test_parameter_passing @ 0x101892
static void test_parameter_passing(void)
{
 unsigned int uVar1;
 puts(&DAT_001021c8);
 __printf_chk(1,"PARAM-L1-01: %d\n",0xf);
 __printf_chk(1,"PARAM-L1-02: %d\n",0xb);
 __printf_chk(1,"PARAM-L2-01: %d\n",8);
 __printf_chk(1,"PARAM-L2-02: %d\n",0xad);
 call_ptr_array();
 __printf_chk(1,"PARAM-L2-03: %d\n",0);
 call_varargs_param();
 __printf_chk(1,"PARAM-L2-04: %d\n",0);
 call_func_ptr_param();
 __printf_chk(1,"PARAM-L3-01: %d\n",0);
 __printf_chk(1,"PARAM-L3-02: %d\n",0x15);
 __printf_chk(1,"PARAM-L3-03: %d\n",0x12345678);
 uVar1 = call_struct_byval();
 __printf_chk(1,"PARAM-L3-04: %d\n",uVar1);
 __printf_chk(1,"PARAM-L3-05: %d\n",4);
 return;
}

// Function: ret_basic_type @ 0x1019bc
static int ret_basic_type(int param_1)
{
 return param_1 * 2;
}

// Function: call_ret_basic @ 0x1019c4
static unsigned long long call_ret_basic(void)
{
 return 0x2a;
}

// Function: ret_pointer @ 0x1019ce
static long ret_pointer(long param_1)
{
 return param_1 + 4;
}

// Function: call_ret_pointer @ 0x1019d7
static unsigned long long call_ret_pointer(void)
{
 return 0x14;
}

// Function: ret_small_struct @ 0x1019e1
static unsigned long ret_small_struct(uint param_1,long param_2)
{
 return (unsigned long)param_1 | param_2 << 0x20;
}

// Function: call_ret_small_struct @ 0x1019ef
static unsigned long long call_ret_small_struct(void)
{
 return 7;
}

// Function: ret_large_struct @ 0x1019f9
static void ret_large_struct(int *param_1,int param_2)
{
 long lVar1;
 int *piVar2;
 long in_FS_OFFSET;
 int local_50 [16];
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 lVar1 = 0;
 do {
 local_50[lVar1] = param_2 + (int)lVar1;
 lVar1 = lVar1 + 1;
 } while (lVar1 != 0x10);
 piVar2 = local_50;
 for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
 *param_1 = *piVar2;
 piVar2 = piVar2 + 1;
 param_1 = param_1 + 1;
 }
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return;
}

// Function: call_ret_large_struct @ 0x101a49
static int call_ret_large_struct(void)
{
 long in_FS_OFFSET;
 int local_50 [15];
 int local_14;
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 ret_large_struct(local_50,100);
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return local_14 + local_50[0];
}

// Function: ret_func_ptr @ 0x101a92
static void * ret_func_ptr(int param_1)
{
 void *pcVar1;
 pcVar1 = func_b;
 if (param_1 == 0) {
 pcVar1 = func_a;
 }
 return pcVar1;
}

// Function: call_ret_func_ptr @ 0x101aab
static unsigned long long call_ret_func_ptr(void)
{
 return 10;
}

// Function: ret_opaque_handle @ 0x101ab5
static unsigned long long * ret_opaque_handle(int param_1)
{
 unsigned long long *puVar1;
 puVar1 = (unsigned long long *)&handle1_1;
 if (param_1 != 0) {
 puVar1 = &handle2_0;
 }
 return puVar1;
}

// Function: call_ret_opaque @ 0x101ace
static unsigned int call_ret_opaque(void)
{
 return handle1_1;
}

// Function: ret_complex_expr @ 0x101ad9
static int ret_complex_expr(int param_1,int param_2,int param_3)
{
 int iVar1;
 iVar1 = param_3 + 10;
 if (param_2 < param_1) {
 iVar1 = param_3 * 2;
 }
 return iVar1;
}

// Function: call_ret_complex_expr @ 0x101ae8
static unsigned long long call_ret_complex_expr(void)
{
 return 0x28;
}

// Function: ret_multi_branch @ 0x101af2
static int ret_multi_branch(uint param_1)
{
 int iVar1;
 iVar1 = -1;
 if (param_1 < 3) {
 iVar1 = (param_1 + 1) * 10;
 }
 return iVar1;
}

// Function: call_ret_multi_branch @ 0x101b04
static unsigned long long call_ret_multi_branch(void)
{
 return 0x3c;
}

// Function: ret_void @ 0x101b0e
static void ret_void(int param_1,int *param_2)
{
 *param_2 = param_1 * 3;
 return;
}

// Function: call_ret_void @ 0x101b18
static unsigned long long call_ret_void(void)
{
 return 0x15;
}

// Function: test_return_values @ 0x101b22
static void test_return_values(void)
{
 unsigned int uVar1;
 puts(&DAT_001022a4);
 __printf_chk(1,&DAT_001022c2,0x2a);
 __printf_chk(1,&DAT_001022de,0x14);
 __printf_chk(1,&DAT_001022fa,7);
 uVar1 = call_ret_large_struct();
 __printf_chk(1,&DAT_00102315,uVar1);
 __printf_chk(1,&DAT_00102332,10);
 __printf_chk(1,&DAT_0010234e,handle1_1);
 __printf_chk(1,&DAT_0010236b,0x28);
 __printf_chk(1,&DAT_00102387,0x3c);
 __printf_chk(1,&DAT_001023a3,0x15);
 return;
}



