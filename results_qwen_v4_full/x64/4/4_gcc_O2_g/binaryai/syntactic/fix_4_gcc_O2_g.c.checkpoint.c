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

// Decompiled by BinaryAI
// SHA256: 5361f69293c824a80b55c0990c443c468553b2e29f988ecef4a72728ae3c0c46

#define true 1
#define false 0

// Global variables
unsigned long long handle1_1 = 0;
unsigned long long handle2_0 = 0;
int completed_0 = 0;
char DAT_00102008[] = "Calling Convention Tests:";
char DAT_00102030[] = "CALL-L2-01: %d\n";
char DAT_00102058[] = "CALL-L2-02: %d\n";
char DAT_00102080[] = "CALL-L2-03: %d\n";
char DAT_001020a8[] = "CALL-L2-04: %d\n";
char DAT_001020d0[] = "CALL-L3-01: %ld\n";
char DAT_00102100[] = "CALL-L3-02: %d\n";
char DAT_00102130[] = "Parameter Passing Tests:";
char DAT_001022ac[] = "Return Value Tests:";
char DAT_001022ca[] = "RET-L1-01: %d\n";
char DAT_001022e6[] = "RET-L1-02: %d\n";
char DAT_00102302[] = "RET-L1-03: %d\n";
char DAT_0010231d[] = "RET-L1-04: %d\n";
char DAT_0010233a[] = "RET-L2-01: %d\n";
char DAT_00102356[] = "RET-L2-02: %llu\n";
char DAT_00102373[] = "RET-L2-03: %d\n";
char DAT_0010238f[] = "RET-L2-04: %d\n";
char DAT_001023ab[] = "RET-L2-05: %d\n";

// External declarations
extern int __libc_start_main;
extern int puts(const char *s);
extern int __printf_chk(int flag, const char *format, ...);
extern size_t strlen(const char *s);
extern void __stack_chk_fail(void);

// Forward declarations
void test_calling_conventions(void);
void test_parameter_passing(void);
void test_return_values(void);

// Function: main @ 0x1010c0
unsigned long long main(void)
{
 test_calling_conventions();
 test_parameter_passing();
 test_return_values();
 return 0;
}









// Function: func_a @ 0x1011e0
static int func_a(int param_1)
{
 return param_1 + 10;
}

// Function: func_b @ 0x1011f0
static int func_b(int param_1)
{
 return param_1 * 2;
}

// Function: cdecl_func @ 0x101200
static int cdecl_func(int param_1,int param_2)
{
 return param_1 + param_2;
}

// Function: call_cdecl @ 0x101210
static unsigned long long call_cdecl(void)
{
 return 0xf;
}

// Function: stdcall_func @ 0x101220
static int stdcall_func(int param_1,int param_2)
{
 return param_1 * param_2;
}

// Function: call_stdcall @ 0x101230
static unsigned long long call_stdcall(void)
{
 return 0x32;
}

// Function: fastcall_func @ 0x101240
static int fastcall_func(int param_1,int param_2,int param_3)
{
 return param_1 + param_2 + param_3;
}

// Function: call_fastcall @ 0x101250
static unsigned long long call_fastcall(void)
{
 return 6;
}

// Function: call_thiscall @ 0x101260
static unsigned long long call_thiscall(void)
{
 return 0xf;
}

// Function: arm_aapcs_func @ 0x101270
static int arm_aapcs_func(int param_1,int param_2,int param_3,int param_4,int param_5)
{
 return param_1 + param_2 + param_3 + param_4 + param_5;
}

// Function: call_arm_aapcs @ 0x101280
static unsigned long long call_arm_aapcs(void)
{
 return 0xf;
}

// Function: mips_func @ 0x101290
static int mips_func(int param_1,int param_2,int param_3,int param_4)
{
 return param_1 + param_2 + param_3 + param_4;
}

// Function: call_mips @ 0x1012a0
static unsigned long long call_mips(void)
{
 return 100;
}

// Function: amd64_sysv_func @ 0x1012b0
static int amd64_sysv_func(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)
{
 return param_1 + param_2 + param_3 + param_4 + param_5 + param_6;
}

// Function: call_amd64_sysv @ 0x1012d0
static unsigned long long call_amd64_sysv(void)
{
 return 0x15;
}

