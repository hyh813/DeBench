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

// External function declarations
int __gmon_start__(void);
void *__dso_handle;
int main(void);

// Global variable
char completed_0 = 0;
char completed_1 = 0;
unsigned long long ret_opaque_handle_handle1 = 0;
unsigned long long ret_opaque_handle_handle2 = 0;

// Stack reference for varargs
static char stack0x00000008[128];

// String data
char DAT_0010238a[] = "Calling Conventions Test";
char DAT_001020e0[] = "Varargs sum: %d\n";
char DAT_00102108[] = "No args: %d\n";
char DAT_0010212a[] = "Many args: %d\n";
char DAT_00102151[] = "Mixed args: %d\n";
char DAT_00102179[] = "Struct byval: %d\n";
char DAT_001021a5[] = "Struct byptr: %d\n";
char DAT_001023ab[] = "Parameter Passing Test";
char DAT_0010228d[] = "Basic int: %d\n";
char DAT_001022a9[] = "Pointer: %d\n";
char DAT_001022c5[] = "Small struct: %d\n";
char DAT_001022e0[] = "Large struct: %d\n";
char DAT_001022fd[] = "Func ptr: %d\n";
char DAT_00102319[] = "Opaque handle: %lu\n";
char DAT_00102336[] = "Complex expr: %d\n";
char DAT_00102352[] = "Multi branch: %d\n";
char DAT_0010236e[] = "Void return: %d %lu %lu\n";
char DAT_001023cc[] = "Return Values Test";

// Function pointer type for ret_void
void (*ret_void_ptr)(int param_1, int *param_2);
unsigned long long *ret_opaque_handle(int param_1);

// Decompiled by BinaryAI
// SHA256: 159cd2749d67948090d41e53d4a4f6bf0a5dfd2221da3ceb4149f0f695c417ec



// Function: FUN_00101020 @ 0x101020
void FUN_00101020(void)
{
 return;
}

// Function: <EXTERNAL>::puts @ 0x101030
int puts(char *__s);

// Function: <EXTERNAL>::strlen @ 0x101040
unsigned long strlen(const char *__s);

// Function: <EXTERNAL>::printf @ 0x101050
// Variadic function - implementation would need stdarg.h
int printf(char *__format, ...);

// Function: <EXTERNAL>::__cxa_finalize @ 0x101060
void __cxa_finalize(void *);

// Function: <EXTERNAL>::__libc_start_main @ 
int __libc_start_main(int (*main)(void), unsigned long long arg2, void *stack, unsigned long long arg4, unsigned long long arg5, unsigned long long arg6, void *arg7);

// Function: _start @ 0x101070
static void _start(unsigned long long param_1,unsigned long long param_2)
{
 char auStack_8 [8];
 // Note: __libc_start_main signature varies; using common form here
 __libc_start_main(main,param_2,&stack0x00000008,0,0,param_1,auStack_8);
 // Infinite loop - typical for _start
 while(1) {}
}

// Function: deregister_tm_clones @ 0x1010a0
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x1010d0
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x101110
void __do_global_dtors_aux(void)
{
 if (completed_0 != '\0') {
 return;
 }
 // Call __cxa_finalize with __dso_handle argument
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = 1;
 return;
}

// Function: cdecl_func @ 0x101160
int cdecl_func(int param_1,int param_2)
{
 return param_1 + param_2;
}

// Function: call_cdecl @ 0x101170
unsigned long long call_cdecl(void)
{
 return 0xf;
}

// Function: stdcall_func @ 0x101180
int stdcall_func(int param_1,int param_2)
{
 return param_1 * param_2;
}

// Function: call_stdcall @ 0x101190
unsigned long long call_stdcall(void)
{
 return 0x32;
}

// Function: fastcall_func @ 0x1011a0
int fastcall_func(int param_1,int param_2,int param_3)
{
 return param_1 + param_2 + param_3;
}

// Function: call_fastcall @ 0x1011b0
unsigned long long call_fastcall(void)
{
 return 6;
}

// Function: call_thiscall @ 0x1011c0
unsigned long long call_thiscall(void)
{
 return 0xf;
}

