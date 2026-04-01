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
typedef int __pid_t;
typedef unsigned char byte;

// Global variables
int global_counter;
unsigned int file_scope_static;
unsigned long long global_func_ptr;
int counter_1;
char completed_0;
unsigned long long __dso_handle;
int extern_global_var;
char const_string[16] = "Some constant";
unsigned int global_array[10] = {0};

// Data references from binary
unsigned int _DAT_00103720[4] = {0};
unsigned int _DAT_00103760[4] = {0};
unsigned int _DAT_00103750[4] = {0};
unsigned int _DAT_00103770[4] = {0};
char *UNK_001015fb = "Unknown";
char *UNK_0010173b = "Undefined";
char *DAT_00103004 = "Stack Memory Tests";
char *DAT_001030e6 = "Heap Memory Tests";
char *DAT_00103198 = "\nChild value after free: %d\n";
char *DAT_001031a8 = "fork";
char *DAT_001033c8 = "Child exited with status: %d\n";
char *DAT_001033f0 = "Child terminated by signal\n";
char *DAT_00103438 = "Static/Global Memory Tests";
char *DAT_00103688 = "Memory Operation Tests";

// Decompiled by BinaryAI
// SHA256: 9eb67781b8aa4e2a30f122aefebf1157f809e12cc34f295e0108ef6225907455

// Function: _init @ 0x101000
int _init(void *ctx)
{
 int iVar1;
 iVar1 = __gmon_start__();
 return iVar1;
}