// Function: ms_x64_func @ 0x1012e0
static int ms_x64_func(int param_1,int param_2,int param_3,int param_4,int param_5)
{
 return param_1 + param_2 + param_3 + param_4 + param_5;
}

// Function: call_ms_x64 @ 0x1012f0
static unsigned long long call_ms_x64(void)
{
 return 0xf;
}

// Function: vectorcall_func @ 0x101300
static int vectorcall_func(int param_1,int param_2,int param_3,int param_4)
{
 return param_1 + param_2 + param_3 + param_4;
}

// Function: call_vectorcall @ 0x101310
static unsigned long long call_vectorcall(void)
{
 return 10;
}

// Function: mixed_conventions_test @ 0x101320
static unsigned long long mixed_conventions_test(void)
{
 return 0x21;
}

// Function: varargs_func @ 0x101330
static int varargs_func(int param_1,unsigned long long param_2,unsigned long long param_3,unsigned long long param_4,
 unsigned long long param_5,unsigned long long param_6)
{
 int iVar1;
 unsigned long uVar2;
 int *piVar3;
 int iVar4;
 long in_FS_OFFSET;
 int local_38 [2];
 unsigned long long local_30;
 unsigned long long local_28;
 unsigned long long local_20;
 unsigned long long local_18;
 unsigned long long local_10;
 local_30 = param_2;
 local_28 = param_3;
 local_20 = param_4;
 local_18 = param_5;
 local_10 = param_6;
 if (param_1 < 1) {
 iVar4 = 0;
 }
 else {
 iVar1 = 0;
 iVar4 = 0;
 uVar2 = 8;
 piVar3 = local_38;
 do {
 while( true ) {
 if ((uint)uVar2 < 0x30) break;
 iVar1 = iVar1 + 1;
 iVar4 = iVar4 + *piVar3;
 piVar3 = piVar3 + 2;
 if (param_1 == iVar1) goto LAB_001013c0;
 }
 iVar1 = iVar1 + 1;
 iVar4 = iVar4 + *(int *)((long)local_38 + uVar2);
 uVar2 = (unsigned long)((uint)uVar2 + 8);
 } while (param_1 != iVar1);
 }
LAB_001013c0:
 if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
 return iVar4;
 }
 __stack_chk_fail();
}

// Function: func_no_args @ 0x1013f0
static unsigned long long func_no_args(void)
{
 return 0x2a;
}

// Function: func_many_args @ 0x101400
static int func_many_args(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
 int param_7,int param_8)
{
 return param_1 + param_2 + param_3 + param_4 + param_5 + param_6 + param_7 + param_8;
}

// Function: func_mixed_args @ 0x101420
static int func_mixed_args(double param_1,int param_2,char *param_3,long param_4)
{
 size_t sVar1;
 if (param_3 != (char *)0x0) {
 sVar1 = strlen(param_3);
 param_2 = param_2 + (int)sVar1;
 }
 return (int)((double)param_2 + param_1 + (double)param_4);
}

// Function: func_struct_byval @ 0x101480
static long func_struct_byval(void)
{
 long lVar1;
 long *plVar2;
 long local_38;
 long local_buf[4];
 plVar2 = local_buf;
 lVar1 = 0;
 do {
 lVar1 = lVar1 + *plVar2;
 plVar2 = plVar2 + 1;
 } while (plVar2 != (long *)(local_38 + 16));
 return lVar1;
}

// Function: func_struct_byptr @ 0x1014b0
static int func_struct_byptr(int *param_1)
{
 if (param_1 != (int *)0x0) {
 return *param_1 * param_1[1];
 }
 return -1;
}