// Function: arm_aapcs_func @ 0x1011d0
int arm_aapcs_func(int param_1,int param_2,int param_3,int param_4,int param_5)
{
 return param_1 + param_2 + param_3 + param_4 + param_5;
}

// Function: call_arm_aapcs @ 0x1011e0
unsigned long long call_arm_aapcs(void)
{
 return 0xf;
}

// Function: mips_func @ 0x1011f0
int mips_func(int param_1,int param_2,int param_3,int param_4)
{
 return param_1 + param_2 + param_3 + param_4;
}

// Function: call_mips @ 0x101200
unsigned long long call_mips(void)
{
 return 100;
}

// Function: amd64_sysv_func @ 0x101210
int amd64_sysv_func(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)
{
 return param_1 + param_2 + param_3 + param_4 + param_5 + param_6;
}

// Function: call_amd64_sysv @ 0x101220
unsigned long long call_amd64_sysv(void)
{
 return 0x15;
}

// Function: ms_x64_func @ 0x101230
int ms_x64_func(int param_1,int param_2,int param_3,int param_4,int param_5)
{
 return param_1 + param_2 + param_3 + param_4 + param_5;
}

// Function: call_ms_x64 @ 0x101240
unsigned long long call_ms_x64(void)
{
 return 0xf;
}

// Function: vectorcall_func @ 0x101250
int vectorcall_func(int param_1,int param_2,int param_3,int param_4)
{
 return param_1 + param_2 + param_3 + param_4;
}

// Function: call_vectorcall @ 0x101260
unsigned long long call_vectorcall(void)
{
 return 10;
}

// Function: mixed_conventions_test @ 0x101270
unsigned long long mixed_conventions_test(void)
{
 return 0x21;
}

// Function: varargs_func @ 0x101280
// Note: This is the same implementation as param_varargs - aliasing to avoid duplicate definition
uint varargs_func(uint param_1)
{
 int iVar1;
 int *piVar2;
 unsigned long uVar3;
 int *piVar4;
 uint uVar5;
 uint local_d8;
 int *local_d0;
 int local_b8 [46];
 local_d0 = (int *)&stack0x00000008;
 if (0 < (int)param_1) {
 local_d8 = 8;
 if (param_1 == 1) {
 iVar1 = 0;
 }
 else {
 uVar5 = param_1 & 0xfffffffe;
 iVar1 = 0;
 do {
 if (local_d8 < 0x29) {
 uVar3 = (unsigned long)local_d8;
 local_d8 = local_d8 + 8;
 piVar4 = (int *)((long)local_b8 + uVar3);
 }
 else {
 piVar4 = local_d0;
 local_d0 = local_d0 + 2;
 }
 if (local_d8 < 0x29) {
 piVar2 = (int *)((long)local_b8 + (unsigned long)local_d8);
 local_d8 = local_d8 + 8;
 }
 else {
 piVar2 = local_d0;
 local_d0 = local_d0 + 2;
 }
 iVar1 = iVar1 + *piVar4 + *piVar2;
 uVar5 = uVar5 - 2;
 } while (uVar5 != 0);
 }
 if ((param_1 & 1) != 0) {
 if (local_d8 < 0x29) {
 local_d0 = (int *)((long)local_b8 + (unsigned long)local_d8);
 }
 iVar1 = iVar1 + *local_d0;
 }
 return iVar1;
 }
 return 0;
}

// Function: param_varargs @ 0x101730 - ALIAS to varargs_func (identical implementation)
uint param_varargs(uint param_1)
{
  return varargs_func(param_1);
}

// Function: func_no_args @ 0x1013b0
unsigned long long func_no_args(void)
{
 return 0x2a;
}

// Function: func_many_args @ 0x1013c0
int func_many_args(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
 int param_7,int param_8)
{
 return param_1 + param_2 + param_3 + param_4 + param_5 + param_6 + param_7 + param_8;
}

// Function: func_mixed_args @ 0x1013e0
int func_mixed_args(double param_1,int param_2,char *param_3,long param_4)
{
 int iVar1;
 size_t sVar2;
 if (param_3 == (char *)0x0) {
 iVar1 = 0;
 }
 else {
 sVar2 = strlen(param_3);
 iVar1 = (int)sVar2;
 }
 return (int)((double)param_4 + (double)(iVar1 + param_2) + param_1);
}