// Function: FUN_00101020 @ 0x101020
void FUN_00101020(void)
{
 (*(void *)(char *)0x0)();
 return;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x101120
void __cxa_finalize(void)
{
 __cxa_finalize();
 return;
}

// Function: <EXTERNAL>::free @ 0x101130
void free(void *__ptr)
{
 free(__ptr);
 return;
}

// Function: <EXTERNAL>::puts @ 0x101140
int puts(char *__s)
{
 int iVar1;
 iVar1 = puts(__s);
 return iVar1;
}

// Function: <EXTERNAL>::__stack_chk_fail @ 0x101150
void __stack_chk_fail(void)
{
 __stack_chk_fail();
}

// Function: <EXTERNAL>::memset @ 0x101160
void * memset(void *__s,int __c,size_t __n)
{
 void *pvVar1;
 pvVar1 = memset(__s,__c,__n);
 return pvVar1;
}

// Function: <EXTERNAL>::memcmp @ 0x101170
int memcmp(void *__s1,void *__s2,size_t __n)
{
 int iVar1;
 iVar1 = memcmp(__s1,__s2,__n);
 return iVar1;
}

// Function: <EXTERNAL>::calloc @ 0x101180
void * calloc(size_t __nmemb,size_t __size)
{
 void *pvVar1;
 pvVar1 = calloc(__nmemb,__size);
 return pvVar1;
}

// Function: <EXTERNAL>::memcpy @ 0x101190
void * memcpy(void *__dest,void *__src,size_t __n)
{
 void *pvVar1;
 pvVar1 = memcpy(__dest,__src,__n);
 return pvVar1;
}

// Function: <EXTERNAL>::malloc @ 0x1011a0
void * malloc(size_t __size)
{
 void *pvVar1;
 pvVar1 = malloc(__size);
 return pvVar1;
}

// Function: <EXTERNAL>::realloc @ 0x1011b0
void * realloc(void *__ptr,size_t __size)
{
 void *pvVar1;
 pvVar1 = realloc(__ptr,__size);
 return pvVar1;
}

// Function: <EXTERNAL>::__printf_chk @ 0x1011c0
int __printf_chk(int flag, char *format, ...)
{
 return 0;
}

// Function: <EXTERNAL>::memmove @ 0x1011d0
void * memmove(void *__dest,void *__src,size_t __n)
{
 void *pvVar1;
 pvVar1 = memmove(__dest,__src,__n);
 return pvVar1;
}

// Function: <EXTERNAL>::waitpid @ 0x1011e0
__pid_t waitpid(__pid_t __pid,int *__stat_loc,int __options)
{
 __pid_t _Var1;
 _Var1 = waitpid(__pid,__stat_loc,__options);
 return _Var1;
}

// Function: <EXTERNAL>::perror @ 0x1011f0
void perror(char *__s)
{
 perror(__s);
 return;
}

// Function: <EXTERNAL>::exit @ 0x101200
void exit(int __status)
{
 exit(__status);
}

// Function: <EXTERNAL>::fork @ 0x101210
__pid_t fork(void)
{
 __pid_t _Var1;
 _Var1 = fork();
 return _Var1;
}

// Function: main @ 0x101220
unsigned long long main(void)
{
 test_stack_memory();
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}

// Function: _start @ 0x101250
void processEntry _start(unsigned long long param_1,unsigned long long param_2)
{
 char auStack_8 [8];
 __libc_start_main(main,param_2,&stack0x00000008,0,0,param_1,auStack_8);
 do {
 } while( 1 );
}

// Function: deregister_tm_clones @ 0x101280
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x1012b0
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x1012f0
void __do_global_dtors_aux(void)
{
 if (completed_0 != '\0') {
 return;
 }
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = 1;
 return;
}

// Function: double_value @ 0x101340
int double_value(int param_1)
{
 return param_1 * 2;
}

// Function: alloca_usage.constprop.0 @ 0x101350
unsigned long long alloca_usage_constprop_0(void)
{
 return 0xf;
}

// Function: local_vars @ 0x101360
int local_vars(int param_1)
{
 return param_1 * 2 + 10;
}

// Function: local_array @ 0x101370
int local_array(int param_1)
{
 return param_1 * 5;
}

// Function: local_struct @ 0x1013a0
int local_struct(int param_1)
{
 return param_1 * 3;
}

// Function: address_of_local @ 0x1013b0
unsigned long long address_of_local(unsigned int *param_1)
{
 *param_1 = 0x2a;
 return 0x2a;
}

// Function: address_of_array @ 0x1013c0
int address_of_array(int *param_1)
{
 return *param_1 * 2;
}

// Union for accessing bytes as different sizes
typedef union {
 unsigned char b[16];
 unsigned int w[4];
 unsigned short h[8];
 struct { unsigned int _0_4_; unsigned int _4_4_; unsigned int _8_4_; unsigned int _12_4_; } _0_4;
 struct { unsigned short _0_2_; unsigned short _2_2_; unsigned short _4_2_; unsigned short _6_2_; unsigned short _8_2_; unsigned short _10_2_; unsigned short _12_2_; unsigned short _14_2_; } _0_2;
 struct { unsigned int _0_4_; unsigned int _4_4_; unsigned int _8_4_; unsigned short _12_2_; unsigned short _14_2_; } _0_4_12_2;
 struct { unsigned char _0_12_[12]; unsigned short _12_2_; unsigned short _14_2_; } _0_12;
 struct { unsigned int _0_4_; unsigned int _4_4_; unsigned short _8_2_; unsigned short _10_2_; unsigned short _12_2_; unsigned short _14_2_; } _0_4_8_2_12_2;
 struct { unsigned char _0_10_[10]; unsigned short _10_2_; unsigned short _12_2_; unsigned short _14_2_; } _0_10;
 struct { unsigned int _12_4_; unsigned short _0_2_; unsigned short _14_2_; } _12_4_0_2;
 struct { unsigned int _12_4_; unsigned char _0_10_[10]; } _12_4_0_10;
 struct { unsigned char _0_8_[8]; unsigned short _8_2_; unsigned short _10_2_; unsigned short _12_2_; unsigned short _14_2_; } _0_8_8_2;
 struct { unsigned char _0_8_[8]; unsigned short _8_2_; unsigned short _10_6_[6]; } _0_8_8_2_10_6;
 struct { unsigned short _10_2_; unsigned short _12_2_; unsigned short _14_2_; } _10_6;
 struct { unsigned char _8_8_[8]; unsigned short _0_2_; unsigned short _10_6_[6]; } _8_8_0_2_10_6;
 struct { unsigned int _2_8_; unsigned short _0_2_; unsigned short _10_6_[6]; } _2_8_0_2_10_6;
 unsigned short _12_2_;
 unsigned int _12_4_;
 unsigned short _14_2_;
 unsigned char _0_12_[12];
 unsigned short _8_2_;
 unsigned short _10_2_;
 unsigned short _4_2_;
 unsigned short _0_2_;
 unsigned short _6_2_;
 unsigned short _2_2_;
 unsigned short _10_6_[6];
 unsigned char _0_10_[10];
 unsigned char _0_8_[8];
 unsigned char _8_8_[8];
 unsigned int _0_4_;
 unsigned int _4_4_;
 unsigned int _8_4_;
 unsigned int _2_8_;
} au16_t;

// Function: large_stack_frame @ 0x1013d0
int large_stack_frame(void)
{
 short sVar1;
 short sVar2;
 short sVar3;
 short sVar4;
 short sVar5;
 short sVar6;
 short sVar7;
 short sVar8;
 short sVar9;
 short sVar10;
 short sVar11;
 short sVar12;
 short sVar13;
 short sVar14;
 short sVar15;
 short sVar16;
 au16_t auVar17;
 au16_t auVar18;
 au16_t auVar19;
 au16_t auVar20;
 char *pcVar21;
 char *pcVar22;
 long in_FS_OFFSET;
 int iVar23;
 int iVar37;
 au16_t auVar25;
 au16_t auVar29;
 au16_t auVar33;
 au16_t auVar36;
 au16_t auVar38;
 au16_t auVar42;
 au16_t auVar46;
 au16_t auVar49;
 int iVar50;
 unsigned short uVar51;
 unsigned short uVar52;
 int iVar53;
 unsigned short uVar54;
 int iVar55;
 au16_t auVar57;
 char local_818 [2056];
 long local_10;
 au16_t auVar26;
 au16_t auVar30;
 au16_t auVar27;
 au16_t auVar31;
 au16_t auVar34;
 unsigned char auVar24 [12];
 au16_t auVar28;
 au16_t auVar32;
 au16_t auVar35;
 au16_t auVar39;
 au16_t auVar43;
 au16_t auVar40;
 au16_t auVar44;
 au16_t auVar47;
 au16_t auVar41;
 au16_t auVar45;
 au16_t auVar48;
 int iVar56;
 int iVar58;
 int iVar59;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 pcVar21 = local_818;
 auVar25 = _DAT_00103720;
 do {
 pcVar22 = pcVar21 + 0x10;
 iVar56 = auVar25._0_4_;
 auVar57._0_4_ = iVar56 + 0x10;
 iVar37 = auVar25._4_4_;
 auVar57._4_4_ = iVar37 + 0x10;
 iVar58 = auVar25._8_4_;
 iVar59 = auVar25._12_4_;
 auVar57._8_4_ = iVar58 + 0x10;
 auVar57._12_4_ = iVar59 + 0x10;
 auVar41._0_12_ = auVar25._0_12_;
 auVar41._12_2_ = auVar25._6_2_;
 auVar41._14_2_ = (short)((uint)(iVar37 + 4) >> 0x10);
 auVar40._12_4_ = auVar41._12_2_;
 auVar40._0_10_ = auVar25._0_10_;
 uVar52 = (unsigned short)(iVar37 + 4);
 auVar40._10_2_ = uVar52;
 auVar39._10_6_ = auVar40._10_6_;
 auVar39._0_8_ = auVar25._0_8_;
 auVar39._8_2_ = auVar25._4_2_;
 uVar51 = (unsigned short)((uint)(iVar56 + 4) >> 0x10);
 auVar17._2_8_ = auVar39._8_8_;
 auVar17._0_2_ = uVar51;
 auVar17._10_6_ = 0;
 auVar49._0_2_ = auVar25._0_2_;
 auVar38._12_4_ = 0;
 auVar38._0_12_ = SUB1612(auVar17 << 0x30,4);
 auVar38 = auVar38 << 0x20;
 uVar54 = (unsigned short)(iVar58 + 4);
 auVar45._0_12_ = auVar38._0_12_;
 auVar45._12_2_ = uVar51;
 auVar45._14_2_ = (short)((uint)(iVar58 + 4) >> 0x10);
 auVar44._12_4_ = auVar45._12_4_;
 auVar44._0_10_ = auVar38._0_10_;
 auVar44._10_2_ = auVar25._10_2_;
 auVar43._10_6_ = auVar44._10_6_;
 auVar43._0_8_ = auVar38._0_8_;
 auVar43._8_2_ = auVar25._2_2_;
 auVar18._2_8_ = auVar43._8_8_;
 auVar18._0_2_ = uVar54;
 auVar18._10_6_ = 0;
 auVar42._12_4_ = 0;
 auVar42._0_12_ = SUB1612(auVar18 << 0x30,4);
 auVar42 = auVar42 << 0x20;
 iVar50 = iVar56 + SUB164(_DAT_00103760,0);
 iVar53 = iVar37 + SUB164(_DAT_00103760,4);
 iVar55 = iVar58 + SUB164(_DAT_00103760,8);
 iVar23 = iVar56 + SUB164(_DAT_00103750,0);
 iVar37 = iVar37 + SUB164(_DAT_00103750,4);
 auVar24._8_4_ = iVar58 + SUB164(_DAT_00103750,8);
 auVar48._0_12_ = auVar42._0_12_;
 auVar48._12_2_ = uVar54;
 auVar48._14_2_ = (short)(iVar59 + 4);
 auVar47._12_4_ = auVar48._12_4_;
 auVar47._0_10_ = auVar42._0_10_;
 auVar47._10_2_ = uVar52;
 auVar46._10_6_ = auVar47._10_6_;
 auVar46._0_8_ = auVar42._0_8_;
 auVar46._8_2_ = (short)(iVar56 + 4);
 auVar49._8_8_ = auVar46._8_8_;
 auVar49._6_2_ = auVar25._12_2_;
 auVar49._4_2_ = auVar25._8_2_;
 auVar49._2_2_ = auVar25._4_2_;
 auVar28._12_2_ = (short)((uint)iVar37 >> 0x10);
 auVar28._0_12_ = auVar24;
 auVar28._14_2_ = (short)((uint)iVar53 >> 0x10);
 auVar27._12_4_ = auVar28._12_4_;
 auVar27._0_10_ = auVar24._0_10_;
 uVar52 = (unsigned short)iVar53;
 auVar27._10_2_ = uVar52;
 auVar26._10_6_ = auVar27._10_6_;
 auVar26._8_2_ = (short)iVar37;
 auVar26._0_8_ = CONCAT44(iVar37,iVar23);
 uVar51 = (unsigned short)((uint)iVar50 >> 0x10);
 auVar19._2_8_ = auVar26._8_8_;
 auVar19._0_2_ = uVar51;
 auVar19._10_6_ = 0;
 auVar36._0_2_ = (unsigned short)iVar23;
 auVar25._12_4_ = 0;
 auVar25._0_12_ = SUB1612(auVar19 << 0x30,4);
 auVar25 = auVar25 << 0x20;
 auVar49 = auVar49 & _DAT_00103770;
 uVar54 = (unsigned short)iVar55;
 auVar32._0_12_ = auVar25._0_12_;
 auVar32._12_2_ = uVar51;
 auVar32._14_2_ = (short)((uint)iVar55 >> 0x10);
 auVar31._12_4_ = auVar32._12_4_;
 auVar31._0_10_ = auVar25._0_10_;
 auVar31._10_2_ = (short)((uint)auVar24._8_4_ >> 0x10);
 auVar30._10_6_ = auVar31._10_6_;
 auVar30._0_8_ = auVar25._0_8_;
 auVar30._8_2_ = (short)((uint)iVar23 >> 0x10);
 auVar20._2_8_ = auVar30._8_8_;
 auVar20._0_2_ = uVar54;
 auVar20._10_6_ = 0;
 auVar29._12_4_ = 0;
 auVar29._0_12_ = SUB1612(auVar20 << 0x30,4);
 auVar29 = auVar29 << 0x20;
 auVar35._0_12_ = auVar29._0_12_;
 auVar35._12_2_ = uVar54;
 auVar35._14_2_ = (short)(iVar59 + SUB164(_DAT_00103760,0xc));
 auVar34._12_4_ = auVar35._12_4_;
 auVar34._0_10_ = auVar29._0_10_;
 auVar34._10_2_ = uVar52;
 auVar33._10_6_ = auVar34._10_6_;
 auVar33._0_8_ = auVar29._0_8_;
 auVar33._8_2_ = (short)iVar50;
 auVar36._8_8_ = auVar33._8_8_;
 auVar36._6_2_ = (short)(iVar59 + SUB164(_DAT_00103750,0xc));
 auVar36._4_2_ = (short)auVar24._8_4_;
 auVar36._2_2_ = (short)iVar37;
 auVar36 = auVar36 & _DAT_00103770;
 sVar1 = auVar49._0_2_;
 sVar2 = auVar49._2_2_;
 sVar3 = auVar49._4_2_;
 sVar4 = auVar49._6_2_;
 sVar5 = auVar49._8_2_;
 sVar6 = auVar49._10_2_;
 sVar7 = auVar49._12_2_;
 sVar8 = auVar49._14_2_;
 sVar9 = auVar36._0_2_;
 sVar10 = auVar36._2_2_;
 sVar11 = auVar36._4_2_;
 sVar12 = auVar36._6_2_;
 sVar13 = auVar36._8_2_;
 sVar14 = auVar36._10_2_;
 sVar15 = auVar36._12_2_;
 sVar16 = auVar36._14_2_;
 *pcVar21 = (0 < sVar1) * (sVar1 < 0xff) * auVar49._0_2_ - (0xff < sVar1);
 pcVar21[1] = (0 < sVar2) * (sVar2 < 0xff) * auVar49._2_2_ - (0xff < sVar2);
 pcVar21[2] = (0 < sVar3) * (sVar3 < 0xff) * auVar49._4_2_ - (0xff < sVar3);
 pcVar21[3] = (0 < sVar4) * (sVar4 < 0xff) * auVar49._6_2_ - (0xff < sVar4);
 pcVar21[4] = (0 < sVar5) * (sVar5 < 0xff) * auVar49._8_2_ - (0xff < sVar5);
 pcVar21[5] = (0 < sVar6) * (sVar6 < 0xff) * auVar49._10_2_ - (0xff < sVar6);
 pcVar21[6] = (0 < sVar7) * (sVar7 < 0xff) * auVar49._12_2_ - (0xff < sVar7);
 pcVar21[7] = (0 < sVar8) * (sVar8 < 0xff) * auVar49._14_2_ - (0xff < sVar8);
 pcVar21[8] = (0 < sVar9) * (sVar9 < 0xff) * auVar36._0_2_ - (0xff < sVar9);
 pcVar21[9] = (0 < sVar10) * (sVar10 < 0xff) * auVar36._2_2_ - (0xff < sVar10);
 pcVar21[10] = (0 < sVar11) * (sVar11 < 0xff) * auVar36._4_2_ - (0xff < sVar11);
 pcVar21[0xb] = (0 < sVar12) * (sVar12 < 0xff) * auVar36._6_2_ - (0xff < sVar12);
 pcVar21[0xc] = (0 < sVar13) * (sVar13 < 0xff) * auVar36._8_2_ - (0xff < sVar13);
 pcVar21[0xd] = (0 < sVar14) * (sVar14 < 0xff) * auVar36._10_2_ - (0xff < sVar14);
 pcVar21[0xe] = (0 < sVar15) * (sVar15 < 0xff) * auVar36._12_2_ - (0xff < sVar15);
 pcVar21[0xf] = (0 < sVar16) * (sVar16 < 0xff) * auVar36._14_2_ - (0xff < sVar16);
 pcVar21 = pcVar22;
 auVar25 = auVar57;
 } while (local_818 + 0x800 != pcVar22);
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return (int)local_818[1024];
 }
 __stack_chk_fail();
}