// Function: test_calling_conventions @ 0x1014d0
void test_calling_conventions(void)
{
 unsigned int uVar1;
 long lVar2;
 long *plVar3;
 long in_FS_OFFSET;
 long local_118 [16];
 long local_98 [16];
 long local_18;
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 puts(&DAT_00102008);
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
 __printf_chk(1,&DAT_00102030,uVar1);
 __printf_chk(1,&DAT_00102058,0x2a);
 __printf_chk(1,&DAT_00102080,0x24);
 __printf_chk(1,&DAT_001020a8,0x75);
 lVar2 = 1;
 do {
 local_118[lVar2 + -1] = lVar2;
 lVar2 = lVar2 + 1;
 } while (lVar2 != 0x11);
 lVar2 = 0;
 plVar3 = local_98;
 local_98[0] = local_118[0];
 local_98[1] = local_118[1];
 local_98[2] = local_118[2];
 local_98[3] = local_118[3];
 local_98[4] = local_118[4];
 local_98[5] = local_118[5];
 local_98[6] = local_118[6];
 local_98[7] = local_118[7];
 local_98[8] = local_118[8];
 local_98[9] = local_118[9];
 local_98[10] = local_118[10];
 local_98[11] = local_118[11];
 local_98[12] = local_118[12];
 local_98[13] = local_118[13];
 local_98[14] = local_118[14];
 local_98[15] = local_118[15];
 do {
 lVar2 = lVar2 + *plVar3;
 plVar3 = plVar3 + 1;
 } while (&local_18 != plVar3);
 __printf_chk(1,&DAT_001020d0,lVar2);
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 __printf_chk(1,&DAT_00102100,0x32);
 return;
 }
 __stack_chk_fail();
}

// Function: param_by_value_int @ 0x101770
static int param_by_value_int(int param_1)
{
 return param_1 * 2;
}

// Function: call_by_value_int @ 0x101780
static unsigned long long call_by_value_int(void)
{
 return 0xf;
}

// Function: param_by_value_ptr @ 0x101790
static unsigned long long param_by_value_ptr(int *param_1)
{
 *param_1 = *param_1 << 1;
 return 1;
}

// Function: call_by_value_ptr @ 0x1017a0
static unsigned long long call_by_value_ptr(void)
{
 return 0xb;
}

// Function: param_array_decay @ 0x1017b0
static unsigned long long param_array_decay(void)
{
 return 8;
}

// Function: call_array_decay @ 0x1017c0
static unsigned long long call_array_decay(void)
{
 return 8;
}

// Function: param_string @ 0x1017d0
static int param_string(char *param_1)
{
 return (int)*param_1 + (int)param_1[1];
}

// Function: call_string_param @ 0x1017e0
static unsigned long long call_string_param(void)
{
 return 0xad;
}

// Function: param_ptr_array @ 0x1017f0
static int param_ptr_array(char **param_1,int param_2)
{
 char **ppcVar1;
 char *pcVar2;
 int iVar3;
 if (0 < param_2) {
 ppcVar1 = param_1 + (unsigned long)(param_2 - 1) + 1;
 iVar3 = 0;
 do {
 pcVar2 = *param_1;
 param_1 = param_1 + 1;
 iVar3 = iVar3 + *pcVar2;
 } while (param_1 != ppcVar1);
 return iVar3;
 }
 return 0;
}

// Function: call_ptr_array @ 0x101830
static unsigned long long call_ptr_array(void)
{
 return 300;
}

// Function: param_varargs @ 0x101840
static int param_varargs(int param_1,unsigned long long param_2,unsigned long long param_3,unsigned long long param_4,
 unsigned long long param_5,unsigned long long param_6)
{
 int iVar1;
 unsigned long uVar2;
 int *piVar3;
 int iVar4;
 long in_FS_OFFSET;
 int local_38 [2];
 unsigned long long local_30;
 unsigned long long local_28;
 unsigned long long local_20;
 unsigned long long local_18;
 unsigned long long local_10;
 local_30 = param_2;
 local_28 = param_3;
 local_20 = param_4;
 local_18 = param_5;
 local_10 = param_6;
 if (param_1 < 1) {
 iVar4 = 0;
 }
 else {
 iVar1 = 0;
 iVar4 = 0;
 uVar2 = 0;
 piVar3 = local_38;
 do {
 iVar1 = iVar1 + 1;
 iVar4 = iVar4 + *piVar3;
 piVar3 = piVar3 + 1;
 } while (param_1 != iVar1);
 }
LAB_001018d0:
 if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
 return iVar4;
 }
 __stack_chk_fail();
}

// Function: call_varargs_param @ 0x101900
static void call_varargs_param(void)
{
 param_varargs(4,10,0x14,0x1e,0x28,0);
 return;
}

// Function: param_func_ptr @ 0x101930
static int param_func_ptr(int (*param_1)(unsigned int),unsigned int param_2)
{
 int iVar1;
 iVar1 = param_1(param_2);
 return iVar1 + 10;
}

