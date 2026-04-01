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
typedef unsigned char byte;
typedef unsigned long ulonglong;
typedef long long longlong;
typedef unsigned int uint;
typedef unsigned short ushort;
typedef _Bool bool;
/* Helper macros */
#define CONCAT64(high, low) (((ulonglong)(high) << 32) | ((uint)(low) & 0x7FFFFFFF))
#define SBORROW64(a, b) (((int)(a) < (int)(b)) ^ (((a) ^ (b)) & 0x80000000))
#define SCARRY64(a, b) (((uint)(a) + (uint)(b) < (uint)(a)))
#define CARRY64(a, b) (((uint)(a) + (uint)(b) < (uint)(a)))
#define LZCOUNT(x) (__builtin_clz(x))
#define SUB64_1(a, b) (((int)(a) - (int)(b)))

/* Global variables */
extern char completed_0;
extern void *__dso_handle;
extern unsigned long stack0x00000000;
extern void *__gmon_start__(void);

/* Data references */
extern char DATA_00000174c3[];
extern char DATA_00000174e4[];
extern char DATA_00000174ff[];
extern char DATA_0000017a5a[];
extern unsigned int UNK_0000017d6d8[];
extern char DATA_0000017674[];

/* External function declarations */
extern void __libc_start_main(int (*)(void), int, char **, void (*)(void), void (*)(void), void *);
extern void __cxa_finalize(void *);
extern int printf(const char *, ...);
extern int puts(const char *);
extern void *memset(void *, int, size_t);
extern void abort(void);

/* Forward declarations */
unsigned int main(void);
int call_weak_fn(void);
/* Floating point helper functions */
extern uint __mulsf3(uint, uint, unsigned int, uint);
extern uint __addsf3(uint, uint, unsigned int, uint);
extern ulonglong __muldf3(unsigned int, uint, uint, uint);
extern ulonglong __adddf3(uint, uint, uint, uint);
extern ulonglong __subdf3(uint, uint, uint, uint);
extern ulonglong __aeabi_ui2d(uint);
extern ulonglong __floatsidf(uint);
extern ulonglong __extendsfdf2(uint, unsigned int, unsigned int, uint);
extern ulonglong __floatundidf(uint, uint);
extern ulonglong __aeabi_l2d(uint, uint);
extern void __aeabi_dsub(unsigned int, uint);
extern void __aeabi_fsub(uint);
extern uint __aeabi_fsub(uint, uint, unsigned int, uint);
extern uint __aeabi_ui2f(uint);
extern uint __floatsisf(uint);
extern uint __floatundisf(uint, uint);
extern uint __aeabi_l2f(uint, uint);
extern uint __fixsfsi(uint);
/* Decompiled by BinaryAI */
/* SHA256: 047a6f1b7e1da6b6df4cb212db78ab6ec0cc1a1fd10d9d1dcb4ee71a9cb17a2 */

// Function: _init @ 0x101013ec
int _init(void *ctx)
{
  int iVar1;
  iVar1 = call_weak_fn();
  return iVar1;
}
/* External functions already declared above */

// Function: _start @ 0x1010141601
void _start(unsigned int param_1,unsigned int param_2)
{
  __libc_start_main(main,param_2,&stack0x00000000,0,0,param_1);
  abort();
}

// Function: call_weak_fn @ 0x1010141a41
int call_weak_fn(void)
{
  __gmon_start__();
  return 0;
}

// Function: deregister_tm_clones @ 0x1010141c81
void deregister_tm_clones(void)
{
  return;
}

// Function: register_tm_clones @ 0x101015101c1
void register_tm_clones(void)
{
  return;
}

// Function: __do_global_dtors_aux @ 0x101015151c1
void __do_global_dtors_aux(void)
{
  if (completed_0 == '\0') {
  __cxa_finalize(__dso_handle);
  deregister_tm_clones();
  completed_0 = 1;
  return;
  }
  return;
}
// Function: process_char @ 0x101015c8
char process_char(char param_1)
{
  if ((byte)(param_1 + 0xbfU) < 0x1a) {
  param_1 = param_1 + ' ';
  }
  return param_1;
}
// Function: process_short @ 0x101015e0
int process_short(int param_1,int param_2)
{
  return (param_2 + param_1) * 0x100000 >> 0x10;
}
// Function: process_int @ 0x101015f0
uint process_int(int param_1)
{
  return param_1 << 1 | 1;
}
// Function: process_long @ 0x101015fc
int process_long(int param_1)
{
  return param_1 << 1;
}
// Function: process_ll @ 0x10101614
unsigned long long process_ll(uint param_1,int param_2)
{
  return CONCAT64(param_1 * param_2 +
  param_1 * param_2 + (int)((ulonglong)param_1 * (ulonglong)param_1 >> 0x20),
  (int)((ulonglong)param_1 * (ulonglong)param_1));
}
// Function: process_float @ 0x1010161c
void process_float(unsigned int param_1)
{
  unsigned int uVar1;
  uVar1 = __mulsf3(param_1,0x3fc00000);
  __addsf3(uVar1,0x3f000000);
  return;
}
// Function: process_double @ 0x10101638
void process_double(unsigned int param_1,unsigned int param_2)
{
  unsigned long long uVar1;
  uVar1 = __muldf3(param_1,param_2,1,0x3fe00000);
  __adddf3((int)uVar1,(int)((ulonglong)uVar1 >> 0x20),0x666666666666666a,0x3fb6666666666666);
  return;
}
// Function: process_ld @ 0x10101668
void process_ld(unsigned int param_1,unsigned int param_2)
{
  unsigned long long uVar1;
  uVar1 = __muldf3(param_1,param_2,param_1,param_2);
  __adddf3((int)uVar1,(int)((ulonglong)uVar1 >> 0x20),1,0x3ff00000);
  return;
}
// Function: process_bool @ 0x10101690
bool process_bool(uint param_1)
{
  return 1 < (int)param_1 && (param_1 & 1) == 0;
}
// Function: const_param @ 0x101016b0
int const_param(int *param_1)
{
  return *param_1 + 100;
}
// Function: volatile_access @ 0x101016bc
int volatile_access(int *param_1)
{
  return *param_1 + *param_1;
}
// Function: test_data_types_1ll @ 0x101016cc
void test_data_types_1ll(void)
{
  puts(&DATA_00000174c3);
  printf("DT-L1N-01 (process_char): %c\n",0x61);
  printf("DT-L1N-02 (process_char): %c\n",0x62);
  printf("DT-L1N-03 (process_short): %d\n",100);
  printf("DT-L1N-04 (process_int): %d\n",0x1b);
  printf("DT-L1N-05 (process_long): %ld\n",200);
  printf("DT-L1N-06 (process_ll): %lld\n");
  printf("DT-L1N-07 (process_float): %.2f\n");
  printf("DT-L1N-08 (process_double): %.2f\n");
  printf("DT-L1N-09 (process_ld): %.2Lf\n");
  printf("DT-L1N-10 (process_bool): %d\n",1);
  printf("DT-L1N-10 (process_bool): %d\n",0);
  printf("DT-L1N-10 (process_bool): %d\n",0);
  printf("DT-L1N-11 (const_param): %d\n",0x1f);
  printf("DT-L1N-12 (volatile_access): %d\n",0x14);
  return;
}
// Function: array_1d_stack @ 0x10101812c
int array_1d_stack(int *param_1,int param_2)
{
  int iVar1;
  if (0 < param_2) {
  iVar1 = 0;
  do {
  iVar1 = *param_1 + iVar1;
  param_2 = param_2 + -1;
  param_1 = param_1 + 1;
  } while (param_2 != 0);
  return iVar1;
  }
  return 0;
}
// Function: array_string @ 0x101018158
int array_string(int param_1)
{
  int iVar1;
  int iVar2;
  iVar1 = 0;
  do {
  iVar2 = iVar1;
  iVar1 = iVar2 + 1;
  } while (*(char *)(param_1 + iVar2) != '\0');
  return iVar2;
}
// Function: array_2d_stack @ 0x101018174
int array_2d_stack(int param_1)
{
  int iVar1;
  int iVar2;
  iVar2 = 0;
  iVar1 = 0;
  do {
  iVar1 = *(int *)(param_1 + iVar2) + iVar1;
  iVar2 = iVar2 + 0x2c;
  } while (iVar2 != 0x118);
  return iVar1;
}
// Function: array_3d @ 0x101018198
int array_3d(int param_1)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  iVar4 = 0;
  iVar1 = 0;
  do {
  iVar5 = 0;
  iVar3 = param_1;
  do {
  iVar2 = 0;
  do {
  iVar1 = *(int *)(iVar3 + iVar2 * -4) + iVar1;
  iVar2 = iVar2 + -1;
  } while (iVar2 != -5);
  iVar3 = iVar3 + 0x14;
  iVar5 = iVar5 + 1;
  } while (iVar5 != 5);
  param_1 = param_1 + 100;
  iVar4 = iVar4 + 1;
  } while (iVar4 != 5);
  return iVar1;
}
// Function: array_vla @ 0x101018f1
int array_vla(int param_1,int *param_2)
{
  int iVar1;
  if (0 < param_1) {
  iVar1 = 0;
  do {
  iVar1 = *param_2 + iVar1;
  param_1 = param_1 + -1;
  param_2 = param_2 + 1;
  } while (param_1 != 0);
  return iVar1;
  }
  return 0;
}
// Function: array_pointer @ 0x10101911c
int array_pointer(int *param_1,int param_2)
{
  int iVar1;
  if (0 < param_2) {
  iVar1 = 0;
  do {
  iVar1 = *param_1 + iVar1;
  param_2 = param_2 + -1;
  param_1 = param_1 + 100;
  } while (param_2 != 0);
  return iVar1;
  }
  return 0;
}
// Function: pointer_array @ 0x101019148
int pointer_array(int **param_1,int param_2)
{
  int iVar1;
  if (param_2 < 10) {
  return 0;
  }
  if (100 < param_2) {
  param_2 = 100;
  }
  if (param_2 < 20) {
  param_2 = 10;
  }
  iVar1 = 0;
  do {
  if (*param_1 != (int *)0x0) {
  iVar1 = **param_1 + iVar1;
  }
  param_1 = param_1 + 1;
  param_2 = param_2 + -1;
  } while (param_2 != 0);
  return iVar1;
}
// Function: array_complex_index @ 0x10101914
unsigned int array_complex_index(int param_1,int param_2,int param_3,int param_4,int param_5)
{
  int iVar1;
  unsigned int uVar2;
  bool bVar3;
  uVar2 = 0xffffffff;
  if (-1 < param_4) {
  bVar3 = SBORROW64(param_5,param_3);
  iVar1 = param_5 - param_3;
  if (param_5 < param_3) {
  bVar3 = SBORROW64(param_4,param_2);
  iVar1 = param_4 - param_2;
  }
  if (iVar1 < 0 != bVar3) {
  if (-1 < param_5) {
  uVar2 = *(unsigned int *)(param_1 + (param_5 * param_2 + param_4) * 4);
  }
  return uVar2;
  }
  }
  return uVar2;
}
// Function: array_oob @ 0x101019d4
int array_oob(int *param_1,int param_2)
{
  int iVar1;
  if (-1 < param_2) {
  param_2 = param_2 + 1;
  iVar1 = 0;
  do {
  iVar1 = *param_1 + iVar1;
  param_2 = param_2 + -1;
  param_1 = param_1 + 1;
  } while (param_2 != 0);
  return iVar1;
  }
  return 0;
}
// Function: test_array_types @ 0x10101a81
void test_array_types(void)
{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar11;
  int iVar13;
  int iVar14;
  char *puVar6;
  char *puVar7;
  char *puVar16;
  char *puVar17;
  int local_4d0 [100];
  int *local_4b0 [4];
  int local_190 [4];
  int local_194 [100];
  int local_15c [50];
  int local_1d10 [16];
  int local_160;
  int local_164;
  int local_168;
  int local_16c;
  int local_170;
  int local_174;
  int local_178;
  int local_17c;
  int local_180;
  unsigned int local_4a0;
  unsigned int local_47c;
  unsigned int local_478;
  unsigned int local_474;
  unsigned int local_470;
  unsigned int local_46c;
  unsigned int local_468;
  unsigned int local_464;
  int local_460;
  int local_45c [50];
  char local_394 [50];
  int local_1a0 [100];
  puts(&DATA_00000174e4);
  printf("ARR-L1N-01 (array_1d_stack): %d\n",0xf);
  printf("ARR-L1N-02 (array_string): %d\n",5);
  iVar1 = 0;
  piVar2 = local_1a0;
  do {
  iVar4 = 0;
  do {
  iVar3 = 0;
  if (iVar1 == iVar4) {
  iVar3 = iVar1;
  }
  piVar2[iVar4] = iVar3;
  iVar4 = iVar4 + 1;
  } while (iVar4 != 100);
  piVar2 = piVar2 + 100;
  iVar1 = iVar1 + 1;
  } while (iVar1 != 100);
  iVar1 = 0;
  iVar4 = 0;
  do {
  iVar4 = *(int *)((int)local_1a0 + iVar1) + iVar4;
  iVar1 = iVar1 + 0x12c;
  } while (iVar1 != 0x11b8);
  printf("ARR-L1N-03 (array_2d_stack): %d\n",iVar4);
  
  /* 3D array test */
  iVar11 = 0;
  iVar14 = 0;
  do {
    iVar13 = 0;
    puVar16 = (char *)local_194;
    do {
      iVar13 = iVar13 + -1;
    } while (iVar13 != -5);
    puVar16 = puVar16 + 0x14;
    iVar14 = iVar14 + 1;
  } while (iVar14 != 5);
  
  iVar11 = 0;
  iVar14 = 0;
  puVar17 = (char *)local_194;
  do {
    iVar13 = 0;
    puVar16 = puVar17;
    do {
      iVar11 = *(int *)(puVar16 + iVar13 * -4) + iVar11;
      iVar13 = iVar13 + -1;
    } while (iVar13 != -5);
    puVar16 = puVar16 + 0x14;
    iVar13 = iVar13 + 1;
  } while (iVar13 != 5);
  puVar17 = puVar17 + 100;
  iVar14 = iVar14 + 1;
  } while (iVar14 != 5);
  printf("ARR-L1N-04 (array_3d): %d\n",iVar11);
  printf("ARR-L1N-05 (array_vla): %d\n",0x1c);
  
  /* Array pointer test */
  iVar11 = 0;
  do {
  local_15c[iVar11] = iVar11;
  iVar11 = iVar11 + 1;
  } while (iVar11 != 0x32);
  iVar14 = 0;
  iVar11 = 0;
  do {
  iVar11 = *(int *)((int)local_15c + iVar14) + iVar11;
  iVar14 = iVar14 + 0x128;
  } while (iVar14 != 0x640);
  printf("ARR-L1N-06 (array_pointer): %d\n",iVar11);
  
  /* Pointer array test */
  local_160 = 10;
  local_164 = 0x14;
  local_168 = 0x1e;
  iVar11 = 0;
  local_190[3] = (int *)0x0;
  local_190[2] = &local_168;
  local_190[1] = &local_164;
  local_190[0] = &local_160;
  local_180 = 0;
  local_17c = 0;
  local_178 = 0;
  local_174 = 0;
  local_170 = 0;
  local_16c = 0;
  iVar14 = 0;
  do {
  if (local_190[iVar11] != (int *)0x0) {
  iVar14 = *local_190[iVar11] + iVar14;
  }
  iVar11 = iVar11 + 1;
  } while (iVar11 != 4);
  printf("ARR-L1N-07 (pointer_array): %d\n",iVar14);
  
  /* Complex index test */
  iVar11 = 0;
  do {
  local_1d10[iVar11] = iVar11;
  iVar11 = iVar11 + 1;
  } while (iVar11 != 0x10);
  printf("ARR-L1N-08 (array_complex_index): %d\n",local_1d10[0x77]);
  return;
}

// Function: test_array_types @ 0x10101d1c8
void test_pointer_types(void)
{
  int iVar1;
  int iVar4;
  int iVar5;
  int iVar11;
  int iVar13;
  int iVar14;
  char *puVar16;
  char *puVar17;
  int local_5d0 [100];
  int *local_5b0 [4];
  int local_590 [4];
  int local_594 [100];
  int local_55c [50];
  int local_1d10 [16];
  int local_160;
  int local_164;
  int local_168;
  int local_16c;
  int local_170;
  int local_174;
  int local_178;
  int local_17c;
  int local_180;
  puts(&DATA_00000174e4);
  printf("ARR-L1N-01 (array_1d_stack): %d\n",0xf);
  printf("ARR-L1N-02 (array_string): %d\n",5);
  
  iVar1 = 0;
  iVar4 = 0;
  do {
    iVar5 = 0;
    puVar16 = (char *)local_594;
    do {
      iVar11 = *(int *)(puVar16 + iVar5 * -4) + iVar11;
      iVar5 = iVar5 + -1;
    } while (iVar5 != -5);
    puVar16 = puVar16 + 0x14;
    iVar4 = iVar4 + 1;
  } while (iVar4 != 5);
  puVar17 = (char *)local_594;
  iVar14 = 0;
  do {
    iVar13 = 0;
    do {
      iVar13 = iVar13 + -1;
    } while (iVar13 != -5);
    puVar17 = puVar17 + 100;
    iVar14 = iVar14 + 1;
  } while (iVar14 != 5);
  iVar1 = 0;
  iVar14 = 0;
  puVar17 = (char *)local_594;
  do {
    iVar5 = 0;
    do {
      iVar1 = *(int *)(puVar17 + iVar5 * -4) + iVar1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != -5);
    puVar17 = puVar17 + 0x14;
    iVar5 = iVar5 + 1;
  } while (iVar5 != 5);
  puVar17 = puVar17 + 100;
  iVar14 = iVar14 + 1;
  } while (iVar14 != 5);
  printf("ARR-L1N-03 (array_3d): %d\n",iVar1);
  printf("ARR-L1N-04 (array_vla): %d\n",0x1c);
  
  iVar11 = 0;
  do {
    local_55c[iVar11] = iVar11;
    iVar11 = iVar11 + 1;
  } while (iVar11 != 0x32);
  iVar14 = 0;
  iVar1 = 0;
  do {
    iVar1 = *(int *)((int)local_55c + iVar14) + iVar1;
    iVar14 = iVar14 + 0x128;
  } while (iVar14 != 0x640);
  printf("ARR-L1N-05 (array_pointer): %d\n",iVar1);
  
  local_160 = 10;
  local_164 = 0x14;
  local_168 = 0x1e;
  iVar11 = 0;
  local_590[3] = (int *)0x0;
  local_590[2] = &local_168;
  local_590[1] = &local_164;
  local_590[0] = &local_160;
  local_180 = 0;
  local_17c = 0;
  local_178 = 0;
  local_174 = 0;
  local_170 = 0;
  local_16c = 0;
  iVar14 = 0;
  do {
    if (local_590[iVar11] != (int *)0x0) {
      iVar14 = *local_590[iVar11] + iVar14;
    }
    iVar11 = iVar11 + 1;
  } while (iVar11 != 4);
  printf("ARR-L1N-06 (pointer_array): %d\n",iVar14);
  
  iVar11 = 0;
  do {
    local_1d10[iVar11] = iVar11;
    iVar11 = iVar11 + 1;
  } while (iVar11 != 0x10);
  printf("ARR-L1N-07 (array_complex_index): %d\n",local_1d10[0x77]);
  return;
}

// Function: ptr_single @ 0x10101d1c8
int ptr_single(int *param_1)
{
  return *param_1 + 100;
}

// Function: ptr_double @ 0x10101d1c4
int ptr_double(int **param_1)
{
  return **param_1 + 5;
}

// Function: ptr_triple @ 0x10101d184
int ptr_triple(unsigned int *param_1)
{
  return **(int ***)*param_1 + 1;
}

// Function: ptr_increment @ 0x10101d198
int ptr_increment(int *param_1,int param_2)
{
  int iVar1;
  if (0 < param_2) {
    iVar1 = 0;
    do {
      iVar1 = *param_1 + iVar1;
      param_2 = param_2 + -1;
      param_1 = param_1 + 1;
    } while (param_2 != 0);
    return iVar1;
  }
  return 0;
}

// Function: ptr_offset @ 0x10101d1c4
unsigned int ptr_offset(int param_1,int param_2)
{
  return *(unsigned int *)(param_1 + param_2 * 4);
}

// Function: ptr_diff @ 0x10101d1cc
int ptr_diff(int param_1,int param_2)
{
  return param_1 - param_2 >> 2;
}

// Function: ptr_void @ 0x10101d1d8
uint ptr_void(uint *param_1,int param_2)
{
  if (param_2 == 0) {
    return (uint)*(byte *)param_1;
  }
  if (param_2 != 8) {
    return 0xffffffff;
  }
  return *param_1;
}

// Function: ptr_const @ 0x10101d1e0
int ptr_const(int *param_1)
{
  return *param_1 << 1;
}

// Function: ptr_const_ptr @ 0x10101d1ec
int ptr_const_ptr(int *param_1)
{
  int iVar1;
  iVar1 = *param_1;
  *param_1 = iVar1 + 5;
  return iVar1 + 5;
}

// Function: ptr_func_simple @ 0x10101d1f0
void ptr_func_simple(void (*param_1)(unsigned int),unsigned int param_2)
{
  param_1(param_2);
  return;
}

// Function: ptr_func_complex @ 0x10101d13c
void ptr_func_complex(void (*param_1)(unsigned int, char **),unsigned int param_2)
{
  char *local_10;
  unsigned int local_c;
  local_10 = &DATA_0000017a5a;
  local_c = 0;
  param_1(param_2,&local_10);
  return;
}

// Function: ptr_cast @ 0x10101d18c
unsigned int ptr_cast(unsigned int *param_1)
{
  return *param_1;
}

// Function: opaque_handle_create @ 0x10101d194
void opaque_handle_create(void)
{
  return;
}