// Function: vla_stack @ 0x1014d0
unsigned int vla_stack(uint param_1)
{
 long lVar1;
 char *puVar2;
 uint uVar3;
 unsigned int uVar4;
 int *piVar5;
 int *piVar6;
 unsigned long uVar7;
 char *puVar8;
 char *puVar10;
 long in_FS_OFFSET;
 int iVar11;
 int iVar12;
 int iVar13;
 int iVar14;
 char auStack_18 [8];
 long local_10;
 char *puVar9;
 puVar10 = auStack_18;
 puVar8 = auStack_18;
 puVar9 = auStack_18;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 if (999 < param_1 - 1) {
 uVar4 = 0xffffffff;
 goto LAB_001015ce;
 }
 uVar7 = (long)(int)param_1 * 4 + 0xf;
 puVar2 = auStack_18;
 while (puVar9 != auStack_18 + -(uVar7 & 0xfffffffffffff000)) {
 puVar8 = puVar2 + -0x1000;
 *(unsigned long long *)(puVar2 + -8) = *(unsigned long long *)(puVar2 + -8);
 puVar9 = puVar2 + -0x1000;
 puVar2 = puVar2 + -0x1000;
 }
 uVar7 = (unsigned long)((uint)uVar7 & 0xff0);
 lVar1 = -uVar7;
 puVar10 = puVar8 + lVar1;
 if (uVar7 != 0) {
 *(unsigned long long *)(puVar8 + -8) = *(unsigned long long *)(puVar8 + -8);
 }
 if (param_1 - 1 < 3) {
 uVar3 = 0;
LAB_0010159c:
 iVar11 = uVar3 * 2;
 piVar5 = (int *)(puVar8 + (long)(int)uVar3 * 4 + lVar1);
 *piVar5 = iVar11;
 if (((int)(uVar3 + 1) < (int)param_1) &&
 (piVar5[1] = iVar11 + 2, (int)(uVar3 + 2) < (int)param_1)) {
 piVar5[2] = iVar11 + 4;
 }
 }
 else {
 piVar5 = (int *)(puVar8 + lVar1);
 iVar11 = 0;
 iVar12 = 1;
 iVar13 = 2;
 iVar14 = 3;
 do {
 piVar6 = piVar5 + 4;
 *piVar5 = iVar11 << 1;
 piVar5[1] = iVar12 << 1;
 piVar5[2] = iVar13 << 1;
 piVar5[3] = iVar14 << 1;
 piVar5 = piVar6;
 iVar11 = iVar11 + 4;
 iVar12 = iVar12 + 4;
 iVar13 = iVar13 + 4;
 iVar14 = iVar14 + 4;
 } while (piVar6 != (int *)(puVar8 + (unsigned long)(param_1 >> 2) * 0x10 + lVar1));
 uVar3 = param_1 & 0xfffffffc;
 if ((param_1 & 3) != 0) goto LAB_0010159c;
 }
 uVar4 = *(unsigned int *)(puVar8 + (long)((int)param_1 >> 1) * 4 + lVar1);
LAB_001015ce:
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 *(char **)(puVar10 + -8) = &UNK_001015fb;
 __stack_chk_fail();
 }
 return uVar4;
}