// Function: call_func_ptr_param @ 0x101950
static unsigned long long call_func_ptr_param(void)
{
 return 0x14;
}

// Function: param_double_ptr @ 0x101960
static unsigned long long param_double_ptr(long *param_1,unsigned int param_2)
{
 if ((param_1 != (long *)0x0) && ((unsigned int *)*param_1 != (unsigned int *)0x0)) {
 *(unsigned int *)*param_1 = param_2;
 *param_1 = 0;
 return 1;
 }
 return 0xffffffff;
}

// Function: call_double_ptr @ 0x101990
static unsigned long long call_double_ptr(void)
{
 return 0x15;
}

// Function: param_complex_cast @ 0x1019a0
static int param_complex_cast(int *param_1,int param_2)
{
 if (param_2 == 0) {
 return *param_1;
 }
 if (param_2 == 1) {
 return param_1[1] + *param_1;
 }
 return -1;
}

// Function: call_complex_cast @ 0x1019d0
static unsigned long long call_complex_cast(void)
{
 return 0x12345678;
}

// Function: param_struct_byval_helper @ 0x1019e0
static int param_struct_byval_helper(void)
{
 return 0;
}

// Function: call_struct_byval @ 0x1019f0
static int call_struct_byval(void)
{
 long lVar1;
 long in_FS_OFFSET;
 int local_58 [18];
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 lVar1 = 0;
 do {
 local_58[lVar1] = (int)lVar1;
 lVar1 = lVar1 + 1;
 } while (lVar1 != 0x10);
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return local_58[15] + local_58[0];
 }
 __stack_chk_fail();
}

// Function: param_order_dep @ 0x101a40
static int param_order_dep(int param_1,int param_2)
{
 return param_1 + param_2;
}

// Function: call_order_dep @ 0x101a50
static unsigned long long call_order_dep(void)
{
 return 4;
}

// Function: test_parameter_passing @ 0x101a60
void test_parameter_passing(void)
{
 unsigned int uVar1;
 long lVar2;
 long in_FS_OFFSET;
 int local_58 [18];
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 puts(&DAT_00102130);
 __printf_chk(1,"PARAM-L1-01: %d\n",0xf);
 __printf_chk(1,"PARAM-L1-02: %d\n",0xb);
 __printf_chk(1,"PARAM-L2-01: %d\n",8);
 __printf_chk(1,"PARAM-L2-02: %d\n",0xad);
 __printf_chk(1,"PARAM-L2-03: %d\n",300);
 uVar1 = param_varargs(4,10,0x14,0x1e,0x28,0);
 __printf_chk(1,"PARAM-L2-04: %d\n",uVar1);
 __printf_chk(1,"PARAM-L3-01: %d\n",0x14);
 __printf_chk(1,"PARAM-L3-02: %d\n",0x15);
 __printf_chk(1,"PARAM-L3-03: %d\n",0x12345678);
 lVar2 = 0;
 do {
 local_58[lVar2] = (int)lVar2;
 lVar2 = lVar2 + 1;
 } while (lVar2 != 0x10);
 __printf_chk(1,"PARAM-L3-04: %d\n",local_58[15] + local_58[0]);
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 __printf_chk(1,"PARAM-L3-05: %d\n",4);
 return;
 }
 __stack_chk_fail();
}

// Function: ret_basic_type @ 0x101be0
static int ret_basic_type(int param_1)
{
 return param_1 * 2;
}

// Function: call_ret_basic @ 0x101bf0
static unsigned long long call_ret_basic(void)
{
 return 0x2a;
}

// Function: ret_pointer @ 0x101c00
static long ret_pointer(long param_1)
{
 return param_1 + 4;
}

// Function: call_ret_pointer @ 0x101c10
static unsigned long long call_ret_pointer(void)
{
 return 0x14;
}

// Function: ret_small_struct @ 0x101c20
static unsigned long ret_small_struct(uint param_1,long param_2)
{
 return (unsigned long)param_1 | param_2 << 0x20;
}

// Function: call_ret_small_struct @ 0x101c30
static unsigned long long call_ret_small_struct(void)
{
 return 7;
}