// Function: opaque_handle_op @ 0x10101d198
int opaque_handle_op(int param_1)
{
  return param_1 << 1;
}
1
1/1/1 1F1u1n1c1t1i1o1n1:1 1p1t1r1_1s1i1n1g1l1e1 1@1 101x11101c16181
1i1n1t1 1p1t1r1_1s1i1n1g1l1e1(1i1n1t1 1*1p1a1r1a1m1_111)1
1{1
1 1r1e1t1u1r1n1 1*1p1a1r1a1m1_111 1+1 11101;1
1}1
1
1/1/1 1F1u1n1c1t1i1o1n1:1 1p1t1r1_1d1o1u1b1l1e1 1@1 101x11101c17141
1i1n1t1 1p1t1r1_1d1o1u1b1l1e1(1i1n1t1 1*1*1p1a1r1a1m1_111)1
1{1
1 1r1e1t1u1r1n1 1*1*1p1a1r1a1m1_111 1+1 151;1
1}1
1
1/1/1 1F1u1n1c1t1i1o1n1:1 1p1t1r1_1t1r1i1p1l1e1 1@1 101x11101c18141
1i1n1t1 1p1t1r1_1t1r1i1p1l1e1(1u1n1s1i1g1n1e1d1 1i1n1t1 1*1p1a1r1a1m1_111)1
1{1
1 1r1e1t1u1r1n1 1*1*1(1i1n1t1 1*1*1)1*1p1a1r1a1m1_111 1+1 111;1
1}1
1
1/1/1 1F1u1n1c1t1i1o1n1:1 1p1t1r1_1i1n1c1r1e1m1e1n1t1 1@1 101x11101c19181
1i1n1t1 1p1t1r1_1i1n1c1r1e1m1e1n1t1(1i1n1t1 1*1p1a1r1a1m1_111,1i1n1t1 1p1a1r1a1m1_121)1
1{1
1 1i1n1t1 1i1V1a1r111;1
1 1i1f1 1(101 1<1 1p1a1r1a1m1_121)1 1{1
1 1i1V1a1r111 1=1 101;1
1 1d1o1 1{1
1 1i1V1a1r111 1=1 1*1p1a1r1a1m1_111 1+1 1i1V1a1r111;1
1 1p1a1r1a1m1_121 1=1 1p1a1r1a1m1_121 1+1 1-111;1
1 1p1a1r1a1m1_111 1=1 1p1a1r1a1m1_111 1+1 111;1
1 1}1 1w1h1i1l1e1 1(1p1a1r1a1m1_121 1!1=1 101)1;1
1 1r1e1t1u1r1n1 1i1V1a1r111;1
1 1}1
1 1r1e1t1u1r1n1 101;1
1}1
1
1/1/1 1F1u1n1c1t1i1o1n1:1 1p1t1r1_1o1f1f1s1e1t1 1@1 101x11101c1c141
1u1n1s1i1g1n1e1d1 1i1n1t1 1p1t1r1_1o1f1f1s1e1t1(1i1n1t1 1p1a1r1a1m1_111,1i1n1t1 1p1a1r1a1m1_121)1
1{1
1 1r1e1t1u1r1n1 1*1(1u1n1s1i1g1n1e1d1 1i1n1t1 1*1)1(1p1a1r1a1m1_111 1+1 1p1a1r1a1m1_121 1*1 141)1;1
1}1
1
1/1/1 1F1u1n1c1t1i1o1n1:1 1p1t1r1_1d1i1f1f1 1@1 101x11101c1c1c1
1i1n1t1 1p1t1r1_1d1i1f1f1(1i1n1t1 1p1a1r1a1m1_111,1i1n1t1 1p1a1r1a1m1_121)1
1{1
1 1r1e1t1u1r1n1 1p1a1r1a1m1_111 1-1 1p1a1r1a1m1_121 1>1>1 121;1
1}1
1
1/1/1 1F1u1n1c1t1i1o1n1:1 1p1t1r1_1v1o1i1d1 1@1 101x11101c1d181
1u1i1n1t1 1p1t1r1_1v1o1i1d1(1u1i1n1t1 1*1p1a1r1a1m1_111,1i1n1t1 1p1a1r1a1m1_121)1
1{1
1 1i1f1 1(1p1a1r1a1m1_121 1=1=1 111)1 1{1
1 1r1e1t1u1r1n1 1(1u1i1n1t1)1*1(1b1y1t1e1 1*1)1p1a1r1a1m1_111;1
1 1}1
1 1i1f1 1(1p1a1r1a1m1_121 1!1=1 101)1 1{1
1 1r1e1t1u1r1n1 101x1f1f1f1f1f1f1f1f1;1
1 1}1
1 1r1e1t1u1r1n1 1*1p1a1r1a1m1_111;1
1}1
1
1/1/1 1F1u1n1c1t1i1o1n1:1 1p1t1r1_1c1o1n1s1t1 1@1 101x11101d10101
1i1n1t1 1p1t1r1_1c1o1n1s1t1(1i1n1t1 1*1p1a1r1a1m1_111)1
1{1
1 1r1e1t1u1r1n1 1*1p1a1r1a1m1_111 1<1<1 111;1
1}1
1
1/1/1 1F1u1n1c1t1i1o1n1:1 1p1t1r1_1c1o1n1s1t1_1p1t1r1 1@1 101x11101d101c1
1i1n1t1 1p1t1r1_1c1o1n1s1t1_1p1t1r1(1i1n1t1 1*1p1a1r1a1m1_111)1
1{1
1 1i1n1t1 1i1V1a1r111;1
1 1i1V1a1r111 1=1 1*1p1a1r1a1m1_111;1
1 1*1p1a1r1a1m1_111 1=1 1i1V1a1r111 1+1 151;1
1 1r1e1t1u1r1n1 1i1V1a1r111 1+1 151;1
1}1
1
1/1/1 1F1u1n1c1t1i1o1n1:1 1p1t1r1_1f1u1n1c1_1s1i1m1p1l1e1 1@1 101x11101d12101
1v1o1i1d1 1p1t1r1_1f1u1n1c1_1s1i1m1p1l1e1(1v1o1i1d1 1(1*1p1a1r1a1m1_111)1(1u1n1s1i1g1n1e1d1 1i1n1t1)1,1u1n1s1i1g1n1e1d1 1i1n1t1 1p1a1r1a1m1_121)1
1{1
1 1p1a1r1a1m1_111(1p1a1r1a1m1_121)1;1
1 1r1e1t1u1r1n1;1
1}1
1
1/1/1 1F1u1n1c1t1i1o1n1:1 1p1t1r1_1f1u1n1c1_1c1o1m1p1l1e1x1 1@1 101x11101d131c1
1v1o1i1d1 1p1t1r1_1f1u1n1c1_1c1o1m1p1l1e1x1(1v1o1i1d1 1(1*1p1a1r1a1m1_111)1(1u1n1s1i1g1n1e1d1 1i1n1t1,1 1c1h1a1r1 1*1*1)1,1u1n1s1i1g1n1e1d1 1i1n1t1 1p1a1r1a1m1_121)1
1{1
1 1c1h1a1r1 1*1l1o1c1a1l1_11101;1
1 1u1n1s1i1g1n1e1d1 1i1n1t1 1l1o1c1a1l1_1c1;1
1 1l1o1c1a1l1_11101 1=1 1&1D1A1T1_10101011121117141;1
1 1l1o1c1a1l1_1c1 1=1 101;1
1 1p1a1r1a1m1_111(1p1a1r1a1m1_121,1&1l1o1c1a1l1_11101)1;1
1 1r1e1t1u1r1n1;1
1}1
1
1/1/1 1F1u1n1c1t1i1o1n1:1 1p1t1r1_1c1a1s1t1 1@1 101x11101d181c1
1u1n1s1i1g1n1e1d1 1i1n1t1 1p1t1r1_1c1a1s1t1(1u1n1s1i1g1n1e1d1 1i1n1t1 1*1p1a1r1a1m1_111)1
1{1
1 1r1e1t1u1r1n1 1*1p1a1r1a1m1_111;1
1}1
1
1/1/1 1F1u1n1c1t1i1o1n1:1 1o1p1a1q1u1e1_1h1a1n1d1l1e1_1c1r1e1a1t1e1 1@1 101x11101d19141
1v1o1i1d1 1o1p1a1q1u1e1_1h1a1n1d1l1e1_1c1r1e1a1t1e1(1v1o1i1d1)1
1{1
1 1r1e1t1u1r1n1;1
1}1
1
1/1/1 1F1u1n1c1t1i1o1n1:1 1o1p1a1q1u1e1_1h1a1n1d1l1e1_1o1p1 1@1 101x11101d19181
1i1n1t1 1o1p1a1q1u1e1_1h1a1n1d1l1e1_1o1p1(1i1n1t1 1p1a1r1a1m1_111)1
1{1
1 1r1e1t1u1r1n1 1p1a1r1a1m1_111 1<1<1 111;1
1}1
1
1/1/1 1F1u1n1c1t1i1o1n1:1 1t1e1s1t1_1p1o1i1n1t1e1r1_1t1y1p1e1s1 1@1 101x11101d1a101
1v1o1i1d1 1t1e1s1t1_1p1o1i1n1t1e1r1_1t1y1p1e1s1(1v1o1i1d1)1
1{1
1 1i1n1t1 1i1V1a1r111;1
1 1i1n1t1 1i1V1a1r121;1
1 1i1n1t1 1l1o1c1a1l1_12141 1[151]1;1
1 1p1u1t1s1(1&1D1A1T1_1010101112141f1f1)1;1
1 1p1r1i1n1t1f1(1"1P1T1R1-1L121-10111 1(1p1t1r1_1s1i1n1g1l1e1)1:1 1%1d1\1n1"1,101x1f1)1;1
1 1p1r1i1n1t1f1(1"1P1T1R1-1L121-10121 1(1p1t1r1_1d1o1u1b1l1e1)1:1 1%1d1\1n1"1,101x1f1)1;1
1 1p1r1i1n1t1f1(1"1P1T1R1-1L121-10131 1(1p1t1r1_1t1r1i1p1l1e1)1:1 1%1d1\1n1"1,161)1;1
1 1l1o1c1a1l1_12141[101]1 1=1 111;1
1 1l1o1c1a1l1_12141[111]1 1=1 121;1
1 1l1o1c1a1l1_12141[121]1 1=1 131;1
1 1l1o1c1a1l1_12141[131]1 1=1 141;1
1 1l1o1c1a1l1_12141[141]1 1=1 151;1
1 1i1V1a1r121 1=1 101;1
1 1i1V1a1r111 1=1 101;1
1 1d1o1 1{1
1 1i1V1a1r111 1=1 1l1o1c1a1l1_12141[1-1i1V1a1r121]1 1+1 1i1V1a1r111;1
1 1i1V1a1r121 1=1 1i1V1a1r121 1+1 1-111;1
1 1}1 1w1h1i1l1e1 1(1i1V1a1r121 1!1=1 1-151)1;1
1 1p1r1i1n1t1f1(1"1P1T1R1-1L121-10141 1(1p1t1r1_1i1n1c1r1e1m1e1n1t1)1:1 1%1d1\1n1"1,1i1V1a1r111)1;1
1 1p1r1i1n1t1f1(1"1P1T1R1-1L121-10151 1(1p1t1r1_1o1f1f1s1e1t1)1:1 1%1d1\1n1"1,101x111e1)1;1
1 1p1r1i1n1t1f1(1"1P1T1R1-1L121-10161 1(1p1t1r1_1d1i1f1f1)1:1 1%1d1\1n1"1,141)1;1
1 1p1r1i1n1t1f1(1"1P1T1R1-1L121-10171 1(1p1t1r1_1v1o1i1d1)1:1 1%1d1\1n1"1,101x121a1)1;1
1 1p1r1i1n1t1f1(1"1P1T1R1-1L121-10171 1(1p1t1r1_1v1o1i1d1)1:1 1%1d1\1n1"1,101x14111)1;1
1 1p1r1i1n1t1f1(1"1P1T1R1-1L121-10181 1(1p1t1r1_1c1o1n1s1t1)1:1 1%1d1\1n1"1,101x11141)1;1
1 1p1r1i1n1t1f1(1"1P1T1R1-1L121-10191 1(1p1t1r1_1c1o1n1s1t1_1p1t1r1)1:1 1%1d1\1n1"1,101x1f1)1;1
1 1p1r1i1n1t1f1(1"1P1T1R1-1L121-11101 1(1p1t1r1_1f1u1n1c1_1s1i1m1p1l1e1)1:1 1%1d1\1n1"1,11101)1;1
1 1p1r1i1n1t1f1(1"1P1T1R1-1L121-11111 1(1p1t1r1_1f1u1n1c1_1c1o1m1p1l1e1x1)1:1 1%1d1\1n1"1,111)1;1
1 1p1r1i1n1t1f1(1"1P1T1R1-1L121-11121 1(1p1t1r1_1c1a1s1t1)1:1 101x1%1x1\1n1"1,101x11121314151617181)1;1
1 1p1r1i1n1t1f1(1"1P1T1R1-1L121-11131 1(1o1p1a1q1u1e1_1h1a1n1d1l1e1_1o1p1)1:1 1%1d1\1n1"1,101x11141)1;1
1 1r1e1t1u1r1n1;1
1}1
1
1/1/1 1F1u1n1c1t1i1o1n1:1 1s1t1r1u1c1t1_1s1i1m1p1l1e1 1@1 101x11101f11101
1i1n1t1 1s1t1r1u1c1t1_1s1i1m1p1l1e1(1i1n1t1 1*1p1a1r1a1m1_111)1
1{1
1 1r1e1t1u1r1n1 1p1a1r1a1m1_111[111]1 1+1 1*1p1a1r1a1m1_111 1+1 1p1a1r1a1m1_111[121]1;1
1}1
1
1/1/1 1F1u1n1c1t1i1o1n1:1 1s1t1r1u1c1t1_1a1r1r1a1y1 1@1 101x11101f12141
1i1n1t1 1s1t1r1u1c1t1_1a1r1r1a1y1(1i1n1t1 1p1a1r1a1m1_111,1i1n1t1 1p1a1r1a1m1_121)1
1{1
1 1i1n1t1 1i1V1a1r111;1
1 1i1n1t1 1*1p1i1V1a1r121;1
1 1i1f1 1(101 1<1 1p1a1r1a1m1_121)1 1{1
1 1p1i1V1a1r121 1=1 1(1i1n1t1 1*1)1(1p1a1r1a1m1_111 1+1 141)1;1
1 1i1V1a1r111 1=1 101;1
1 1d1o1 1{1
1 1i1V1a1r111 1=1 1p1i1V1a1r121[1-111]1 1+1 1i1V1a1r111 1+1 1*1p1i1V1a1r121 1+1 1p1i1V1a1r121[111]1;1
1 1p1i1V1a1r121 1=1 1p1i1V1a1r121 1+1 131;1
1 1p1a1r1a1m1_121 1=1 1p1a1r1a1m1_121 1+1 1-111;1
1 1}1 1w1h1i1l1e1 1(1p1a1r1a1m1_121 1!1=1 101)1;1
1 1r1e1t1u1r1n1 1i1V1a1r111;1
1 1}1
1 1r1e1t1u1r1n1 101;1
1}1
1
1/1/1 1F1u1n1c1t1i1o1n1:1 1s1t1r1u1c1t1_1n1e1s1t1e1d1 1@1 101x11101f161c1
1i1n1t1 1s1t1r1u1c1t1_1n1e1s1t1e1d1(1i1n1t1 1*1p1a1r1a1m1_111)1
1{1
1 1r1e1t1u1r1n1 1p1a1r1a1m1_111[131]1 1+1 1*1p1a1r1a1m1_111;1
1}1
1
1/1/1 1F1u1n1c1t1i1o1n1:1 1s1t1r1u1c1t1_1d1e1e1p1 1@1 101x11101f171c1
1i1n1t1 1s1t1r1u1c1t1_1d1e1e1p1(1i1n1t1 1p1a1r1a1m1_111)1
1{1
1 1r1e1t1u1r1n1 1*1(1i1n1t1 1*1)1(1p1a1r1a1m1_111 1+1 101x11141)1 1+1 1*1(1i1n1t1 1*1)1(1p1a1r1a1m1_111 1+1 181)1;1
1}1
1
1/1/1 1F1u1n1c1t1i1o1n1:1 1s1t1r1u1c1t1_1w1i1t1h1_1p1t1r1 1@1 101x11101f181c1
1i1n1t1 1s1t1r1u1c1t1_1w1i1t1h1_1p1t1r1(1i1n1t1 1*1p1a1r1a1m1_111)1
1{1
1 1i1n1t1 1i1V1a1r111;1
1 1i1f1 1(1(1i1n1t1 1*1)1p1a1r1a1m1_111[111]1 1=1=1 1(1i1n1t1 1*1)101x101)1 1{1
1 1i1V1a1r111 1=1 101;1
1 1}1
1 1e1l1s1e1 1{1
1 1i1V1a1r111 1=1 1*1(1i1n1t1 1*1)1p1a1r1a1m1_111[111]1;1
1 1}1
1 1r1e1t1u1r1n1 1i1V1a1r111 1+1 1*1p1a1r1a1m1_111;1
1}1
1
1/1/1 1F1u1n1c1t1i1o1n1:1 1s1t1r1u1c1t1_1b1i1t1f1i1e1l1d1s1 1@1 101x11101f1a181
1s1h1o1r1t1 1s1t1r1u1c1t1_1b1i1t1f1i1e1l1d1s1(1u1s1h1o1r1t1 1*1p1a1r1a1m1_111)1
1{1
1 1u1s1h1o1r1t1 1u1V1a1r111;1
1 1u1V1a1r111 1=1 1*1p1a1r1a1m1_111;1
1 1r1e1t1u1r1n1 1(1u1V1a1r111 1&1 111)1 1+1 1(1u1V1a1r111 1>1>1 161)1 1+1 1(1u1V1a1r111 1>1>1 111 1&1 131)1 1+1 1(1u1V1a1r111 1>1>1 131 1&1 171)1;1
1}1
1
1/1/1 1F1u1n1c1t1i1o1n1:1 1u1n1i1o1n1_1t1y1p1e1 1@1 101x11101f1d101
1u1i1n1t1 1u1n1i1o1n1_1t1y1p1e1(1u1i1n1t1 1*1p1a1r1a1m1_111,1i1n1t1 1p1a1r1a1m1_121)1
1{1
1 1u1i1n1t1 1u1V1a1r111;1
1 1i1f1 1(1p1a1r1a1m1_121 1=1=1 111)1 1{1
1 1u1V1a1r111 1=1 1_1_1f1i1x1s1f1s1i1(1*1p1a1r1a1m1_111)1;1
1 1r1e1t1u1r1n1 1u1V1a1r111;1
1 1}1
1 1i1f1 1(1p1a1r1a1m1_121 1=1=1 101)1 1{1
1 1u1V1a1r111 1=1 1*1p1a1r1a1m1_111;1
1 1}1
1 1e1l1s1e1 1{1
1 1u1V1a1r111 1=1 1(1u1i1n1t1)1*1(1b1y1t1e1 1*1)1p1a1r1a1m1_111;1
1 1}1
1 1r1e1t1u1r1n1 1u1V1a1r111;1
1}1
1
1/1/1 1F1u1n1c1t1i1o1n1:1 1u1n1i1o1n1_1a1r1r1a1y1 1@1 101x11111010101
1i1n1t1 1u1n1i1o1n1_1a1r1r1a1y1(1i1n1t1 1*1p1a1r1a1m1_111,1i1n1t1 1p1a1r1a1m1_121)1
1{1
1 1i1n1t1 1i1V1a1r111;1
1 1i1f1 1(101 1<1 1p1a1r1a1m1_121)1 1{1
1 1i1V1a1r111 1=1 101;1
1 1d1o1 1{1
1 1i1V1a1r111 1=1 1*1p1a1r1a1m1_111 1+1 1i1V1a1r111;1
1 1p1a1r1a1m1_121 1=1 1p1a1r1a1m1_121 1+1 1-111;1
1 1p1a1r1a1m1_111 1=1 1p1a1r1a1m1_111 1+1 111;1
1 1}1 1w1h1i1l1e1 1(1p1a1r1a1m1_121 1!1=1 101)1;1
1 1r1e1t1u1r1n1 1i1V1a1r111;1
1 1}1
1 1r1e1t1u1r1n1 101;1
1}1
1
1/1/1 1F1u1n1c1t1i1o1n1:1 1e1n1u1m1_1t1y1p1e1 1@1 101x111110121c1
1i1n1t1 1e1n1u1m1_1t1y1p1e1(1i1n1t1 1p1a1r1a1m1_111)1
1{1
1 1r1e1t1u1r1n1 1p1a1r1a1m1_111 1*1 11101;1
1}1
1
1/1/1 1F1u1n1c1t1i1o1n1:1 1e1n1u1m1_1s1w1i1t1c1h1 1@1 101x11111013181
1u1n1s1i1g1n1e1d1 1i1n1t1 1e1n1u1m1_1s1w1i1t1c1h1(1u1i1n1t1 1p1a1r1a1m1_111)1
1{1
1 1u1n1s1i1g1n1e1d1 1i1n1t1 1u1V1a1r111;1
1 1u1V1a1r111 1=1 101x1f1f1f1f1f1f191d1;1
1 1i1f1 1(1p1a1r1a1m1_111 1<1 141)1 1{1
1 1u1V1a1r111 1=1 1*1(1u1n1s1i1g1n1e1d1 1i1n1t1 1*1)1(1&1U1N1K1_10101011121516181 1+1 1p1a1r1a1m1_111 1*1 141)1;1
1 1}1
1 1r1e1t1u1r1n1 1u1V1a1r111;1
1}1
1
1/1/1 1F1u1n1c1t1i1o1n1:1 1s1t1r1u1c1t1_1f1u1n1c1_1p1t1r1 1@1 101x11111015181
1v1o1i1d1 1s1t1r1u1c1t1_1f1u1n1c1_1p1t1r1(1u1n1s1i1g1n1e1d1 1i1n1t1 1*1p1a1r1a1m1_111)1
1{1
1 1(1(1v1o1i1d1 1(1*1)1(1u1n1s1i1g1n1e1d1 1i1n1t1)1)1p1a1r1a1m1_111[111]1)1(1*1p1a1r1a1m1_111)1;1
1 1r1e1t1u1r1n1;1
1}1
1
1/1/1 1F1u1n1c1t1i1o1n1:1 1l1i1n1k1e1d1_1l1i1s1t1 1@1 101x11111017141
1i1n1t1 1l1i1n1k1e1d1_1l1i1s1t1(1i1n1t1 1*1p1a1r1a1m1_111)1
1{1
1 1i1n1t1 1i1V1a1r111;1
1 1i1n1t1 1i1V1a1r121;1
1 1i1f1 1(1p1a1r1a1m1_111 1!1=1 1(1i1n1t1 1*1)101x101)1 1{1
1 1i1V1a1r111 1=1 101;1
1 1d1o1 1{1
1 1i1V1a1r121 1=1 1*1p1a1r1a1m1_111;1
1 1p1a1r1a1m1_111 1=1 1(1i1n1t1 1*1)1p1a1r1a1m1_111[111]1;1
1 1i1V1a1r111 1=1 1i1V1a1r121 1+1 1i1V1a1r111;1
1 1}1 1w1h1i1l1e1 1(1p1a1r1a1m1_111 1!1=1 1(1i1n1t1 1*1)101x101)1;1
1 1r1e1t1u1r1n1 1i1V1a1r111;1
1 1}1
1 1r1e1t1u1r1n1 101;1
1}1
1
1/1/1 1F1u1n1c1t1i1o1n1:1 1d1o1u1b1l1y1_1l1i1n1k1e1d1_1l1i1s1t1 1@1 101x1111101a101
1i1n1t1 1d1o1u1b1l1y1_1l1i1n1k1e1d1_1l1i1s1t1(1i1n1t1 1*1p1a1r1a1m1_111)1
1{1
1 1i1n1t1 1i1V1a1r111;1
1 1i1n1t1 1i1V1a1r121;1
1 1i1f1 1(1p1a1r1a1m1_111 1!1=1 1(1i1n1t1 1*1)101x101)1 1{1
1 1i1V1a1r111 1=1 101;1
1 1d1o1 1{1
1 1i1V1a1r121 1=1 1*1p1a1r1a1m1_111;1
1 1p1a1r1a1m1_111 1=1 1(1i1n1t1 1*1)1p1a1r1a1m1_111[111]1;1
1 1i1V1a1r111 1=1 1i1V1a1r121 1+1 1i1V1a1r111;1
1 1}1 1w1h1i1l1e1 1(1p1a1r1a1m1_111 1!1=1 1(1i1n1t1 1*1)101x101)1;1
1 1r1e1t1u1r1n1 1i1V1a1r111;1
1 1}1
1 1r1e1t1u1r1n1 101;1
1}1
1
1/1/1 1F1u1n1c1t1i1o1n1:1 1b1i1n1a1r1y1_1t1r1e1e1_1s1u1m1 1@1 101x1111101c1c1
1i1n1t1 1b1i1n1a1r1y1_1t1r1e1e1_1s1u1m1(1i1n1t1 1*1p1a1r1a1m1_111)1
1{1
1 1i1n1t1 1i1V1a1r111;1
1 1i1n1t1 1i1V1a1r121;1
1 1i1n1t1 1i1V1a1r131;1
1 1i1f1 1(1p1a1r1a1m1_111 1!1=1 1(1i1n1t1 1*1)101x101)1 1{1
1 1i1V1a1r131 1=1 1*1p1a1r1a1m1_111;1
1 1i1V1a1r111 1=1 1b1i1n1a1r1y1_1t1r1e1e1_1s1u1m1(1p1a1r1a1m1_111[111]1)1;1
1 1i1V1a1r121 1=1 1b1i1n1a1r1y1_1t1r1e1e1_1s1u1m1(1p1a1r1a1m1_111[121]1)1;1
1 1r1e1t1u1r1n1 1i1V1a1r111 1+1 1i1V1a1r131 1+1 1i1V1a1r121;1
1 1}1
1 1r1e1t1u1r1n1 101;1
1}1
1
1/1/1 1F1u1n1c1t1i1o1n1:1 1b1i1n1a1r1y1_1t1r1e1e1 1@1 101x11111110141
1v1o1i1d1 1b1i1n1a1r1y1_1t1r1e1e1(1v1o1i1d1)1
1{1
1 1b1i1n1a1r1y1_1t1r1e1e1_1s1u1m1(1(1i1n1t1 1*1)101)1;1
1 1r1e1t1u1r1n1;1
1}1
1
1/1/1 1F1u1n1c1t1i1o1n1:1 1g1r1a1p1h1_1t1r1a1v1e1r1s1e1 1@1 101x11111111141
1i1n1t1 1g1r1a1p1h1_1t1r1a1v1e1r1s1e1(1i1n1t1 1p1a1r1a1m1_111)1
1{1
1 1i1n1t1 1i1V1a1r111;1
1 1i1n1t1 1*1p1i1V1a1r121;1
1 1i1n1t1 1i1V1a1r131;1
1 1i1f1 1(1*1(1i1n1t1 1*1)1(1p1a1r1a1m1_111 1+1 101x12181)1 1<1 111)1 1{1
1 1i1V1a1r111 1=1 101;1
1 1}1
1 1e1l1s1e1 1{1
1 1i1V1a1r131 1=1 101;1
1 1i1V1a1r111 1=1 101;1
1 1d1o1 1{1
1 1f1o1r1 1(1p1i1V1a1r121 1=1 1*1(1i1n1t1 1*1*1)1(1p1a1r1a1m1_111 1+1 1i1V1a1r131 1*1 141)1;1 1p1i1V1a1r121 1!1=1 1(1i1n1t1 1*1)101x101;1 1p1i1V1a1r121 1=1 1(1i1n1t1 1*1)1p1i1V1a1r121[111]1)1
1 1{1
1 1i1V1a1r111 1=1 1*1p1i1V1a1r121 1+1 1i1V1a1r111;1
1 1}1
1 1i1V1a1r131 1=1 1i1V1a1r131 1+1 111;1
1 1}1 1w1h1i1l1e1 1(1i1V1a1r131 1!1=1 1*1(1i1n1t1 1*1)1(1p1a1r1a1m1_111 1+1 101x12181)1)1;1
1 1}1
1 1r1e1t1u1r1n1 1i1V1a1r111;1
1}1
1
1/1/1 1F1u1n1c1t1i1o1n1:1 1t1e1s1t1_1c1o1m1p1o1s1i1t1e1_1t1y1p1e1s1 1@1 101x11111117101
1v1o1i1d1 1t1e1s1t1_1c1o1m1p1o1s1i1t1e1_1t1y1p1e1s1(1v1o1i1d1)1
1{1
1 1i1n1t1 1*1p1i1V1a1r111;1
1 1u1n1s1i1g1n1e1d1 1i1n1t1 1u1V1a1r121;1
1 1i1n1t1 1i1V1a1r131;1
1 1i1n1t1 1i1V1a1r141;1
1 1i1n1t1 1*1l1o1c1a1l1_18141 1[11101]1;1
1 1u1n1s1i1g1n1e1d1 1i1n1t1 1l1o1c1a1l1_151c1;1
1 1i1n1t1 1l1o1c1a1l1_15181;1
1 1u1n1s1i1g1n1e1d1 1i1n1t1 1l1o1c1a1l1_15141;1
1 1u1n1s1i1g1n1e1d1 1i1n1t1 1l1o1c1a1l1_141c1;1
1 1u1n1s1i1g1n1e1d1 1i1n1t1 1l1o1c1a1l1_14181;1
1 1u1n1s1i1g1n1e1d1 1i1n1t1 1l1o1c1a1l1_14141;1
1 1i1n1t1 1l1o1c1a1l1_14101;1
1 1u1n1s1i1g1n1e1d1 1i1n1t1 1*1l1o1c1a1l1_131c1;1
1 1u1n1s1i1g1n1e1d1 1i1n1t1 1l1o1c1a1l1_13181;1
1 1u1n1s1i1g1n1e1d1 1i1n1t1 1l1o1c1a1l1_13141;1
1 1u1n1s1i1g1n1e1d1 1i1n1t1 1l1o1c1a1l1_13101;1
1 1i1n1t1 1*1l1o1c1a1l1_121c1;1
1 1i1n1t1 1l1o1c1a1l1_12181;1
1 1u1n1s1i1g1n1e1d1 1i1n1t1 1*1l1o1c1a1l1_12141;1
1 1u1n1s1i1g1n1e1d1 1i1n1t1 1l1o1c1a1l1_12101;1
1 1u1n1s1i1g1n1e1d1 1i1n1t1 1*1l1o1c1a1l1_111c1;1
1 1u1n1s1i1g1n1e1d1 1i1n1t1 1l1o1c1a1l1_11181;1
1 1u1n1s1i1g1n1e1d1 1i1n1t1 1l1o1c1a1l1_11141;1
1 1p1u1t1s1(1&1D1A1T1_101010111215111a1)1;1
1 1p1r1i1n1t1f1(1"1C1M1P1-1L121-10111 1(1s1t1r1u1c1t1_1s1i1m1p1l1e1)1:1 1%1d1\1n1"1,161)1;1
1 1p1r1i1n1t1f1(1"1C1M1P1-1L121-10121 1(1s1t1r1u1c1t1_1a1r1r1a1y1)1:1 1%1d1\1n1"1,191)1;1
1 1p1r1i1n1t1f1(1"1C1M1P1-1L121-10131 1(1s1t1r1u1c1t1_1n1e1s1t1e1d1)1:1 1%1d1\1n1"1,101x16191)1;1
1 1p1r1i1n1t1f1(1"1C1M1P1-1L121-10141 1(1s1t1r1u1c1t1_1d1e1e1p1)1:1 1%1d1\1n1"1,101x1110121)1;1
1 1p1r1i1n1t1f1(1"1C1M1P1-1L121-10151 1(1s1t1r1u1c1t1_1w1i1t1h1_1p1t1r1)1:1 1%1d1\1n1"1,101x111e1)1;1
1 1p1r1i1n1t1f1(1"1C1M1P1-1L121-10161 1(1s1t1r1u1c1t1_1b1i1t1f1i1e1l1d1s1)1:1 1%1d1\1n1"1,101x161a1)1;1
1 1p1r1i1n1t1f1(1"1C1M1P1-1L121-10171 1(1u1n1i1o1n1_1t1y1p1e1)1:1 1%1d1\1n1"1,101x11121314151617181)1;1
1 1p1r1i1n1t1f1(1"1C1M1P1-1L121-10181 1(1u1n1i1o1n1_1a1r1r1a1y1)1:1 1%1d1\1n1"1,101x131c1)1;1
1 1p1r1i1n1t1f1(1"1C1M1P1-1L121-10191 1(1e1n1u1m1_1t1y1p1e1)1:1 1%1d1\1n1"1,11101)1;1
1 1p1r1i1n1t1f1(1"1C1M1P1-1L121-11101 1(1e1n1u1m1_1s1w1i1t1c1h1)1:1 1%1d1\1n1"1,101x13121)1;1
1 1p1r1i1n1t1f1(1"1C1M1P1-1L121-11111 1(1s1t1r1u1c1t1_1f1u1n1c1_1p1t1r1)1:1 1%1d1\1n1"1,101x11151)1;1
1 1i1V1a1r131 1=1 101;1
1 1l1o1c1a1l1_11141 1=1 101;1
1 1l1o1c1a1l1_11181 1=1 101x111e1;1
1 1p1i1V1a1r111 1=1 1&1l1o1c1a1l1_12181;1
1 1l1o1c1a1l1_111c1 1=1 1&1l1o1c1a1l1_11181;1
1 1l1o1c1a1l1_12101 1=1 101x11141;1
1 1l1o1c1a1l1_12141 1=1 1&1l1o1c1a1l1_12101;1
1 1l1o1c1a1l1_12181 1=1 11101;1
1 1d1o1 1{1
1 1i1V1a1r141 1=1 1*1p1i1V1a1r111;1
1 1p1i1V1a1r111 1=1 1(1i1n1t1 1*1)1p1i1V1a1r111[111]1;1
1 1i1V1a1r131 1=1 1i1V1a1r141 1+1 1i1V1a1r131;1
1 1}1 1w1h1i1l1e1 1(1p1i1V1a1r111 1!1=1 1(1i1n1t1 1*1)101x101)1;1
1 1p1r1i1n1t1f1(1"1C1M1P1-1L121-11121 1(1l1i1n1k1e1d1_1l1i1s1t1)1:1 1%1d1\1n1"1,1i1V1a1r131)1;1
1 1p1i1V1a1r111 1=1 1&1l1o1c1a1l1_14101;1
1 1l1o1c1a1l1_121c1 1=1 1p1i1V1a1r111;1
1 1i1V1a1r131 1=1 101;1
1 1l1o1c1a1l1_13101 1=1 101;1
1 1l1o1c1a1l1_13141 1=1 101x11141;1
1 1l1o1c1a1l1_13181 1=1 101;1
1 1l1o1c1a1l1_131c1 1=1 1&1l1o1c1a1l1_13141;1
1 1l1o1c1a1l1_14101 1=1 11101;1
1 1d1o1 1{1
1 1i1V1a1r141 1=1 1*1p1i1V1a1r111;1
1 1p1i1V1a1r111 1=1 1(1i1n1t1 1*1)1p1i1V1a1r111[111]1;1
1 1i1V1a1r131 1=1 1i1V1a1r141 1+1 1i1V1a1r131;1
1 1}1 1w1h1i1l1e1 1(1p1i1V1a1r111 1!1=1 1(1i1n1t1 1*1)101x101)1;1
1 1p1r1i1n1t1f1(1"1C1M1P1-1L121-11131 1(1d1o1u1b1l1y1_1l1i1n1k1e1d1_1l1i1s1t1)1:1 1%1d1\1n1"1,1i1V1a1r131)1;1
1 1l1o1c1a1l1_14181 1=1 101;1
1 1l1o1c1a1l1_14141 1=1 101;1
1 1l1o1c1a1l1_141c1 1=1 1110101;1
1 1u1V1a1r121 1=1 1b1i1n1a1r1y1_1t1r1e1e1_1s1u1m1(1&1l1o1c1a1l1_141c1)1;1
1 1p1r1i1n1t1f1(1"1C1M1P1-1L121-11141 1(1b1i1n1a1r1y1_1t1r1e1e1)1:1 1%1d1\1n1"1,1u1V1a1r121)1;1
1 1l1o1c1a1l1_15141 1=1 101;1
1 1l1o1c1a1l1_15181 1=1 111;1
1 1i1V1a1r141 1=1 101;1
1 1m1e1m1s1e1t1(1l1o1c1a1l1_18141,101,101x121c1)1;1
1 1l1o1c1a1l1_151c1 1=1 121;1
1 1l1o1c1a1l1_18141[101]1 1=1 1&1l1o1c1a1l1_15181;1
1 1i1V1a1r131 1=1 101;1
1 1d1o1 1{1
1 1f1o1r1 1(1p1i1V1a1r111 1=1 1l1o1c1a1l1_18141[1i1V1a1r141]1;1 1p1i1V1a1r111 1!1=1 1(1i1n1t1 1*1)101x101;1 1p1i1V1a1r111 1=1 1(1i1n1t1 1*1)1p1i1V1a1r111[111]1)1 1{1
1 1i1V1a1r131 1=1 1*1p1i1V1a1r111 1+1 1i1V1a1r131;1
1 1}1
1 1i1V1a1r141 1=1 1i1V1a1r141 1+1 111;1
1 1}1 1w1h1i1l1e1 1(1i1V1a1r141 1!1=1 121)1;1
1 1p1r1i1n1t1f1(1"1C1M1P1-1L121-11151 1(1g1r1a1p1h1_1t1r1a1v1e1r1s1e1)1:1 1%1d1\1n1"1,1i1V1a1r131)1;1
1 1r1e1t1u1r1n1;1
1}1
1
1/1/1 1F1u1n1c1t1i1o1n1:1 1m1a1i1n1 1@1 101x11111410181
1u1n1s1i1g1n1e1d1 1i1n1t1 1m1a1i1n1(1v1o1i1d1)1
1{1
1 1t1e1s1t1_1d1a1t1a1_1t1y1p1e1s1_1l111(1)1;1
1 1t1e1s1t1_1a1r1r1a1y1_1t1y1p1e1s1(1)1;1
1 1t1e1s1t1_1p1o1i1n1t1e1r1_1t1y1p1e1s1(1)1;1
1 1t1e1s1t1_1c1o1m1p1o1s1i1t1e1_1t1y1p1e1s1(1)1;1
1 1r1e1t1u1r1n1 101;1
1}1
1
1/1/1 1F1u1n1c1t1i1o1n1:1 1_1_1m1u1l1d1f131 1@1 101x11111412181
1u1l1o1n1g1l1o1n1g1 1_1_1m1u1l1d1f131(1u1n1s1i1g1n1e1d1 1i1n1t1 1p1a1r1a1m1_111,1u1i1n1t1 1p1a1r1a1m1_121,1u1i1n1t1 1p1a1r1a1m1_131,1u1i1n1t1 1p1a1r1a1m1_141)1
1{1
1 1l1o1n1g1l1o1n1g1 1l1V1a1r111;1
1 1u1l1o1n1g1l1o1n1g1 1u1V1a1r121;1
1 1b1y1t1e1 1b1V1a1r131;1
1 1u1i1n1t1 1u1V1a1r141;1
1 1u1i1n1t1 1u1V1a1r151;1
1 1i1n1t1 1i1V1a1r161;1
1 1u1i1n1t1 1u1V1a1r171;1
1 1u1i1n1t1 1u1n1a1f1f1_1r151;1
1 1u1i1n1t1 1u1V1a1r181;1
1 1u1i1n1t1 1u1V1a1r191;1
1 1b1o1o1l1 1b1V1a1r11101;1
1 1b1o1o1l1 1b1V1a1r11111;1
1 1b1o1o1l1 1b1V1a1r11121;1
1 1u1l1o1n1g1l1o1n1g1 1u1V1a1r11131;1
1 1u1V1a1r11131 1=1 1C1O1N1C1A1T14141(1p1a1r1a1m1_121,1p1a1r1a1m1_111)1;1
1 1u1V1a1r181 1=1 101x171f1f1;1
1 1u1V1a1r151 1=1 1p1a1r1a1m1_121 1>1>1 101x11141 1&1 101x171f1f1;1
1 1b1V1a1r11101 1=1 1u1V1a1r151 1=1=1 101;1
1 1i1f1 1(1!1b1V1a1r11101)1 1{1
1 1u1n1a1f1f1_1r151 1=1 1p1a1r1a1m1_141 1>1>1 101x11141 1&1 101x171f1f1;1
1 1b1V1a1r11101 1=1 1u1n1a1f1f1_1r151 1=1=1 101;1
1 1}1
1 1i1f1 1(1!1b1V1a1r11101)1 1{1
1 1b1V1a1r11101 1=1 1u1V1a1r151 1=1=1 101x171f1f1;1
1 1}1
1 1i1f1 1(1!1b1V1a1r11101)1 1{1
1 1b1V1a1r11101 1=1 1u1n1a1f1f1_1r151 1=1=1 101x171f1f1;1
1 1}1
1 1i1f1 1(1b1V1a1r11101)1 1{1
1 1u1V1a1r11131 1=1 1F1U1N1_10101011111610181(1)1;1
1 1}1
1 1u1V1a1r141 1=1 1(1u1i1n1t1)1(1u1V1a1r11131 1>1>1 101x12101)1;1
1 1i1V1a1r161 1=1 1u1V1a1r151 1+1 1u1n1a1f1f1_1r151;1
1 1u1V1a1r151 1=1 1u1V1a1r141 1^1 1p1a1r1a1m1_141;1
1 1u1V1a1r141 1=1 1u1V1a1r141 1&1 1~1(1u1V1a1r181 1<1<1 101x11151)1;1
1 1p1a1r1a1m1_141 1=1 1p1a1r1a1m1_141 1&1 1~1(1u1V1a1r181 1<1<1 101x11151)1;1
1 1b1V1a1r11101 1=1 1(1(1u1i1n1t1)1u1V1a1r11131 1|1 1u1V1a1r141 1<1<1 101x1c1)1 1=1=1 101;1
1 1i1f1 1(1!1b1V1a1r11101)1 1{1
1 1b1V1a1r11101 1=1 1(1p1a1r1a1m1_131 1|1 1p1a1r1a1m1_141 1<1<1 101x1c1)1 1=1=1 101;1
1 1}1
1 1u1V1a1r141 1=1 1u1V1a1r141 1|1 101x1110101010101;1
1 1p1a1r1a1m1_141 1=1 1p1a1r1a1m1_141 1|1 101x1110101010101;1
1 1i1f1 1(1b1V1a1r11101)1 1{1
1 1p1a1r1a1m1_131 1=1 1(1u1i1n1t1)1u1V1a1r11131 1|1 1p1a1r1a1m1_131;1
1 1p1a1r1a1m1_141 1=1 1(1u1V1a1r151 1&1 101x18101010101010101 1|1 1u1V1a1r141)1 1^1 1p1a1r1a1m1_141;1
1 1u1V1a1r151 1=1 1u1V1a1r181 1>1>1 111;1
1 1b1V1a1r11121 1=1 1S1B1O1R1R1O1W141(1i1V1a1r161,1u1V1a1r151)1;1
1 1u1V1a1r171 1=1 1i1V1a1r161 1-1 1u1V1a1r151;1
1 1b1V1a1r11101 1=1 1u1V1a1r171 1=1=1 101;1
1 1u1V1a1r141 1=1 1u1V1a1r171;1
1 1i1f1 1(1!1b1V1a1r11101 1&1&1 1(1i1n1t1)1u1V1a1r151 1<1=1 1i1V1a1r161)1 1{1
1 1b1V1a1r11121 1=1 1S1B1O1R1R1O1W141(1u1V1a1r181,1u1V1a1r171)1;1
1 1u1V1a1r141 1=1 1u1V1a1r181 1-1 1u1V1a1r171;1
1 1b1V1a1r11101 1=1 1u1V1a1r181 1=1=1 1u1V1a1r171;1
1 1}1
1 1i1f1 1(1!1b1V1a1r11101 1&1&1 1(1i1n1t1)1u1V1a1r141 1<1 101 1=1=1 1b1V1a1r11121)1 1{1
1 1p1a1r1a1m1_141 1=1 1p1a1r1a1m1_141 1|1 1u1V1a1r171 1*1 101x1110101010101;1
1 1}1
1 1i1f1 1(1!1b1V1a1r11101 1&1&1 1(1i1n1t1)1u1V1a1r141 1<1 101 1=1=1 1b1V1a1r11121)1 1{1
1 1r1e1t1u1r1n1 1C1O1N1C1A1T14141(1p1a1r1a1m1_141,1p1a1r1a1m1_131)1;1
1 1}1
1 1p1a1r1a1m1_141 1=1 1p1a1r1a1m1_141 1|1 101x1110101010101;1
1 1u1V1a1r151 1=1 101;1
1 1b1V1a1r11121 1=1 1S1B1O1R1R1O1W141(1u1V1a1r171,111)1;1
1 1u1V1a1r171 1=1 1u1V1a1r171 1-1 111;1
1 1b1V1a1r11101 1=1 1u1V1a1r171 1=1=1 101;1
1 1u1V1a1r181 1=1 1u1V1a1r171;1
1 1}1
1 1e1l1s1e1 1{1
1 1u1V1a1r121 1=1 1(1u1l1o1n1g1l1o1n1g1)1p1a1r1a1m1_131 1*1 1(1u1V1a1r11131 1&1 101x1f1f1f1f1f1f1f1f1)1;1
1 1u1V1a1r11131 1=1 1(1u1l1o1n1g1l1o1n1g1)1p1a1r1a1m1_141 1*1 1(1u1V1a1r11131 1&1 101x1f1f1f1f1f1f1f1f1)1 1+1
1 1(1u1l1o1n1g1l1o1n1g1)1p1a1r1a1m1_131 1*1 1(1u1l1o1n1g1l1o1n1g1)1u1V1a1r141 1+1 1(1u1V1a1r121 1>1>1 101x12101)1;1
1 1u1V1a1r191 1=1 1(1u1i1n1t1)1u1V1a1r11131;1
1 1l1V1a1r111 1=1 1(1u1l1o1n1g1l1o1n1g1)1p1a1r1a1m1_141 1*1 1(1u1l1o1n1g1l1o1n1g1)1u1V1a1r141 1+1 1(1u1V1a1r11131 1>1>1 101x12101)1;1
1 1u1V1a1r181 1=1 1(1u1i1n1t1)1l1V1a1r111;1
1 1u1V1a1r141 1=1 1(1u1i1n1t1)1(1(1u1l1o1n1g1l1o1n1g1)1l1V1a1r111 1>1>1 101x12101)1;1
1 1i1f1 1(1(1i1n1t1)1u1V1a1r121 1!1=1 101)1 1{1
1 1u1V1a1r191 1=1 1u1V1a1r191 1|1 111;1
1 1}1
1 1u1V1a1r171 1=1 1(1i1V1a1r161 1+1 1-101x1f1f1)1 1-1 1(1(1u1V1a1r141 1<1 101x1210101)1 1+1 101x1310101)1;1
1 1i1f1 1(1u1V1a1r141 1<1 101x1210101)1 1{1
1 1b1V1a1r131 1=1 1(1b1y1t1e1)1(1u1V1a1r191 1>1>1 101x111f1)1;1
1 1u1V1a1r191 1=1 1u1V1a1r191 1<1<1 111;1
1 1l1V1a1r111 1=1 1C1O1N1C1A1T14141(1u1V1a1r141 1*1 121 1+1 1(1u1i1n1t1)1(1C1A1R1R1Y141(1u1V1a1r181,1u1V1a1r181)1 1|1|1 1C1A1R1R1Y141(1u1V1a1r181 1*1 121,1(1u1i1n1t1)1b1V1a1r131)1)1,1
1 1u1V1a1r181 1*1 121 1+1 1(1u1i1n1t1)1b1V1a1r131)1;1
1 1}1
1 1p1a1r1a1m1_141 1=1 1u1V1a1r151 1&1 101x18101010101010101 1|1 1(1i1n1t1)1(1(1u1l1o1n1g1l1o1n1g1)1l1V1a1r111 1>1>1 101x12101)1 1<1<1 101x1b1 1|1 1(1u1i1n1t1)1l1V1a1r111 1>1>1 101x11151;1
1 1p1a1r1a1m1_131 1=1 1(1u1i1n1t1)1l1V1a1r111 1<1<1 101x1b1 1|1 1u1V1a1r191 1>1>1 101x11151;1
1 1u1V1a1r151 1=1 1u1V1a1r191 1*1 101x1810101;1
1 1b1V1a1r11111 1=1 101x1f1c1 1<1 1u1V1a1r171;1
1 1b1V1a1r11121 1=1 1S1B1O1R1R1O1W141(1u1V1a1r171,101x1f1d1)1;1
1 1u1V1a1r141 1=1 1u1V1a1r171 1-1 101x1f1d1;1
1 1b1V1a1r11101 1=1 1u1V1a1r141 1=1=1 101;1
1 1u1V1a1r181 1=1 1u1V1a1r141;1
1 1i1f1 1(1b1V1a1r11111 1&1&1 1!1b1V1a1r11101)1 1{1
1 1b1V1a1r11111 1=1 101x161f1f1 1<1 1u1V1a1r141;1
1 1b1V1a1r11121 1=1 1S1B1O1R1R1O1W141(1u1V1a1r141,101x1710101)1;1
1 1u1V1a1r181 1=1 1u1V1a1r171 1-1 101x171f1d1;1
1 1b1V1a1r11101 1=1 1u1V1a1r141 1=1=1 101x1710101;1
1 1}1
1 1i1f1 1(1!1b1V1a1r11111 1|1|1 1b1V1a1r11101)1 1{1
1 1b1V1a1r11101 1=1 101x171f1f1f1f1f1f1f1 1<1 1u1V1a1r151;1
1 1i1f1 1(1u1V1a1r151 1=1=1 101x18101010101010101)1 1{1
1 1b1V1a1r11101 1=1 1(1b1o1o1l1)1(1(1b1y1t1e1)1(1u1V1a1r191 1>1>1 101x11151)1 1&1 111)1;1
1 1}1
1 1r1e1t1u1r1n1 1C1O1N1C1A1T14141(1p1a1r1a1m1_141 1+1 1u1V1a1r171 1*1 101x1110101010101 1+1 1(1u1i1n1t1)1C1A1R1R1Y141(1p1a1r1a1m1_131,1(1u1i1n1t1)1b1V1a1r11101)1,1
1 1p1a1r1a1m1_131 1+1 1b1V1a1r11101)1;1
1 1}1
1 1}1
1 1i1f1 1(1!1b1V1a1r11101 1&1&1 1(1i1n1t1)1u1V1a1r181 1<1 101 1=1=1 1b1V1a1r11121)1 1{1
1 1r1e1t1u1r1n1 1(1u1l1o1n1g1l1o1n1g1)1(1p1a1r1a1m1_141 1&1 101x18101010101010101 1|1 101x171f1f10101010101)1 1<1<1 101x12101;1
1 1}1
1 1b1V1a1r11111 1=1 1S1C1A1R1R1Y141(1u1V1a1r171,101x13161)1;1
1 1b1V1a1r11101 1=1 1(1i1n1t1)1(1u1V1a1r171 1+1 101x13161)1 1<1 101;1
1 1b1V1a1r11121 1=1 1u1V1a1r171 1=1=1 101x1f1f1f1f1f1f1c1a1;1
1 1i1f1 1(1b1V1a1r11121 1|1|1 1b1V1a1r11101 1!1=1 1b1V1a1r11111)1 1{1
1 1p1a1r1a1m1_131 1=1 101;1
1 1}1
1 1i1f1 1(1b1V1a1r11121 1|1|1 1b1V1a1r11101 1!1=1 1b1V1a1r11111)1 1{1
1 1p1a1r1a1m1_141 1=1 1p1a1r1a1m1_141 1&1 101x18101010101010101;1
1 1}1
1 1i1f1 1(1b1V1a1r11121 1|1|1 1b1V1a1r11101 1!1=1 1b1V1a1r11111)1 1{1
1 1r1e1t1u1r1n1 1C1O1N1C1A1T14141(1p1a1r1a1m1_141,1p1a1r1a1m1_131)1;1
1 1}1
1 1u1V1a1r181 1=1 1-1u1V1a1r171;1
1 1u1V1a1r141 1=1 1u1V1a1r181 1-1 101x12101;1
1 1i1f1 1(101x111f1 1<1 1(1i1n1t1)1u1V1a1r181)1 1{1
1 1u1V1a1r171 1=1 1p1a1r1a1m1_131 1>1>1 1(1u1V1a1r141 1&1 101x1f1f1)1 1|1 1p1a1r1a1m1_141 1<1<1 1(101x12101 1-1 1u1V1a1r141 1&1 101x1f1f1)1;1
1 1u1V1a1r181 1=1 1(1p1a1r1a1m1_141 1>1>1 1(1u1V1a1r141 1&1 101x1f1f1)1 1&1 1~1(1(1p1a1r1a1m1_141 1&1 101x18101010101010101)1 1>1>1 1(1u1V1a1r141 1&1 101x1f1f1)1)1)1 1-1
1 1(1(1i1n1t1)1u1V1a1r171 1>1>1 101x111f1)1;1
1 1i1f1 1(1(1u1V1a1r151 1|1 1p1a1r1a1m1_131 1<1<1 1(101x12101 1-1 1u1V1a1r141 1&1 101x1f1f1)1 1|1 1u1V1a1r171 1<1<1 111)1 1=1=1 101)1 1{1
1 1u1V1a1r181 1=1 1u1V1a1r181 1&1 1~1(1u1V1a1r171 1>1>1 101x111f1)1;1
1 1}1
1 1r1e1t1u1r1n1 1C1O1N1C1A1T14141(1p1a1r1a1m1_141,1u1V1a1r181)1 1&1 101x18101010101010101f1f1f1f1f1f1f1f1;1
1 1}1
1 1i1V1a1r161 1=1 1u1V1a1r181 1-1 101x11141;1
1 1i1f1 1(1i1V1a1r161 1=1=1 101 1|1|1 1i1V1a1r161 1<1 101 1!1=1 1S1C1A1R1R1Y141(1u1V1a1r141,101x1c1)1)1 1{1
1 1u1V1a1r141 1=1 1p1a1r1a1m1_131 1<1<1 1(1u1V1a1r171 1+1 101x12101 1&1 101x1f1f1)1;1
1 1u1V1a1r171 1=1 1p1a1r1a1m1_131 1>1>1 1(1u1V1a1r181 1&1 101x1f1f1)1 1|1 1p1a1r1a1m1_141 1<1<1 1(1u1V1a1r171 1+1 101x12101 1&1 101x1f1f1)1;1
1 1u1V1a1r191 1=1 1u1V1a1r171 1+1 1-1(1(1i1n1t1)1u1V1a1r141 1>1>1 101x111f1)1;1
1 1i1f1 1(1(1u1V1a1r151 1|1 1u1V1a1r141 1<1<1 111)1 1=1=1 101)1 1{1
1 1u1V1a1r191 1=1 1u1V1a1r191 1&1 1~1(1u1V1a1r141 1>1>1 101x111f1)1;1
1 1}1
1 1r1e1t1u1r1n1 1C1O1N1C1A1T14141(1(1p1a1r1a1m1_141 1&1 101x18101010101010101)1 1+1 1(1(1p1a1r1a1m1_141 1&1 101x171f1f1f1f1f1f1f1)1 1>1>1 1(1u1V1a1r181 1&1 101x1f1f1)1)1 1+1
1 1(1u1i1n1t1)1C1A1R1R1Y141(1u1V1a1r171,1-1(1(1i1n1t1)1u1V1a1r141 1>1>1 101x111f1)1)1,1u1V1a1r191)1;1
1 1}1
1 1u1V1a1r141 1=1 101x1c1 1-1 1i1V1a1r161;1
1 1u1V1a1r181 1=1 1p1a1r1a1m1_131 1<1<1 1(1u1V1a1r141 1&1 101x1f1f1)1;1
1 1u1V1a1r141 1=1 1p1a1r1a1m1_131 1>1>1 1(101x12101 1-1 1u1V1a1r141 1&1 101x1f1f1)1 1|1 1p1a1r1a1m1_141 1<1<1 1(1u1V1a1r141 1&1 101x1f1f1)1;1
1 1u1V1a1r171 1=1 1u1V1a1r141 1+1 1-1(1(1i1n1t1)1u1V1a1r181 1>1>1 101x111f1)1;1
1 1i1f1 1(1(1u1V1a1r151 1|1 1u1V1a1r181 1<1<1 111)1 1=1=1 101)1 1{1
1 1u1V1a1r171 1=1 1u1V1a1r171 1&1 1~1(1u1V1a1r181 1>1>1 101x111f1)1;1
1 1}1
1 1r1e1t1u1r1n1 1C1O1N1C1A1T14141(1(1p1a1r1a1m1_141 1&1 101x18101010101010101)1 1+1 1(1u1i1n1t1)1C1A1R1R1Y141(1u1V1a1r141,1-1(1(1i1n1t1)1u1V1a1r181 1>1>1 101x111f1)1)1,1u1V1a1r171)1;1
1}1
1
1/1/1 1F1u1n1c1t1i1o1n1:1 1F1U1N1_10101011111610181 1@1 101x11111610181
1u1l1o1n1g1l1o1n1g1 1F1U1N1_10101011111610181(1u1i1n1t1 1p1a1r1a1m1_111,1u1i1n1t1 1p1a1r1a1m1_121,1u1i1n1t1 1p1a1r1a1m1_131,1u1i1n1t1 1p1a1r1a1m1_141)1
1{1
1 1u1i1n1t1 1u1V1a1r111;1
1 1i1n1t1 1i1V1a1r121;1
1 1u1i1n1t1 1u1V1a1r131;1
1 1u1i1n1t1 1u1n1a1f1f1_1r141;1
1 1u1i1n1t1 1u1V1a1r141;1
1 1u1i1n1t1 1u1V1a1r151;1
1 1u1i1n1t1 1i1n1_1r11121;1
1 1b1o1o1l1 1b1V1a1r161;1
1 1u1V1a1r141 1=1 1i1n1_1r11121 1&1 1p1a1r1a1m1_141 1>1>1 101x11141;1
1 1i1f1 1(1u1n1a1f1f1_1r141 1=1=1 1i1n1_1r11121 1|1|1 1u1V1a1r141 1=1=1 1i1n1_1r11121)1 1{1
1 1b1V1a1r161 1=1 1(1p1a1r1a1m1_111 1|1 1p1a1r1a1m1_121 1<1<1 111)1 1=1=1 101;1
1 1u1V1a1r151 1=1 1p1a1r1a1m1_131;1
1 1u1V1a1r111 1=1 1p1a1r1a1m1_141;1
1 1i1f1 1(1!1b1V1a1r161)1 1{1
1 1b1V1a1r161 1=1 1(1p1a1r1a1m1_131 1|1 1p1a1r1a1m1_141 1<1<1 111)1 1=1=1 101;1
1 1u1V1a1r151 1=1 1p1a1r1a1m1_111;1
1 1u1V1a1r111 1=1 1p1a1r1a1m1_121;1
1 1}1
1 1u1V1a1r131 1=1 1u1V1a1r111;1
1 1i1f1 1(1(1(1!1b1V1a1r161)1 1&1&1 1(1(1u1n1a1f1f1_1r141 1!1=1 1i1n1_1r11121 1|1|1 1(1(1u1V1a1r151 1|1 1u1V1a1r111 1<1<1 101x1c1)1 1=1=1 101)1)1)1)1 1&1&1
1 1(1(1u1V1a1r141 1!1=1 1i1n1_1r11121 1|1|1 1(1u1V1a1r151 1=1 1p1a1r1a1m1_131,1 1u1V1a1r131 1=1 1p1a1r1a1m1_141,1 1(1p1a1r1a1m1_131 1|1 1p1a1r1a1m1_141 1<1<1 101x1c1)1 1=1=1 101)1)1)1)1 1{1
1 1r1e1t1u1r1n1 1(1u1l1o1n1g1l1o1n1g1)1(1(1u1V1a1r111 1^1 1p1a1r1a1m1_141)1 1&1 101x18101010101010101 1|1 101x171f1f10101010101)1 1<1<1 101x12101;1
1 1}1
1 1r1e1t1u1r1n1 1C1O1N1C1A1T14141(1u1V1a1r131,1u1V1a1r151)1 1|1 101x171f1f181010101010101010101010101;1
1 1}1
1 1b1V1a1r161 1=1 1(1p1a1r1a1m1_111 1|1 1p1a1r1a1m1_121 1<1<1 111)1 1=1=1 101;1
1 1i1f1 1(1!1b1V1a1r161)1 1{1
1 1b1V1a1r161 1=1 1(1p1a1r1a1m1_131 1|1 1p1a1r1a1m1_141 1<1<1 111)1 1=1=1 101;1
1 1}1
1 1i1f1 1(1b1V1a1r161)1 1{1
1 1r1e1t1u1r1n1 1(1u1l1o1n1g1l1o1n1g1)1(1(1p1a1r1a1m1_121 1^1 1p1a1r1a1m1_141)1 1&1 101x18101010101010101)1 1<1<1 101x12101;1
1 1}1
1 1i1f1 1(1u1n1a1f1f1_1r141 1=1=1 101)1 1{1
1 1u1V1a1r151 1=1 1p1a1r1a1m1_121 1&1 101x18101010101010101;1
1 1d1o1 1{1
1 1i1V1a1r121 1=1 1(1i1n1t1)1p1a1r1a1m1_111 1>1>1 101x111f1;1
1 1p1a1r1a1m1_111 1=1 1p1a1r1a1m1_111 1<1<1 111;1
1 1p1a1r1a1m1_121 1=1 1p1a1r1a1m1_121 1*1 121 1-1 1i1V1a1r121;1
1 1}1 1w1h1i1l1e1 1(1(1p1a1r1a1m1_121 1&1 101x1110101010101)1 1=1=1 101)1;1
1 1p1a1r1a1m1_121 1=1 1p1a1r1a1m1_121 1|1 1u1V1a1r151;1
1 1i1f1 1(1u1V1a1r141 1!1=1 101)1 1{1
1 1r1e1t1u1r1n1 1C1O1N1C1A1T14141(1p1a1r1a1m1_121,1p1a1r1a1m1_111)1;1
1 1}1
1 1}1
1 1d1o1 1{1
1 1i1V1a1r121 1=1 1(1i1n1t1)1p1a1r1a1m1_131 1>1>1 101x111f1;1
1 1p1a1r1a1m1_131 1=1 1p1a1r1a1m1_131 1<1<1 111;1
1 1p1a1r1a1m1_141 1=1 1p1a1r1a1m1_141 1*1 121 1-1 1i1V1a1r121;1
1 1}1 1w1h1i1l1e1 1(1(1p1a1r1a1m1_141 1&1 101x1110101010101)1 1=1=1 101)1;1
1 1r1e1t1u1r1n1 1C1O1N1C1A1T14141(1p1a1r1a1m1_121,1p1a1r1a1m1_111)1;1
1}1
1
1/1/1 1F1u1n1c1t1i1o1n1:1 1_1_1m1u1l1s1f131 1@1 101x11111619141
1u1i1n1t1 1_1_1m1u1l1s1f131(1u1i1n1t1 1p1a1r1a1m1_111,1u1i1n1t1 1p1a1r1a1m1_121,1u1n1s1i1g1n1e1d1 1i1n1t1 1p1a1r1a1m1_131,1u1i1n1t1 1p1a1r1a1m1_141)1
1{1
1 1u1i1n1t1 1u1V1a1r111;1
1 1l1o1n1g1l1o1n1g1 1l1V1a1r121;1
1 1u1i1n1t1 1u1V1a1r131;1
1 1i1n1t1 1i1V1a1r141;1
1 1u1i1n1t1 1u1V1a1r151;1
1 1i1n1t1 1i1V1a1r161;1
1 1i1n1t1 1i1V1a1r171;1
1 1u1i1n1t1 1u1V1a1r181;1
1 1u1i1n1t1 1u1V1a1r191;1
1 1b1o1o1l1 1b1V1a1r11101;1
1 1b1o1o1l1 1b1V1a1r11111;1
1 1u1V1a1r131 1=1 1p1a1r1a1m1_111 1>1>1 101x11171 1&1 101x1f1f1;1
1 1b1V1a1r11101 1=1 1u1V1a1r131 1=1=1 101;1
1 1i1f1 1(1!1b1V1a1r11101)1 1{1
1 1p1a1r1a1m1_141 1=1 1p1a1r1a1m1_121 1>1>1 101x11171 1&1 101x1f1f1;1
1 1b1V1a1r11101 1=1 1p1a1r1a1m1_141 1=1=1 101;1
1 1}1
1 1i1f1 1(1!1b1V1a1r11101)1 1{1
1 1b1V1a1r11101 1=1 1u1V1a1r131 1=1=1 101x1f1f1;1
1 1}1
1 1i1f1 1(1!1b1V1a1r11101)1 1{1
1 1b1V1a1r11101 1=1 1p1a1r1a1m1_141 1=1=1 101x1f1f1;1
1 1}1
1 1i1f1 1(1b1V1a1r11101)1 1{1
1 1p1a1r1a1m1_141 1=1 1p1a1r1a1m1_121 1>1>1 101x11171 1&1 101x1f1f1;1
1 1i1f1 1(1u1V1a1r131 1=1=1 101x1f1f1 1|1|1 1p1a1r1a1m1_141 1=1=1 101x1f1f1)1 1{1
1 1u1V1a1r191 1=1 1p1a1r1a1m1_121;1
1 1i1f1 1(1p1a1r1a1m1_111 1!1=1 101 1&1&1 1p1a1r1a1m1_111 1!1=1 101x18101010101010101)1 1{1
1 1u1V1a1r191 1=1 1p1a1r1a1m1_111;1
1 1}1
1 1u1V1a1r151 1=1 1u1V1a1r191;1
1 1i1f1 1(1(1(1(1(1p1a1r1a1m1_111 1=1=1 101 1|1|1 1p1a1r1a1m1_111 1=1=1 101x18101010101010101)1 1|1|1 1p1a1r1a1m1_121 1=1=1 101)1 1|1|1 1p1a1r1a1m1_121 1=1=1 101x18101010101010101)1 1|1|1
1 1(1(1u1V1a1r131 1=1=1 101x1f1f1 1&1&1 1(1(1u1V1a1r191 1&1 101x171f1f1f1f1f1)1 1!1=1 101)1)1)1)1 1|1|1
1 1(1(1p1a1r1a1m1_141 1=1=1 101x1f1f1 1&1&1 1(1u1V1a1r151 1=1 1p1a1r1a1m1_121,1 1(1p1a1r1a1m1_121 1&1 101x171f1f1f1f1f1)1 1!1=1 101)1)1)1)1 1{1
1 1r1e1t1u1r1n1 1u1V1a1r151 1|1 101x171f1c10101010101;1
1 1}1
1 1u1V1a1r191 1=1 1u1V1a1r191 1^1 1p1a1r1a1m1_121;1
1 1g1o1t1o1 1L1A1B1_10101011111811101;1
1 1}1
1 1b1V1a1r11101 1=1 1(1p1a1r1a1m1_111 1&1 101x171f1f1f1f1f1f1f1)1 1=1=1 101;1
1 1i1f1 1(1!1b1V1a1r11101)1 1{1
1 1b1V1a1r11101 1=1 1(1p1a1r1a1m1_121 1&1 101x171f1f1f1f1f1f1f1)1 1=1=1 101;1
1 1}1
1 1i1f1 1(1b1V1a1r11101)1 1{1
1 1r1e1t1u1r1n1 1(1p1a1r1a1m1_111 1^1 1p1a1r1a1m1_121)1 1&1 101x18101010101010101;1
1 1}1
1 1b1V1a1r11101 1=1 1u1V1a1r131 1=1=1 101;1
1 1u1V1a1r191 1=1 1p1a1r1a1m1_111 1&1 101x18101010101010101;1
1 1w1h1i1l1e1(1 1t1r1u1e1 1)1 1{1
1 1i1f1 1(1b1V1a1r11101)1 1{1
1 1p1a1r1a1m1_111 1=1 1p1a1r1a1m1_111 1<1<1 111;1
1 1b1V1a1r11101 1=1 1(1p1a1r1a1m1_111 1&1 101x1810101010101)1 1=1=1 101;1
1 1}1
1 1i1f1 1(1!1b1V1a1r11101)1 1b1r1e1a1k1;1
1 1u1V1a1r131 1=1 1u1V1a1r131 1-1 111;1
1 1}1
1 1p1a1r1a1m1_111 1=1 1p1a1r1a1m1_111 1|1 1u1V1a1r191;1
1 1b1V1a1r11101 1=1 1p1a1r1a1m1_141 1=1=1 101;1
1 1u1V1a1r191 1=1 1p1a1r1a1m1_121 1&1 101x18101010101010101;1
1 1w1h1i1l1e1(1 1t1r1u1e1 1)1 1{1
1 1i1f1 1(1b1V1a1r11101)1 1{1
1 1p1a1r1a1m1_121 1=1 1p1a1r1a1m1_121 1<1<1 111;1
1 1b1V1a1r11101 1=1 1(1p1a1r1a1m1_121 1&1 101x1810101010101)1 1=1=1 101;1
1 1}1
1 1i1f1 1(1!1b1V1a1r11101)1 1b1r1e1a1k1;1
1 1p1a1r1a1m1_141 1=1 1p1a1r1a1m1_141 1-1 111;1
1 1}1
1 1p1a1r1a1m1_121 1=1 1p1a1r1a1m1_121 1|1 1u1V1a1r191;1
1 1}1
1 1i1V1a1r141 1=1 1u1V1a1r131 1+1 1p1a1r1a1m1_141;1
1 1u1V1a1r191 1=1 1p1a1r1a1m1_111 1^1 1p1a1r1a1m1_121;1
1 1u1V1a1r131 1=1 1p1a1r1a1m1_111 1<1<1 191;1
1 1b1V1a1r11101 1=1 1u1V1a1r131 1=1=1 101;1
1 1i1f1 1(1!1b1V1a1r11101)1 1{1
1 1p1a1r1a1m1_121 1=1 1p1a1r1a1m1_121 1<1<1 191;1
1 1b1V1a1r11101 1=1 1p1a1r1a1m1_121 1=1=1 101;1
1 1}1
1 1i1f1 1(1b1V1a1r11101)1 1{1
1 1i1f1 1(1u1V1a1r131 1=1=1 101)1 1{1
1 1p1a1r1a1m1_121 1=1 1p1a1r1a1m1_121 1<1<1 191;1
1 1}1
1 1u1V1a1r191 1=1 1u1V1a1r191 1&1 101x18101010101010101 1|1 1p1a1r1a1m1_111 1&1 101x171f1f1f1f1f1 1|1 1p1a1r1a1m1_121 1>1>1 191;1
1 1b1V1a1r11111 1=1 1S1B1O1R1R1O1W141(1i1V1a1r141,101x171f1)1;1
1 1i1V1a1r161 1=1 1i1V1a1r141 1+1 1-101x171f1;1
1 1b1V1a1r11101 1=1 1i1V1a1r161 1=1=1 101;1
1 1i1V1a1r171 1=1 1i1V1a1r161;1
1 1i1f1 1(1!1b1V1a1r11101 1&1&1 101x171e1 1<1 1i1V1a1r141)1 1{1
1 1b1V1a1r11111 1=1 1S1B1O1R1R1O1W141(101x1f1f1,1i1V1a1r161)1;1
1 1i1V1a1r171 1=1 1-1i1V1a1r161 1+1 101x1f1f1;1
1 1b1V1a1r11101 1=1 1-1i1V1a1r161 1=1=1 1-101x1f1f1;1
1 1}1
1 1i1f1 1(1!1b1V1a1r11101 1&1&1 1i1V1a1r171 1<1 101 1=1=1 1b1V1a1r11111)1 1{1
1 1u1V1a1r191 1=1 1u1V1a1r191 1|1 1i1V1a1r161 1*1 101x1810101010101;1
1 1}1
1 1i1f1 1(1!1b1V1a1r11101 1&1&1 1i1V1a1r171 1<1 101 1=1=1 1b1V1a1r11111)1 1{1
1 1r1e1t1u1r1n1 1u1V1a1r191;1
1 1}1
1 1u1V1a1r191 1=1 1u1V1a1r191 1|1 101x1810101010101;1
1 1u1V1a1r181 1=1 101;1
1 1b1V1a1r11111 1=1 1S1B1O1R1R1O1W141(1i1V1a1r161,111)1;1
1 1u1V1a1r151 1=1 1i1V1a1r141 1-1 101x18101;1
1 1b1V1a1r11101 1=1 1u1V1a1r151 1=1=1 101;1
1 1u1V1a1r131 1=1 1u1V1a1r151;1
1 1}1
1 1e1l1s1e1 1{1
1 1l1V1a1r121 1=1 1(1u1l1o1n1g1l1o1n1g1)1(1p1a1r1a1m1_121 1>1>1 151 1|1 101x181010101010101)1 1*1 1(1u1l1o1n1g1l1o1n1g1)1(1u1V1a1r131 1>1>1 151 1|1 101x181010101010101)1;1
1 1b1V1a1r11101 1=1 1(1u1i1n1t1)1(1(1u1l1o1n1g1l1o1n1g1)1l1V1a1r121 1>1>1 101x12101)1 1<1 101x1810101010101;1
1 1i1f1 1(1b1V1a1r11101)1 1{1
1 1l1V1a1r121 1=1 1l1V1a1r121 1*1 121;1
1 1}1
1 1u1V1a1r181 1=1 1(1u1i1n1t1)1l1V1a1r121;1
1 1u1V1a1r191 1=1 1u1V1a1r191 1&1 101x18101010101010101 1|1 1(1u1i1n1t1)1(1(1u1l1o1n1g1l1o1n1g1)1l1V1a1r121 1>1>1 101x12101)1;1
1 1u1V1a1r151 1=1 1i1V1a1r141 1-1 1(1b1V1a1r11101 1+1 101x171f1)1;1
1 1b1V1a1r11111 1=1 1S1B1O1R1R1O1W141(1u1V1a1r151,101x1f1d1)1;1
1 1b1V1a1r11101 1=1 1u1V1a1r151 1=1=1 101x1f1d1;1
1 1u1V1a1r131 1=1 1u1V1a1r151 1-1 101x1f1d1;1
1 1i1f1 1(1u1V1a1r151 1<1 101x1f1e1)1 1{1
1 1u1V1a1r131 1=1 1u1V1a1r191 1+1 1u1V1a1r151 1*1 101x1810101010101 1+1 1(1u1i1n1t1)1(101x171f1f1f1f1f1f1f1 1<1 1u1V1a1r181)1;1
1 1i1f1 1(1u1V1a1r181 1=1=1 101x18101010101010101)1 1{1
1 1u1V1a1r131 1=1 1u1V1a1r131 1&1 101x1f1f1f1f1f1f1f1e1;1
1 1}1
1 1r1e1t1u1r1n1 1u1V1a1r131;1
1 1}1
1 1}1
1 1i1f1 1(1b1V1a1r11101 1|1|1 1(1i1n1t1)1u1V1a1r131 1<1 101 1!1=1 1b1V1a1r11111)1 1{1
1 1b1V1a1r11101 1=1 1(1i1n1t1)1(1u1V1a1r151 1+1 101x11191)1 1<1 101;1
1 1i1f1 1(1u1V1a1r151 1=1=1 101x1f1f1f1f1f1f1e171 1|1|1 1b1V1a1r11101 1!1=1 1S1C1A1R1R1Y141(1u1V1a1r151,101x11191)1)1 1{1
1 1u1V1a1r191 1=1 1u1V1a1r191 1&1 101x18101010101010101;1
1 1}1
1 1i1f1 1(1u1V1a1r151 1!1=1 101x1f1f1f1f1f1f1e171 1&1&1 1b1V1a1r11101 1=1=1 1S1C1A1R1R1Y141(1u1V1a1r151,101x11191)1)1 1{1
1 1u1V1a1r111 1=1 1(1u1V1a1r191 1<1<1 111)1 1>1>1 1(1-1u1V1a1r151 1&1 101x1f1f1)1;1
1 1u1V1a1r131 1=1 1u1V1a1r191 1<1<1 1(1u1V1a1r151 1+1 101x12101 1&1 101x1f1f1)1;1
1 1u1V1a1r191 1=1 1(1u1V1a1r191 1&1 101x18101010101010101 1|1 1u1V1a1r111 1>1>1 111)1 1+1 1(1u1i1n1t1)1(1(1b1y1t1e1)1u1V1a1r111 1&1 111)1;1
1 1i1f1 1(1(1u1V1a1r181 1|1 1u1V1a1r131 1<1<1 111)1 1=1=1 101)1 1{1
1 1u1V1a1r191 1=1 1u1V1a1r191 1&1 1~1(1u1V1a1r131 1>1>1 101x111f1)1;1
1 1}1
1 1r1e1t1u1r1n1 1u1V1a1r191;1
1 1}1
1 1r1e1t1u1r1n1 1u1V1a1r191;1
1 1}1
1L1A1B1_10101011111811101:1
1 1r1e1t1u1r1n1 1u1V1a1r191 1&1 101x18101010101010101 1|1 101x171f1810101010101;1
1}1
1
1/1/1 1F1u1n1c1t1i1o1n1:1 1_1_1a1e1a1b1i1_1d1r1s1u1b1 1@1 101x111118121c1
1v1o1i1d1 1_1_1a1e1a1b1i1_1d1r1s1u1b1(1u1n1s1i1g1n1e1d1 1i1n1t1 1p1a1r1a1m1_111,1u1i1n1t1 1p1a1r1a1m1_121)1
1{1
1 1_1_1a1d1d1d1f131(1p1a1r1a1m1_111,1p1a1r1a1m1_121 1^1 101x18101010101010101)1;1
1 1r1e1t1u1r1n1;1
1}1
1
1/1/1 1F1u1n1c1t1i1o1n1:1 1_1_1s1u1b1d1f131 1@1 101x11111813141
1u1l1o1n1g1l1o1n1g1 1_1_1s1u1b1d1f131(1u1i1n1t1 1p1a1r1a1m1_111,1u1i1n1t1 1p1a1r1a1m1_121,1u1i1n1t1 1p1a1r1a1m1_131,1u1i1n1t1 1p1a1r1a1m1_141)1
1{1
1 1i1n1t1 1i1V1a1r111;1
1 1u1i1n1t1 1u1V1a1r121;1
1 1b1y1t1e1 1b1V1a1r131;1
1 1b1y1t1e1 1b1V1a1r141;1
1 1u1i1n1t1 1u1V1a1r151;1
1 1u1i1n1t1 1u1V1a1r161;1
1 1u1i1n1t1 1u1V1a1r171;1
1 1u1i1n1t1 1u1V1a1r181;1
1 1u1i1n1t1 1u1V1a1r191;1
1 1i1n1t1 1i1V1a1r11101;1
1 1u1i1n1t1 1u1V1a1r11111;1
1 1u1i1n1t1 1u1V1a1r11121;1
1 1u1i1n1t1 1u1V1a1r11131;1
1 1b1o1o1l1 1b1V1a1r11141;1
1 1b1o1o1l1 1b1V1a1r11151;1
1 1b1o1o1l1 1b1V1a1r11161;1
1 1u1V1a1r181 1=1 1p1a1r1a1m1_141 1^1 101x18101010101010101;1
1 1u1V1a1r11111 1=1 1p1a1r1a1m1_121 1<1<1 111;1
1 1p1a1r1a1m1_141 1=1 1p1a1r1a1m1_141 1<1<1 111;1
1 1b1V1a1r11141 1=1 1u1V1a1r11111 1=1=1 1p1a1r1a1m1_141 1&1&1 1p1a1r1a1m1_111 1=1=1 1p1a1r1a1m1_131;1
1 1i1f1 1(1u1V1a1r11111 1!1=1 1p1a1r1a1m1_141 1|1|1 1p1a1r1a1m1_111 1!1=1 1p1a1r1a1m1_131)1 1{1
1 1b1V1a1r11141 1=1 1(1u1V1a1r11111 1|1 1p1a1r1a1m1_111)1 1=1=1 101;1
1 1}1
1 1i1f1 1(1!1b1V1a1r11141)1 1{1
1 1b1V1a1r11141 1=1 1(1p1a1r1a1m1_141 1|1 1p1a1r1a1m1_131)1 1=1=1 101;1
1 1}1
1 1i1V1a1r11101 1=1 1(1i1n1t1)1u1V1a1r11111 1>1>1 101x11151;1
1 1i1f1 1(1!1b1V1a1r11141)1 1{1
1 1b1V1a1r11141 1=1 1i1V1a1r11101 1=1=1 1-111;1
1 1}1
1 1i1V1a1r111 1=1 1(1i1n1t1)1p1a1r1a1m1_141 1>1>1 101x11151;1
1 1i1f1 1(1!1b1V1a1r11141)1 1{1
1 1b1V1a1r11141 1=1 1i1V1a1r111 1=1=1 1-111;1
1 1}1
1 1i1f1 1(1b1V1a1r11141)1 1{1
1 1i1f1 1(1i1V1a1r11101 1=1=1 1-111 1|1|1 1i1V1a1r111 1=1=1 1-111)1 1{1
1 1u1V1a1r11111 1=1 1u1V1a1r181;1
1 1u1V1a1r11121 1=1 1p1a1r1a1m1_131;1
1 1i1f1 1(1i1V1a1r11101 1=1=1 1-111)1 1{1
1 1u1V1a1r11111 1=1 1p1a1r1a1m1_121;1
1 1u1V1a1r11121 1=1 1p1a1r1a1m1_111;1
1 1}1
1 1i1f1 1(1i1V1a1r11101 1!1=1 1-111 1|1|1 1i1V1a1r111 1!1=1 1-111)1 1{1
1 1p1a1r1a1m1_131 1=1 1u1V1a1r11121;1
1 1u1V1a1r181 1=1 1u1V1a1r11111;1
1 1}1
1 1b1V1a1r11141 1=1 1(1u1V1a1r11121 1|1 1u1V1a1r11111 1<1<1 101x1c1)1 1=1=1 101;1
1 1i1f1 1(1b1V1a1r11141)1 1{1
1 1b1V1a1r11141 1=1 1(1p1a1r1a1m1_131 1|1 1u1V1a1r181 1<1<1 101x1c1)1 1=1=1 101;1
1 1}1
1 1i1f1 1(1b1V1a1r11141)1 1{1
1 1b1V1a1r11141 1=1 1u1V1a1r11111 1=1=1 1u1V1a1r181;1
1 1}1
1 1i1f1 1(1!1b1V1a1r11141)1 1{1
1 1u1V1a1r11111 1=1 1u1V1a1r11111 1|1 101x18101010101;1
1 1}1
1 1r1e1t1u1r1n1 1C1O1N1C1A1T14141(1u1V1a1r11111,1u1V1a1r11121)1;1
1 1}1
1 1i1f1 1(1u1V1a1r11111 1!1=1 1p1a1r1a1m1_141 1|1|1 1p1a1r1a1m1_111 1!1=1 1p1a1r1a1m1_131)1 1{1
1 1i1f1 1(1(1u1V1a1r11111 1|1 1p1a1r1a1m1_111)1 1=1=1 101)1 1{1
1 1p1a1r1a1m1_111 1=1 1p1a1r1a1m1_131;1
1 1p1a1r1a1m1_121 1=1 1u1V1a1r181;1
1 1}1
1 1r1e1t1u1r1n1 1C1O1N1C1A1T14141(1p1a1r1a1m1_121,1p1a1r1a1m1_111)1;1
1 1}1
1 1i1f1 1(1p1a1r1a1m1_121 1!1=1 1u1V1a1r181)1 1{1
1 1r1e1t1u1r1n1 101;1
1 1}1
1 1i1f1 1(1u1V1a1r11111 1>1>1 101x11151 1=1=1 101)1 1{1
1 1b1V1a1r131 1=1 1(1b1y1t1e1)1(1p1a1r1a1m1_111 1>1>1 101x111f1)1;1
1 1u1V1a1r11111 1=1 1p1a1r1a1m1_121 1*1 121 1+1 1(1u1i1n1t1)1b1V1a1r131;1
1 1i1f1 1(1C1A1R1R1Y141(1p1a1r1a1m1_121,1p1a1r1a1m1_121)1 1|1|1 1C1A1R1R1Y141(1p1a1r1a1m1_121 1*1 121,1(1u1i1n1t1)1b1V1a1r131)1)1 1{1
1 1u1V1a1r11111 1=1 1u1V1a1r11111 1|1 101x18101010101010101;1
1 1}1
1 1r1e1t1u1r1n1 1C1O1N1C1A1T14141(1u1V1a1r11111,1p1a1r1a1m1_111 1<1<1 111)1;1
1 1}1
1 1i1f1 1(1u1V1a1r11111 1<1 101x1f1f1c10101010101)1 1{1
1 1r1e1t1u1r1n1 1C1O1N1C1A1T14141(1p1a1r1a1m1_121 1+1 101x1110101010101,1p1a1r1a1m1_111)1;1
1 1}1
1 1p1a1r1a1m1_121 1=1 1p1a1r1a1m1_121 1&1 101x18101010101010101;1
1L1A1B1_10101011111a1a181:1
1 1r1e1t1u1r1n1 1(1u1l1o1n1g1l1o1n1g1)1(1p1a1r1a1m1_121 1|1 101x171f1f10101010101)1 1<1<1 101x12101;1
1 1}1
1 1u1V1a1r11111 1=1 1u1V1a1r11111 1>1>1 101x11151;1
1 1p1a1r1a1m1_141 1=1 1p1a1r1a1m1_141 1>1>1 101x11151;1
1 1u1V1a1r11121 1=1 1p1a1r1a1m1_141 1-1 1u1V1a1r11111;1
1 1b1V1a1r11141 1=1 1u1V1a1r11121 1!1=1 101;1
1 1i1f1 1(1p1a1r1a1m1_141 1<1 1u1V1a1r11111)1 1{1
1 1u1V1a1r11121 1=1 1-1u1V1a1r11121;1
1 1}1
1 1u1V1a1r171 1=1 1p1a1r1a1m1_111;1
1 1u1V1a1r191 1=1 1p1a1r1a1m1_121;1
1 1i1f1 1(1b1V1a1r11141 1&1&1 1u1V1a1r11111 1<1=1 1p1a1r1a1m1_141)1 1{1
1 1u1V1a1r11111 1=1 1u1V1a1r11111 1+1 1u1V1a1r11121;1
1 1u1V1a1r171 1=1 1p1a1r1a1m1_131;1
1 1u1V1a1r191 1=1 1u1V1a1r181;1
1 1p1a1r1a1m1_131 1=1 1p1a1r1a1m1_111;1
1 1u1V1a1r181 1=1 1p1a1r1a1m1_121;1
1 1}1
1 1i1f1 1(101x13161 1<1 1u1V1a1r11121)1 1{1
1 1r1e1t1u1r1n1 1C1O1N1C1A1T14141(1u1V1a1r191,1u1V1a1r171)1;1
1 1}1
1 1u1V1a1r161 1=1 1u1V1a1r191 1&1 101x1f1f1f1f1f1 1|1 101x1110101010101;1
1 1i1f1 1(1(1u1V1a1r191 1&1 101x18101010101010101)1 1!1=1 101)1 1{1
1 1b1V1a1r11141 1=1 1u1V1a1r171 1!1=1 101;1
1 1u1V1a1r171 1=1 1-1u1V1a1r171;1
1 1u1V1a1r161 1=1 1-1(1u1V1a1r161 1+1 1b1V1a1r11141)1;1
1 1}1
1 1u1V1a1r191 1=1 1u1V1a1r181 1&1 101x1f1f1f1f1f1 1|1 101x1110101010101;1
1 1i1f1 1(1(1u1V1a1r181 1&1 101x18101010101010101)1 1!1=1 101)1 1{1
1 1b1V1a1r11141 1=1 1p1a1r1a1m1_131 1!1=1 101;1
1 1p1a1r1a1m1_131 1=1 1-1p1a1r1a1m1_131;1
1 1u1V1a1r191 1=1 1-1(1u1V1a1r191 1+1 1b1V1a1r11141)1;1
1 1}1
1 1i1f1 1(1u1V1a1r11111 1=1=1 1u1V1a1r11121)1 1{1
1 1u1V1a1r191 1=1 1u1V1a1r191 1^1 101x1110101010101;1
1 1i1f1 1(1u1V1a1r11111 1=1=1 101)1 1{1
1 1u1V1a1r161 1=1 1u1V1a1r161 1^1 101x1110101010101;1
1 1u1V1a1r11111 1=1 111;1
1 1}1
1 1e1l1s1e1 1{1
1 1u1V1a1r11121 1=1 1u1V1a1r11121 1-1 111;1
1 1}1
1 1}1
1 1u1V1a1r181 1=1 1-1u1V1a1r11121 1+1 101x12101;1
1 1i1f1 1(1(1i1n1t1)1u1V1a1r11121 1<1 101x12111)1 1{1
1 1u1V1a1r11131 1=1 1p1a1r1a1m1_131 1<1<1 1(1u1V1a1r181 1&1 101x1f1f1)1;1
1 1p1a1r1a1m1_131 1=1 1p1a1r1a1m1_131 1>1>1 1(1u1V1a1r11121 1&1 101x1f1f1)1;1
1 1u1V1a1r151 1=1 1u1V1a1r171 1+1 1p1a1r1a1m1_131;1
1 1u1V1a1r121 1=1 1u1V1a1r191 1<1<1 1(1u1V1a1r181 1&1 101x1f1f1)1;1
1 1u1V1a1r181 1=1 1u1V1a1r151 1+1 1u1V1a1r121;1
1 1u1V1a1r11121 1=1 1u1V1a1r161 1+1 1C1A1R1R1Y141(1u1V1a1r171,1p1a1r1a1m1_131)1 1+1 1(1(1i1n1t1)1u1V1a1r191 1>1>1 1(1u1V1a1r11121 1&1 101x1f1f1)1)1 1+1
1 1(1u1i1n1t1)1C1A1R1R1Y141(1u1V1a1r151,1u1V1a1r121)1;1
1 1}1
1 1e1l1s1e1 1{1
1 1u1V1a1r11131 1=1 1u1V1a1r191 1<1<1 1(1-1u1V1a1r11121 1+1 101x14101 1&1 101x1f1f1)1;1
1 1i1f1 1(1p1a1r1a1m1_131 1!1=1 101)1 1{1
1 1u1V1a1r11131 1=1 1u1V1a1r11131 1|1 121;1
1 1}1
1 1u1V1a1r11121 1=1 1(1i1n1t1)1u1V1a1r191 1>1>1 1(1u1V1a1r11121 1-1 101x12101 1&1 101x1f1f1)1;1
1 1u1V1a1r181 1=1 1u1V1a1r171 1+1 1u1V1a1r11121;1
1 1u1V1a1r11121 1=1 1u1V1a1r161 1+1 1(1(1i1n1t1)1u1V1a1r191 1>1>1 101x111f1)1 1+1 1(1u1i1n1t1)1C1A1R1R1Y141(1u1V1a1r171,1u1V1a1r11121)1;1
1 1}1
1 1p1a1r1a1m1_121 1=1 1u1V1a1r11121 1&1 101x18101010101010101;1
1 1u1V1a1r171 1=1 1u1V1a1r11121;1
1 1i1f1 1(1(1i1n1t1)1u1V1a1r11121 1<1 101)1 1{1
1 1b1V1a1r11141 1=1 1u1V1a1r11131 1=1=1 101;1
1 1u1V1a1r11131 1=1 1-1u1V1a1r11131;1
1 1u1V1a1r171 1=1 1-1u1V1a1r181;1
1 1u1V1a1r181 1=1 1-1(1u1V1a1r181 1+1 1!1b1V1a1r11141)1;1
1 1u1V1a1r171 1=1 1-1(1u1V1a1r11121 1+1 1(1b1V1a1r11141 1<1=1 1u1V1a1r171)1)1;1
1 1}1
1 1i1f1 1(101x1f1f1f1f1f1 1<1 1u1V1a1r171)1 1{1
1 1u1V1a1r191 1=1 1u1V1a1r11111 1-1 111;1
1 1i1f1 1(101x111f1f1f1f1f1 1<1 1u1V1a1r171)1 1{1
1 1b1V1a1r131 1=1 1(1b1y1t1e1)1u1V1a1r171;1
1 1u1V1a1r171 1=1 1u1V1a1r171 1>1>1 111;1
1 1b1V1a1r141 1=1 1(1b1y1t1e1)1u1V1a1r181;1
1 1u1V1a1r181 1=1 1(1u1i1n1t1)1(1b1V1a1r131 1&1 111)1 1<1<1 101x111f1 1|1 1u1V1a1r181 1>1>1 111;1
1 1u1V1a1r11131 1=1 1(1u1i1n1t1)1(1b1V1a1r141 1&1 111)1 1<1<1 101x111f1 1|1 1u1V1a1r11131 1>1>1 111;1
1 1u1V1a1r191 1=1 1u1V1a1r11111;1
1 1i1f1 1(101x1f1f1b1f1f1f1f1f1 1<1 1u1V1a1r11111 1*1 101x1210101010101)1 1g1o1t1o1 1L1A1B1_10101011111a1a181;1
1 1}1
1L1A1B1_10101011111915101:1
1 1b1V1a1r11141 1=1 101x171f1f1f1f1f1f1f1 1<1 1u1V1a1r11131;1
1 1i1f1 1(1u1V1a1r11131 1=1=1 101x18101010101010101)1 1{1
1 1b1V1a1r11141 1=1 1(1b1o1o1l1)1(1(1b1y1t1e1)1u1V1a1r181 1&1 111)1;1
1 1}1
1 1r1e1t1u1r1n1 1C1O1N1C1A1T14141(1u1V1a1r171 1+1 1u1V1a1r191 1*1 101x1110101010101 1+1 1(1u1i1n1t1)1C1A1R1R1Y141(1u1V1a1r181,1(1u1i1n1t1)1b1V1a1r11141)1 1|1 1p1a1r1a1m1_121,1
1 1u1V1a1r181 1+1 1b1V1a1r11141)1;1
1 1}1
1 1b1V1a1r131 1=1 1(1b1y1t1e1)1(1u1V1a1r11131 1>1>1 101x111f1)1;1
1 1u1V1a1r11131 1=1 1u1V1a1r11131 1<1<1 111;1
1 1u1V1a1r191 1=1 1u1V1a1r181 1*1 121;1
1 1b1V1a1r11141 1=1 1C1A1R1R1Y141(1u1V1a1r181,1u1V1a1r181)1;1
1 1u1V1a1r181 1=1 1u1V1a1r181 1*1 121 1+1 1(1u1i1n1t1)1b1V1a1r131;1
1 1u1V1a1r171 1=1 1u1V1a1r171 1*1 121 1+1 1(1u1i1n1t1)1(1b1V1a1r11141 1|1|1 1C1A1R1R1Y141(1u1V1a1r191,1(1u1i1n1t1)1b1V1a1r131)1)1;1
1 1u1V1a1r191 1=1 1u1V1a1r11111 1-1 121;1
1 1i1f1 1(1u1V1a1r11111 1-1 111 1!1=1 101 1&1&1 101x1f1f1f1f1f1 1<1 1u1V1a1r171)1 1g1o1t1o1 1L1A1B1_10101011111915101;1
1 1u1V1a1r11111 1=1 1u1V1a1r181;1
1 1u1V1a1r161 1=1 1u1V1a1r171;1
1 1i1f1 1(1u1V1a1r171 1=1=1 101)1 1{1
1 1u1V1a1r11111 1=1 101;1
1 1u1V1a1r161 1=1 1u1V1a1r181;1
1 1}1
1 1i1V1a1r11101 1=1 1L1Z1C1O1U1N1T1(1u1V1a1r161)1;1
1 1i1f1 1(1u1V1a1r171 1=1=1 101)1 1{1
1 1i1V1a1r11101 1=1 1i1V1a1r11101 1+1 101x12101;1
1 1}1
1 1u1V1a1r171 1=1 1i1V1a1r11101 1-1 101x1b1;1
1 1b1V1a1r11161 1=1 1S1B1O1R1R1O1W141(1u1V1a1r171,101x12101)1;1
1 1u1V1a1r181 1=1 1i1V1a1r11101 1-1 101x121b1;1
1 1b1V1a1r11141 1=1 1(1i1n1t1)1u1V1a1r181 1<1 101;1
1 1b1V1a1r11151 1=1 1u1V1a1r181 1=1=1 101;1
1 1i1f1 1(1(1i1n1t1)1u1V1a1r171 1<1 101x12101)1 1{1
1 1b1V1a1r11161 1=1 1S1C1A1R1R1Y141(1u1V1a1r181,101x1c1)1;1
1 1i1V1a1r11101 1=1 1i1V1a1r11101 1+1 1-101x111f1;1
1 1b1V1a1r11141 1=1 1i1V1a1r11101 1<1 101;1
1 1b1V1a1r11151 1=1 1i1V1a1r11101 1=1=1 101;1
1 1u1V1a1r181 1=1 1u1V1a1r171;1
1 1i1f1 1(1!1b1V1a1r11151 1&1&1 1b1V1a1r11141 1=1=1 1b1V1a1r11161)1 1{1
1 1u1V1a1r11111 1=1 1u1V1a1r161 1<1<1 1(1u1V1a1r171 1&1 101x1f1f1)1;1
1 1u1V1a1r161 1=1 1u1V1a1r161 1>1>1 1(101x1c1U1 1-1 1i1V1a1r11101 1&1 101x1f1f1)1;1
1 1g1o1t1o1 1L1A1B1_1010101111191d101;1
1 1}1
1 1}1
1 1i1f1 1(1b1V1a1r11151 1|1|1 1b1V1a1r11141 1!1=1 1b1V1a1r11161)1 1{1
1 1u1V1a1r11131 1=1 101x12101 1-1 1u1V1a1r181;1
1 1}1
1 1u1V1a1r161 1=1 1u1V1a1r161 1<1<1 1(1u1V1a1r181 1&1 101x1f1f1)1;1
1 1i1f1 1(1b1V1a1r11151 1|1|1 1b1V1a1r11141 1!1=1 1b1V1a1r11161)1 1{1
1 1u1V1a1r161 1=1 1u1V1a1r161 1|1 1u1V1a1r11111 1>1>1 1(1u1V1a1r11131 1&1 101x1f1f1)1;1
1 1}1
1 1i1f1 1(1b1V1a1r11151 1|1|1 1b1V1a1r11141 1!1=1 1b1V1a1r11161)1 1{1
1 1u1V1a1r11111 1=1 1u1V1a1r11111 1<1<1 1(1u1V1a1r181 1&1 101x1f1f1)1;1
1 1}1
1L1A1B1_1010101111191d101:1
1 1i1f1 1(1(1i1n1t1)1u1V1a1r171 1<1=1 1(1i1n1t1)1u1V1a1r191)1 1{1
1 1r1e1t1u1r1n1 1C1O1N1C1A1T14141(1u1V1a1r161 1+1 1(1u1V1a1r191 1-1 1u1V1a1r171)1 1*1 101x1110101010101 1|1 1p1a1r1a1m1_121,1u1V1a1r11111)1;1
1 1}1
1 1u1V1a1r181 1=1 1~1(1u1V1a1r191 1-1 1u1V1a1r171)1;1
1 1i1f1 1(1(1i1n1t1)1u1V1a1r181 1<1 101x111f1)1 1{1
1 1i1V1a1r11101 1=1 1u1V1a1r181 1-1 101x11131;1
1 1i1f1 1(1i1V1a1r11101 1!1=1 101 1&1&1 1i1V1a1r11101 1<1 101 1=1=1 1S1C1A1R1R1Y141(1u1V1a1r181 1-1 101x111f1,101x1c1)1)1 1{1
1 1r1e1t1u1r1n1 1C1O1N1C1A1T14141(1u1V1a1r11121,1u1V1a1r11111 1>1>1 1(101x12101 1-1 1(101x1c1U1 1-1 1i1V1a1r11101)1 1&1 101x1f1f1)1 1|1
1 1u1V1a1r161 1<1<1 1(101x1c1U1 1-1 1i1V1a1r11101 1&1 101x1f1f1)1)1 1&1 101x18101010101010101f1f1f1f1f1f1f1f1;1
1 1}1
1 1u1V1a1r181 1=1 1u1V1a1r181 1+1 111;1
1 1r1e1t1u1r1n1 1C1O1N1C1A1T14141(1p1a1r1a1m1_121 1|1 1u1V1a1r161 1>1>1 1(1u1V1a1r181 1&1 101x1f1f1)1,1
1 1u1V1a1r11111 1>1>1 1(1u1V1a1r181 1&1 101x1f1f1)1 1|1 1u1V1a1r161 1<1<1 1(101x12101 1-1 1u1V1a1r181 1&1 101x1f1f1)1)1;1
1 1}1
1 1r1e1t1u1r1n1 1C1O1N1C1A1T14141(1u1V1a1r11121,1u1V1a1r161 1>1>1 1(1u1V1a1r181 1-1 101x111f1 1&1 101x1f1f1)1)1 1&1 101x18101010101010101f1f1f1f1f1f1f1f1;1
1}1
1
1/1/1 1F1u1n1c1t1i1o1n1:1 1_1_1a1d1d1d1f131 1@1 101x11111813181
1u1l1o1n1g1l1o1n1g1 1_1_1a1d1d1d1f131(1u1i1n1t1 1p1a1r1a1m1_111,1u1i1n1t1 1p1a1r1a1m1_121,1u1i1n1t1 1p1a1r1a1m1_131,1u1i1n1t1 1p1a1r1a1m1_141)1
1{1
1 1i1n1t1 1i1V1a1r111;1
1 1u1i1n1t1 1u1V1a1r121;1
1 1b1y1t1e1 1b1V1a1r131;1
1 1b1y1t1e1 1b1V1a1r141;1
1 1u1i1n1t1 1u1V1a1r151;1
1 1u1i1n1t1 1u1V1a1r161;1
1 1u1i1n1t1 1u1V1a1r171;1
1 1i1n1t1 1i1V1a1r181;1
1 1u1i1n1t1 1u1V1a1r191;1
1 1u1i1n1t1 1u1V1a1r11101;1
1 1u1i1n1t1 1u1V1a1r11111;1
1 1u1i1n1t1 1u1V1a1r11121;1
1 1u1i1n1t1 1u1V1a1r11131;1
1 1b1o1o1l1 1b1V1a1r11141;1
1 1b1o1o1l1 1b1V1a1r11151;1
1 1b1o1o1l1 1b1V1a1r11161;1
1 1u1V1a1r191 1=1 1p1a1r1a1m1_121 1<1<1 111;1
1 1u1V1a1r161 1=1 1p1a1r1a1m1_141 1<1<1 111;1
1 1b1V1a1r11141 1=1 1u1V1a1r191 1=1=1 1u1V1a1r161 1&1&1 1p1a1r1a1m1_111 1=1=1 1p1a1r1a1m1_131;1
1 1i1f1 1(1u1V1a1r191 1!1=1 1u1V1a1r161 1|1|1 1p1a1r1a1m1_111 1!1=1 1p1a1r1a1m1_131)1 1{1
1 1b1V1a1r11141 1=1 1(1u1V1a1r191 1|1 1p1a1r1a1m1_111)1 1=1=1 101;1
1 1}1
1 1i1f1 1(1!1b1V1a1r11141)1 1{1
1 1b1V1a1r11141 1=1 1(1u1V1a1r161 1|1 1p1a1r1a1m1_131)1 1=1=1 101;1
1 1}1
1 1i1V1a1r181 1=1 1(1i1n1t1)1u1V1a1r191 1>1>1 101x11151;1
1 1i1f1 1(1!1b1V1a1r11141)1 1{1
1 1b1V1a1r11141 1=1 1i1V1a1r181 1=1=1 1-111;1
1 1}1
1 1i1V1a1r111 1=1 1(1i1n1t1)1u1V1a1r161 1>1>1 101x11151;1
1 1i1f1 1(1!1b1V1a1r11141)1 1{1
1 1b1V1a1r11141 1=1 1i1V1a1r111 1=1=1 1-111;1
1 1}1
1 1i1f1 1(1b1V1a1r11141)1 1{1
1 1i1f1 1(1i1V1a1r181 1=1=1 1-111 1|1|1 1i1V1a1r111 1=1=1 1-111)1 1{1
1 1u1V1a1r191 1=1 1p1a1r1a1m1_141;1
1 1u1V1a1r161 1=1 1p1a1r1a1m1_131;1
1 1i1f1 1(1i1V1a1r181 1=1=1 1-111)1 1{1
1 1u1V1a1r191 1=1 1p1a1r1a1m1_121;1
1 1u1V1a1r161 1=1 1p1a1r1a1m1_111;1
1 1}1
1 1i1f1 1(1i1V1a1r181 1!1=1 1-111 1|1|1 1i1V1a1r111 1!1=1 1-111)1 1{1
1 1p1a1r1a1m1_131 1=1 1u1V1a1r161;1
1 1p1a1r1a1m1_141 1=1 1u1V1a1r191;1
1 1}1
1 1b1V1a1r11141 1=1 1(1u1V1a1r161 1|1 1u1V1a1r191 1<1<1 101x1c1)1 1=1=1 101;1
1 1i1f1 1(1b1V1a1r11141)1 1{1
1 1b1V1a1r11141 1=1 1(1p1a1r1a1m1_131 1|1 1p1a1r1a1m1_141 1<1<1 101x1c1)1 1=1=1 101;1
1 1}1
1 1i1f1 1(1b1V1a1r11141)1 1{1
1 1b1V1a1r11141 1=1 1u1V1a1r191 1=1=1 1p1a1r1a1m1_141;1
1 1}1
1 1i1f1 1(1!1b1V1a1r11141)1 1{1
1 1u1V1a1r191 1=1 1u1V1a1r191 1|1 101x18101010101;1
1 1}1
1 1r1e1t1u1r1n1 1C1O1N1C1A1T14141(1u1V1a1r191,1u1V1a1r161)1;1
1 1}1
1 1i1f1 1(1u1V1a1r191 1!1=1 1u1V1a1r161 1|1|1 1p1a1r1a1m1_111 1!1=1 1p1a1r1a1m1_131)1 1{1
1 1i1f1 1(1(1u1V1a1r191 1|1 1p1a1r1a1m1_111)1 1=1=1 101)1 1{1
1 1p1a1r1a1m1_111 1=1 1p1a1r1a1m1_131;1
1 1p1a1r1a1m1_121 1=1 1p1a1r1a1m1_141;1
1 1}1
1 1r1e1t1u1r1n1 1C1O1N1C1A1T14141(1p1a1r1a1m1_121,1p1a1r1a1m1_111)1;1
1 1}1
1 1i1f1 1(1p1a1r1a1m1_121 1!1=1 1p1a1r1a1m1_141)1 1{1
1 1r1e1t1u1r1n1 101;1
1 1}1
1 1i1f1 1(1u1V1a1r191 1>1>1 101x11151 1=1=1 101)1 1{1
1 1b1V1a1r131 1=1 1(1b1y1t1e1)1(1p1a1r1a1m1_111 1>1>1 101x111f1)1;1
1 1u1V1a1r191 1=1 1p1a1r1a1m1_121 1*1 121 1+1 1(1u1i1n1t1)1b1V1a1r131;1
1 1i1f1 1(1C1A1R1R1Y141(1p1a1r1a1m1_121,1p1a1r1a1m1_121)1 1|1|1 1C1A1R1R1Y141(1p1a1r1a1m1_121 1*1 121,1(1u1i1n1t1)1b1V1a1r131)1)1 1{1
1 1u1V1a1r191 1=1 1u1V1a1r191 1|1 101x18101010101010101;1
1 1}1
1 1r1e1t1u1r1n1 1C1O1N1C1A1T14141(1u1V1a1r191,1p1a1r1a1m1_111 1<1<1 111)1;1
1 1}1
1 1i1f1 1(1u1V1a1r191 1<1 101x1f1f1c10101010101)1 1{1
1 1r1e1t1u1r1n1 1C1O1N1C1A1T14141(1p1a1r1a1m1_121 1+1 101x1110101010101,1p1a1r1a1m1_111)1;1
1 1}1
1 1p1a1r1a1m1_121 1=1 1p1a1r1a1m1_121 1&1 101x18101010101010101;1
1L1A1B1_10101011111a1a181:1
1 1r1e1t1u1r1n1 1(1u1l1o1n1g1l1o1n1g1)1(1p1a1r1a1m1_121 1|1 101x171f1f10101010101)1 1<1<1 101x12101;1
1 1}1
1 1u1V1a1r191 1=1 1u1V1a1r191 1>1>1 101x11151;1
1 1u1V1a1r161 1=1 1u1V1a1r161 1>1>1 101x11151;1
1 1u1V1a1r11111 1=1 1u1V1a1r161 1-1 1u1V1a1r191;1
1 1b1V1a1r11141 1=1 1u1V1a1r11111 1!1=1 101;1
1 1i1f1 1(1u1V1a1r161 1<1 1u1V1a1r191)1 1{1
1 1u1V1a1r11111 1=1 1-1u1V1a1r11111;1
1 1}1
1 1u1V1a1r11101 1=1 1p1a1r1a1m1_111;1
1 1u1V1a1r171 1=1 1p1a1r1a1m1_121;1
1 1i1f1 1(1b1V1a1r11141 1&1&1 1u1V1a1r191 1<1=1 1u1V1a1r161)1 1{1
1 1u1V1a1r191 1=1 1u1V1a1r191 1+1 1u1V1a1r11111;1
1 1u1V1a1r11101 1=1 1p1a1r1a1m1_131;1
1 1u1V1a1r171 1=1 1p1a1r1a1m1_141;1
1 1p1a1r1a1m1_131 1=1 1p1a1r1a1m1_111;1
1 1p1a1r1a1m1_141 1=1 1p1a1r1a1m1_121;1
1 1}1
1 1i1f1 1(101x13161 1<1 1u1V1a1r11111)1 1{1
1 1r1e1t1u1r1n1 1C1O1N1C1A1T14141(1u1V1a1r171,1u1V1a1r11101)1;1
1 1}1
1 1u1V1a1r161 1=1 1u1V1a1r171 1&1 101x1f1f1f1f1f1 1|1 101x1110101010101;1
1 1i1f1 1(1(1u1V1a1r171 1&1 101x18101010101010101)1 1!1=1 101)1 1{1
1 1b1V1a1r11141 1=1 1u1V1a1r11101 1!1=1 101;1
1 1u1V1a1r11101 1=1 1-1u1V1a1r11101;1
1 1u1V1a1r161 1=1 1-1(1u1V1a1r161 1+1 1b1V1a1r11141)1;1
1 1}1
1 1u1V1a1r171 1=1 1p1a1r1a1m1_141 1&1 101x1f1f1f1f1f1 1|1 101x1110101010101;1
1 1i1f1 1(1(1p1a1r1a1m1_141 1&1 101x18101010101010101)1 1!1=1 101)1 1{1
1 1b1V1a1r11141 1=1 1p1a1r1a1m1_131 1!1=1 101;1
1 1p1a1r1a1m1_131 1=1 1-1p1a1r1a1m1_131;1
1 1u1V1a1r171 1=1 1-1(1u1V1a1r171 1+1 1b1V1a1r11141)1;1
1 1}1
1 1i1f1 1(1u1V1a1r191 1=1=1 1u1V1a1r11111)1 1{1
1 1u1V1a1r171 1=1 1u1V1a1r171 1^1 101x1110101010101;1
1 1i1f1 1(1u1V1a1r191 1=1=1 101)1 1{1
1 1u1V1a1r161 1=1 1u1V1a1r161 1^1 101x1110101010101;1
1 1u1V1a1r191 1=1 111;1
1 1}1
1 1e1l1s1e1 1{1
1 1u1V1a1r11111 1=1 1u1V1a1r11111 1-1 111;1
1 1}1
1 1}1
1 1u1V1a1r11131 1=1 1-1u1V1a1r11111 1+1 101x12101;1
1 1i1f1 1(1(1i1n1t1)1u1V1a1r11111 1<1 101x12111)1 1{1
1 1u1V1a1r11121 1=1 1p1a1r1a1m1_131 1<1<1 1(1u1V1a1r11131 1&1 101x1f1f1)1;1
1 1p1a1r1a1m1_131 1=1 1p1a1r1a1m1_131 1>1>1 1(1u1V1a1r11111 1&1 101x1f1f1)1;1
1 1u1V1a1r151 1=1 1u1V1a1r11101 1+1 1p1a1r1a1m1_131;1
1 1u1V1a1r121 1=1 1u1V1a1r171 1<1<1 1(1u1V1a1r11131 1&1 101x1f1f1)1;1
1 1u1V1a1r11131 1=1 1u1V1a1r151 1+1 1u1V1a1r121;1
1 1u1V1a1r161 1=1 1u1V1a1r161 1+1 1C1A1R1R1Y141(1u1V1a1r11101,1p1a1r1a1m1_131)1 1+1 1(1(1i1n1t1)1u1V1a1r171 1>1>1 1(1u1V1a1r11111 1&1 101x1f1f1)1)1 1+1
1 1(1u1i1n1t1)1C1A1R1R1Y141(1u1V1a1r151,1u1V1a1r121)1;1
1 1}1
1 1e1l1s1e1 1{1
1 1u1V1a1r11121 1=1 1u1V1a1r171 1<1<1 1(1-1u1V1a1r11111 1+1 101x14101 1&1 101x1f1f1)1;1
1 1i1f1 1(1p1a1r1a1m1_131 1!1=1 101)1 1{1
1 1u1V1a1r11121 1=1 1u1V1a1r11121 1|1 121;1
1 1}1
1 1u1V1a1r11111 1=1 1(1i1n1t1)1u1V1a1r171 1>1>1 1(1u1V1a1r11111 1-1 101x12101 1&1 101x1f1f1)1;1
1 1u1V1a1r11131 1=1 1u1V1a1r11101 1+1 1u1V1a1r11111;1
1 1u1V1a1r161 1=1 1u1V1a1r161 1+1 1(1(1i1n1t1)1u1V1a1r171 1>1>1 101x111f1)1 1+1 1(1u1i1n1t1)1C1A1R1R1Y141(1u1V1a1r11101,1u1V1a1r11111)1;1
1 1}1
1 1p1a1r1a1m1_121 1=1 1u1V1a1r161 1&1 101x18101010101010101;1
1 1u1V1a1r11111 1=1 1u1V1a1r161;1
1 1i1f1 1(1(1i1n1t1)1u1V1a1r161 1<1 101)1 1{1
1 1b1V1a1r11141 1=1 1u1V1a1r11121 1=1=1 101;1
1 1u1V1a1r11121 1=1 1-1u1V1a1r11121;1
1 1u1V1a1r11111 1=1 1-1u1V1a1r11131;1
1 1u1V1a1r11131 1=1 1-1(1u1V1a1r11131 1+1 1!1b1V1a1r11141)1;1
1 1u1V1a1r11111 1=1 1-1(1u1V1a1r161 1+1 1(1b1V1a1r11141 1<1=1 1u1V1a1r11111)1)1;1
1 1}1
1 1i1f1 1(101x1f1f1f1f1f1 1<1 1u1V1a1r11111)1 1{1
1 1u1V1a1r11101 1=1 1u1V1a1r191 1-1 111;1
1 1i1f1 1(101x111f1f1f1f1f1 1<1 1u1V1a1r11111)1 1{1
1 1b1V1a1r131 1=1 1(1b1y1t1e1)1u1V1a1r11111;1
1 1u1V1a1r11111 1=1 1u1V1a1r11111 1>1>1 111;1
1 1b1V1a1r141 1=1 1(1b1y1t1e1)1u1V1a1r11131;1
1 1u1V1a1r11131 1=1 1(1u1i1n1t1)1(1b1V1a1r131 1&1 111)1 1<1<1 101x111f1 1|1 1u1V1a1r11131 1>1>1 111;1
1 1u1V1a1r11121 1=1 1(1u1i1n1t1)1(1b1V1a1r141 1&1 111)1 1<1<1 101x111f1 1|1 1u1V1a1r11121 1>1>1 111;1
1 1u1V1a1r11101 1=1 1u1V1a1r191;1
1 1i1f1 1(101x1f1f1b1f1f1f1f1f1 1<1 1u1V1a1r191 1*1 101x1210101010101)1 1g1o1t1o1 1L1A1B1_10101011111a1a181;1
1 1}1
1L1A1B1_10101011111915101:1
1 1b1V1a1r11141 1=1 101x171f1f1f1f1f1f1f1 1<1 1u1V1a1r11121;1
1 1i1f1 1(1u1V1a1r11121 1=1=1 101x18101010101010101)1 1{1
1 1b1V1a1r11141 1=1 1(1b1o1o1l1)1(1(1b1y1t1e1)1u1V1a1r11131 1&1 111)1;1
1 1}1
1 1r1e1t1u1r1n1 1C1O1N1C1A1T14141(1u1V1a1r11111 1+1 1u1V1a1r11101 1*1 101x1110101010101 1+1 1(1u1i1n1t1)1C1A1R1R1Y141(1u1V1a1r11131,1(1u1i1n1t1)1b1V1a1r11141)1 1|1 1p1a1r1a1m1_121,1
1 1u1V1a1r11131 1+1 1b1V1a1r11141)1;1
1 1}1
1 1b1V1a1r131 1=1 1(1b1y1t1e1)1(1u1V1a1r11121 1>1>1 101x111f1)1;1
1 1u1V1a1r11121 1=1 1u1V1a1r11121 1<1<1 111;1
1 1u1V1a1r11101 1=1 1u1V1a1r11131 1*1 121;1
1 1b1V1a1r11141 1=1 1C1A1R1R1Y141(1u1V1a1r11131,1u1V1a1r11131)1;1
1 1u1V1a1r11131 1=1 1u1V1a1r11131 1*1 121 1+1 1(1u1i1n1t1)1b1V1a1r131;1
1 1u1V1a1r11111 1=1 1u1V1a1r11111 1*1 121 1+1 1(1u1i1n1t1)1(1b1V1a1r11141 1|1|1 1C1A1R1R1Y141(1u1V1a1r11101,1(1u1i1n1t1)1b1V1a1r131)1)1;1
1 1u1V1a1r11101 1=1 1u1V1a1r191 1-1 121;1
1 1i1f1 1(1u1V1a1r191 1-1 111 1!1=1 101 1&1&1 101x1f1f1f1f1f1 1<1 1u1V1a1r11111)1 1g1o1t1o1 1L1A1B1_10101011111915101;1
1 1u1V1a1r191 1=1 1u1V1a1r11131;1
1 1u1V1a1r171 1=1 1u1V1a1r11111;1
1 1i1f1 1(1u1V1a1r11111 1=1=1 101)1 1{1
1 1u1V1a1r191 1=1 101;1
1 1u1V1a1r171 1=1 1u1V1a1r11131;1
1 1}1
1 1i1V1a1r181 1=1 1L1Z1C1O1U1N1T1(1u1V1a1r171)1;1
1 1i1f1 1(1u1V1a1r11111 1=1=1 101)1 1{1
1 1i1V1a1r181 1=1 1i1V1a1r181 1+1 101x12101;1
1 1}1
1 1u1V1a1r11131 1=1 1i1V1a1r181 1-1 101x1b1;1
1 1b1V1a1r11161 1=1 1S1B1O1R1R1O1W141(1u1V1a1r11131,101x12101)1;1
1 1u1V1a1r11111 1=1 1i1V1a1r181 1-1 101x121b1;1
1 1b1V1a1r11141 1=1 1(1i1n1t1)1u1V1a1r11111 1<1 101;1
1 1b1V1a1r11151 1=1 1u1V1a1r11111 1=1=1 101;1
1 1i1f1 1(1(1i1n1t1)1u1V1a1r11131 1<1 101x12101)1 1{1
1 1b1V1a1r11161 1=1 1S1C1A1R1R1Y141(1u1V1a1r11111,101x1c1)1;1
1 1i1V1a1r181 1=1 1i1V1a1r181 1+1 1-101x111f1;1
1 1b1V1a1r11141 1=1 1i1V1a1r181 1<1 101;1
1 1b1V1a1r11151 1=1 1i1V1a1r181 1=1=1 101;1
1 1u1V1a1r11111 1=1 1u1V1a1r11131;1
1 1i1f1 1(1!1b1V1a1r11151 1&1&1 1b1V1a1r11141 1=1=1 1b1V1a1r11161)1 1{1
1 1u1V1a1r191 1=1 1u1V1a1r171 1<1<1 1(1u1V1a1r11131 1&1 101x1f1f1)1;1
1 1u1V1a1r171 1=1 1u1V1a1r171 1>1>1 1(101x1c1U1 1-1 1i1V1a1r181 1&1 101x1f1f1)1;1
1 1g1o1t1o1 1L1A1B1_1010101111191d101;1
1 1}1
1 1}1
1 1i1f1 1(1b1V1a1r11151 1|1|1 1b1V1a1r11141 1!1=1 1b1V1a1r11161)1 1{1
1 1u1V1a1r11121 1=1 101x12101 1-1 1u1V1a1r11111;1
1 1}1
1 1u1V1a1r171 1=1 1u1V1a1r171 1<1<1 1(1u1V1a1r11111 1&1 101x1f1f1)1;1
1 1i1f1 1(1b1V1a1r11151 1|1|1 1b1V1a1r11141 1!1=1 1b1V1a1r11161)1 1{1
1 1u1V1a1r171 1=1 1u1V1a1r171 1|1 1u1V1a1r191 1>1>1 1(1u1V1a1r11121 1&1 101x1f1f1)1;1
1 1}1
1 1i1f1 1(1b1V1a1r11151 1|1|1 1b1V1a1r11141 1!1=1 1b1V1a1r11161)1 1{1
1 1u1V1a1r191 1=1 1u1V1a1r191 1<1<1 1(1u1V1a1r11111 1&1 101x1f1f1)1;1
1 1}1
1L1A1B1_1010101111191d101:1
1 1i1f1 1(1(1i1n1t1)1u1V1a1r11131 1<1=1 1(1i1n1t1)1u1V1a1r11101)1 1{1
1 1r1e1t1u1r1n1 1C1O1N1C1A1T14141(1u1V1a1r171 1+1 1(1u1V1a1r11101 1-1 1u1V1a1r11131)1 1*1 101x1110101010101 1|1 1p1a1r1a1m1_121,1u1V1a1r191)1;1
1 1}1
1 1u1V1a1r11111 1=1 1~1(1u1V1a1r11101 1-1 1u1V1a1r11131)1;1
1 1i1f1 1(1(1i1n1t1)1u1V1a1r11111 1<1 101x111f1)1 1{1
1 1i1V1a1r181 1=1 1u1V1a1r11111 1-1 101x11131;1
1 1i1f1 1(1i1V1a1r181 1!1=1 101 1&1&1 1i1V1a1r181 1<1 101 1=1=1 1S1C1A1R1R1Y141(1u1V1a1r11111 1-1 101x111f1,101x1c1)1)1 1{1
1 1r1e1t1u1r1n1 1C1O1N1C1A1T14141(1u1V1a1r161,1u1V1a1r191 1>1>1 1(101x12101 1-1 1(101x1c1U1 1-1 1i1V1a1r181)1 1&1 101x1f1f1)1 1|1 1u1V1a1r171 1<1<1 1(101x1c1U1 1-1 1i1V1a1r181 1&1 101x1f1f1)1
1 1)1 1&1 101x18101010101010101f1f1f1f1f1f1f1f1;1
1 1}1
1 1u1V1a1r11111 1=1 1u1V1a1r11111 1+1 111;1
1 1r1e1t1u1r1n1 1C1O1N1C1A1T14141(1p1a1r1a1m1_121 1|1 1u1V1a1r171 1>1>1 1(1u1V1a1r11111 1&1 101x1f1f1)1,1
1 1u1V1a1r191 1>1>1 1(1u1V1a1r11111 1&1 101x1f1f1)1 1|1 1u1V1a1r171 1<1<1 1(101x12101 1-1 1u1V1a1r11111 1&1 101x1f1f1)1)1;1
1 1}1
1 1r1e1t1u1r1n1 1C1O1N1C1A1T14141(1u1V1a1r161,1u1V1a1r171 1>1>1 1(1u1V1a1r11111 1-1 101x111f1 1&1 101x1f1f1)1)1 1&1 101x18101010101010101f1f1f1f1f1f1f1f1;1
1}1
1
1/1/1 1F1u1n1c1t1i1o1n1:1 1_1_1a1e1a1b1i1_1u1i121d1 1@1 101x11111a1e141
1u1l1o1n1g1l1o1n1g1 1_1_1a1e1a1b1i1_1u1i121d1(1u1i1n1t1 1p1a1r1a1m1_111)1
1{1
1 1u1i1n1t1 1u1V1a1r111;1
1 1u1i1n1t1 1u1V1a1r121;1
1 1i1n1t1 1i1V1a1r131;1
1 1u1i1n1t1 1u1V1a1r141;1
1 1u1i1n1t1 1i1n1_1r11121;1
1 1b1o1o1l1 1b1V1a1r151;1
1 1b1o1o1l1 1b1V1a1r161;1
1 1b1o1o1l1 1b1V1a1r171;1
1 1i1f1 1(1p1a1r1a1m1_111 1=1=1 101)1 1{1
1 1r1e1t1u1r1n1 101;1
1 1}1
1 1u1V1a1r111 1=1 101;1
1 1i1V1a1r131 1=1 1L1Z1C1O1U1N1T1(1p1a1r1a1m1_111)1;1
1 1u1V1a1r141 1=1 1i1V1a1r131 1+1 101x11151;1
1 1b1V1a1r171 1=1 1S1B1O1R1R1O1W141(1u1V1a1r141,101x12101)1;1
1 1u1V1a1r121 1=1 1i1V1a1r131 1-1 101x1b1;1
1 1b1V1a1r151 1=1 1(1i1n1t1)1u1V1a1r121 1<1 101;1
1 1b1V1a1r161 1=1 1u1V1a1r121 1=1=1 101;1
1 1i1f1 1(1u1V1a1r141 1<1 101x12101)1 1{1
1 1b1V1a1r171 1=1 1S1C1A1R1R1Y141(1u1V1a1r121,101x1c1)1;1
1 1b1V1a1r151 1=1 1f1a1l1s1e1;1
1 1b1V1a1r161 1=1 1i1V1a1r131 1+1 111 1=1=1 101;1
1 1u1V1a1r121 1=1 1u1V1a1r141;1
1 1i1f1 1(1!1b1V1a1r161 1&1&1 1b1V1a1r171 1=1=1 1f1a1l1s1e1)1 1{1
1 1u1V1a1r111 1=1 1p1a1r1a1m1_111 1<1<1 1u1V1a1r141;1
1 1p1a1r1a1m1_111 1=1 1p1a1r1a1m1_111 1>1>1 1(101x1c1U1 1-1 1(1i1V1a1r131 1+1 111)1 1&1 101x1f1f1)1;1
1 1g1o1t1o1 1L1A1B1_1010101111191d101;1
1 1}1
1 1}1
1 1i1f1 1(1b1V1a1r161 1|1|1 1b1V1a1r151 1!1=1 1b1V1a1r171)1 1{1
1 1i1n1_1r11121 1=1 101x12101 1-1 1u1V1a1r121;1
1 1}1
1 1p1a1r1a1m1_111 1=1 1p1a1r1a1m1_111 1<1<1 1(1u1V1a1r121 1&1 101x1f1f1)1;1
1 1i1f1 1(1b1V1a1r161 1|1|1 1b1V1a1r151 1!1=1 1b1V1a1r171)1 1{1
1 1p1a1r1a1m1_111 1=1 1p1a1r1a1m1_111 1|1 101U1 1>1>1 1(1i1n1_1r11121 1&1 101x1f1f1)1;1
1 1}1
1 1i1f1 1(1b1V1a1r161 1|1|1 1b1V1a1r151 1!1=1 1b1V1a1r171)1 1{1
1 1u1V1a1r111 1=1 101 1<1<1 1(1u1V1a1r121 1&1 101x1f1f1)1;1
1 1}1
1L1A1B1_1010101111191d101:1
1 1i1f1 1(1u1V1a1r141 1<1 101x1413131)1 1{1
1 1r1e1t1u1r1n1 1C1O1N1C1A1T14141(1p1a1r1a1m1_111 1+1 1(101x1413121 1-1 1u1V1a1r141)1 1*1 101x1110101010101,1u1V1a1r111)1;1
1 1}1
1 1u1V1a1r121 1=1 1~1(101x1413121 1-1 1u1V1a1r141)1;1
1 1i1f1 1(101x111e1 1<1 1(1i1n1t1)1u1V1a1r121)1 1{1
1 1r1e1t1u1r1n1 1(1u1l1o1n1g1l1o1n1g1)1(1p1a1r1a1m1_111 1>1>1 1(1u1V1a1r121 1-1 101x111f1 1&1 101x1f1f1)1)1;1
1 1}1
1 1i1V1a1r131 1=1 1u1V1a1r121 1-1 101x11131;1
1 1i1f1 1(1i1V1a1r131 1=1=1 101 1|1|1 1i1V1a1r131 1<1 101 1!1=1 1S1C1A1R1R1Y141(1u1V1a1r121 1-1 101x111f1,101x1c1)1)1 1{1
1 1u1V1a1r121 1=1 1u1V1a1r121 1+1 111;1
1 1r1e1t1u1r1n1 1C1O1N1C1A1T14141(1p1a1r1a1m1_111 1>1>1 1(1u1V1a1r121 1&1 101x1f1f1)1,1
1 1u1V1a1r111 1>1>1 1(1u1V1a1r121 1&1 101x1f1f1)1 1|1 1p1a1r1a1m1_111 1<1<1 1(101x12101 1-1 1u1V1a1r121 1&1 101x1f1f1)1)1;1
1 1}1
1 1r1e1t1u1r1n1 1(1u1l1o1n1g1l1o1n1g1)1(1u1V1a1r111 1>1>1 1(101x12101 1-1 1(101x1c1U1 1-1 1i1V1a1r131)1 1&1 101x1f1f1)1 1|1 1p1a1r1a1m1_111 1<1<1 1(101x1c1U1 1-1 1i1V1a1r131 1&1 101x1f1f1)1)1;1
1}1
1
1/1/1 1F1u1n1c1t1i1o1n1:1 1_1_1f1l1o1a1t1s1i1d1f1 1@1 101x11111b10181
1u1l1o1n1g1l1o1n1g1 1_1_1f1l1o1a1t1s1i1d1f1(1u1i1n1t1 1p1a1r1a1m1_111)1
1{1
1 1u1i1n1t1 1u1V1a1r111;1
1 1u1i1n1t1 1u1V1a1r121;1
1 1u1i1n1t1 1u1V1a1r131;1
1 1i1n1t1 1i1V1a1r141;1
1 1u1i1n1t1 1u1V1a1r151;1
1 1u1i1n1t1 1u1V1a1r161;1
1 1u1i1n1t1 1i1n1_1r11121;1
1 1b1o1o1l1 1b1V1a1r171;1
1 1b1o1o1l1 1b1V1a1r181;1
1 1b1o1o1l1 1b1V1a1r191;1
1 1i1f1 1(1p1a1r1a1m1_111 1=1=1 101)1 1{1
1 1r1e1t1u1r1n1 101;1
1 1}1
1 1u1V1a1r161 1=1 1p1a1r1a1m1_111 1&1 101x18101010101010101;1
1 1u1V1a1r121 1=1 1p1a1r1a1m1_111;1
1 1i1f1 1(1(1i1n1t1)1u1V1a1r161 1<1 101)1 1{1
1 1u1V1a1r121 1=1 1-1p1a1r1a1m1_111;1
1 1}1
1 1u1V1a1r111 1=1 101;1
1 1i1V1a1r141 1=1 1L1Z1C1O1U1N1T1(1u1V1a1r121)1;1
1 1u1V1a1r151 1=1 1i1V1a1r141 1+1 101x11151;1
1 1b1V1a1r191 1=1 1S1B1O1R1R1O1W141(1u1V1a1r151,101x12101)1;1
1 1u1V1a1r131 1=1 1i1V1a1r141 1-1 101x1b1;1
1 1b1V1a1r171 1=1 1(1i1n1t1)1u1V1a1r131 1<1 101;1
1 1b1V1a1r181 1=1 1u1V1a1r131 1=1=1 101;1
1 1i1f1 1(1u1V1a1r151 1<1 101x12101)1 1{1
1 1b1V1a1r191 1=1 1S1C1A1R1R1Y141(1u1V1a1r131,101x1c1)1;1
1 1b1V1a1r171 1=1 1f1a1l1s1e1;1
1 1b1V1a1r181 1=1 1i1V1a1r141 1+1 111 1=1=1 101;1
1 1u1V1a1r131 1=1 1u1V1a1r151;1
1 1i1f1 1(1!1b1V1a1r181 1&1&1 1b1V1a1r191 1=1=1 1f1a1l1s1e1)1 1{1
1 1u1V1a1r111 1=1 1u1V1a1r121 1<1<1 1u1V1a1r151;1
1 1u1V1a1r121 1=1 1u1V1a1r121 1>1>1 1(101x1c1U1 1-1 1(1i1V1a1r141 1+1 111)1 1&1 101x1f1f1)1;1
1 1g1o1t1o1 1L1A1B1_1010101111191d101;1
1 1}1
1 1}1
1 1i1f1 1(1b1V1a1r181 1|1|1 1b1V1a1r171 1!1=1 1b1V1a1r191)1 1{1
1 1i1n1_1r11121 1=1 101x12101 1-1 1u1V1a1r131;1
1 1}1
1 1u1V1a1r121 1=1 1u1V1a1r121 1<1<1 1(1u1V1a1r131 1&1 101x1f1f1)1;1
1 1i1f1 1(1b1V1a1r181 1|1|1 1b1V1a1r171 1!1=1 1b1V1a1r191)1 1{1
1 1u1V1a1r121 1=1 1u1V1a1r121 1|1 101U1 1>1>1 1(1i1n1_1r11121 1&1 101x1f1f1)1;1
1 1}1
1 1i1f1 1(1b1V1a1r181 1|1|1 1b1V1a1r171 1!1=1 1b1V1a1r191)1 1{1
1 1u1V1a1r111 1=1 101 1<1<1 1(1u1V1a1r131 1&1 101x1f1f1)1;1
1 1}1
1L1A1B1_1010101111191d101:1
1 1i1f1 1(1u1V1a1r151 1<1 101x1413131)1 1{1
1 1r1e1t1u1r1n1 1C1O1N1C1A1T14141(1u1V1a1r121 1+1 1(101x1413121 1-1 1u1V1a1r151)1 1*1 101x1110101010101 1|1 1u1V1a1r161,1u1V1a1r111)1;1
1 1}1
1 1u1V1a1r131 1=1 1~1(101x1413121 1-1 1u1V1a1r151)1;1
1 1i1f1 1(101x111e1 1<1 1(1i1n1t1)1u1V1a1r131)1 1{1
1 1r1e1t1u1r1n1 1C1O1N1C1A1T14141(1p1a1r1a1m1_111,1u1V1a1r121 1>1>1 1(1u1V1a1r131 1-1 101x111f1 1&1 101x1f1f1)1)1 1&1 101x18101010101010101f1f1f1f1f1f1f1f1;1
1 1}1
1 1i1V1a1r141 1=1 1u1V1a1r131 1-1 101x11131;1
1 1i1f1 1(1i1V1a1r141 1=1=1 101 1|1|1 1i1V1a1r141 1<1 101 1!1=1 1S1C1A1R1R1Y141(1u1V1a1r131 1-1 101x111f1,101x1c1)1)1 1{1
1 1u1V1a1r131 1=1 1u1V1a1r131 1+1 111;1
1 1r1e1t1u1r1n1 1C1O1N1C1A1T14141(1u1V1a1r161 1|1 1u1V1a1r121 1>1>1 1(1u1V1a1r131 1&1 101x1f1f1)1,1
1 1u1V1a1r111 1>1>1 1(1u1V1a1r131 1&1 101x1f1f1)1 1|1 1u1V1a1r121 1<1<1 1(101x12101 1-1 1u1V1a1r131 1&1 101x1f1f1)1)1;1
1 1}1
1 1r1e1t1u1r1n1 1C1O1N1C1A1T14141(1p1a1r1a1m1_111,1u1V1a1r111 1>1>1 1(101x12101 1-1 1(101x1c1U1 1-1 1i1V1a1r141)1 1&1 101x1f1f1)1 1|1 1u1V1a1r121 1<1<1 1(101x1c1U1 1-1 1i1V1a1r141 1&1 101x1f1f1)1)1
1 1&1 101x18101010101010101f1f1f1f1f1f1f1f1;1
1}1
1
1/1/1 1F1u1n1c1t1i1o1n1:1 1_1_1e1x1t1e1n1d1s1f1d1f121 1@1 101x11111b13101
1u1l1o1n1g1l1o1n1g1 1_1_1e1x1t1e1n1d1s1f1d1f121(1u1i1n1t1 1p1a1r1a1m1_111,1u1n1s1i1g1n1e1d1 1i1n1t1 1p1a1r1a1m1_121,1u1n1s1i1g1n1e1d1 1i1n1t1 1p1a1r1a1m1_131,1u1i1n1t1 1p1a1r1a1m1_141)1
1{1
1 1u1i1n1t1 1u1V1a1r111;1
1 1u1i1n1t1 1u1V1a1r121;1
1 1u1i1n1t1 1u1V1a1r131;1
1 1u1i1n1t1 1u1V1a1r141;1
1 1u1i1n1t1 1u1V1a1r151;1
1 1i1n1t1 1i1V1a1r161;1
1 1u1i1n1t1 1u1V1a1r171;1
1 1u1i1n1t1 1i1n1_1r11121;1
1 1b1o1o1l1 1b1V1a1r181;1
1 1b1o1o1l1 1b1V1a1r191;1
1 1b1o1o1l1 1b1V1a1r11101;1
1 1u1V1a1r131 1=1 1p1a1r1a1m1_111 1<1<1 111;1
1 1b1V1a1r191 1=1 1u1V1a1r131 1=1=1 101;1
1 1u1V1a1r111 1=1 1p1a1r1a1m1_111 1&1 101x18101010101010101;1
1 1u1V1a1r151 1=1 1(1u1i1n1t1)1(1(1i1n1t1)1u1V1a1r131 1>1>1 131)1 1>1>1 111;1
1 1u1V1a1r121 1=1 1u1V1a1r111 1|1 1u1V1a1r151;1
1 1p1a1r1a1m1_111 1=1 1p1a1r1a1m1_111 1<1<1 101x111d1;1
1 1i1f1 1(1!1b1V1a1r191)1 1{1
1 1p1a1r1a1m1_141 1=1 1u1V1a1r131 1&1 101x1f1f1010101010101;1
1 1b1V1a1r191 1=1 1p1a1r1a1m1_141 1=1=1 101;1
1 1}1
1 1i1f1 1(1!1b1V1a1r191)1 1{1
1 1b1V1a1r191 1=1 1p1a1r1a1m1_141 1=1=1 101x1f1f1010101010101;1
1 1}1
1 1i1f1 1(1!1b1V1a1r191)1 1{1
1 1r1e1t1u1r1n1 1C1O1N1C1A1T14141(1u1V1a1r121,1p1a1r1a1m1_111)1 1^1 101x131810101010101010101010101010101;1
1 1}1
1 1i1f1 1(1(1u1V1a1r131 1&1 101x1f1f1f1f1f1f1)1 1=1=1 101)1 1{1
1 1r1e1t1u1r1n1 1C1O1N1C1A1T14141(1u1V1a1r121,1p1a1r1a1m1_111)1;1
1 1}1
1 1i1f1 1(1p1a1r1a1m1_141 1=1=1 101x1f1f1010101010101)1 1{1
1 1r1e1t1u1r1n1 1C1O1N1C1A1T14141(1u1V1a1r121,1p1a1r1a1m1_111)1 1|1 101x181010101010101010101010101;1
1 1}1
1 1u1V1a1r131 1=1 1p1a1r1a1m1_111;1
1 1u1V1a1r141 1=1 1u1V1a1r151;1
1 1i1f1 1(1u1V1a1r151 1=1=1 101)1 1{1
1 1u1V1a1r131 1=1 101;1
1 1u1V1a1r141 1=1 1p1a1r1a1m1_111;1
1 1}1
1 1i1V1a1r161 1=1 1L1Z1C1O1U1N1T1(1u1V1a1r141)1;1
1 1i1f1 1(1u1V1a1r151 1=1=1 101)1 1{1
1 1i1V1a1r161 1=1 1i1V1a1r161 1+1 101x12101;1
1 1}1
1 1u1V1a1r171 1=1 1i1V1a1r161 1-1 101x1b1;1
1 1b1V1a1r11101 1=1 1S1B1O1R1R1O1W141(1u1V1a1r171,101x12101)1;1
1 1u1V1a1r151 1=1 1i1V1a1r161 1-1 101x121b1;1
1 1b1V1a1r191 1=1 1(1i1n1t1)1u1V1a1r151 1<1 101;1
1 1b1V1a1r181 1=1 1u1V1a1r151 1=1=1 101;1
1 1i1f1 1(1(1i1n1t1)1u1V1a1r171 1<1 101x12101)1 1{1
1 1b1V1a1r11101 1=1 1S1C1A1R1R1Y141(1u1V1a1r151,101x1c1)1;1
1 1i1V1a1r161 1=1 1i1V1a1r161 1+1 1-101x111f1;1
1 1b1V1a1r191 1=1 1i1V1a1r161 1<1 101;1
1 1b1V1a1r181 1=1 1i1V1a1r161 1=1=1 101;1
1 1u1V1a1r151 1=1 1u1V1a1r171;1
1 1i1f1 1(1!1b1V1a1r181 1&1&1 1b1V1a1r191 1=1=1 1b1V1a1r11101)1 1{1
1 1u1V1a1r131 1=1 1u1V1a1r141 1<1<1 1(1u1V1a1r171 1&1 101x1f1f1)1;1
1 1u1V1a1r141 1=1 1u1V1a1r141 1>1>1 1(101x1c1U1 1-1 1i1V1a1r161 1&1 101x1f1f1)1;1
1 1g1o1t1o1 1L1A1B1_1010101111191d101;1
1 1}1
1 1}1
1 1i1f1 1(1b1V1a1r181 1|1|1 1b1V1a1r191 1!1=1 1b1V1a1r11101)1 1{1
1 1i1n1_1r11121 1=1 101x12101 1-1 1u1V1a1r151;1
1 1}1
1 1u1V1a1r141 1=1 1u1V1a1r141 1<1<1 1(1u1V1a1r151 1&1 101x1f1f1)1;1
1 1i1f1 1(1b1V1a1r181 1|1|1 1b1V1a1r191 1!1=1 1b1V1a1r11101)1 1{1
1 1u1V1a1r141 1=1 1u1V1a1r141 1|1 1u1V1a1r131 1>1>1 1(1i1n1_1r11121 1&1 101x1f1f1)1;1
1 1}1
1 1i1f1 1(1b1V1a1r181 1|1|1 1b1V1a1r191 1!1=1 1b1V1a1r11101)1 1{1
1 1u1V1a1r131 1=1 1u1V1a1r131 1<1<1 1(1u1V1a1r151 1&1 101x1f1f1)1;1
1 1}1
1L1A1B1_1010101111191d101:1
1 1i1f1 1(1(1i1n1t1)1u1V1a1r171 1<1 101x1318111)1 1{1
1 1r1e1t1u1r1n1 1C1O1N1C1A1T14141(1u1V1a1r141 1+1 1(101x1318101 1-1 1u1V1a1r171)1 1*1 101x1110101010101 1|1 1u1V1a1r111,1u1V1a1r131)1;1
1 1}1
1 1u1V1a1r151 1=1 1~1(101x1318101 1-1 1u1V1a1r171)1;1
1 1i1f1 1(101x111e1 1<1 1(1i1n1t1)1u1V1a1r151)1 1{1
1 1r1e1t1u1r1n1 1C1O1N1C1A1T14141(1u1V1a1r121,1u1V1a1r141 1>1>1 1(1u1V1a1r151 1-1 101x111f1 1&1 101x1f1f1)1)1 1&1 101x18101010101010101f1f1f1f1f1f1f1f1;1
1 1}1
1 1i1V1a1r161 1=1 1u1V1a1r151 1-1 101x11131;1
1 1i1f1 1(1i1V1a1r161 1=1=1 101 1|1|1 1i1V1a1r161 1<1 101 1!1=1 1S1C1A1R1R1Y141(1u1V1a1r151 1-1 101x111f1,101x1c1)1)1 1{1
1 1u1V1a1r151 1=1 1u1V1a1r151 1+1 111;1
1 1r1e1t1u1r1n1 1C1O1N1C1A1T14141(1u1V1a1r111 1|1 1u1V1a1r141 1>1>1 1(1u1V1a1r151 1&1 101x1f1f1)1,1
1 1u1V1a1r131 1>1>1 1(1u1V1a1r151 1&1 101x1f1f1)1 1|1 1u1V1a1r141 1<1<1 1(101x12101 1-1 1u1V1a1r151 1&1 101x1f1f1)1)1;1
1 1}1
1 1r1e1t1u1r1n1 1C1O1N1C1A1T14141(1u1V1a1r121,1u1V1a1r131 1>1>1 1(101x12101 1-1 1(101x1c1U1 1-1 1i1V1a1r161)1 1&1 101x1f1f1)1 1|1 1u1V1a1r141 1<1<1 1(101x1c1U1 1-1 1i1V1a1r161 1&1 101x1f1f1)1)1 1&1
1 101x18101010101010101f1f1f1f1f1f1f1f1;1
1}1
1
1/1/1 1F1u1n1c1t1i1o1n1:1 1_1_1f1l1o1a1t1u1n1d1i1d1f1 1@1 101x11111b17181
1u1l1o1n1g1l1o1n1g1 1_1_1f1l1o1a1t1u1n1d1i1d1f1(1u1i1n1t1 1p1a1r1a1m1_111,1u1i1n1t1 1p1a1r1a1m1_121)1
1{1
1 1b1y1t1e1 1b1V1a1r111;1
1 1b1y1t1e1 1b1V1a1r121;1
1 1u1i1n1t1 1u1V1a1r131;1
1 1u1i1n1t1 1u1V1a1r141;1
1 1u1i1n1t1 1u1V1a1r151;1
1 1i1n1t1 1i1V1a1r161;1
1 1u1i1n1t1 1u1V1a1r171;1
1 1u1i1n1t1 1u1V1a1r181;1
1 1i1n1t1 1i1V1a1r191;1
1 1b1o1o1l1 1b1V1a1r11101;1
1 1b1o1o1l1 1b1V1a1r11111;1
1 1b1o1o1l1 1b1V1a1r11121;1
1 1i1f1 1(1(1p1a1r1a1m1_111 1|1 1p1a1r1a1m1_121)1 1=1=1 101)1 1{1
1 1r1e1t1u1r1n1 1C1O1N1C1A1T14141(1p1a1r1a1m1_121,1p1a1r1a1m1_111)1;1
1 1}1
1 1i1V1a1r191 1=1 101x1413121;1
1 1u1V1a1r181 1=1 1p1a1r1a1m1_121 1>1>1 101x11161;1
1 1i1f1 1(1u1V1a1r181 1!1=1 101)1 1{1
1 1i1V1a1r191 1=1 131;1
1 1i1f1 1(1p1a1r1a1m1_121 1>1>1 101x11191 1!1=1 101)1 1{1
1 1i1V1a1r191 1=1 161;1
1 1}1
1 1i1f1 1(1p1a1r1a1m1_121 1>1>1 101x111c1 1!1=1 101)1 1{1
1 1i1V1a1r191 1=1 1i1V1a1r191 1+1 131;1
1 1}1
1 1i1V1a1r191 1=1 1i1V1a1r191 1-1 1(1(1i1n1t1)1p1a1r1a1m1_121 1>1>1 101x111f1)1;1
1 1u1V1a1r181 1=1 1p1a1r1a1m1_111 1<1<1 1(101x12101U1 1-1 1i1V1a1r191 1&1 101x1f1f1)1;1
1 1p1a1r1a1m1_111 1=1 1p1a1r1a1m1_111 1>1>1 1i1V1a1r191 1|1 1p1a1r1a1m1_121 1<1<1 1(101x12101U1 1-1 1i1V1a1r191 1&1 101x1f1f1)1;1
1 1p1a1r1a1m1_121 1=1 1p1a1r1a1m1_121 1>1>1 1i1V1a1r191;1
1 1i1V1a1r191 1=1 1i1V1a1r191 1+1 101x1413121;1
1 1}1
1 1i1f1 1(101x1f1f1f1f1f1 1<1 1p1a1r1a1m1_121)1 1{1
1 1i1f1 1(101x111f1f1f1f1f1 1<1 1p1a1r1a1m1_121)1 1{1
1 1b1V1a1r111 1=1 1(1b1y1t1e1)1p1a1r1a1m1_121;1
1 1p1a1r1a1m1_121 1=1 1p1a1r1a1m1_121 1>1>1 111;1
1 1b1V1a1r121 1=1 1(1b1y1t1e1)1p1a1r1a1m1_111;1
1 1p1a1r1a1m1_111 1=1 1(1u1i1n1t1)1(1b1V1a1r111 1&1 111)1 1<1<1 101x111f1 1|1 1p1a1r1a1m1_111 1>1>1 111;1
1 1u1V1a1r181 1=1 1(1u1i1n1t1)1(1b1V1a1r121 1&1 111)1 1<1<1 101x111f1 1|1 1u1V1a1r181 1>1>1 111;1
1 1i1V1a1r191 1=1 1i1V1a1r191 1+1 111;1
1 1i1f1 1(101x1f1f1b1f1f1f1f1f1 1<1 1(1u1i1n1t1)1(1i1V1a1r191 1*1 101x1210101010101)1)1 1{1
1 1r1e1t1u1r1n1 101x171f1f101010101010101010101010101;1
1 1}1
1 1}1
1L1A1B1_10101011111915101:1
1 1b1V1a1r11111 1=1 101x171f1f1f1f1f1f1f1 1<1 1u1V1a1r181;1
1 1i1f1 1(1u1V1a1r181 1=1=1 101x18101010101010101)1 1{1
1 1b1V1a1r11111 1=1 1(1b1o1o1l1)1(1(1b1y1t1e1)1p1a1r1a1m1_111 1&1 111)1;1
1 1}1
1 1r1e1t1u1r1n1 1C1O1N1C1A1T14141(1p1a1r1a1m1_121 1+1 1i1V1a1r191 1*1 101x1110101010101 1+1 1(1u1i1n1t1)1C1A1R1R1Y141(1p1a1r1a1m1_111,1(1u1i1n1t1)1b1V1a1r11111)1,1p1a1r1a1m1_111 1+1 1b1V1a1r11111
1 1)1;1
1 1}1
1 1b1V1a1r111 1=1 1(1b1y1t1e1)1(1u1V1a1r181 1>1>1 101x111f1)1;1
1 1u1V1a1r181 1=1 1u1V1a1r181 1<1<1 111;1
1 1u1V1a1r131 1=1 1p1a1r1a1m1_111 1*1 121;1
1 1b1V1a1r11111 1=1 1C1A1R1R1Y141(1p1a1r1a1m1_111,1p1a1r1a1m1_111)1;1
1 1p1a1r1a1m1_111 1=1 1p1a1r1a1m1_111 1*1 121 1+1 1(1u1i1n1t1)1b1V1a1r111;1
1 1p1a1r1a1m1_121 1=1 1p1a1r1a1m1_121 1*1 121 1+1 1(1u1i1n1t1)1(1b1V1a1r11111 1|1|1 1C1A1R1R1Y141(1u1V1a1r131,1(1u1i1n1t1)1b1V1a1r111)1)1;1
1 1b1V1a1r11111 1=1 1i1V1a1r191 1!1=1 101;1
1 1i1V1a1r191 1=1 1i1V1a1r191 1+1 1-111;1
1 1i1f1 1(1b1V1a1r11111 1&1&1 101x1f1f1f1f1f1 1<1 1p1a1r1a1m1_121)1 1g1o1t1o1 1L1A1B1_10101011111915101;1
1 1u1V1a1r131 1=1 1p1a1r1a1m1_111;1
1 1u1V1a1r141 1=1 1p1a1r1a1m1_121;1
1 1i1f1 1(1p1a1r1a1m1_121 1=1=1 101)1 1{1
1 1u1V1a1r131 1=1 101;1
1 1u1V1a1r141 1=1 1p1a1r1a1m1_111;1
1 1}1
1 1i1V1a1r161 1=1 1L1Z1C1O1U1N1T1(1u1V1a1r141)1;1
1 1i1f1 1(1p1a1r1a1m1_121 1=1=1 101)1 1{1
1 1i1V1a1r161 1=1 1i1V1a1r161 1+1 101x12101;1
1 1}1
1 1u1V1a1r171 1=1 1i1V1a1r161 1-1 101x1b1;1
1 1b1V1a1r11121 1=1 1S1B1O1R1R1O1W141(1u1V1a1r171,101x12101)1;1
1 1u1V1a1r151 1=1 1i1V1a1r161 1-1 101x121b1;1
1 1b1V1a1r11111 1=1 1(1i1n1t1)1u1V1a1r151 1<1 101;1
1 1b1V1a1r11101 1=1 1u1V1a1r151 1=1=1 101;1
1 1i1f1 1(1(1i1n1t1)1u1V1a1r171 1<1 101x12101)1 1{1
1 1b1V1a1r11121 1=1 1S1C1A1R1R1Y141(1u1V1a1r151,101x1c1)1;1
1 1i1V1a1r161 1=1 1i1V1a1r161 1+1 1-101x111f1;1
1 1b1V1a1r11111 1=1 1i1V1a1r161 1<1 101;1
1 1b1V1a1r11101 1=1 1i1V1a1r161 1=1=1 101;1
1 1u1V1a1r151 1=1 1u1V1a1r171;1
1 1i1f1 1(1!1b1V1a1r11101 1&1&1 1b1V1a1r11111 1=1=1 1b1V1a1r11121)1 1{1
1 1u1V1a1r131 1=1 1u1V1a1r141 1<1<1 1(1u1V1a1r171 1&1 101x1f1f1)1;1
1 1u1V1a1r141 1=1 1u1V1a1r141 1>1>1 1(101x1c1U1 1-1 1i1V1a1r161 1&1 101x1f1f1)1;1
1 1g1o1t1o1 1L1A1B1_1010101111191d101;1
1 1}1
1 1}1
1 1i1f1 1(1b1V1a1r11101 1|1|1 1b1V1a1r11111 1!1=1 1b1V1a1r11121)1 1{1
1 1u1V1a1r181 1=1 101x12101 1-1 1u1V1a1r151;1
1 1}1
1 1u1V1a1r141 1=1 1u1V1a1r141 1<1<1 1(1u1V1a1r151 1&1 101x1f1f1)1;1
1 1i1f1 1(1b1V1a1r11101 1|1|1 1b1V1a1r11111 1!1=1 1b1V1a1r11121)1 1{1
1 1u1V1a1r141 1=1 1u1V1a1r141 1|1 1u1V1a1r131 1>1>1 1(1u1V1a1r181 1&1 101x1f1f1)1;1
1 1}1
1 1i1f1 1(1b1V1a1r11101 1|1|1 1b1V1a1r11111 1!1=1 1b1V1a1r11121)1 1{1
1 1u1V1a1r131 1=1 1u1V1a1r131 1<1<1 1(1u1V1a1r151 1&1 101x1f1f1)1;1
1 1}1
1L1A1B1_1010101111191d101:1
1 1i1f1 1(1(1i1n1t1)1u1V1a1r171 1<1=1 1i1V1a1r191)1 1{1
1 1r1e1t1u1r1n1 1C1O1N1C1A1T14141(1u1V1a1r141 1+1 1(1i1V1a1r191 1-1 1u1V1a1r171)1 1*1 101x1110101010101,1u1V1a1r131)1;1
1 1}1
1 1u1V1a1r181 1=1 1~1(1i1V1a1r191 1-1 1u1V1a1r171)1;1
1 1i1f1 1(1(1i1n1t1)1u1V1a1r181 1<1 101x111f1)1 1{1
1 1i1V1a1r191 1=1 1u1V1a1r181 1-1 101x11131;1
1 1i1f1 1(1i1V1a1r191 1!1=1 101 1&1&1 1i1V1a1r191 1<1 101 1=1=1 1S1C1A1R1R1Y141(1u1V1a1r181 1-1 101x111f1,101x1c1)1)1 1{1
1 1r1e1t1u1r1n1 1(1u1l1o1n1g1l1o1n1g1)1(1u1V1a1r131 1>1>1 1(101x12101 1-1 1(101x1c1U1 1-1 1i1V1a1r191)1 1&1 101x1f1f1)1 1|1 1u1V1a1r141 1<1<1 1(101x1c1U1 1-1 1i1V1a1r191 1&1 101x1f1f1)1)1;1
1 1}1
1 1u1V1a1r181 1=1 1u1V1a1r181 1+1 111;1
1 1r1e1t1u1r1n1 1C1O1N1C1A1T14141(1u1V1a1r141 1>1>1 1(1u1V1a1r181 1&1 101x1f1f1)1,1u1V1a1r131 1>1>1 1(1u1V1a1r181 1&1 101x1f1f1)1 1|1 1u1V1a1r141 1<1<1 1(101x12101 1-1 1u1V1a1r181 1&1 101x1f1f1)1
1 1)1;1
1 1}1
1 1r1e1t1u1r1n1 1(1u1l1o1n1g1l1o1n1g1)1(1u1V1a1r141 1>1>1 1(1u1V1a1r181 1-1 101x111f1 1&1 101x1f1f1)1)1;1
1}1
1
1/1/1 1F1u1n1c1t1i1o1n1:1 1_1_1a1e1a1b1i1_1l121d1 1@1 101x11111b181c1
1u1l1o1n1g1l1o1n1g1 1_1_1a1e1a1b1i1_1l121d1(1u1i1n1t1 1p1a1r1a1m1_111,1u1i1n1t1 1p1a1r1a1m1_121)1
1{1
1 1b1y1t1e1 1b1V1a1r111;1
1 1b1y1t1e1 1b1V1a1r121;1
1 1u1i1n1t1 1u1V1a1r131;1
1 1u1i1n1t1 1u1V1a1r141;1
1 1u1i1n1t1 1u1V1a1r151;1
1 1i1n1t1 1i1V1a1r161;1
1 1u1i1n1t1 1u1V1a1r171;1
1 1i1n1t1 1i1V1a1r181;1
1 1u1i1n1t1 1u1V1a1r191;1
1 1u1i1n1t1 1u1V1a1r11101;1
1 1b1o1o1l1 1b1V1a1r11111;1
1 1b1o1o1l1 1b1V1a1r11121;1
1 1b1o1o1l1 1b1V1a1r11131;1
1 1i1f1 1(1(1p1a1r1a1m1_111 1|1 1p1a1r1a1m1_121)1 1=1=1 101)1 1{1
1 1r1e1t1u1r1n1 1C1O1N1C1A1T14141(1p1a1r1a1m1_121,1p1a1r1a1m1_111)1;1
1 1}1
1 1u1V1a1r191 1=1 1p1a1r1a1m1_121 1&1 101x18101010101010101;1
1 1u1V1a1r141 1=1 1p1a1r1a1m1_121;1
1 1i1f1 1(1(1i1n1t1)1u1V1a1r191 1<1 101)1 1{1
1 1b1V1a1r11121 1=1 1p1a1r1a1m1_111 1!1=1 101;1
1 1p1a1r1a1m1_111 1=1 1-1p1a1r1a1m1_111;1
1 1u1V1a1r141 1=1 1-1(1p1a1r1a1m1_121 1+1 1b1V1a1r11121)1;1
1 1}1
1 1i1V1a1r181 1=1 101x1413121;1
1 1u1V1a1r11101 1=1 1u1V1a1r141 1>1>1 101x11161;1
1 1i1f1 1(1u1V1a1r11101 1!1=1 101)1 1{1
1 1i1V1a1r181 1=1 131;1
1 1i1f1 1(1u1V1a1r141 1>1>1 101x11191 1!1=1 101)1 1{1
1 1i1V1a1r181 1=1 161;1
1 1}1
1 1i1f1 1(1u1V1a1r141 1>1>1 101x111c1 1!1=1 101)1 1{1
1 1i1V1a1r181 1=1 1i1V1a1r181 1+1 131;1
1 1}1
1 1i1V1a1r181 1=1 1i1V1a1r181 1-1 1(1(1i1n1t1)1u1V1a1r141 1>1>1 101x111f1)1;1
1 1u1V1a1r11101 1=1 1p1a1r1a1m1_111 1<1<1 1(101x12101U1 1-1 1i1V1a1r181 1&1 101x1f1f1)1;1
1 1p1a1r1a1m1_111 1=1 1p1a1r1a1m1_111 1>1>1 1i1V1a1r181 1|1 1u1V1a1r141 1<1<1 1(101x12101U1 1-1 1i1V1a1r181 1&1 101x1f1f1)1;1
1 1u1V1a1r141 1=1 1u1V1a1r141 1>1>1 1i1V1a1r181;1
1 1i1V1a1r181 1=1 1i1V1a1r181 1+1 101x1413121;1
1 1}1
1 1i1f1 1(101x1f1f1f1f1f1 1<1 1u1V1a1r141)1 1{1
1 1i1f1 1(101x111f1f1f1f1f1 1<1 1u1V1a1r141)1 1{1
1 1b1V1a1r111 1=1 1(1b1y1t1e1)1u1V1a1r141;1
1 1u1V1a1r141 1=1 1u1V1a1r141 1>1>1 111;1
1 1b1V1a1r121 1=1 1(1b1y1t1e1)1p1a1r1a1m1_111;1
1 1p1a1r1a1m1_111 1=1 1(1u1i1n1t1)1(1b1V1a1r111 1&1 111)1 1<1<1 101x111f1 1|1 1p1a1r1a1m1_111 1>1>1 111;1
1 1u1V1a1r11101 1=1 1(1u1i1n1t1)1(1b1V1a1r121 1&1 111)1 1<1<1 101x111f1 1|1 1u1V1a1r11101 1>1>1 111;1
1 1i1V1a1r181 1=1 1i1V1a1r181 1+1 111;1
1 1i1f1 1(101x1f1f1b1f1f1f1f1f1 1<1 1(1u1i1n1t1)1(1i1V1a1r181 1*1 101x1210101010101)1)1 1{1
1 1r1e1t1u1r1n1 1(1u1l1o1n1g1l1o1n1g1)1(1u1V1a1r191 1|1 101x171f1f10101010101)1 1<1<1 101x12101;1
1 1}1
1 1}1
1L1A1B1_10101011111915101:1
1 1b1V1a1r11121 1=1 101x171f1f1f1f1f1f1f1 1<1 1u1V1a1r11101;1
1 1i1f1 1(1u1V1a1r11101 1=1=1 101x18101010101010101)1 1{1
1 1b1V1a1r11121 1=1 1(1b1o1o1l1)1(1(1b1y1t1e1)1p1a1r1a1m1_111 1&1 111)1;1
1 1}1
1 1r1e1t1u1r1n1 1C1O1N1C1A1T14141(1u1V1a1r141 1+1 1i1V1a1r181 1*1 101x1110101010101 1+1 1(1u1i1n1t1)1C1A1R1R1Y141(1p1a1r1a1m1_111,1(1u1i1n1t1)1b1V1a1r11121)1 1|1 1u1V1a1r191,1
1 1p1a1r1a1m1_111 1+1 1b1V1a1r11121)1;1
1 1}1
1 1b1V1a1r111 1=1 1(1b1y1t1e1)1(1u1V1a1r11101 1>1>1 101x111f1)1;1
1 1u1V1a1r11101 1=1 1u1V1a1r11101 1<1<1 111;1
1 1u1V1a1r131 1=1 1p1a1r1a1m1_111 1*1 121;1
1 1b1V1a1r11121 1=1 1C1A1R1R1Y141(1p1a1r1a1m1_111,1p1a1r1a1m1_111)1;1
1 1p1a1r1a1m1_111 1=1 1p1a1r1a1m1_111 1*1 121 1+1 1(1u1i1n1t1)1b1V1a1r111;1
1 1u1V1a1r141 1=1 1u1V1a1r141 1*1 121 1+1 1(1u1i1n1t1)1(1b1V1a1r11121 1|1|1 1C1A1R1R1Y141(1u1V1a1r131,1(1u1i1n1t1)1b1V1a1r111)1)1;1
1 1b1V1a1r11121 1=1 1i1V1a1r181 1!1=1 101;1
1 1i1V1a1r181 1=1 1i1V1a1r181 1+1 1-111;1
1 1i1f1 1(1b1V1a1r11121 1&1&1 101x1f1f1f1f1f1 1<1 1u1V1a1r141)1 1g1o1t1o1 1L1A1B1_10101011111915101;1
1 1u1V1a1r131 1=1 1p1a1r1a1m1_111;1
1 1u1V1a1r151 1=1 1u1V1a1r141;1
1 1i1f1 1(1u1V1a1r141 1=1=1 101)1 1{1
1 1u1V1a1r131 1=1 101;1
1 1u1V1a1r151 1=1 1p1a1r1a1m1_111;1
1 1}1
1 1i1V1a1r161 1=1 1L1Z1C1O1U1N1T1(1u1V1a1r151)1;1
1 1i1f1 1(1u1V1a1r141 1=1=1 101)1 1{1
1 1i1V1a1r161 1=1 1i1V1a1r161 1+1 101x12101;1
1 1}1
1 1u1V1a1r171 1=1 1i1V1a1r161 1-1 101x1b1;1
1 1b1V1a1r11131 1=1 1S1B1O1R1R1O1W141(1u1V1a1r171,101x12101)1;1
1 1u1V1a1r141 1=1 1i1V1a1r161 1-1 101x121b1;1
1 1b1V1a1r11121 1=1 1(1i1n1t1)1u1V1a1r141 1<1 101;1
1 1b1V1a1r11111 1=1 1u1V1a1r141 1=1=1 101;1
1 1i1f1 1(1(1i1n1t1)1u1V1a1r171 1<1 101x12101)1 1{1
1 1b1V1a1r11131 1=1 1S1C1A1R1R1Y141(1u1V1a1r141,101x1c1)1;1
1 1i1V1a1r161 1=1 1i1V1a1r161 1+1 1-101x111f1;1
1 1b1V1a1r11121 1=1 1i1V1a1r161 1<1 101;1
1 1b1V1a1r11111 1=1 1i1V1a1r161 1=1=1 101;1
1 1u1V1a1r141 1=1 1u1V1a1r171;1
1 1i1f1 1(1!1b1V1a1r11111 1&1&1 1b1V1a1r11121 1=1=1 1b1V1a1r11131)1 1{1
1 1u1V1a1r131 1=1 1u1V1a1r151 1<1<1 1(1u1V1a1r171 1&1 101x1f1f1)1;1
1 1u1V1a1r151 1=1 1u1V1a1r151 1>1>1 1(101x1c1U1 1-1 1i1V1a1r161 1&1 101x1f1f1)1;1
1 1g1o1t1o1 1L1A1B1_1010101111191d101;1
1 1}1
1 1}1
1 1i1f1 1(1b1V1a1r11111 1|1|1 1b1V1a1r11121 1!1=1 1b1V1a1r11131)1 1{1
1 1u1V1a1r11101 1=1 101x12101 1-1 1u1V1a1r141;1
1 1}1
1 1u1V1a1r151 1=1 1u1V1a1r151 1<1<1 1(1u1V1a1r141 1&1 101x1f1f1)1;1
1 1i1f1 1(1b1V1a1r11111 1|1|1 1b1V1a1r11121 1!1=1 1b1V1a1r11131)1 1{1
1 1u1V1a1r151 1=1 1u1V1a1r151 1|1 1u1V1a1r131 1>1>1 1(1u1V1a1r11101 1&1 101x1f1f1)1;1
1 1}1
1 1i1f1 1(1b1V1a1r11111 1|1|1 1b1V1a1r11121 1!1=1 1b1V1a1r11131)1 1{1
1 1u1V1a1r131 1=1 1u1V1a1r131 1<1<1 1(1u1V1a1r141 1&1 101x1f1f1)1;1
1 1}1
1L1A1B1_1010101111191d101:1
1 1i1f1 1(1(1i1n1t1)1u1V1a1r171 1<1=1 1i1V1a1r181)1 1{1
1 1r1e1t1u1r1n1 1C1O1N1C1A1T14141(1u1V1a1r151 1+1 1(1i1V1a1r181 1-1 1u1V1a1r171)1 1*1 101x1110101010101 1|1 1u1V1a1r191,1u1V1a1r131)1;1
1 1}1
1 1u1V1a1r141 1=1 1~1(1i1V1a1r181 1-1 1u1V1a1r171)1;1
1 1i1f1 1(1(1i1n1t1)1u1V1a1r141 1<1 101x111f1)1 1{1
1 1i1V1a1r181 1=1 1u1V1a1r141 1-1 101x11131;1
1 1i1f1 1(1i1V1a1r181 1!1=1 101 1&1&1 1i1V1a1r181 1<1 101 1=1=1 1S1C1A1R1R1Y141(1u1V1a1r141 1-1 101x111f1,101x1c1)1)1 1{1
1 1r1e1t1u1r1n1 1C1O1N1C1A1T14141(1p1a1r1a1m1_121,1u1V1a1r131 1>1>1 1(101x12101 1-1 1(101x1c1U1 1-1 1i1V1a1r181)1 1&1 101x1f1f1)1 1|1
1 1u1V1a1r151 1<1<1 1(101x1c1U1 1-1 1i1V1a1r181 1&1 101x1f1f1)1)1 1&1 101x18101010101010101f1f1f1f1f1f1f1f1;1
1 1}1
1 1u1V1a1r141 1=1 1u1V1a1r141 1+1 111;1
1 1r1e1t1u1r1n1 1C1O1N1C1A1T14141(1u1V1a1r191 1|1 1u1V1a1r151 1>1>1 1(1u1V1a1r141 1&1 101x1f1f1)1,1
1 1u1V1a1r131 1>1>1 1(1u1V1a1r141 1&1 101x1f1f1)1 1|1 1u1V1a1r151 1<1<1 1(101x12101 1-1 1u1V1a1r141 1&1 101x1f1f1)1)1;1
1 1}1
1 1r1e1t1u1r1n1 1C1O1N1C1A1T14141(1p1a1r1a1m1_121,1u1V1a1r151 1>1>1 1(1u1V1a1r141 1-1 101x111f1 1&1 101x1f1f1)1)1 1&1 101x18101010101010101f1f1f1f1f1f1f1f1;1
1}1
1
1/1/1 1F1u1n1c1t1i1o1n1:1 1_1_1a1e1a1b1i1_1f1r1s1u1b1 1@1 101x11111b1e1c1
1v1o1i1d1 1_1_1a1e1a1b1i1_1f1r1s1u1b1(1u1i1n1t1 1p1a1r1a1m1_111)1
1{1
1 1_1_1a1d1d1s1f131(1p1a1r1a1m1_111 1^1 101x18101010101010101)1;1
1 1r1e1t1u1r1n1;1
1}1
1
1/1/1 1F1u1n1c1t1i1o1n1:1 1_1_1a1e1a1b1i1_1f1s1u1b1 1@1 101x11111b1f141
1u1i1n1t1 1_1_1a1e1a1b1i1_1f1s1u1b1(1u1i1n1t1 1p1a1r1a1m1_111,1u1i1n1t1 1p1a1r1a1m1_121,1u1n1s1i1g1n1e1d1 1i1n1t1 1p1a1r1a1m1_131,1u1i1n1t1 1p1a1r1a1m1_141)1
1{1
1 1i1n1t1 1i1V1a1r111;1
1 1i1n1t1 1i1V1a1r121;1
1 1b1y1t1e1 1b1V1a1r131;1
1 1u1i1n1t1 1u1V1a1r141;1
1 1u1i1n1t1 1u1V1a1r151;1
1 1u1i1n1t1 1u1V1a1r161;1
1 1u1i1n1t1 1u1V1a1r171;1
1 1u1i1n1t1 1u1V1a1r181;1
1 1b1o1o1l1 1b1V1a1r191;1
1 1u1V1a1r151 1=1 1p1a1r1a1m1_121 1^1 101x18101010101010101;1
1 1u1V1a1r141 1=1 1p1a1r1a1m1_111 1<1<1 111;1
1 1b1V1a1r191 1=1 1u1V1a1r141 1=1=1 101;1
1 1i1f1 1(1!1b1V1a1r191)1 1{1
1 1p1a1r1a1m1_141 1=1 1p1a1r1a1m1_121 1<1<1 111;1
1 1b1V1a1r191 1=1 1p1a1r1a1m1_141 1=1=1 101;1
1 1}1
1 1i1f1 1(1!1b1V1a1r191)1 1{1
1 1b1V1a1r191 1=1 1u1V1a1r141 1=1=1 1p1a1r1a1m1_141;1
1 1}1
1 1i1V1a1r111 1=1 1(1i1n1t1)1u1V1a1r141 1>1>1 101x11181;1
1 1i1f1 1(1!1b1V1a1r191)1 1{1
1 1b1V1a1r191 1=1 1i1V1a1r111 1=1=1 1-111;1
1 1}1
1 1i1f1 1(1!1b1V1a1r191)1 1{1
1 1b1V1a1r191 1=1 1(1i1n1t1)1p1a1r1a1m1_141 1>1>1 101x11181 1=1=1 1-111;1
1 1}1
1 1i1f1 1(1b1V1a1r191)1 1{1
1 1i1V1a1r121 1=1 1(1i1n1t1)1(1p1a1r1a1m1_121 1<1<1 111)1 1>1>1 101x11181;1
1 1i1f1 1(1i1V1a1r111 1=1=1 1-111 1|1|1 1i1V1a1r121 1=1=1 1-111)1 1{1
1 1u1V1a1r141 1=1 1u1V1a1r151;1
1 1i1f1 1(1i1V1a1r111 1=1=1 1-111)1 1{1
1 1u1V1a1r141 1=1 1p1a1r1a1m1_111;1
1 1}1
1 1i1f1 1(1i1V1a1r111 1!1=1 1-111 1|1|1 1i1V1a1r121 1!1=1 1-111)1 1{1
1 1u1V1a1r151 1=1 1u1V1a1r141;1
1 1}1
1 1b1V1a1r191 1=1 1(1u1V1a1r141 1&1 101x171f1f1f1f1f1)1 1=1=1 101;1
1 1i1f1 1(1b1V1a1r191)1 1{1
1 1b1V1a1r191 1=1 1(1u1V1a1r151 1&1 101x171f1f1f1f1f1)1 1=1=1 101;1
1 1}1
1 1i1f1 1(1b1V1a1r191)1 1{1
1 1b1V1a1r191 1=1 1u1V1a1r141 1=1=1 1u1V1a1r151;1
1 1}1
1 1i1f1 1(1!1b1V1a1r191)1 1{1
1 1u1V1a1r141 1=1 1u1V1a1r141 1|1 101x1410101010101;1
1 1}1
1 1r1e1t1u1r1n1 1u1V1a1r141;1
1 1}1
1 1i1f1 1(1u1V1a1r141 1!1=1 1p1a1r1a1m1_121 1<1<1 111)1 1{1
1 1i1f1 1(1u1V1a1r141 1=1=1 101)1 1{1
1 1p1a1r1a1m1_111 1=1 1u1V1a1r151;1
1 1}1
1 1r1e1t1u1r1n1 1p1a1r1a1m1_111;1
1 1}1
1 1i1f1 1(1p1a1r1a1m1_111 1!1=1 1u1V1a1r151)1 1{1
1 1r1e1t1u1r1n1 101;1
1 1}1
1 1i1f1 1(1(1u1V1a1r141 1&1 101x1f1f1010101010101)1 1=1=1 101)1 1{1
1 1u1V1a1r141 1=1 1p1a1r1a1m1_111 1<1<1 111;1
1 1i1f1 1(1S1U1B14111(1p1a1r1a1m1_111 1>1>1 101x111f1,101)1)1 1{1
1 1u1V1a1r141 1=1 1u1V1a1r141 1|1 101x18101010101010101;1
1 1}1
1 1r1e1t1u1r1n1 1u1V1a1r141;1
1 1}1
1 1i1f1 1(1u1V1a1r141 1<1 101x1f1e1010101010101)1 1{1
1 1r1e1t1u1r1n1 1p1a1r1a1m1_111 1+1 101x1810101010101;1
1 1}1
1 1p1a1r1a1m1_111 1=1 1p1a1r1a1m1_111 1&1 101x18101010101010101;1
1L1A1B1_10101011111d15181:1
1 1r1e1t1u1r1n1 1p1a1r1a1m1_111 1|1 101x171f1810101010101;1
1 1}1
1 1u1V1a1r141 1=1 1u1V1a1r141 1>1>1 101x11181;1
1 1p1a1r1a1m1_141 1=1 1p1a1r1a1m1_141 1>1>1 101x11181;1
1 1u1V1a1r181 1=1 1p1a1r1a1m1_141 1-1 1u1V1a1r141;1
1 1b1V1a1r191 1=1 1u1V1a1r181 1!1=1 101;1
1 1u1V1a1r171 1=1 1u1V1a1r141;1
1 1i1f1 1(1b1V1a1r191 1&1&1 1u1V1a1r141 1<1=1 1p1a1r1a1m1_141)1 1{1
1 1u1V1a1r171 1=1 1u1V1a1r141 1+1 1u1V1a1r181;1
1 1}1
1 1i1f1 1(1b1V1a1r191 1&1&1 1u1V1a1r141 1<1=1 1p1a1r1a1m1_141)1 1{1
1 1u1V1a1r151 1=1 1p1a1r1a1m1_111 1^1 1u1V1a1r151;1
1 1}1
1 1i1f1 1(1b1V1a1r191 1&1&1 1u1V1a1r141 1<1=1 1p1a1r1a1m1_141)1 1{1
1 1p1a1r1a1m1_111 1=1 1u1V1a1r151 1^1 1p1a1r1a1m1_111;1
1 1}1
1 1i1f1 1(1b1V1a1r191 1&1&1 1u1V1a1r141 1<1=1 1p1a1r1a1m1_141)1 1{1
1 1u1V1a1r151 1=1 1p1a1r1a1m1_111 1^1 1u1V1a1r151;1
1 1}1
1 1i1f1 1(1p1a1r1a1m1_141 1<1 1u1V1a1r141)1 1{1
1 1u1V1a1r181 1=1 1-1u1V1a1r181;1
1 1}1
1 1i1f1 1(101x11191 1<1 1u1V1a1r181)1 1{1
1 1r1e1t1u1r1n1 1p1a1r1a1m1_111;1
1 1}1
1 1u1V1a1r141 1=1 1p1a1r1a1m1_111 1&1 101x1f1f1f1f1f1f1 1|1 101x1810101010101;1
1 1i1f1 1(1(1p1a1r1a1m1_111 1&1 101x18101010101010101)1 1!1=1 101)1 1{1
1 1u1V1a1r141 1=1 1-1u1V1a1r141;1
1 1}1
1 1u1V1a1r161 1=1 1u1V1a1r151 1&1 101x1f1f1f1f1f1f1 1|1 101x1810101010101;1
1 1i1f1 1(1(1u1V1a1r151 1&1 101x18101010101010101)1 1!1=1 101)1 1{1
1 1u1V1a1r161 1=1 1-1u1V1a1r161;1
1 1}1
1 1i1f1 1(1u1V1a1r171 1=1=1 1u1V1a1r181)1 1{1
1 1u1V1a1r161 1=1 1u1V1a1r161 1^1 101x1810101010101;1
1 1i1f1 1(1u1V1a1r171 1=1=1 101)1 1{1
1 1u1V1a1r141 1=1 1u1V1a1r141 1^1 101x1810101010101;1
1 1u1V1a1r171 1=1 111;1
1 1}1
1 1e1l1s1e1 1{1
1 1u1V1a1r181 1=1 1u1V1a1r181 1-1 111;1
1 1}1
1 1}1
1 1u1V1a1r141 1=1 1u1V1a1r141 1+1 1(1(1i1n1t1)1u1V1a1r161 1>1>1 1(1u1V1a1r181 1&1 101x1f1f1)1)1;1
1 1u1V1a1r161 1=1 1u1V1a1r161 1<1<1 1(101x12101 1-1 1u1V1a1r181 1&1 101x1f1f1)1;1
1 1p1a1r1a1m1_111 1=1 1u1V1a1r141 1&1 101x18101010101010101;1
1 1i1f1 1(1(1i1n1t1)1u1V1a1r141 1<1 101)1 1{1
1 1b1V1a1r191 1=1 1u1V1a1r161 1!1=1 101;1
1 1u1V1a1r161 1=1 1-1u1V1a1r161;1
1 1u1V1a1r141 1=1 1-1(1u1V1a1r141 1+1 1b1V1a1r191)1;1
1 1}1
1 1i1f1 1(1u1V1a1r141 1<1 101x1810101010101)1 1{1
1 1i1V1a1r111 1=1 1(1i1n1t1)1u1V1a1r161 1>1>1 101x111f1;1
1 1u1V1a1r161 1=1 1u1V1a1r161 1<1<1 111;1
1 1u1V1a1r141 1=1 1u1V1a1r141 1*1 121 1-1 1i1V1a1r111;1
1 1u1V1a1r151 1=1 1u1V1a1r171 1-1 121;1
1 1i1f1 1(1u1V1a1r171 1-1 111 1=1=1 101 1|1|1 1u1V1a1r141 1<1 101x1810101010101)1 1{1
1 1u1V1a1r181 1=1 1L1Z1C1O1U1N1T1(1u1V1a1r141)1 1-1 181;1
1 1u1V1a1r141 1=1 1u1V1a1r141 1<1<1 1(1u1V1a1r181 1&1 101x1f1f1)1;1
1 1i1f1 1(1(1i1n1t1)1u1V1a1r151 1<1 1(1i1n1t1)1u1V1a1r181)1 1{1
1 1u1V1a1r141 1=1 1u1V1a1r141 1>1>1 1(1-1(1u1V1a1r151 1-1 1u1V1a1r181)1 1&1 101x1f1f1)1;1
1 1}1
1 1e1l1s1e1 1{1
1 1u1V1a1r141 1=1 1u1V1a1r141 1+1 1(1u1V1a1r151 1-1 1u1V1a1r181)1 1*1 101x1810101010101;1
1 1}1
1 1r1e1t1u1r1n1 1u1V1a1r141 1|1 1p1a1r1a1m1_111;1
1 1}1
1 1}1
1 1e1l1s1e1 1{1
1 1u1V1a1r151 1=1 1u1V1a1r171 1-1 111;1
1 1i1f1 1(101x1f1f1f1f1f1f1 1<1 1u1V1a1r141)1 1{1
1 1b1V1a1r131 1=1 1(1b1y1t1e1)1u1V1a1r141;1
1 1u1V1a1r141 1=1 1u1V1a1r141 1>1>1 111;1
1 1u1V1a1r161 1=1 1(1u1i1n1t1)1(1b1V1a1r131 1&1 111)1 1<1<1 101x111f1 1|1 1u1V1a1r161 1>1>1 111;1
1 1u1V1a1r151 1=1 1u1V1a1r171;1
1 1i1f1 1(101x1f1d1 1<1 1u1V1a1r171)1 1g1o1t1o1 1L1A1B1_10101011111d15181;1
1 1}1
1 1}1
1 1u1V1a1r141 1=1 1u1V1a1r141 1+1 1u1V1a1r151 1*1 101x1810101010101 1+1 1(1u1i1n1t1)1(101x171f1f1f1f1f1f1f1 1<1 1u1V1a1r161)1;1
1 1i1f1 1(1u1V1a1r161 1=1=1 101x18101010101010101)1 1{1
1 1u1V1a1r141 1=1 1u1V1a1r141 1&1 101x1f1f1f1f1f1f1f1e1;1
1 1}1
1 1r1e1t1u1r1n1 1u1V1a1r141 1|1 1p1a1r1a1m1_111;1
1}1
1
1/1/1 1F1u1n1c1t1i1o1n1:1 1_1_1a1d1d1s1f131 1@1 101x11111b1f181
1u1i1n1t1 1_1_1a1d1d1s1f131(1u1i1n1t1 1p1a1r1a1m1_111,1u1i1n1t1 1p1a1r1a1m1_121,1u1n1s1i1g1n1e1d1 1i1n1t1 1p1a1r1a1m1_131,1u1i1n1t1 1p1a1r1a1m1_141)1
1{1
1 1i1n1t1 1i1V1a1r111;1
1 1i1n1t1 1i1V1a1r121;1
1 1b1y1t1e1 1b1V1a1r131;1
1 1u1i1n1t1 1u1V1a1r141;1
1 1u1i1n1t1 1u1V1a1r151;1
1 1u1i1n1t1 1u1V1a1r161;1
1 1u1i1n1t1 1u1V1a1r171;1
1 1b1o1o1l1 1b1V1a1r181;1
1 1u1V1a1r141 1=1 1p1a1r1a1m1_111 1<1<1 111;1
1 1b1V1a1r181 1=1 1u1V1a1r141 1=1=1 101;1
1 1i1f1 1(1!1b1V1a1r181)1 1{1
1 1p1a1r1a1m1_141 1=1 1p1a1r1a1m1_121 1<1<1 111;1
1 1b1V1a1r181 1=1 1p1a1r1a1m1_141 1=1=1 101;1
1 1}1
1 1i1f1 1(1!1b1V1a1r181)1 1{1
1 1b1V1a1r181 1=1 1u1V1a1r141 1=1=1 1p1a1r1a1m1_141;1
1 1}1
1 1i1V1a1r111 1=1 1(1i1n1t1)1u1V1a1r141 1>1>1 101x11181;1
1 1i1f1 1(1!1b1V1a1r181)1 1{1
1 1b1V1a1r181 1=1 1i1V1a1r111 1=1=1 1-111;1
1 1}1
1 1i1f1 1(1!1b1V1a1r181)1 1{1
1 1b1V1a1r181 1=1 1(1i1n1t1)1p1a1r1a1m1_141 1>1>1 101x11181 1=1=1 1-111;1
1 1}1
1 1i1f1 1(1b1V1a1r181)1 1{1
1 1i1V1a1r121 1=1 1(1i1n1t1)1(1p1a1r1a1m1_121 1<1<1 111)1 1>1>1 101x11181;1
1 1i1f1 1(1i1V1a1r111 1=1=1 1-111 1|1|1 1i1V1a1r121 1=1=1 1-111)1 1{1
1 1u1V1a1r141 1=1 1p1a1r1a1m1_121;1
1 1i1f1 1(1i1V1a1r111 1=1=1 1-111)1 1{1
1 1u1V1a1r141 1=1 1p1a1r1a1m1_111;1
1 1}1
1 1i1f1 1(1i1V1a1r111 1!1=1 1-111 1|1|1 1i1V1a1r121 1!1=1 1-111)1 1{1
1 1p1a1r1a1m1_121 1=1 1u1V1a1r141;1
1 1}1
1 1b1V1a1r181 1=1 1(1u1V1a1r141 1&1 101x171f1f1f1f1f1)1 1=1=1 101;1
1 1i1f1 1(1b1V1a1r181)1 1{1
1 1b1V1a1r181 1=1 1(1p1a1r1a1m1_121 1&1 101x171f1f1f1f1f1)1 1=1=1 101;1
1 1}1
1 1i1f1 1(1b1V1a1r181)1 1{1
1 1b1V1a1r181 1=1 1u1V1a1r141 1=1=1 1p1a1r1a1m1_121;1
1 1}1
1 1i1f1 1(1!1b1V1a1r181)1 1{1
1 1u1V1a1r141 1=1 1u1V1a1r141 1|1 101x1410101010101;1
1 1}1
1 1r1e1t1u1r1n1 1u1V1a1r141;1
1 1}1
1 1i1f1 1(1u1V1a1r141 1!1=1 1p1a1r1a1m1_121 1<1<1 111)1 1{1
1 1i1f1 1(1u1V1a1r141 1=1=1 101)1 1{1
1 1p1a1r1a1m1_111 1=1 1p1a1r1a1m1_121;1
1 1}1
1 1r1e1t1u1r1n1 1p1a1r1a1m1_111;1
1 1}1
1 1i1f1 1(1p1a1r1a1m1_111 1!1=1 1p1a1r1a1m1_121)1 1{1
1 1r1e1t1u1r1n1 101;1
1 1}1
1 1i1f1 1(1(1u1V1a1r141 1&1 101x1f1f1010101010101)1 1=1=1 101)1 1{1
1 1u1V1a1r141 1=1 1p1a1r1a1m1_111 1<1<1 111;1
1 1i1f1 1(1S1U1B14111(1p1a1r1a1m1_111 1>1>1 101x111f1,101)1)1 1{1
1 1u1V1a1r141 1=1 1u1V1a1r141 1|1 101x18101010101010101;1
1 1}1
1 1r1e1t1u1r1n1 1u1V1a1r141;1
1 1}1
1 1i1f1 1(1u1V1a1r141 1<1 101x1f1e1010101010101)1 1{1
1 1r1e1t1u1r1n1 1p1a1r1a1m1_111 1+1 101x1810101010101;1
1 1}1
1 1p1a1r1a1m1_111 1=1 1p1a1r1a1m1_111 1&1 101x18101010101010101;1
1L1A1B1_10101011111d15181:1
1 1r1e1t1u1r1n1 1p1a1r1a1m1_111 1|1 101x171f1810101010101;1
1 1}1
1 1u1V1a1r141 1=1 1u1V1a1r141 1>1>1 101x11181;1
1 1p1a1r1a1m1_141 1=1 1p1a1r1a1m1_141 1>1>1 101x11181;1
1 1u1V1a1r171 1=1 1p1a1r1a1m1_141 1-1 1u1V1a1r141;1
1 1b1V1a1r181 1=1 1u1V1a1r171 1!1=1 101;1
1 1u1V1a1r161 1=1 1u1V1a1r141;1
1 1i1f1 1(1b1V1a1r181 1&1&1 1u1V1a1r141 1<1=1 1p1a1r1a1m1_141)1 1{1
1 1u1V1a1r161 1=1 1u1V1a1r141 1+1 1u1V1a1r171;1
1 1}1
1 1i1f1 1(1b1V1a1r181 1&1&1 1u1V1a1r141 1<1=1 1p1a1r1a1m1_141)1 1{1
1 1p1a1r1a1m1_121 1=1 1p1a1r1a1m1_111 1^1 1p1a1r1a1m1_121;1
1 1}1
1 1i1f1 1(1b1V1a1r181 1&1&1 1u1V1a1r141 1<1=1 1p1a1r1a1m1_141)1 1{1
1 1p1a1r1a1m1_111 1=1 1p1a1r1a1m1_121 1^1 1p1a1r1a1m1_111;1
1 1}1
1 1i1f1 1(1b1V1a1r181 1&1&1 1u1V1a1r141 1<1=1 1p1a1r1a1m1_141)1 1{1
1 1p1a1r1a1m1_121 1=1 1p1a1r1a1m1_111 1^1 1p1a1r1a1m1_121;1
1 1}1
1 1i1f1 1(1p1a1r1a1m1_141 1<1 1u1V1a1r141)1 1{1
1 1u1V1a1r171 1=1 1-1u1V1a1r171;1
1 1}1
1 1i1f1 1(101x11191 1<1 1u1V1a1r171)1 1{1
1 1r1e1t1u1r1n1 1p1a1r1a1m1_111;1
1 1}1
1 1u1V1a1r141 1=1 1p1a1r1a1m1_111 1&1 101x1f1f1f1f1f1f1 1|1 101x1810101010101;1
1 1i1f1 1(1(1p1a1r1a1m1_111 1&1 101x18101010101010101)1 1!1=1 101)1 1{1
1 1u1V1a1r141 1=1 1-1u1V1a1r141;1
1 1}1
1 1u1V1a1r151 1=1 1p1a1r1a1m1_121 1&1 101x1f1f1f1f1f1f1 1|1 101x1810101010101;1
1 1i1f1 1(1(1p1a1r1a1m1_121 1&1 101x18101010101010101)1 1!1=1 101)1 1{1
1 1u1V1a1r151 1=1 1-1u1V1a1r151;1
1 1}1
1 1i1f1 1(1u1V1a1r161 1=1=1 1u1V1a1r171)1 1{1
1 1u1V1a1r151 1=1 1u1V1a1r151 1^1 101x1810101010101;1
1 1i1f1 1(1u1V1a1r161 1=1=1 101)1 1{1
1 1u1V1a1r141 1=1 1u1V1a1r141 1^1 101x1810101010101;1
1 1u1V1a1r161 1=1 111;1
1 1}1
1 1e1l1s1e1 1{1
1 1u1V1a1r171 1=1 1u1V1a1r171 1-1 111;1
1 1}1
1 1}1
1 1u1V1a1r141 1=1 1u1V1a1r141 1+1 1(1(1i1n1t1)1u1V1a1r151 1>1>1 1(1u1V1a1r171 1&1 101x1f1f1)1)1;1
1 1u1V1a1r151 1=1 1u1V1a1r151 1<1<1 1(101x12101 1-1 1u1V1a1r171 1&1 101x1f1f1)1;1
1 1p1a1r1a1m1_111 1=1 1u1V1a1r141 1&1 101x18101010101010101;1
1 1i1f1 1(1(1i1n1t1)1u1V1a1r141 1<1 101)1 1{1
1 1b1V1a1r181 1=1 1u1V1a1r151 1!1=1 101;1
1 1u1V1a1r151 1=1 1-1u1V1a1r151;1
1 1u1V1a1r141 1=1 1-1(1u1V1a1r141 1+1 1b1V1a1r181)1;1
1 1}1
1 1i1f1 1(1u1V1a1r141 1<1 101x1810101010101)1 1{1
1 1i1V1a1r111 1=1 1(1i1n1t1)1u1V1a1r151 1>1>1 101x111f1;1
1 1u1V1a1r151 1=1 1u1V1a1r151 1<1<1 111;1
1 1u1V1a1r141 1=1 1u1V1a1r141 1*1 121 1-1 1i1V1a1r111;1
1 1u1V1a1r171 1=1 1u1V1a1r161 1-1 121;1
1 1i1f1 1(1u1V1a1r161 1-1 111 1=1=1 101 1|1|1 1u1V1a1r141 1<1 101x1810101010101)1 1{1
1 1u1V1a1r161 1=1 1L1Z1C1O1U1N1T1(1u1V1a1r141)1 1-1 181;1
1 1u1V1a1r141 1=1 1u1V1a1r141 1<1<1 1(1u1V1a1r161 1&1 101x1f1f1)1;1
1 1i1f1 1(1(1i1n1t1)1u1V1a1r171 1<1 1(1i1n1t1)1u1V1a1r161)1 1{1
1 1u1V1a1r141 1=1 1u1V1a1r141 1>1>1 1(1-1(1u1V1a1r171 1-1 1u1V1a1r161)1 1&1 101x1f1f1)1;1
1 1}1
1 1e1l1s1e1 1{1
1 1u1V1a1r141 1=1 1u1V1a1r141 1+1 1(1u1V1a1r171 1-1 1u1V1a1r161)1 1*1 101x1810101010101;1
1 1}1
1 1r1e1t1u1r1n1 1u1V1a1r141 1|1 1p1a1r1a1m1_111;1
1 1}1
1 1}1
1 1e1l1s1e1 1{1
1 1u1V1a1r171 1=1 1u1V1a1r161 1-1 111;1
1 1i1f1 1(101x1f1f1f1f1f1f1 1<1 1u1V1a1r141)1 1{1
1 1b1V1a1r131 1=1 1(1b1y1t1e1)1u1V1a1r141;1
1 1u1V1a1r141 1=1 1u1V1a1r141 1>1>1 111;1
1 1u1V1a1r151 1=1 1(1u1i1n1t1)1(1b1V1a1r131 1&1 111)1 1<1<1 101x111f1 1|1 1u1V1a1r151 1>1>1 111;1
1 1u1V1a1r171 1=1 1u1V1a1r161;1
1 1i1f1 1(101x1f1d1 1<1 1u1V1a1r161)1 1g1o1t1o1 1L1A1B1_10101011111d15181;1
1 1}1
1 1}1
1 1u1V1a1r141 1=1 1u1V1a1r141 1+1 1u1V1a1r171 1*1 101x1810101010101 1+1 1(1u1i1n1t1)1(101x171f1f1f1f1f1f1f1 1<1 1u1V1a1r151)1;1
1 1i1f1 1(1u1V1a1r151 1=1=1 101x18101010101010101)1 1{1
1 1u1V1a1r141 1=1 1u1V1a1r141 1&1 101x1f1f1f1f1f1f1f1e1;1
1 1}1
1 1r1e1t1u1r1n1 1u1V1a1r141 1|1 1p1a1r1a1m1_111;1
1}1
1
1/1/1 1F1u1n1c1t1i1o1n1:1 1_1_1a1e1a1b1i1_1u1i121f1 1@1 101x11111d18181
1u1i1n1t1 1_1_1a1e1a1b1i1_1u1i121f1(1u1i1n1t1 1p1a1r1a1m1_111)1
1{1
1 1u1i1n1t1 1u1V1a1r111;1
1 1u1i1n1t1 1u1V1a1r121;1
1 1i1n1t1 1i1V1a1r131;1
1 1i1f1 1(1p1a1r1a1m1_111 1=1=1 101)1 1{1
1 1r1e1t1u1r1n1 101;1
1 1}1
1 1u1V1a1r111 1=1 1L1Z1C1O1U1N1T1(1p1a1r1a1m1_111)1;1
1 1u1V1a1r121 1=1 1u1V1a1r111 1-1 181;1
1 1i1V1a1r131 1=1 1u1V1a1r121 1*1 1-101x1810101010101 1+1 101x141a1810101010101;1
1 1i1f1 1(171 1<1 1u1V1a1r111)1 1{1
1 1u1V1a1r111 1=1 101 1<1<1 1(1u1V1a1r121 1&1 101x1f1f1)1;1
1 1u1V1a1r121 1=1 1i1V1a1r131 1+1 1(1p1a1r1a1m1_111 1<1<1 1(1u1V1a1r121 1&1 101x1f1f1)1)1 1+1 1(101U1 1>1>1 1(101x12101 1-1 1u1V1a1r121 1&1 101x1f1f1)1)1 1+1
1 1(1u1i1n1t1)1(101x171f1f1f1f1f1f1f1 1<1 1u1V1a1r111)1;1
1 1i1f1 1(1u1V1a1r111 1=1=1 101x18101010101010101)1 1{1
1 1u1V1a1r121 1=1 1u1V1a1r121 1&1 101x1f1f1f1f1f1f1f1e1;1
1 1}1
1 1r1e1t1u1r1n1 1u1V1a1r121;1
1 1}1
1 1u1V1a1r121 1=1 1p1a1r1a1m1_111 1<1<1 1u1V1a1r111 1+1 101x11181;1
1 1u1V1a1r111 1=1 1(1i1V1a1r131 1+1 1(1p1a1r1a1m1_111 1>1>1 1(101x12101 1-1 1(1u1V1a1r111 1+1 101x11181)1 1&1 101x1f1f1)1)1)1 1-1 1(1(1i1n1t1)1u1V1a1r121 1>1>1 101x111f1)1;1
1 1i1f1 1(1(1u1V1a1r121 1&1 101x171f1f1f1f1f1f1f1)1 1=1=1 101)1 1{1
1 1u1V1a1r111 1=1 1u1V1a1r111 1&1 1~1(1u1V1a1r121 1>1>1 101x111f1)1;1
1 1}1
1 1r1e1t1u1r1n1 1u1V1a1r111;1
1}1
1
1/1/1 1F1u1n1c1t1i1o1n1:1 1_1_1f1l1o1a1t1s1i1s1f1 1@1 101x11111d19101
1u1i1n1t1 1_1_1f1l1o1a1t1s1i1s1f1(1u1i1n1t1 1p1a1r1a1m1_111)1
1{1
1 1u1i1n1t1 1u1V1a1r111;1
1 1u1i1n1t1 1u1V1a1r121;1
1 1u1i1n1t1 1u1V1a1r131;1
1 1i1n1t1 1i1V1a1r141;1
1 1u1V1a1r131 1=1 1p1a1r1a1m1_111 1&1 101x18101010101010101;1
1 1i1f1 1(1(1i1n1t1)1u1V1a1r131 1<1 101)1 1{1
1 1p1a1r1a1m1_111 1=1 1-1p1a1r1a1m1_111;1
1 1}1
1 1i1f1 1(1p1a1r1a1m1_111 1=1=1 101)1 1{1
1 1r1e1t1u1r1n1 101;1
1 1}1
1 1u1V1a1r111 1=1 1L1Z1C1O1U1N1T1(1p1a1r1a1m1_111)1;1
1 1u1V1a1r121 1=1 1u1V1a1r111 1-1 181;1
1 1i1V1a1r141 1=1 1(1(1u1V1a1r131 1|1 101x141b1010101010101)1 1-1 101x1810101010101)1 1+1 1u1V1a1r121 1*1 1-101x1810101010101;1
1 1i1f1 1(171 1<1 1u1V1a1r111)1 1{1
1 1u1V1a1r131 1=1 101 1<1<1 1(1u1V1a1r121 1&1 101x1f1f1)1;1
1 1u1V1a1r111 1=1 1i1V1a1r141 1+1 1(1p1a1r1a1m1_111 1<1<1 1(1u1V1a1r121 1&1 101x1f1f1)1)1 1+1 1(101U1 1>1>1 1(101x12101 1-1 1u1V1a1r121 1&1 101x1f1f1)1)1 1+1
1 1(1u1i1n1t1)1(101x171f1f1f1f1f1f1f1 1<1 1u1V1a1r131)1;1
1 1i1f1 1(1u1V1a1r131 1=1=1 101x18101010101010101)1 1{1
1 1u1V1a1r111 1=1 1u1V1a1r111 1&1 101x1f1f1f1f1f1f1f1e1;1
1 1}1
1 1r1e1t1u1r1n1 1u1V1a1r111;1
1 1}1
1 1u1V1a1r131 1=1 1p1a1r1a1m1_111 1<1<1 1u1V1a1r111 1+1 101x11181;1
1 1u1V1a1r111 1=1 1(1i1V1a1r141 1+1 1(1p1a1r1a1m1_111 1>1>1 1(101x12101 1-1 1(1u1V1a1r111 1+1 101x11181)1 1&1 101x1f1f1)1)1)1 1-1 1(1(1i1n1t1)1u1V1a1r131 1>1>1 101x111f1)1;1
1 1i1f1 1(1(1u1V1a1r131 1&1 101x171f1f1f1f1f1f1f1)1 1=1=1 101)1 1{1
1 1u1V1a1r111 1=1 1u1V1a1r111 1&1 1~1(1u1V1a1r131 1>1>1 101x111f1)1;1
1 1}1
1 1r1e1t1u1r1n1 1u1V1a1r111;1
1}1
1
1/1/1 1F1u1n1c1t1i1o1n1:1 1_1_1f1l1o1a1t1u1n1d1i1s1f1 1@1 101x11111d1b101
1u1i1n1t1 1_1_1f1l1o1a1t1u1n1d1i1s1f1(1u1i1n1t1 1p1a1r1a1m1_111,1u1i1n1t1 1p1a1r1a1m1_121)1
1{1
1 1u1i1n1t1 1u1V1a1r111;1
1 1u1i1n1t1 1u1V1a1r121;1
1 1u1i1n1t1 1u1V1a1r131;1
1 1u1i1n1t1 1u1V1a1r141;1
1 1i1n1t1 1i1V1a1r151;1
1 1i1f1 1(1(1p1a1r1a1m1_111 1|1 1p1a1r1a1m1_121)1 1=1=1 101)1 1{1
1 1r1e1t1u1r1n1 1p1a1r1a1m1_111;1
1 1}1
1 1u1V1a1r111 1=1 1p1a1r1a1m1_111;1
1 1u1V1a1r121 1=1 1p1a1r1a1m1_121;1
1 1i1f1 1(1p1a1r1a1m1_121 1=1=1 101)1 1{1
1 1u1V1a1r111 1=1 101;1
1 1u1V1a1r121 1=1 1p1a1r1a1m1_111;1
1 1}1
1 1i1V1a1r151 1=1 101x151b1010101010101;1
1 1i1f1 1(1p1a1r1a1m1_121 1=1=1 101)1 1{1
1 1i1V1a1r151 1=1 101x141b1010101010101;1
1 1}1
1 1u1V1a1r131 1=1 1L1Z1C1O1U1N1T1(1u1V1a1r121)1;1
1 1u1V1a1r141 1=1 1u1V1a1r131 1-1 181;1
1 1i1V1a1r151 1=1 1i1V1a1r151 1+1 1-101x1810101010101 1+1 1u1V1a1r141 1*1 1-101x1810101010101;1
1 1i1f1 1(1u1V1a1r131 1<1 181)1 1{1
1 1u1V1a1r141 1=1 1u1V1a1r121 1<1<1 1u1V1a1r131 1+1 101x11181;1
1 1u1V1a1r121 1=1 1(1i1V1a1r151 1+1 1(1u1V1a1r121 1>1>1 1(101x12101 1-1 1(1u1V1a1r131 1+1 101x11181)1 1&1 101x1f1f1)1)1)1 1-1 1(1(1i1n1t1)1u1V1a1r141 1>1>1 101x111f1)1;1
1 1i1f1 1(1(1u1V1a1r111 1|1 1u1V1a1r141 1<1<1 111)1 1=1=1 101)1 1{1
1 1u1V1a1r121 1=1 1u1V1a1r121 1&1 1~1(1u1V1a1r141 1>1>1 101x111f1)1;1
1 1}1
1 1r1e1t1u1r1n1 1u1V1a1r121;1
1 1}1
1 1u1V1a1r131 1=1 1u1V1a1r111 1<1<1 1(1u1V1a1r141 1&1 101x1f1f1)1;1
1 1u1V1a1r121 1=1 1i1V1a1r151 1+1 1(1u1V1a1r121 1<1<1 1(1u1V1a1r141 1&1 101x1f1f1)1)1 1+1 1(1u1V1a1r111 1>1>1 1(101x12101 1-1 1u1V1a1r141 1&1 101x1f1f1)1)1 1+1
1 1(1u1i1n1t1)1(101x171f1f1f1f1f1f1f1 1<1 1u1V1a1r131)1;1
1 1i1f1 1(1u1V1a1r131 1=1=1 101x18101010101010101)1 1{1
1 1u1V1a1r121 1=1 1u1V1a1r121 1&1 101x1f1f1f1f1f1f1f1e1;1
1 1}1
1 1r1e1t1u1r1n1 1u1V1a1r121;1
1}1
1
1/1/1 1F1u1n1c1t1i1o1n1:1 1_1_1a1e1a1b1i1_1l121f1 1@1 101x11111d1c101
1u1i1n1t1 1_1_1a1e1a1b1i1_1l121f1(1u1i1n1t1 1p1a1r1a1m1_111,1u1i1n1t1 1p1a1r1a1m1_121)1
1{1
1 1u1i1n1t1 1u1V1a1r111;1
1 1u1i1n1t1 1u1V1a1r121;1
1 1u1i1n1t1 1u1V1a1r131;1
1 1u1i1n1t1 1u1V1a1r141;1
1 1u1i1n1t1 1u1V1a1r151;1
1 1i1n1t1 1i1V1a1r161;1
1 1b1o1o1l1 1b1V1a1r171;1
1 1i1f1 1(1(1p1a1r1a1m1_111 1|1 1p1a1r1a1m1_121)1 1=1=1 101)1 1{1
1 1r1e1t1u1r1n1 1p1a1r1a1m1_111;1
1 1}1
1 1u1V1a1r151 1=1 1p1a1r1a1m1_121 1&1 101x18101010101010101;1
1 1i1f1 1(1(1i1n1t1)1u1V1a1r151 1<1 101)1 1{1
1 1b1V1a1r171 1=1 1p1a1r1a1m1_111 1!1=1 101;1
1 1p1a1r1a1m1_111 1=1 1-1p1a1r1a1m1_111;1
1 1p1a1r1a1m1_121 1=1 1-1(1p1a1r1a1m1_121 1+1 1b1V1a1r171)1;1
1 1}1
1 1u1V1a1r111 1=1 1p1a1r1a1m1_111;1
1 1u1V1a1r121 1=1 1p1a1r1a1m1_121;1
1 1i1f1 1(1p1a1r1a1m1_121 1=1=1 101)1 1{1
1 1u1V1a1r111 1=1 101;1
1 1u1V1a1r121 1=1 1p1a1r1a1m1_111;1
1 1}1
1 1u1V1a1r151 1=1 1u1V1a1r151 1|1 101x151b1010101010101;1
1 1i1f1 1(1p1a1r1a1m1_121 1=1=1 101)1 1{1
1 1u1V1a1r151 1=1 1u1V1a1r151 1+1 101x1f101010101010101;1
1 1}1
1 1u1V1a1r131 1=1 1L1Z1C1O1U1N1T1(1u1V1a1r121)1;1
1 1u1V1a1r141 1=1 1u1V1a1r131 1-1 181;1
1 1i1V1a1r161 1=1 1(1u1V1a1r151 1-1 101x1810101010101)1 1+1 1u1V1a1r141 1*1 1-101x1810101010101;1
1 1i1f1 1(1u1V1a1r131 1<1 181)1 1{1
1 1u1V1a1r151 1=1 1u1V1a1r121 1<1<1 1u1V1a1r131 1+1 101x11181;1
1 1u1V1a1r121 1=1 1(1i1V1a1r161 1+1 1(1u1V1a1r121 1>1>1 1(101x12101 1-1 1(1u1V1a1r131 1+1 101x11181)1 1&1 101x1f1f1)1)1)1 1-1 1(1(1i1n1t1)1u1V1a1r151 1>1>1 101x111f1)1;1
1 1i1f1 1(1(1u1V1a1r111 1|1 1u1V1a1r151 1<1<1 111)1 1=1=1 101)1 1{1
1 1u1V1a1r121 1=1 1u1V1a1r121 1&1 1~1(1u1V1a1r151 1>1>1 101x111f1)1;1
1 1}1
1 1r1e1t1u1r1n1 1u1V1a1r121;1
1 1}1
1 1u1V1a1r151 1=1 1u1V1a1r111 1<1<1 1(1u1V1a1r141 1&1 101x1f1f1)1;1
1 1u1V1a1r121 1=1 1i1V1a1r161 1+1 1(1u1V1a1r121 1<1<1 1(1u1V1a1r141 1&1 101x1f1f1)1)1 1+1 1(1u1V1a1r111 1>1>1 1(101x12101 1-1 1u1V1a1r141 1&1 101x1f1f1)1)1 1+1
1 1(1u1i1n1t1)1(101x171f1f1f1f1f1f1f1 1<1 1u1V1a1r151)1;1
1 1i1f1 1(1u1V1a1r151 1=1=1 101x18101010101010101)1 1{1
1 1u1V1a1r121 1=1 1u1V1a1r121 1&1 101x1f1f1f1f1f1f1f1e1;1
1 1}1
1 1r1e1t1u1r1n1 1u1V1a1r121;1
1}1
1
1/1/1 1F1u1n1c1t1i1o1n1:1 1_1_1f1i1x1s1f1s1i1 1@1 101x11111e131c1
1u1i1n1t1 1_1_1f1i1x1s1f1s1i1(1u1i1n1t1 1p1a1r1a1m1_111)1
1{1
1 1u1i1n1t1 1u1V1a1r111;1
1 1u1i1n1t1 1u1V1a1r121;1
1 1i1f1 1(1p1a1r1a1m1_111 1<1<1 111 1<1 101x171f1010101010101)1 1{1
1 1r1e1t1u1r1n1 101;1
1 1}1
1 1u1V1a1r111 1=1 1(1p1a1r1a1m1_111 1<1<1 111)1 1>1>1 101x11181;1
1 1u1V1a1r121 1=1 101x191e1 1-1 1u1V1a1r111;1
1 1i1f1 1(1u1V1a1r111 1<1 101x191f1 1&1&1 1u1V1a1r121 1!1=1 101)1 1{1
1 1u1V1a1r111 1=1 1(1p1a1r1a1m1_111 1<1<1 181 1|1 101x18101010101010101)1 1>1>1 1(1u1V1a1r121 1&1 101x1f1f1)1;1
1 1i1f1 1(1(1p1a1r1a1m1_111 1&1 101x18101010101010101)1 1!1=1 101)1 1{1
1 1u1V1a1r111 1=1 1-1u1V1a1r111;1
1 1}1
1 1r1e1t1u1r1n1 1u1V1a1r111;1
1 1}1
1 1i1f1 1(1(1u1V1a1r121 1=1=1 101x1f1f1f1f1f1f191f1)1 1&1&1 1(1(1p1a1r1a1m1_111 1&1 101x171f1f1f1f1f1)1 1!1=1 101)1)1 1{1
1 1r1e1t1u1r1n1 101;1
1 1}1
1 1p1a1r1a1m1_111 1=1 1p1a1r1a1m1_111 1&1 101x18101010101010101;1
1 1i1f1 1(1p1a1r1a1m1_111 1=1=1 101)1 1{1
1 1p1a1r1a1m1_111 1=1 101x171f1f1f1f1f1f1f1;1
1 1}1
1 1r1e1t1u1r1n1 1p1a1r1a1m1_111;1
1}1
1
1/1/1 1F1u1n1c1t1i1o1n1:1 1_1f1i1n1i1 1@1 101x11111e19181
1v1o1i1d1 1_1f1i1n1i1(1v1o1i1d1)1
1{1
1 1r1e1t1u1r1n1;1
1}1
1
1