// Function: alloca_usage @ 0x101600
int alloca_usage(uint param_1)
{
 long lVar1;
 char *puVar2;
 uint uVar3;
 int *piVar4;
 int *piVar5;
 unsigned long uVar6;
 char *puVar7;
 char *puVar9;
 int *piVar10;
 long in_FS_OFFSET;
 int iVar11;
 int iVar12;
 int iVar13;
 int iVar14;
 char auStack_18 [8];
 long local_10;
 char *puVar8;
 puVar9 = auStack_18;
 puVar7 = auStack_18;
 puVar8 = auStack_18;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 if ((int)param_1 < 1) {
 iVar11 = -1;
 goto LAB_0010170b;
 }
 uVar6 = (long)(int)param_1 * 4 + 0x17;
 puVar2 = auStack_18;
 while (puVar8 != auStack_18 + -(uVar6 & 0xfffffffffffff000)) {
 puVar7 = puVar2 + -0x1000;
 *(unsigned long long *)(puVar2 + -8) = *(unsigned long long *)(puVar2 + -8);
 puVar8 = puVar2 + -0x1000;
 puVar2 = puVar2 + -0x1000;
 }
 uVar6 = (unsigned long)((uint)uVar6 & 0xff0);
 lVar1 = -uVar6;
 puVar9 = puVar7 + lVar1;
 if (uVar6 != 0) {
 *(unsigned long long *)(puVar7 + -8) = *(unsigned long long *)(puVar7 + -8);
 }
 piVar10 = (int *)((unsigned long)(puVar7 + lVar1 + 0xf) & 0xfffffffffffffff0);
 if (param_1 - 1 < 3) {
 uVar3 = 0;
LAB_001016d4:
 iVar11 = uVar3 * 3;
 piVar10[(int)uVar3] = iVar11;
 if (((int)(uVar3 + 1) < (int)param_1) &&
 (piVar10[(long)(int)uVar3 + 1] = iVar11 + 3, (int)(uVar3 + 2) < (int)param_1)) {
 piVar10[(long)(int)uVar3 + 2] = iVar11 + 6;
 }
 }
 else {
 piVar4 = piVar10;
 iVar11 = 0;
 iVar12 = 1;
 iVar13 = 2;
 iVar14 = 3;
 do {
 piVar5 = piVar4 + 4;
 *piVar4 = iVar11 * 3;
 piVar4[1] = iVar12 * 3;
 piVar4[2] = iVar13 * 3;
 piVar4[3] = iVar14 * 3;
 piVar4 = piVar5;
 iVar11 = iVar11 + 4;
 iVar12 = iVar12 + 4;
 iVar13 = iVar13 + 4;
 iVar14 = iVar14 + 4;
 } while (piVar5 != piVar10 + (unsigned long)(param_1 >> 2) * 4);
 uVar3 = param_1 & 0xfffffffc;
 if ((param_1 & 3) != 0) goto LAB_001016d4;
 }
 iVar11 = piVar10[(int)param_1 >> 1];
LAB_0010170b:
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 *(char **)(puVar9 + -8) = &UNK_0010173b;
 __stack_chk_fail();
 }
 return iVar11;
}

// Function: stack_alias @ 0x101740
unsigned long long stack_alias(void)
{
 return 0x14;
}

// Function: test_stack_memory @ 0x101750
void test_stack_memory(void)
{
 unsigned int uVar1;
 puts(&DAT_00103004);
 __printf_chk(1,"MEM-L1-01 (local_vars): %d\n",0x14);
 __printf_chk(1,"MEM-L1-02 (local_array): %d\n",10);
 __printf_chk(1,"MEM-L1-03 (local_struct): %d\n",0xf);
 __printf_chk(1,"MEM-L1-04 (address_of_local): %d\n",0x2a);
 __printf_chk(1,"MEM-L1-05 (address_of_array): %d\n",2);
 uVar1 = large_stack_frame();
 __printf_chk(1,"MEM-L2-01 (large_stack_frame): %d\n",uVar1);
 __printf_chk(1,"MEM-L2-02 (vla_stack): %d\n",10);
 __printf_chk(1,"MEM-L2-03 (alloca_usage): %d\n",alloca_usage_constprop_0());
 __printf_chk(1,"MEM-L2-04 (stack_alias): %d\n",0x14);
 return;
}

// Function: heap_basic @ 0x101850
int heap_basic(uint param_1)
{
 uint uVar1;
 int *__ptr;
 int *piVar2;
 int *piVar3;
 int iVar4;
 int iVar5;
 int iVar6;
 int iVar7;
 __ptr = (int *)malloc((long)(int)param_1 << 2);
 if (__ptr == (int *)0x0) {
 return -1;
 }
 if (0 < (int)param_1) {
 if (param_1 - 1 < 3) {
 uVar1 = 0;
 }
 else {
 piVar2 = __ptr;
 iVar4 = 0;
 iVar5 = 1;
 iVar6 = 2;
 iVar7 = 3;
 do {
 piVar3 = piVar2 + 4;
 *piVar2 = iVar4 << 1;
 piVar2[1] = iVar5 << 1;
 piVar2[2] = iVar6 << 1;
 piVar2[3] = iVar7 << 1;
 piVar2 = piVar3;
 iVar4 = iVar4 + 4;
 iVar5 = iVar5 + 4;
 iVar6 = iVar6 + 4;
 iVar7 = iVar7 + 4;
 } while (piVar3 != __ptr + (unsigned long)(param_1 >> 2) * 4);
 uVar1 = param_1 & 0xfffffffc;
 if (((long)(int)param_1 & 3U) == 0) goto LAB_001018f9;
 }
 iVar4 = uVar1 * 2;
 __ptr[(int)uVar1] = iVar4;
 if (((int)(uVar1 + 1) < (int)param_1) &&
 (__ptr[(long)(int)uVar1 + 1] = iVar4 + 2, (int)(uVar1 + 2) < (int)param_1)) {
 __ptr[(long)(int)uVar1 + 2] = iVar4 + 4;
 }
 }
LAB_001018f9:
 iVar4 = __ptr[(int)param_1 / 2];
 free(__ptr);
 return iVar4;
}