// Function: func_struct_byval @ 0x101430
int func_struct_byval(void)
{
 int param_7;
 int in_stack_00000010;
 int param_8;
 int in_stack_00000020;
 int param_9;
 int in_stack_00000030;
 int param_10;
 int in_stack_00000040;
 int param_11;
 int in_stack_00000050;
 int param_12;
 int in_stack_00000060;
 int param_13;
 int in_stack_00000070;
 int param_14;
 int in_stack_00000080;
 return in_stack_00000020 + in_stack_00000060 + in_stack_00000040 + in_stack_00000080 +
 in_stack_00000010 + in_stack_00000050 + in_stack_00000030 + in_stack_00000070 +
 param_8 + param_12 + param_10 + param_14 + param_7 + param_11 + param_9 + param_13;
}

// Function: func_struct_byptr @ 0x101480
int func_struct_byptr(int *param_1)
{
 if (param_1 != (int *)0x0) {
 return param_1[1] * *param_1;
 }
 return -1;
}

// Function: test_calling_conventions @ 0x1014a0
void test_calling_conventions(void)
{
 uint uVar1;
 puts(&DAT_0010238a);
 printf("CALL-L1-01: %d\n",0xf);
 printf("CALL-L1-02: %d\n",0x32);
 printf("CALL-L1-03: %d\n",6);
 printf("CALL-L1-04: %d\n",0xf);
 printf("CALL-L1-05: %d\n",0xf);
 printf("CALL-L1-06: %d\n",100);
 printf("CALL-L1-07: %d\n",0x15);
 printf("CALL-L1-08: %d\n",0xf);
 printf("CALL-L1-09: %d\n",10);
 printf("CALL-L1-10: %d\n",0x21);
 uVar1 = varargs_func(5);
 printf(&DAT_001020e0,(unsigned long)uVar1);
 printf(&DAT_00102108,0x2a);
 printf(&DAT_0010212a,0x24);
 printf(&DAT_00102151,0x75);
 printf(&DAT_00102179,0x88);
 printf(&DAT_001021a5,0x32);
 return;
}

// Function: param_by_value_int @ 0x101610
int param_by_value_int(int param_1)
{
 return param_1 * 2;
}

// Function: call_by_value_int @ 0x101620
unsigned long long call_by_value_int(void)
{
 return 0xf;
}

// Function: param_by_value_ptr @ 0x101630
unsigned long long param_by_value_ptr(int *param_1)
{
 *param_1 = *param_1 << 1;
 return 1;
}

// Function: call_by_value_ptr @ 0x101640
unsigned long long call_by_value_ptr(void)
{
 return 0xb;
}

// Function: param_array_decay @ 0x101650
unsigned long long param_array_decay(void)
{
 return 8;
}

// Function: call_array_decay @ 0x101660
unsigned long long call_array_decay(void)
{
 return 8;
}

// Function: param_string @ 0x101670
int param_string(char *param_1)
{
 return (int)param_1[1] + (int)*param_1;
}

// Function: call_string_param @ 0x101680
unsigned long long call_string_param(void)
{
 return 0xad;
}

// Function: param_ptr_array @ 0x101690
int param_ptr_array(long param_1,uint param_2)
{
 int iVar1;
 unsigned long uVar2;
 unsigned long uVar3;
 if (0 < (int)param_2) {
 if ((unsigned long)param_2 - 1 < 3) {
 uVar2 = 0;
 iVar1 = 0;
 }
 else {
 uVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = (int)**(char **)(param_1 + 0x18 + uVar2 * 8) +
 (int)**(char **)(param_1 + 0x10 + uVar2 * 8) +
 (int)**(char **)(param_1 + 8 + uVar2 * 8) + **(char **)(param_1 + uVar2 * 8) + iVar1
 ;
 uVar2 = uVar2 + 4;
 } while ((param_2 & 0xfffffffc) != uVar2);
 }
 if ((unsigned long)(param_2 & 3) != 0) {
 uVar3 = 0;
 do {
 iVar1 = iVar1 + **(char **)(param_1 + uVar2 * 8 + uVar3 * 8);
 uVar3 = uVar3 + 1;
 } while ((param_2 & 3) != uVar3);
 }
 return iVar1;
 }
 return 0;
}