// Function: ret_large_struct @ 0x101c40
static void ret_large_struct(unsigned long long *param_1,int param_2)
{
 unsigned long long *puVar1;
 long in_FS_OFFSET;
 unsigned long long local_58;
 unsigned long long uStack_50;
 unsigned long long local_48;
 unsigned long long uStack_40;
 unsigned long long local_38;
 unsigned long long uStack_30;
 unsigned long long local_28;
 unsigned long long uStack_20;
 int local_18 [2];
 long local_10;
 puVar1 = &local_58;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 do {
 *(int *)puVar1 = param_2;
 puVar1 = (unsigned long long *)((long)puVar1 + 4);
 param_2 = param_2 + 1;
 } while (puVar1 != (unsigned long long *)local_18);
 *param_1 = local_58;
 param_1[1] = uStack_50;
 param_1[2] = local_48;
 param_1[3] = uStack_40;
 param_1[4] = local_38;
 param_1[5] = uStack_30;
 param_1[6] = local_28;
 param_1[7] = uStack_20;
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return;
 }
 __stack_chk_fail();
}

// Function: call_ret_large_struct @ 0x101cc0
static int call_ret_large_struct(void)
{
 int *piVar1;
 int iVar2;
 long in_FS_OFFSET;
 int local_58 [16];
 int local_18 [2];
 long local_10;
 piVar1 = local_58;
 iVar2 = 100;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 do {
 *piVar1 = iVar2;
 piVar1 = piVar1 + 1;
 iVar2 = iVar2 + 1;
 } while (piVar1 != local_18);
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return local_58[15] + local_58[0];
 }
 __stack_chk_fail();
}

// Function: ret_func_ptr @ 0x101d20
static void * ret_func_ptr(int param_1)
{
 void *pcVar1;
 pcVar1 = func_b;
 if (param_1 == 0) {
 pcVar1 = func_a;
 }
 return pcVar1;
}

// Function: call_ret_func_ptr @ 0x101d40
static unsigned long long call_ret_func_ptr(void)
{
 return 10;
}

// Function: ret_opaque_handle @ 0x101d50
static unsigned long long * ret_opaque_handle(int param_1)
{
 unsigned long long *puVar1;
 puVar1 = (unsigned long long *)&handle1_1;
 if (param_1 != 0) {
 puVar1 = &handle2_0;
 }
 return puVar1;
}

// Function: call_ret_opaque @ 0x101d70
static unsigned int call_ret_opaque(void)
{
 return handle1_1;
}

// Function: ret_complex_expr @ 0x101d80
static int ret_complex_expr(int param_1,int param_2,int param_3)
{
 int iVar1;
 iVar1 = param_3 * 2;
 if (param_1 <= param_2) {
 iVar1 = param_3 + 10;
 }
 return iVar1;
}

// Function: call_ret_complex_expr @ 0x101d90
static unsigned long long call_ret_complex_expr(void)
{
 return 0x28;
}

// Function: ret_multi_branch @ 0x101da0
static int ret_multi_branch(uint param_1)
{
 int iVar1;
 iVar1 = -1;
 if (param_1 < 3) {
 iVar1 = (param_1 * 5 + 5) * 2;
 }
 return iVar1;
}

// Function: call_ret_multi_branch @ 0x101dc0
static unsigned long long call_ret_multi_branch(void)
{
 return 0x3c;
}

// Function: ret_void @ 0x101dd0
static void ret_void(int param_1,int *param_2)
{
 *param_2 = param_1 * 3;
 return;
}

// Function: call_ret_void @ 0x101de0
static unsigned long long call_ret_void(void)
{
 return 0x15;
}

// Function: test_return_values @ 0x101df0
void test_return_values(void)
{
 unsigned int uVar1;
 puts(&DAT_001022ac);
 __printf_chk(1,&DAT_001022ca,0x2a);
 __printf_chk(1,&DAT_001022e6,0x14);
 __printf_chk(1,&DAT_00102302,7);
 uVar1 = call_ret_large_struct();
 __printf_chk(1,&DAT_0010231d,uVar1);
 __printf_chk(1,&DAT_0010233a,10);
 __printf_chk(1,&DAT_00102356,handle1_1);
 __printf_chk(1,&DAT_00102373,0x28);
 __printf_chk(1,&DAT_0010238f,0x3c);
 __printf_chk(1,&DAT_001023ab,0x15);
 return;
}