// Function: heap_calloc @ 0x101930
int heap_calloc(uint param_1)
{
 int iVar1;
 int *piVar2;
 int *piVar3;
 int *piVar4;
 uint uVar5;
 int *__ptr;
 int *piVar6;
 int iVar7;
 int iVar8;
 int iVar9;
 int iVar10;
 __ptr = (int *)calloc((long)(int)param_1,4);
 if (__ptr == (int *)0x0) {
 return -1;
 }
 if ((int)param_1 < 1) {
 iVar7 = 0;
 }
 else {
 if (param_1 - 1 < 3) {
 uVar5 = 0;
 iVar7 = 0;
 }
 else {
 iVar7 = 0;
 iVar8 = 0;
 iVar9 = 0;
 iVar10 = 0;
 piVar6 = __ptr;
 do {
 iVar1 = *piVar6;
 piVar2 = piVar6 + 1;
 piVar3 = piVar6 + 2;
 piVar4 = piVar6 + 3;
 piVar6 = piVar6 + 4;
 iVar7 = iVar7 + iVar1;
 iVar8 = iVar8 + *piVar2;
 iVar9 = iVar9 + *piVar3;
 iVar10 = iVar10 + *piVar4;
 } while (piVar6 != __ptr + (unsigned long)(param_1 >> 2) * 4);
 uVar5 = param_1 & 0xfffffffc;
 iVar7 = iVar7 + iVar9 + iVar8 + iVar10;
 if (((long)(int)param_1 & 3U) == 0) goto LAB_001019e1;
 }
 iVar7 = iVar7 + __ptr[(int)uVar5];
 if (((int)(uVar5 + 1) < (int)param_1) &&
 (iVar7 = iVar7 + __ptr[(long)(int)uVar5 + 1], (int)(uVar5 + 2) < (int)param_1)) {
 iVar7 = iVar7 + __ptr[(long)(int)uVar5 + 2];
 }
 }
LAB_001019e1:
 free(__ptr);
 return iVar7;
}

// Function: heap_realloc @ 0x101a10
unsigned int heap_realloc(void)
{
 unsigned int uVar1;
 unsigned int *__ptr;
 void *__ptr_00;
 __ptr = (unsigned int *)malloc(0x14);
 if (__ptr == (unsigned int *)0x0) {
 uVar1 = 0xffffffff;
 }
 else {
 __ptr[4] = 5;
 *__ptr = 1;
 __ptr[1] = 2;
 __ptr[2] = 3;
 __ptr[3] = 4;
 __ptr_00 = realloc(__ptr,0x28);
 if (__ptr_00 == (void *)0x0) {
 uVar1 = 0xfffffffe;
 free(__ptr);
 }
 else {
 *(unsigned int *)((long)__ptr_00 + 0x14) = 0x32;
 *(unsigned int *)((long)__ptr_00 + 0x18) = 0x3c;
 *(unsigned int *)((long)__ptr_00 + 0x1c) = 0x46;
 *(unsigned int *)((long)__ptr_00 + 0x20) = 0x50;
 uVar1 = 0x32;
 if (*(int *)((long)__ptr_00 + 8) != 3) {
 uVar1 = 0xfffffffd;
 }
 free(__ptr_00);
 }
 }
 return uVar1;
}

// Function: heap_array @ 0x101aa0
int heap_array(uint param_1)
{
 uint uVar1;
 int *__ptr;
 int *piVar2;
 int *piVar3;
 int iVar4;
 int iVar5;
 int iVar6;
 int iVar7;
 __ptr = (int *)malloc((long)(int)param_1 << 2);
 if (__ptr == (int *)0x0) {
 return -1;
 }
 if (0 < (int)param_1) {
 if (param_1 - 1 < 3) {
 uVar1 = 0;
 }
 else {
 piVar2 = __ptr;
 iVar4 = 0;
 iVar5 = 1;
 iVar6 = 2;
 iVar7 = 3;
 do {
 piVar3 = piVar2 + 4;
 *piVar2 = iVar4 * 3;
 piVar2[1] = iVar5 * 3;
 piVar2[2] = iVar6 * 3;
 piVar2[3] = iVar7 * 3;
 piVar2 = piVar3;
 iVar4 = iVar4 + 4;
 iVar5 = iVar5 + 4;
 iVar6 = iVar6 + 4;
 iVar7 = iVar7 + 4;
 } while (piVar3 != __ptr + (unsigned long)(param_1 >> 2) * 4);
 uVar1 = param_1 & 0xfffffffc;
 if (((long)(int)param_1 & 3U) == 0) goto LAB_00101b59;
 }
 iVar4 = uVar1 * 3;
 __ptr[(int)uVar1] = iVar4;
 if (((int)(uVar1 + 1) < (int)param_1) &&
 (__ptr[(long)(int)uVar1 + 1] = iVar4 + 3, (int)(uVar1 + 2) < (int)param_1)) {
 __ptr[(long)(int)uVar1 + 2] = iVar4 + 6;
 }
 }
LAB_00101b59:
 iVar4 = __ptr[(int)param_1 / 2];
 free(__ptr);
 return iVar4;
}

// Function: heap_struct @ 0x101b90
int heap_struct(int param_1)
{
 void *__ptr;
 __ptr = malloc(8);
 if (__ptr == (void *)0x0) {
 param_1 = -1;
 }
 else {
 param_1 = param_1 * 3;
 free(__ptr);
 }
 return param_1;
}