// Function: call_ptr_array @ 0x101720
unsigned long long call_ptr_array(void)
{
 return 300;
}



// Function: call_varargs_param @ 0x101860
unsigned long long call_varargs_param(void)
{
 return 0x24;
}

// Function: param_func_ptr @ 0x101890
int param_func_ptr(int (*param_1)(int),unsigned int param_2)
{
 int iVar1;
 iVar1 = (*param_1)(param_2);
 return iVar1 + 10;
}

// Function: call_func_ptr_param @ 0x1018a0
unsigned long long call_func_ptr_param(void)
{
 return 0x14;
}

// Function: param_double_ptr @ 0x1018b0
unsigned long long param_double_ptr(long *param_1,unsigned int param_2)
{
 unsigned long long uVar1;
 uVar1 = 0xffffffff;
 if ((param_1 != (long *)0x0) && ((unsigned int *)*param_1 != (unsigned int *)0x0)) {
 *(unsigned int *)*param_1 = param_2;
 *param_1 = 0;
 uVar1 = 1;
 }
 return uVar1;
}

// Function: call_double_ptr @ 0x1018e0
unsigned long long call_double_ptr(void)
{
 return 0x15;
}

// Function: param_complex_cast @ 0x1018f0
int param_complex_cast(int *param_1,int param_2)
{
 int iVar1;
 if (param_2 == 1) {
 iVar1 = param_1[1] + *param_1;
 }
 else {
 iVar1 = -1;
 if (param_2 == 0) {
 return *param_1;
 }
 }
 return iVar1;
}

// Function: call_complex_cast @ 0x101910
unsigned long long call_complex_cast(void)
{
 return 0x12345678;
}

// Function: param_struct_byval @ 0x101920
int param_struct_byval(void)
{
 int param_7;
 unsigned long long in_stack_00000040;
 return (int)(in_stack_00000040 & 0xFFFFFFFF) + param_7;
}

// Function: call_struct_byval @ 0x101930
unsigned long long call_struct_byval(void)
{
 return 0xf;
}

// Function: param_order_dep @ 0x101940
int param_order_dep(int param_1,int param_2)
{
 return param_1 + param_2;
}

// Function: call_order_dep @ 0x101950
unsigned long long call_order_dep(void)
{
 return 3;
}

// Function: test_parameter_passing @ 0x101960
void test_parameter_passing(void)
{
 uint uVar1;
 puts(&DAT_001023ab);
 printf("PARAM-L1-01: %d\n",0xf);
 printf("PARAM-L1-02: %d\n",0xb);
 printf("PARAM-L2-01: %d\n",8);
 printf("PARAM-L2-02: %d\n",0xad);
 printf("PARAM-L2-03: %d\n",300);
 uVar1 = param_varargs(4);
 printf("PARAM-L2-04: %d\n",(unsigned long)uVar1);
 printf("PARAM-L3-01: %d\n",0x14);
 printf("PARAM-L3-02: %d\n",0x15);
 printf("PARAM-L3-03: %d\n",0x12345678);
 printf("PARAM-L3-04: %d\n",0xf);
 printf("PARAM-L3-05: %d\n",3);
 return;
}

// Function: ret_basic_type @ 0x101a60
int ret_basic_type(int param_1)
{
 return param_1 * 2;
}

// Function: call_ret_basic @ 0x101a70
unsigned long long call_ret_basic(void)
{
 return 0x2a;
}

// Function: ret_pointer @ 0x101a80
long ret_pointer(long param_1)
{
 return param_1 + 4;
}

// Function: call_ret_pointer @ 0x101a90
unsigned long long call_ret_pointer(void)
{
 return 0x14;
}

// Function: ret_small_struct @ 0x101aa0
unsigned long ret_small_struct(uint param_1,long param_2)
{
 return (unsigned long)param_1 | param_2 << 0x20;
}

// Function: call_ret_small_struct @ 0x101ab0
unsigned long long call_ret_small_struct(void)
{
 return 7;
}

// Function: ret_large_struct @ 0x101ac0
int * ret_large_struct(int *param_1,int param_2)
{
 *param_1 = param_2;
 param_1[1] = param_2 + 1;
 param_1[2] = param_2 + 2;
 param_1[3] = param_2 + 3;
 param_1[4] = param_2 + 4;
 param_1[5] = param_2 + 5;
 param_1[6] = param_2 + 6;
 param_1[7] = param_2 + 7;
 param_1[8] = param_2 + 8;
 param_1[9] = param_2 + 9;
 param_1[10] = param_2 + 10;
 param_1[0xb] = param_2 + 0xb;
 param_1[0xc] = param_2 + 0xc;
 param_1[0xd] = param_2 + 0xd;
 param_1[0xe] = param_2 + 0xe;
 param_1[0xf] = param_2 + 0xf;
 return param_1;
}

// Function: call_ret_large_struct @ 0x101b10
unsigned long long call_ret_large_struct(void)
{
 return 0xd7;
}

// Function: func_a @ 0x101b20
int func_a(int param_1)
{
 return param_1 + 10;
}

// Function: func_b @ 0x101b30
int func_b(int param_1)
{
 return param_1 * 2;
}

// Function: ret_func_ptr @ 0x101b40
void * ret_func_ptr(int param_1)
{
 void *pcVar1;
 pcVar1 = func_b;
 if (param_1 == 0) {
 pcVar1 = func_a;
 }
 return pcVar1;
}

// Function: call_ret_func_ptr @ 0x101b60
unsigned long long call_ret_func_ptr(void)
{
 return 10;
}

// Function: ret_opaque_handle @ 0x101b70
unsigned long long * ret_opaque_handle(int param_1)
{
 unsigned long long *puVar1;
 puVar1 = &ret_opaque_handle_handle2;
 if (param_1 == 0) {
 puVar1 = (unsigned long long *)&ret_opaque_handle_handle1;
 }
 return puVar1;
}

// Function: call_ret_opaque @ 0x101b90
unsigned long long call_ret_opaque(void)
{
 return (unsigned long long)ret_opaque_handle(0);
}

// Function: ret_complex_expr @ 0x101ba0
int ret_complex_expr(int param_1,int param_2,int param_3)
{
 int iVar1;
 iVar1 = param_3 + 10;
 if (param_2 < param_1) {
 iVar1 = param_3 * 2;
 }
 return iVar1;
}

// Function: call_ret_complex_expr @ 0x101bb0
unsigned long long call_ret_complex_expr(void)
{
 return 0x28;
}

// Function: ret_multi_branch @ 0x101bc0
int ret_multi_branch(uint param_1)
{
 int iVar1;
 iVar1 = -1;
 if (param_1 < 3) {
 iVar1 = param_1 * 10 + 10;
 }
 return iVar1;
}

// Function: call_ret_multi_branch @ 0x101be0
unsigned long long call_ret_multi_branch(void)
{
 return 0x3c;
}

// Function: ret_void @ 0x101bf0
void ret_void(int param_1,int *param_2)
{
 *param_2 = param_1 * 3;
 return;
}

// Function: call_ret_void @ 0x101c00
unsigned long long call_ret_void(void)
{
 return 0x15;
}

// Function: test_return_values @ 0x101c10
void test_return_values(void)
{
 unsigned long long in_RAX;
 unsigned long long extraout_RDX;
 puts(&DAT_001023cc);
 printf(&DAT_0010228d,0x2a);
 printf(&DAT_001022a9,0x14);
 printf(&DAT_001022c5,7);
 printf(&DAT_001022e0,0xd7);
 printf(&DAT_001022fd,10);
 printf(&DAT_00102319,(unsigned long)ret_opaque_handle_handle1);
 printf(&DAT_00102336,0x28);
 printf(&DAT_00102352,0x3c);
 printf(&DAT_0010236e,0x15,(unsigned long)extraout_RDX,(unsigned long)in_RAX);
 return;
}

// Function: main @ 0x101cd0
int main(void)
{
 test_calling_conventions();
 test_parameter_passing();
 test_return_values();
 return 0;
}

// Function: _fini @ 0x101ce4
static void _fini(void)
{
 return;
}