// Function: heap_nested @ 0x101bd0
unsigned long long heap_nested(unsigned long long *param_1)
{
 unsigned int *__ptr;
 unsigned int *puVar1;
 unsigned long long uVar2;
 __ptr = (unsigned int *)malloc(0x10);
 *param_1 = __ptr;
 if (__ptr == (unsigned int *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 *__ptr = 10;
 puVar1 = (unsigned int *)malloc(0x10);
 *(unsigned int **)(__ptr + 2) = puVar1;
 if (puVar1 == (unsigned int *)0x0) {
 free(__ptr);
 uVar2 = 0xfffffffe;
 }
 else {
 *puVar1 = 0x14;
 *(unsigned long long *)(puVar1 + 2) = 0;
 uVar2 = 0;
 }
 }
 return uVar2;
}

// Function: linked_list_heap @ 0x101c40
int linked_list_heap(void)
{
 int *piVar1;
 int *piVar2;
 int *piVar3;
 int *__ptr;
 int iVar4;
 iVar4 = 0;
 __ptr = (int *)0x0;
 piVar2 = (int *)malloc(0x10);
 piVar3 = (int *)0x0;
 while( 1 ) {
 piVar1 = piVar2;
 if (piVar1 == (int *)0x0) {
 while (__ptr != (int *)0x0) {
 piVar3 = *(int **)(__ptr + 2);
 free(__ptr);
 __ptr = piVar3;
 }
 return -1;
 }
 *piVar1 = iVar4;
 *(unsigned long long *)(piVar1 + 2) = 0;
 piVar2 = piVar1;
 if (__ptr != (int *)0x0) {
 *(int **)(piVar3 + 2) = piVar1;
 piVar2 = __ptr;
 }
 __ptr = piVar2;
 if (iVar4 == 0x28) break;
 iVar4 = iVar4 + 10;
 piVar2 = (int *)malloc(0x10);
 piVar3 = piVar1;
 }
 iVar4 = 0;
 piVar3 = __ptr;
 do {
 iVar4 = iVar4 + *piVar3;
 piVar3 = *(int **)(piVar3 + 2);
 } while (piVar3 != (int *)0x0);
 do {
 piVar3 = *(int **)(__ptr + 2);
 free(__ptr);
 __ptr = piVar3;
 } while (piVar3 != (int *)0x0);
 return iVar4;
}

// Function: create_tree_node @ 0x101cf0
void create_tree_node(unsigned int param_1)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)malloc(0x18);
 if (puVar1 != (unsigned int *)0x0) {
 *puVar1 = param_1;
 *(char (*) [16])(puVar1 + 2) = (char [16])0x0;
 }
 return;
}

// Function: tree_heap_traversal @ 0x101d20
unsigned long long tree_heap_traversal(void)
{
 void *__ptr;
 void *pvVar1;
 void *__ptr_00;
 unsigned long long uVar2;
 __ptr = malloc(0x18);
 if (__ptr == (void *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 pvVar1 = malloc(0x18);
 if (pvVar1 == (void *)0x0) {
 pvVar1 = malloc(0x18);
 if (pvVar1 != (void *)0x0) {
 free(pvVar1);
 }
 }
 else {
 __ptr_00 = malloc(0x18);
 if (__ptr_00 != (void *)0x0) {
 free(pvVar1);
 free(__ptr_00);
 free(__ptr);
 return 0x3c;
 }
 free(pvVar1);
 }
 free(__ptr);
 uVar2 = 0xfffffffe;
 }
 return uVar2;
}

// Function: memory_leak @ 0x101dc0
int memory_leak(uint param_1)
{
 uint uVar1;
 int *piVar2;
 int *piVar3;
 int *piVar4;
 int iVar5;
 int iVar6;
 int iVar7;
 int iVar8;
 piVar2 = (int *)malloc((long)(int)param_1 << 2);
 if (piVar2 == (int *)0x0) {
 return -1;
 }
 if (0 < (int)param_1) {
 if (param_1 - 1 < 3) {
 uVar1 = 0;
 }
 else {
 piVar3 = piVar2;
 iVar5 = 0;
 iVar6 = 1;
 iVar7 = 2;
 iVar8 = 3;
 do {
 piVar4 = piVar3 + 4;
 *piVar3 = iVar5;
 piVar3[1] = iVar6;
 piVar3[2] = iVar7;
 piVar3[3] = iVar8;
 piVar3 = piVar4;
 iVar5 = iVar5 + 4;
 iVar6 = iVar6 + 4;
 iVar7 = iVar7 + 4;
 iVar8 = iVar8 + 4;
 } while (piVar4 != piVar2 + (unsigned long)(param_1 >> 2) * 4);
 uVar1 = param_1 & 0xfffffffc;
 if (((long)(int)param_1 & 3U) == 0) goto LAB_00101e53;
 }
 piVar2[(int)uVar1] = uVar1;
 if ((int)(uVar1 + 1) < (int)param_1) {
 piVar2[(long)(int)uVar1 + 1] = uVar1 + 1;
 if ((int)(uVar1 + 2) < (int)param_1) {
 piVar2[(long)(int)uVar1 + 2] = uVar1 + 2;
 }
 }
 }
LAB_00101e53:
 return piVar2[(int)param_1 / 2];
}

// Function: dangling_pointer @ 0x101e70
unsigned int dangling_pointer(void)
{
 unsigned int *__ptr;
 __ptr = (unsigned int *)malloc(4);
 if (__ptr != (unsigned int *)0x0) {
 __printf_chk(1,"value before free: %d\n",0x2a);
 free(__ptr);
 return *__ptr;
 }
 return 0xffffffff;
}

// Function: double_free @ 0x101eb0
unsigned int double_free(unsigned int *param_1)
{
 void *__ptr;
 if (param_1 != (unsigned int *)0x0) {
 return *param_1;
 }
 __ptr = malloc(4);
 if (__ptr != (void *)0x0) {
 free(__ptr);
 free(__ptr);
 return 0xfffffffe;
 }
 return 0xffffffff;
}

// Function: heap_overflow @ 0x101ef0
unsigned long long heap_overflow(void)
{
 void *__ptr;
 unsigned long long uVar1;
 __ptr = malloc(0x28);
 if (__ptr == (void *)0x0) {
 uVar1 = 0xffffffff;
 }
 else {
 free(__ptr);
 uVar1 = 0;
 }
 return uVar1;
}

// Function: test_heap_memory @ 0x101f20
void test_heap_memory(void)
{
 int *piVar1;
 unsigned int uVar2;
 __pid_t __pid;
 void *pvVar3;
 int *piVar4;
 unsigned int *puVar5;
 int *piVar6;
 unsigned long long *puVar7;
 int *piVar8;
 int iVar9;
 unsigned long long uVar10;
 long in_FS_OFFSET;
 uint local_24;
 long local_20;
 local_20 = *(long *)(in_FS_OFFSET + 0x28);
 puts(&DAT_001030e6);
 pvVar3 = malloc(0x28);
 if (pvVar3 == (void *)0x0) {
 uVar10 = 0xffffffff;
 }
 else {
 *(unsigned int *)((long)pvVar3 + 0x10) = 8;
 *(unsigned int *)((long)pvVar3 + 0x14) = 10;
 *(unsigned int *)((long)pvVar3 + 0x18) = 0xc;
 *(unsigned int *)((long)pvVar3 + 0x1c) = 0xe;
 *(unsigned long long *)((long)pvVar3 + 0x20) = 0x1200000010;
 free(pvVar3);
 uVar10 = 10;
 }
 __printf_chk(1,"HEAP-L2-01 (heap_basic): %d\n",uVar10);
 piVar4 = (int *)calloc(5,4);
 if (piVar4 == (int *)0x0) {
 iVar9 = -1;
 }
 else {
 iVar9 = piVar4[2] + *piVar4 + piVar4[3] + piVar4[1] + piVar4[4];
 free(piVar4);
 }
 __printf_chk(1,"HEAP-L2-02 (heap_calloc): %d\n",iVar9);
 uVar2 = heap_realloc();
 __printf_chk(1,"HEAP-L2-03 (heap_realloc): %d\n",uVar2);
 pvVar3 = malloc(0x28);
 if (pvVar3 == (void *)0x0) {
 uVar10 = 0xffffffff;
 }
 else {
 *(unsigned int *)((long)pvVar3 + 0x10) = 0xc;
 *(unsigned int *)((long)pvVar3 + 0x14) = 0xf;
 *(unsigned int *)((long)pvVar3 + 0x18) = 0x12;
 *(unsigned int *)((long)pvVar3 + 0x1c) = 0x15;
 *(unsigned long long *)((long)pvVar3 + 0x20) = 0x1b00000018;
 free(pvVar3);
 uVar10 = 0xf;
 }
 __printf_chk(1,"HEAP-L2-04 (heap_array): %d\n",uVar10);
 pvVar3 = malloc(8);
 if (pvVar3 == (void *)0x0) {
 uVar10 = 0xffffffff;
 }
 else {
 free(pvVar3);
 uVar10 = 0xf;
 }
 __printf_chk(1,"HEAP-L2-05 (heap_struct): %d\n",uVar10);
 pvVar3 = malloc(0x10);
 if (pvVar3 == (void *)0x0) {
 __printf_chk(1,"HEAP-L2-06 (heap_nested): %d\n",0xffffffff);
 }
 else {
 puVar5 = (unsigned int *)malloc(0x10);
 *(unsigned int **)((long)pvVar3 + 8) = puVar5;
 if (puVar5 == (unsigned int *)0x0) {
 free(pvVar3);
 uVar10 = 0xfffffffe;
 }
 else {
 *puVar5 = 0x14;
 uVar10 = 0;
 *(unsigned long long *)(puVar5 + 2) = 0;
 }
 __printf_chk(1,"HEAP-L2-06 (heap_nested): %d\n",uVar10);
 free(*(void **)((long)pvVar3 + 8));
 free(pvVar3);
 }
 iVar9 = 0;
 piVar4 = (int *)0x0;
 piVar6 = (int *)malloc(0x10);
 piVar8 = (int *)0x0;
 do {
 piVar1 = piVar6;
 if (piVar1 == (int *)0x0) {
 while (piVar4 != (int *)0x0) {
 piVar8 = *(int **)(piVar4 + 2);
 free(piVar4);
 piVar4 = piVar8;
 }
 iVar9 = -1;
LAB_00102160:
 __printf_chk(1,"HEAP-L3-01 (linked_list_heap): %d\n",iVar9);
 uVar2 = tree_heap_traversal();
 __printf_chk(1,"HEAP-L3-02 (tree_heap_traversal): %d\n",uVar2);
 puVar7 = (unsigned long long *)malloc(0x14);
 if (puVar7 == (unsigned long long *)0x0) {
 uVar10 = 0xffffffff;
 }
 else {
 *(unsigned int *)(puVar7 + 2) = 4;
 uVar10 = 2;
 *puVar7 = 0x100000000;
 puVar7[1] = 0x300000002;
 }
 __printf_chk(1,"HEAP-L3-03 (memory_leak): %d\n",uVar10);
 __printf_chk(1,"HEAP-L3-04 (dangling_pointer): ");
 __pid = fork();
 if (__pid == 0) {
 puVar5 = (unsigned int *)malloc(4);
 if (puVar5 == (unsigned int *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 __printf_chk(1,"value before free: %d\n",0x2a);
 free(puVar5);
 uVar2 = *puVar5;
 }
 __printf_chk(1,&DAT_00103198,uVar2);
 exit(0);
 }
 if (__pid < 1) {
 if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
 perror(&DAT_001031a8);
 return;
 }
 }
 else {
 waitpid(__pid,(int *)&local_24,0);
 if ((local_24 & 0x7f) == 0) {
 __printf_chk(1,&DAT_001033c8,local_24 >> 8 & 0xff);
 }
 else if ('\x01' < (char)((char)(local_24 & 0x7f) + '\x01')) {
 __printf_chk(1,&DAT_001033f0);
 }
 if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
 return;
 }
 }
 __stack_chk_fail();
 }
 *piVar1 = iVar9;
 *(unsigned long long *)(piVar1 + 2) = 0;
 piVar6 = piVar1;
 if (piVar4 != (int *)0x0) {
 *(int **)(piVar8 + 2) = piVar1;
 piVar6 = piVar4;
 }
 piVar4 = piVar6;
 if (iVar9 == 0x28) {
 iVar9 = 0;
 piVar8 = piVar4;
 do {
 iVar9 = iVar9 + *piVar8;
 piVar8 = *(int **)(piVar8 + 2);
 } while (piVar8 != (int *)0x0);
 do {
 piVar8 = *(int **)(piVar4 + 2);
 free(piVar4);
 piVar4 = piVar8;
 } while (piVar8 != (int *)0x0);
 goto LAB_00102160;
 }
 iVar9 = iVar9 + 10;
 piVar6 = (int *)malloc(0x10);
 piVar8 = piVar1;
 } while( 1 );
}

// Function: global_var_access @ 0x1023a0
void global_var_access(void)
{
 global_counter = global_counter + 1;
 return;
}

// Function: global_var_read @ 0x1023c0
int global_var_read(void)
{
 return global_counter * 2;
}

// Function: global_array_access @ 0x1023d0
unsigned int global_array_access(uint param_1)
{
 if (param_1 < 10) {
 return *(unsigned int *)(global_array + (long)(int)param_1 * 4);
 }
 return 0xffffffff;
}

// Function: static_local @ 0x102400
void static_local(int param_1)
{
 int iVar1;
 iVar1 = 0;
 if (param_1 == 0) {
 iVar1 = counter_1 + 1;
 }
 counter_1 = iVar1;
 return;
}

// Function: call_static_func @ 0x102420
int call_static_func(int param_1)
{
 return param_1 * 2 + 1;
}

// Function: access_extern_global @ 0x102430
int access_extern_global(void)
{
 return extern_global_var + 100;
}

// Function: call_extern_func @ 0x102440
void call_extern_func(void)
{
 extern_function(5);
 return;
}

// Function: read_const_data @ 0x102450
int read_const_data(void)
{
 return (char)const_string[4] + 0x2a;
}

// Function: access_bss_var @ 0x102470
unsigned long long access_bss_var(void)
{
 return 0;
}

// Function: access_bss_buffer @ 0x102480
unsigned long long access_bss_buffer(void)
{
 return 0;
}

// Function: global_struct_access @ 0x102490
unsigned long long global_struct_access(void)
{
 return 0x1e;
}

// Function: set_file_static @ 0x1024a0
void set_file_static(unsigned int param_1)
{
 file_scope_static = param_1;
 return;
}

// Function: get_file_static @ 0x1024b0
unsigned int get_file_static(void)
{
 return file_scope_static;
}

// Function: set_global_callback @ 0x1024c0
void set_global_callback(unsigned long long param_1)
{
 global_func_ptr = param_1;
 return;
}

// Function: call_global_callback @ 0x1024d0
unsigned long long call_global_callback(void)
{
 unsigned long long uVar1;
 if (global_func_ptr != (void *)0x0) {
 uVar1 = (*global_func_ptr)();
 return uVar1;
 }
 return 0xffffffff;
}

// Function: global_heap_store @ 0x1024f0
unsigned int global_heap_store(unsigned int *param_1)
{
 if (param_1 != (unsigned int *)0x0) {
 return *param_1;
 }
 return 0xffffffff;
}

// Function: static_complex_init @ 0x102510
unsigned long long static_complex_init(void)
{
 return 0xf;
}

// Function: tls_access @ 0x102520
int tls_access(int param_1)
{
 return param_1 * 2;
}

// Function: init_order_test @ 0x102530
unsigned long long init_order_test(void)
{
 return 0x14;
}

// Function: test_static_global @ 0x102540
void test_static_global(void)
{
 unsigned int uVar1;
 puts(&DAT_00103438);
 global_counter = global_counter + 1;
 __printf_chk(1,"STM-L1-01 (global_var_access): %d\n");
 __printf_chk(1,"STM-L1-01 (global_var_read): %d\n",global_counter * 2);
 __printf_chk(1,"STM-L1-02 (global_array_access): %d\n",5);
 counter_1 = 1;
 __printf_chk(1,"STM-L1-03 (static_local): %d\n",1);
 counter_1 = counter_1 + 1;
 __printf_chk(1,"STM-L1-03 (static_local): %d\n");
 __printf_chk(1,"STM-L1-04 (call_static_func): %d\n",0xb);
 __printf_chk(1,"STM-L2-01 (access_extern_global): %d\n",extern_global_var + 100);
 uVar1 = extern_function(5);
 __printf_chk(1,"STM-L2-02 (call_extern_func): %d\n",uVar1);
 __printf_chk(1,"STM-L2-03 (read_const_data): %d\n",(char)const_string[4] + 0x2a);
 __printf_chk(1,"STM-L2-04 (access_bss_var): %d\n",0);
 __printf_chk(1,"STM-L2-04 (access_bss_buffer): %d\n",0);
 __printf_chk(1,"STM-L2-05 (global_struct_access): %d\n",0x1e);
 file_scope_static = 0x32;
 __printf_chk(1,"STM-L2-06 (file_static): %d\n",0x32);
 global_func_ptr = double_value;
 __printf_chk(1,"STM-L2-07 (global_func_ptr): %d\n",10);
 __printf_chk(1,"STM-L2-08 (global_heap_store): %d\n",100);
 __printf_chk(1,"STM-L2-09 (static_complex_init): %d\n",0xf);
 __printf_chk(1,"STM-L3-01 (tls_access): %d\n",0x14);
 __printf_chk(1,"STM-L3-02 (init_order_test): %d\n",0x14);
 return;
}

// Function: memop_memset @ 0x102750
unsigned long memop_memset(void *param_1,size_t param_2,int param_3)
{
 byte *pbVar1;
 if ((param_1 != (void *)0x0) && (param_2 != 0)) {
 pbVar1 = (byte *)memset(param_1,param_3,param_2);
 return (unsigned long)*pbVar1;
 }
 return 0xffffffff;
}

// Function: memop_memcpy @ 0x102790
unsigned int memop_memcpy(void *param_1,void *param_2,unsigned long param_3)
{
 void *pvVar1;
 if ((param_2 != (void *)0x0 && param_3 != 0) && (param_1 != (void *)0x0)) {
 pvVar1 = memcpy(param_1,param_2,param_3);
 return *(unsigned int *)((long)pvVar1 + ((param_3 & 0xfffffffffffffffc) - 4));
 }
 return 0xffffffff;
}

// Function: memop_memmove @ 0x1027d0
int memop_memmove(void *param_1,unsigned long param_2)
{
 if ((param_1 != (void *)0x0) && (1 < param_2)) {
 memmove((void *)((long)param_1 + 1),param_1,param_2 - 1);
 return (int)*(char *)((long)param_1 + 1);
 }
 return -1;
}

// Function: memop_memcmp @ 0x102810
int memop_memcmp(void *param_1,void *param_2,size_t param_3)
{
 int iVar1;
 int iVar2;
 if ((param_2 != (void *)0x0 && param_3 != 0) && (param_1 != (void *)0x0)) {
 iVar1 = memcmp(param_1,param_2,param_3);
 iVar2 = -(uint)(iVar1 != 0);
 if (0 < iVar1) {
 iVar2 = 1;
 }
 return iVar2;
 }
 return 0;
}

// Function: memop_bzero @ 0x102860
unsigned long memop_bzero(void *param_1,size_t param_2)
{
 byte *pbVar1;
 if (param_1 != (void *)0x0) {
 pbVar1 = (byte *)memset(param_1,0,param_2);
 return (unsigned long)*pbVar1;
 }
 return 0xffffffff;
}

// Function: memop_bcopy @ 0x102890
unsigned long memop_bcopy(void *param_1,void *param_2,size_t param_3)
{
 byte *pbVar1;
 if ((param_2 != (void *)0x0 && param_3 != 0) && (param_1 != (void *)0x0)) {
 pbVar1 = (byte *)memmove(param_2,param_1,param_3);
 return (unsigned long)*pbVar1;
 }
 return 0xffffffff;
}

// Function: memop_unaligned_access @ 0x1028d0
unsigned int memop_unaligned_access(long param_1)
{
 if (param_1 != 0) {
 return *(unsigned int *)(param_1 + 1);
 }
 return 0xffffffff;
}

// Function: memop_memory_barrier @ 0x1028f0
int memop_memory_barrier(int *param_1)
{
 if (param_1 != (int *)0x0) {
 LOCK();
 UNLOCK();
 return *param_1 + *param_1;
 }
 return -1;
}

// Function: test_memory_op_functions @ 0x102910
void test_memory_op_functions(void)
{
 int iVar1;
 int iVar2;
 long in_FS_OFFSET;
 unsigned long long local_150;
 unsigned int local_148;
 unsigned long long local_140;
 unsigned int local_138;
 unsigned long long local_12d;
 unsigned short local_125;
 unsigned long long local_123;
 unsigned short local_11b;
 char local_119;
 unsigned long long local_118;
 unsigned short local_110;
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 puts(&DAT_00103688);
 local_118 = 0x4141414141414141;
 local_110 = 0x4141;
 __printf_chk(1,"MEMOP-L2-01: %d\n",0x41);
 __printf_chk(1,"MEMOP-L2-02: %d\n",0x32);
 local_11b = 0x646c;
 local_123 = 0x726f576f6c6c6548;
 local_119 = 0;
 memmove((void *)((long)&local_123 + 1),&local_123,9);
 __printf_chk(1,"MEMOP-L2-03: %c\n",0x48);
 local_148 = 3;
 local_150 = 0x200000001;
 local_140 = 0x200000001;
 local_138 = 4;
 iVar1 = memcmp(&local_150,&local_140,0xc);
 iVar2 = -(uint)(iVar1 != 0);
 if (0 < iVar1) {
 iVar2 = 1;
 }
 __printf_chk(1,"MEMOP-L2-04: %d\n",iVar2);
 local_125 = 0;
 local_12d = 0;
 __printf_chk(1,"MEMOP-L2-05: %d\n",0);
 __printf_chk(1,"MEMOP-L2-06: %d\n",1);
 __printf_chk(1,"MEMOP-L3-01: 0x%x\n",0x4030201);
 LOCK();
 UNLOCK();
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 __printf_chk(1,"MEMOP-L3-02: %d\n",10);
 return;
 }
 __stack_chk_fail();
}

// Function: extern_function @ 0x102ad0
int extern_function(int param_1)
{
 return param_1 * 3;
}

// Function: _fini @ 0x102ad8
void _fini(void)
{
 return;
}

