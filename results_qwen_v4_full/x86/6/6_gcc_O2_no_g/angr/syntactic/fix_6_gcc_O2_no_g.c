// Angr Decompilation of 6_gcc_O2_no_g
// Platform: X86


/* CRT stub function _init removed by preprocessor */
typedef struct struct_0 {
 char padding_0[12];
 unsigned int field_8;
 unsigned int field_c;
 unsigned int field_10;
 unsigned int field_14;
 unsigned int field_18;
 unsigned int field_1c;
 unsigned int field_20;
 unsigned int field_24;
 unsigned int field_28;
 unsigned int field_2c;
 unsigned int field_30;
 unsigned int field_34;
 unsigned int field_38;
 unsigned int field_3c;
 unsigned int field_40;
 unsigned int field_44;
 unsigned int field_48;
 unsigned int field_4c;
 unsigned int field_50;
 unsigned int field_54;
 unsigned int field_58;
 unsigned int field_5c;
 unsigned int field_60;
 unsigned int field_64;
 unsigned int field_68;
 unsigned int field_6c;
 unsigned int field_70;
 unsigned int field_74;
 unsigned int field_78;
 unsigned int field_7c;
 unsigned int field_80;
 unsigned int field_84;
 unsigned int field_88;
 unsigned int field_8c;
 unsigned int field_90;
 unsigned int field_94;
 unsigned int field_98;
 unsigned int field_9c;
 unsigned int field_a0;
 unsigned int field_a4;
 unsigned int field_a8;
 unsigned int field_ac;
 unsigned int field_b0;
 unsigned int field_b4;
 unsigned int field_b8;
 unsigned int field_bc;
 unsigned int field_c0;
 unsigned int field_c4;
 unsigned int field_c8;
 unsigned int field_cc;
 unsigned int field_d0;
 unsigned int field_d4;
 unsigned int field_d8;
 unsigned int field_dc;
 unsigned int field_e0;
 unsigned int field_e4;
 unsigned int field_e8;
 unsigned int field_ec;
 unsigned int field_f0;
 char padding_1[4];
 unsigned int field_f8;
} struct_0;

extern unsigned int thread_tls_test(unsigned int a0);

extern struct_0 *g_406ff4;

// Forward declarations for thread functions
void * thread_sum(void *ptr);
void * thread_compute(void *a0);
void * thread_increment(void *ptr);
void * consumer_thread(void *arg);
void * producer_thread(void *arg);
unsigned int thread_atomic_increment();
void * thread_atomic_load_store();

// Forward declarations for internal functions
unsigned int __x86_get_pc_thunk_ax();
int __do_global_ctors_aux();

// Forward declarations for library test functions
unsigned int param_strcmp(unsigned int a0, unsigned int a1);
unsigned int call_strcmp();
unsigned int call_strlen();
void call_memcpy();
unsigned int call_memcmp();
int call_printf();
unsigned int param_scanf(unsigned int a0);
unsigned int call_scanf();
unsigned int param_fopen_fclose(unsigned int a0);
unsigned int call_fopen_fclose();
unsigned int param_fread_fwrite(unsigned int a0);
unsigned int call_fread_fwrite();
unsigned int param_malloc_free(unsigned int a0);
unsigned int call_malloc_free();
unsigned int param_memset(char *a0, unsigned int a1);
unsigned int call_memset();
int param_strchr_strstr(unsigned int a0, char a1, unsigned int a2);
unsigned int call_strchr_strstr();
unsigned int param_linux_syscall(unsigned int a0);
unsigned int call_linux_syscall();
unsigned int param_win32_api(unsigned int a0);
unsigned int call_win32_api();
unsigned int param_fork_exec(unsigned int a0, unsigned int a1);
int call_fork_exec();
unsigned int param_pipe_communication();
int call_pipe_communication();
unsigned int param_socket_create();
int call_socket_create();
unsigned int param_shmget_shmat();
unsigned int call_shmget_shmat();
unsigned int param_signal_handling();
int call_signal_handling();
unsigned int param_pthread_create(unsigned int a0);
unsigned int call_pthread_create();
unsigned int param_pthread_join();
int call_pthread_join();
unsigned int param_mutex_lock(unsigned int a0, unsigned int a1);
unsigned int call_mutex_lock();
unsigned int param_condition_variable();
int call_condition_variable();
unsigned int param_atomic_ops(unsigned int i);
unsigned int call_atomic_ops();
unsigned int param_thread_local_storage(unsigned int i);
unsigned int call_thread_local_storage();

// Atomic operation declarations
void atomic_fetch_add(unsigned int *ptr);
unsigned int atomic_compare_exchange(unsigned int *ptr, unsigned int expected, unsigned int desired);
void atomic_exchange(unsigned int *ptr, unsigned int val);

// Declaration for _ccall helper
unsigned int *_ccall(unsigned long ldt, unsigned long gdt, unsigned int gs, unsigned int offset);

unsigned int data;
unsigned int shared_counter;
unsigned int cond_mutex;
unsigned int cond;
unsigned int ready;
unsigned int counter_mutex;
unsigned int signal_received;
unsigned int signal_number;
unsigned int atomic_counter;
unsigned int i;

int _init()
{
 if (g_406ff4)
 ((void (*)())g_406ff4)();
 frame_dummy();
 return __do_global_ctors_aux();
}


// Function: sub_401030 at 0x401030
int sub_401030(unsigned int offset)
{
 return offset;
}


// Function: sub_401040 at 0x401040
int sub_401040()
{
 sub_401030(0);
 return;
}


// Function: sub_40104e at 0x40104e
void sub_40104e()
{
 sub_401050();
 return;
}


// Function: sub_401050 at 0x401050
int sub_401050()
{
 sub_401030(8);
 return;
}


// Function: sub_40105e at 0x40105e
void sub_40105e()
{
 sub_401060();
 return;
}


// Function: sub_401060 at 0x401060
int sub_401060()
{
 sub_401030(16);
 return;
}


// Function: sub_40106e at 0x40106e
void sub_40106e()
{
 sub_401070();
 return;
}


// Function: sub_401070 at 0x401070
int sub_401070()
{
 sub_401030(24);
 return;
}


// Function: sub_40107e at 0x40107e
void sub_40107e()
{
 sub_401080();
 return;
}


// Function: sub_401080 at 0x401080
int sub_401080()
{
 sub_401030(32);
 return;
}


// Function: sub_40108e at 0x40108e
void sub_40108e()
{
 sub_401090();
 return;
}


// Function: sub_401090 at 0x401090
int sub_401090()
{
 sub_401030(40);
 return;
}


// Function: sub_40109e at 0x40109e
void sub_40109e()
{
 sub_4010a0();
 return;
}


// Function: sub_4010a0 at 0x4010a0
int sub_4010a0()
{
 sub_401030(48);
 return;
}


// Function: sub_4010ae at 0x4010ae
void sub_4010ae()
{
 sub_4010b0();
 return;
}


// Function: sub_4010b0 at 0x4010b0
int sub_4010b0()
{
 sub_401030(56);
 return;
}


// Function: sub_4010be at 0x4010be
void sub_4010be()
{
 sub_4010c0();
 return;
}


// Function: sub_4010c0 at 0x4010c0
int sub_4010c0()
{
 sub_401030(64);
 return;
}


// Function: sub_4010ce at 0x4010ce
void sub_4010ce()
{
 sub_4010d0();
 return;
}


// Function: sub_4010d0 at 0x4010d0
int sub_4010d0()
{
 sub_401030(72);
 return;
}


// Function: sub_4010de at 0x4010de
void sub_4010de()
{
 sub_4010e0();
 return;
}


// Function: sub_4010e0 at 0x4010e0
int sub_4010e0()
{
 sub_401030(80);
 return;
}


// Function: sub_4010ee at 0x4010ee
void sub_4010ee()
{
 sub_4010f0();
 return;
}


// Function: sub_4010f0 at 0x4010f0
int sub_4010f0()
{
 sub_401030(88);
 return;
}


// Function: sub_4010fe at 0x4010fe
void sub_4010fe()
{
 sub_401100();
 return;
}


// Function: sub_401100 at 0x401100
int sub_401100()
{
 sub_401030(96);
 return;
}


// Function: sub_40110e at 0x40110e
void sub_40110e()
{
 sub_401110();
 return;
}


// Function: sub_401110 at 0x401110
int sub_401110()
{
 sub_401030(104);
 return;
}


// Function: sub_40111e at 0x40111e
void sub_40111e()
{
 sub_401120();
 return;
}


// Function: sub_401120 at 0x401120
int sub_401120()
{
 sub_401030(112);
 return;
}


// Function: sub_40112e at 0x40112e
void sub_40112e()
{
 sub_401130();
 return;
}


// Function: sub_401130 at 0x401130
int sub_401130()
{
 sub_401030(120);
 return;
}


// Function: sub_40113e at 0x40113e
void sub_40113e()
{
 sub_401140();
 return;
}


// Function: sub_401140 at 0x401140
int sub_401140()
{
 sub_401030(128);
 return;
}


// Function: sub_40114e at 0x40114e
void sub_40114e()
{
 sub_401150();
 return;
}


// Function: sub_401150 at 0x401150
int sub_401150()
{
 sub_401030(136);
 return;
}


// Function: sub_40115e at 0x40115e
void sub_40115e()
{
 sub_401160();
 return;
}


// Function: sub_401160 at 0x401160
int sub_401160()
{
 sub_401030(144);
 return;
}


// Function: sub_40116e at 0x40116e
void sub_40116e()
{
 sub_401170();
 return;
}


// Function: sub_401170 at 0x401170
int sub_401170()
{
 sub_401030(152);
 return;
}


// Function: sub_40117e at 0x40117e
void sub_40117e()
{
 sub_401180();
 return;
}


// Function: sub_401180 at 0x401180
int sub_401180()
{
 sub_401030(160);
 return;
}


// Function: sub_40118e at 0x40118e
void sub_40118e()
{
 sub_401190();
 return;
}


// Function: sub_401190 at 0x401190
int sub_401190()
{
 sub_401030(168);
 return;
}


// Function: sub_40119e at 0x40119e
void sub_40119e()
{
 sub_4011a0();
 return;
}


// Function: sub_4011a0 at 0x4011a0
int sub_4011a0()
{
 sub_401030(176);
 return;
}


// Function: sub_4011ae at 0x4011ae
void sub_4011ae()
{
 sub_4011b0();
 return;
}


// Function: sub_4011b0 at 0x4011b0
int sub_4011b0()
{
 sub_401030(184);
 return;
}


// Function: sub_4011be at 0x4011be
void sub_4011be()
{
 sub_4011c0();
 return;
}


// Function: sub_4011c0 at 0x4011c0
int sub_4011c0()
{
 sub_401030(192);
 return;
}


// Function: sub_4011ce at 0x4011ce
void sub_4011ce()
{
 sub_4011d0();
 return;
}


// Function: sub_4011d0 at 0x4011d0
int sub_4011d0()
{
 sub_401030(200);
 return;
}


// Function: sub_4011de at 0x4011de
void sub_4011de()
{
 sub_4011e0();
 return;
}


// Function: sub_4011e0 at 0x4011e0
int sub_4011e0()
{
 sub_401030(208);
 return;
}


// Function: sub_4011ee at 0x4011ee
void sub_4011ee()
{
 sub_4011f0();
 return;
}


// Function: sub_4011f0 at 0x4011f0
int sub_4011f0()
{
 sub_401030(216);
 return;
}


// Function: sub_4011fe at 0x4011fe
void sub_4011fe()
{
 sub_401200();
 return;
}


// Function: sub_401200 at 0x401200
int sub_401200()
{
 sub_401030(224);
 return;
}


// Function: sub_40120e at 0x40120e
void sub_40120e()
{
 sub_401210();
 return;
}


// Function: sub_401210 at 0x401210
int sub_401210()
{
 sub_401030(232);
 return;
}


// Function: sub_40121e at 0x40121e
void sub_40121e()
{
 sub_401220();
 return;
}


// Function: sub_401220 at 0x401220
int sub_401220()
{
 sub_401030(240);
 return;
}


// Function: sub_40122e at 0x40122e
void sub_40122e()
{
 sub_401230();
 return;
}


// Function: sub_401230 at 0x401230
int sub_401230()
{
 sub_401030(248);
 return;
}


// Function: sub_40123e at 0x40123e
void sub_40123e()
{
 sub_401240();
 return;
}


// Function: sub_401240 at 0x401240
int sub_401240()
{
 sub_401030(0x100);
 return;
}


// Function: sub_40124e at 0x40124e
void sub_40124e()
{
 sub_401250();
 return;
}


// Function: sub_401250 at 0x401250
int sub_401250()
{
 sub_401030(264);
 return;
}


// Function: sub_40125e at 0x40125e
void sub_40125e()
{
 sub_401260();
 return;
}


// Function: sub_401260 at 0x401260
int sub_401260()
{
 sub_401030(272);
 return;
}


// Function: sub_40126e at 0x40126e
void sub_40126e()
{
 sub_401270();
 return;
}


// Function: sub_401270 at 0x401270
int sub_401270()
{
 sub_401030(280);
 return;
}


// Function: sub_40127e at 0x40127e
void sub_40127e()
{
 sub_401280();
 return;
}


// Function: sub_401280 at 0x401280
int sub_401280()
{
 sub_401030(288);
 return;
}


// Function: sub_40128e at 0x40128e
void sub_40128e()
{
 sub_401290();
 return;
}


// Function: sub_401290 at 0x401290
int sub_401290()
{
 sub_401030(296);
 return;
}


// Function: sub_40129e at 0x40129e
void sub_40129e()
{
 sub_4012a0();
 return;
}


// Function: sub_4012a0 at 0x4012a0
int sub_4012a0()
{
 sub_401030(304);
 return;
}


// Function: sub_4012ae at 0x4012ae
void sub_4012ae()
{
 sub_4012b0();
 return;
}


// Function: sub_4012b0 at 0x4012b0
int sub_4012b0()
{
 sub_401030(312);
 return;
}


// Function: sub_4012be at 0x4012be
void sub_4012be()
{
 sub_4012c0();
 return;
}


// Function: sub_4012c0 at 0x4012c0
int sub_4012c0()
{
 sub_401030(320);
 return;
}


// Function: sub_4012ce at 0x4012ce
void sub_4012ce()
{
 sub_4012d0();
 return;
}


// Function: sub_4012d0 at 0x4012d0
int sub_4012d0()
{
 sub_401030(328);
 return;
}


// Function: sub_4012de at 0x4012de
void sub_4012de()
{
 sub_4012e0();
 return;
}


// Function: sub_4012e0 at 0x4012e0
int sub_4012e0()
{
 sub_401030(336);
 return;
}


// Function: sub_4012ee at 0x4012ee
void sub_4012ee()
{
 sub_4012f0();
 return;
}


// Function: sub_4012f0 at 0x4012f0
int sub_4012f0()
{
 sub_401030(344);
 return;
}


// Function: sub_4012fe at 0x4012fe
void sub_4012fe()
{
 sub_401300();
 return;
}


// Function: sub_401300 at 0x401300
int sub_401300()
{
 sub_401030(352);
 return;
}


// Function: sub_40130e at 0x40130e
void sub_40130e()
{
 sub_401310();
 return;
}


// Function: sub_401310 at 0x401310
int sub_401310()
{
 sub_401030(360);
 return;
}


// Function: sub_40131e at 0x40131e
void sub_40131e()
{
 sub_401320();
 return;
}


// Function: sub_401320 at 0x401320
int sub_401320()
{
 sub_401030(368);
 return;
}


// Function: sub_40132e at 0x40132e
void sub_40132e()
{
 sub_401330();
 return;
}


// Function: sub_401330 at 0x401330
int sub_401330()
{
 sub_401030(376);
 return;
}


// Function: sub_40133e at 0x40133e
void sub_40133e()
{
 sub_401340();
 return;
}


// Function: sub_401340 at 0x401340
int sub_401340()
{
 sub_401030(384);
 return;
}


// Function: sub_40134e at 0x40134e
void sub_40134e()
{
 sub_401350();
 return;
}


// Function: sub_401350 at 0x401350
int sub_401350()
{
 sub_401030(392);
 return;
}


// Function: sub_40135e at 0x40135e
void sub_40135e()
{
 sub_401360();
 return;
}


// Function: sub_401360 at 0x401360
int sub_401360()
{
 sub_401030(400);
 return;
}


// Function: sub_40136e at 0x40136e
void sub_40136e()
{
 sub_401370();
 return;
}


// Function: sub_401370 at 0x401370
int sub_401370()
{
 sub_401030(408);
 return;
}


// Function: sub_40137e at 0x40137e
void sub_40137e()
{
 sub_401380();
 return;
}


// Function: sub_401380 at 0x401380
int sub_401380()
{
 sub_401030(416);
 return;
}


// Function: sub_40138e at 0x40138e
void sub_40138e()
{
 sub_401390();
 return;
}


// Function: sub_401390 at 0x401390
int sub_401390()
{
 sub_401030(424);
 return;
}


// Function: sub_40139e at 0x40139e
void sub_40139e()
{
 sub_4013a0();
 return;
}


// Function: sub_4013a0 at 0x4013a0
int sub_4013a0()
{
 sub_401030(432);
 return;
}


// Function: sub_4013ae at 0x4013ae
void sub_4013ae()
{
 sub_4013b0();
 return;
}


// Function: sub_4013b0 at 0x4013b0
int sub_4013b0()
{
 sub_401030(440);
 return;
}


// Function: sub_4013be at 0x4013be
void sub_4013be()
{
 sub_4013c0();
 return;
}


// Function: sub_4013c0 at 0x4013c0
int sub_4013c0()
{
 sub_401030(448);
 return;
}


// Function: sub_4013ce at 0x4013ce
void sub_4013ce()
{
 sub_4013d0();
 return;
}


// Function: sub_4013d0 at 0x4013d0
int sub_4013d0()
{
 sub_401030(456);
 return;
}


// Function: sub_4013de at 0x4013de
int sub_4013de()
{
 sub_4013e0();
 return;
}


// Function: sub_4013e0 at 0x4013e0
int sub_4013e0()
{
 return ((int (*)())(g_406ff4->field_f8))();
}


// Function: sub_4013ea at 0x4013ea
int sub_4013ea()
{
 sub_4013f0();
 return;
}


// Function: sub_4013f0 at 0x4013f0
int sub_4013f0()
{
 return ((int (*)())g_406ff4->field_c)();
}


// Function: sub_4013fa at 0x4013fa
int sub_4013fa()
{
 sub_401400();
 return;
}


// Function: sub_401400 at 0x401400
int sub_401400()
{
 return ((int (*)())g_406ff4->field_10)();
}


// Function: sub_40140a at 0x40140a
int sub_40140a()
{
 sub_401410();
 return;
}


// Function: sub_401410 at 0x401410
int sub_401410()
{
 return ((int (*)())g_406ff4->field_14)();
}


// Function: sub_40141a at 0x40141a
int sub_40141a()
{
 sub_401420();
 return;
}


// Function: sub_401420 at 0x401420
int sub_401420()
{
 return ((int (*)())g_406ff4->field_18)();
}


// Function: sub_40142a at 0x40142a
int sub_40142a()
{
 sub_401430();
 return;
}


// Function: sub_401430 at 0x401430
int sub_401430()
{
 return ((int (*)())g_406ff4->field_1c)();
}


// Function: sub_40143a at 0x40143a
int sub_40143a()
{
 sub_401440();
 return;
}


// Function: sub_401440 at 0x401440
int sub_401440()
{
 return ((int (*)())g_406ff4->field_20)();
}


// Function: sub_40144a at 0x40144a
int sub_40144a()
{
 sub_401450();
 return;
}


// Function: sub_401450 at 0x401450
int sub_401450()
{
 return ((int (*)())g_406ff4->field_24)();
}


// Function: sub_40145a at 0x40145a
int sub_40145a()
{
 sub_401460();
 return;
}


// Function: sub_401460 at 0x401460
int sub_401460()
{
 return ((int (*)())g_406ff4->field_28)();
}


// Function: sub_40146a at 0x40146a
int sub_40146a()
{
 sub_401470();
 return;
}


// Function: sub_401470 at 0x401470
int sub_401470()
{
 return ((int (*)())g_406ff4->field_2c)();
}


// Function: sub_40147a at 0x40147a
int sub_40147a()
{
 sub_401480();
 return;
}


// Function: sub_401480 at 0x401480
int sub_401480()
{
 return ((int (*)())g_406ff4->field_30)();
}


// Function: sub_40148a at 0x40148a
int sub_40148a()
{
 sub_401490();
 return;
}


// Function: sub_401490 at 0x401490
int sub_401490()
{
 return ((int (*)())g_406ff4->field_34)();
}


// Function: sub_40149a at 0x40149a
int sub_40149a()
{
 sub_4014a0();
 return;
}


// Function: sub_4014a0 at 0x4014a0
int sub_4014a0()
{
 return ((int (*)())g_406ff4->field_38)();
}


// Function: sub_4014aa at 0x4014aa
int sub_4014aa()
{
 sub_4014b0();
 return;
}


// Function: sub_4014b0 at 0x4014b0
int sub_4014b0()
{
 return ((int (*)())g_406ff4->field_3c)();
}


// Function: sub_4014ba at 0x4014ba
int sub_4014ba()
{
 sub_4014c0();
 return;
}


// Function: sub_4014c0 at 0x4014c0
int sub_4014c0()
{
 return ((int (*)())g_406ff4->field_40)();
}


// Function: sub_4014ca at 0x4014ca
int sub_4014ca()
{
 sub_4014d0();
 return;
}


// Function: sub_4014d0 at 0x4014d0
int sub_4014d0()
{
 return ((int (*)())g_406ff4->field_44)();
}


// Function: sub_4014da at 0x4014da
int sub_4014da()
{
 sub_4014e0();
 return;
}


// Function: sub_4014e0 at 0x4014e0
int sub_4014e0()
{
 return ((int (*)())g_406ff4->field_48)();
}


// Function: sub_4014ea at 0x4014ea
int sub_4014ea()
{
 sub_4014f0();
 return;
}


// Function: sub_4014f0 at 0x4014f0
int sub_4014f0()
{
 return ((int (*)())g_406ff4->field_4c)();
}


// Function: sub_4014fa at 0x4014fa
int sub_4014fa()
{
 sub_401500();
 return;
}


// Function: sub_401500 at 0x401500
int sub_401500()
{
 return ((int (*)())g_406ff4->field_50)();
}


// Function: sub_40150a at 0x40150a
int sub_40150a()
{
 sub_401510();
 return;
}


// Function: sub_401510 at 0x401510
int sub_401510()
{
 return ((int (*)())g_406ff4->field_54)();
}


// Function: sub_40151a at 0x40151a
int sub_40151a()
{
 sub_401520();
 return;
}


// Function: sub_401520 at 0x401520
int sub_401520()
{
 return ((int (*)())g_406ff4->field_58)();
}


// Function: sub_40152a at 0x40152a
int sub_40152a()
{
 sub_401530();
 return;
}


// Function: sub_401530 at 0x401530
int sub_401530()
{
 return ((int (*)())g_406ff4->field_5c)();
}


// Function: sub_40153a at 0x40153a
int sub_40153a()
{
 sub_401540();
 return;
}


// Function: sub_401540 at 0x401540
int sub_401540()
{
 return ((int (*)())g_406ff4->field_60)();
}


// Function: sub_40154a at 0x40154a
int sub_40154a()
{
 sub_401550();
 return;
}


// Function: sub_401550 at 0x401550
int sub_401550()
{
 return ((int (*)())g_406ff4->field_64)();
}


// Function: sub_40155a at 0x40155a
int sub_40155a()
{
 sub_401560();
 return;
}


// Function: sub_401560 at 0x401560
int sub_401560()
{
 return ((int (*)())g_406ff4->field_68)();
}


// Function: sub_40156a at 0x40156a
int sub_40156a()
{
 sub_401570();
 return;
}


// Function: sub_401570 at 0x401570
int sub_401570()
{
 return ((int (*)())g_406ff4->field_6c)();
}


// Function: sub_40157a at 0x40157a
int sub_40157a()
{
 sub_401580();
 return;
}


// Function: sub_401580 at 0x401580
int sub_401580()
{
 return ((int (*)())g_406ff4->field_70)();
}


// Function: sub_40158a at 0x40158a
int sub_40158a()
{
 sub_401590();
 return;
}


// Function: sub_401590 at 0x401590
int sub_401590()
{
 return ((int (*)())g_406ff4->field_74)();
}


// Function: sub_40159a at 0x40159a
int sub_40159a()
{
 sub_4015a0();
 return;
}


// Function: sub_4015a0 at 0x4015a0
int sub_4015a0()
{
 return ((int (*)())g_406ff4->field_78)();
}


// Function: sub_4015aa at 0x4015aa
int sub_4015aa()
{
 sub_4015b0();
 return;
}


// Function: sub_4015b0 at 0x4015b0
int sub_4015b0()
{
 return ((int (*)())g_406ff4->field_7c)();
}


// Function: sub_4015ba at 0x4015ba
int sub_4015ba()
{
 sub_4015c0();
 return;
}


// Function: sub_4015c0 at 0x4015c0
int sub_4015c0()
{
 return ((int (*)())g_406ff4->field_80)();
}


// Function: sub_4015ca at 0x4015ca
int sub_4015ca()
{
 sub_4015d0();
 return;
}


// Function: sub_4015d0 at 0x4015d0
int sub_4015d0()
{
 return ((int (*)())g_406ff4->field_84)();
}


// Function: sub_4015da at 0x4015da
int sub_4015da()
{
 sub_4015e0();
 return;
}


// Function: sub_4015e0 at 0x4015e0
int sub_4015e0()
{
 return ((int (*)())g_406ff4->field_88)();
}


// Function: sub_4015ea at 0x4015ea
int sub_4015ea()
{
 sub_4015f0();
 return;
}


// Function: sub_4015f0 at 0x4015f0
int sub_4015f0()
{
 return ((int (*)())g_406ff4->field_8c)();
}


// Function: sub_4015fa at 0x4015fa
int sub_4015fa()
{
 sub_401600();
 return;
}


// Function: sub_401600 at 0x401600
int sub_401600()
{
 return ((int (*)())g_406ff4->field_90)();
}


// Function: sub_40160a at 0x40160a
int sub_40160a()
{
 sub_401610();
 return;
}


// Function: sub_401610 at 0x401610
int sub_401610()
{
 return ((int (*)())g_406ff4->field_94)();
}


// Function: sub_40161a at 0x40161a
int sub_40161a()
{
 sub_401620();
 return;
}


// Function: sub_401620 at 0x401620
int sub_401620()
{
 return ((int (*)())g_406ff4->field_98)();
}


// Function: sub_40162a at 0x40162a
int sub_40162a()
{
 sub_401630();
 return;
}


// Function: sub_401630 at 0x401630
int sub_401630()
{
 return ((int (*)())g_406ff4->field_9c)();
}


// Function: sub_40163a at 0x40163a
int sub_40163a()
{
 sub_401640();
 return;
}


// Function: sub_401640 at 0x401640
int sub_401640()
{
 return ((int (*)())g_406ff4->field_a0)();
}


// Function: sub_40164a at 0x40164a
int sub_40164a()
{
 sub_401650();
 return;
}


// Function: sub_401650 at 0x401650
int sub_401650()
{
 return ((int (*)())g_406ff4->field_a4)();
}


// Function: sub_40165a at 0x40165a
int sub_40165a()
{
 sub_401660();
 return;
}


// Function: sub_401660 at 0x401660
int sub_401660()
{
 return ((int (*)())g_406ff4->field_a8)();
}


// Function: sub_40166a at 0x40166a
int sub_40166a()
{
 sub_401670();
 return;
}


// Function: sub_401670 at 0x401670
int sub_401670()
{
 return ((int (*)())g_406ff4->field_ac)();
}


// Function: sub_40167a at 0x40167a
int sub_40167a()
{
 sub_401680();
 return;
}


// Function: sub_401680 at 0x401680
int sub_401680()
{
 return ((int (*)())g_406ff4->field_b0)();
}


// Function: sub_40168a at 0x40168a
int sub_40168a()
{
 sub_401690();
 return;
}


// Function: sub_401690 at 0x401690
int sub_401690()
{
 return ((int (*)())g_406ff4->field_b4)();
}


// Function: sub_40169a at 0x40169a
int sub_40169a()
{
 sub_4016a0();
 return;
}


// Function: sub_4016a0 at 0x4016a0
int sub_4016a0()
{
 return ((int (*)())g_406ff4->field_b8)();
}


// Function: sub_4016aa at 0x4016aa
int sub_4016aa()
{
 sub_4016b0();
 return;
}


// Function: sub_4016b0 at 0x4016b0
int sub_4016b0()
{
 return ((int (*)())g_406ff4->field_bc)();
}


// Function: sub_4016ba at 0x4016ba
int sub_4016ba()
{
 sub_4016c0();
 return;
}


// Function: sub_4016c0 at 0x4016c0
int sub_4016c0()
{
 return ((int (*)())g_406ff4->field_c0)();
}


// Function: sub_4016ca at 0x4016ca
int sub_4016ca()
{
 sub_4016d0();
 return;
}


// Function: sub_4016d0 at 0x4016d0
int sub_4016d0()
{
 return ((int (*)())g_406ff4->field_c4)();
}


// Function: sub_4016da at 0x4016da
int sub_4016da()
{
 sub_4016e0();
 return;
}


// Function: sub_4016e0 at 0x4016e0
int sub_4016e0()
{
 return ((int (*)())g_406ff4->field_c8)();
}


// Function: sub_4016ea at 0x4016ea
int sub_4016ea()
{
 sub_4016f0();
 return;
}


// Function: sub_4016f0 at 0x4016f0
int sub_4016f0()
{
 return ((int (*)())g_406ff4->field_cc)();
}


// Function: sub_4016fa at 0x4016fa
int sub_4016fa()
{
 sub_401700();
 return;
}


// Function: sub_401700 at 0x401700
int sub_401700()
{
 return ((int (*)())g_406ff4->field_d0)();
}


// Function: sub_40170a at 0x40170a
int sub_40170a()
{
 sub_401710();
 return;
}


// Function: sub_401710 at 0x401710
int sub_401710()
{
 return ((int (*)())g_406ff4->field_d4)();
}


// Function: sub_40171a at 0x40171a
int sub_40171a()
{
 sub_401720();
 return;
}


// Function: sub_401720 at 0x401720
int sub_401720()
{
 return ((int (*)())g_406ff4->field_d8)();
}


// Function: sub_40172a at 0x40172a
int sub_40172a()
{
 sub_401730();
 return;
}


// Function: sub_401730 at 0x401730
int sub_401730()
{
 return ((int (*)())g_406ff4->field_dc)();
}


// Function: sub_40173a at 0x40173a
int sub_40173a()
{
 sub_401740();
 return;
}


// Function: sub_401740 at 0x401740
int sub_401740()
{
 return ((int (*)())g_406ff4->field_e0)();
}


// Function: sub_40174a at 0x40174a
int sub_40174a()
{
 sub_401750();
 return;
}


// Function: sub_401750 at 0x401750
int sub_401750()
{
 return ((int (*)())g_406ff4->field_e4)();
}


// Function: sub_40175a at 0x40175a
int sub_40175a()
{
 sub_401760();
 return;
}


// Function: sub_401760 at 0x401760
int sub_401760()
{
 return ((int (*)())g_406ff4->field_e8)();
}


// Function: sub_40176a at 0x40176a
int sub_40176a()
{
 sub_401770();
 return;
}


// Function: sub_401770 at 0x401770
int sub_401770()
{
 return ((int (*)())g_406ff4->field_ec)();
}


// Function: sub_40177a at 0x40177a
int sub_40177a()
{
 sub_401780();
 return;
}


// Function: sub_401780 at 0x401780
int sub_401780()
{
 return ((int (*)())g_406ff4->field_f0)();
}


// Function: sub_40178a at 0x40178a
void sub_40178a()
{
 main();
 return;
}


// Function: main at 0x401790
int main()
{
 char v0; // [bp+0x0]

 test_standard_library_functions(&v0);
 test_system_calls(&v0);
 test_thread_concurrency();
 return 0;
}


// Function: sub_4017ad at 0x4017ad
void sub_4017ad()
{
 _start(); /* do not return */
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_4017dc at 0x4017dc
void sub_4017dc()
{
 return;
}


// Function: __x86.get_pc_thunk_bx at 0x4017e0
void __x86.get_pc_thunk_bx()
{
 return;
}


// Function: sub_4017e4 at 0x4017e4
void sub_4017e4()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */


// Function: sub_401823 at 0x401823
void sub_401823()
{
}


// Function: sub_401829 at 0x401829
void sub_401829()
{
 register_tm_clones();
 return;
}



/* CRT stub function register_tm_clones removed by preprocessor */


// Function: sub_401877 at 0x401877
void sub_401877()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */

void __do_global_dtors_aux()
{
 unsigned int *v5; // eax
 struct_0 *v6; // edi
 char *ptr; // edi
 unsigned int v8; // esi
 unsigned int v9; // ebx
 char *v10; // esi
 unsigned int v11; // eax
 unsigned int i; // ebx
 unsigned int v13; // eax
 unsigned int *v14; // eax
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]
 char v2; // [bp-0x8]
 char v3; // [bp+0x0]

 v5 = __x86_get_pc_thunk_di(*((int *)&v2));
 v6 = g_406ff4;
 ptr = &v6->padding_0[22123];
 v1 = v8;
 v0 = v9;
 if (ptr[296])
 return;
 if (*((int *)&ptr[248]))
 sub_4013e0(*((int *)&ptr[268]));
 v10 = &ptr[224];
 v11 = *((int *)&ptr[300]);
 i = ((unsigned int)(&ptr[220]) - (unsigned int)v10 >> 2) - 1;
 if (*((int *)&ptr[300]) < i)
 {
 do
 {
 v13 = v11 + 1;
 *((unsigned int *)&ptr[300]) = v13;
 ((void (*)())*((int *)&v10[4 * v13]))();
 v11 = *((int *)&ptr[300]);
 } while (*((int *)&ptr[300]) < i);
 }
 ptr[296] = 1;
 return;
}


// Function: sub_40190a at 0x40190a
void sub_40190a()
{
 frame_dummy();
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: __x86_get_pc_thunk_dx at 0x401919
void __x86_get_pc_thunk_dx()
{
 return;
}


// Function: __x86_get_pc_thunk_di at 0x40191d
int __x86_get_pc_thunk_di(int a0)
{
 return a0;
}


// Function: sub_401921 at 0x401921
void sub_401921()
{
 signal_handler();
 return;
}


// Function: signal_handler at 0x401930
void signal_handler(unsigned int a0)
{
 struct_0 *ptr; // eax

 ptr = __x86_get_pc_thunk_ax() + 21951;
 *((unsigned int *)&ptr->padding_0[464]) = 1;
 *((unsigned int *)&ptr->padding_0[460]) = a0;
 return;
}


// Function: sub_401953 at 0x401953
int sub_401953()
{
 thread_sum((void *)0);
 return 0;
}


// Function: thread_sum at 0x401960
void * thread_sum(void *ptr)
{
 unsigned int i; // eax
 unsigned int v1; // ecx
 unsigned int v2; // edx

 i = ((unsigned int *)ptr)[0];
 v1 = ((unsigned int *)ptr)[1];
 ((unsigned int *)ptr)[2] = 0;
 if (i > v1)
 return (void *)0;
 v2 = 0;
 do
 {
 v2 += i;
 i += 1;
 } while (i != v1 + 1);
 ((unsigned int *)ptr)[2] = v2;
 return (void *)0;
}


// Function: thread_compute at 0x401990
void * thread_compute(void *a0)
{
 unsigned int *ptr; // eax

 ptr = sub_4015e0(4);
 *(ptr) = *(a0) * *(a0);
 return ptr;
}


// Function: sub_4019bc at 0x4019bc
int sub_4019bc()
{
 thread_increment(&shared_counter);
 return 0;
}


// Function: thread_increment at 0x4019c0
void * thread_increment(void *ptr)
{
 unsigned int i; // edi
 unsigned int v1; // ebp

 i = *((unsigned int *)ptr);
 if (i <= 0)
 return (void *)0;
 v1 = 0;
 do
 {
 v1 += 1;
 (void)sub_401560(&counter_mutex);
 shared_counter = shared_counter + 1;
 (void)sub_401400(&counter_mutex);
 sub_4015a0(1000);
 } while (i != v1);
 return (void *)0;
}


// Function: consumer_thread at 0x401a30
void * consumer_thread(void *arg)
{
 unsigned int *ptr; // eax

 sub_401560(&cond_mutex);
 if (!i)
 {
 do
 {
 sub_4014c0(&cond, &cond_mutex);
 } while (!i);
 }
 sub_401400(&cond_mutex);
 ptr = sub_4015e0(4);
 *(ptr) = data;
 return ptr;
}


// Function: sub_401aa3 at 0x401aa3
int sub_401aa3()
{
 producer_thread((void *)0);
 return 0;
}


// Function: producer_thread at 0x401ab0
void * producer_thread(void *arg)
{
 sub_4014f0(1);
 sub_401560(&cond_mutex);
 data = 42;
 ready = 1;
 sub_4015d0(&cond);
 sub_401400(&cond_mutex);
 return 0;
}


// Function: sub_401b0b at 0x401b0b
void sub_401b0b()
{
 thread_atomic_increment();
 return;
}


// Function: thread_atomic_increment at 0x401b10
unsigned int thread_atomic_increment()
{
 unsigned int v2; // ecx
 unsigned int v3; // ecx
 unsigned int v4; // esi
 unsigned int v5; // ebx
 unsigned int i; // edx
 unsigned int v0; // [bp-0x8]
 unsigned int v1; // [bp-0x4]

 (void)__x86_get_pc_thunk_cx();
 v3 = v2 + 21471;
 v1 = v4;
 v0 = v5;
 if (atomic_counter <= 0)
 return 0;
 i = 0;
 do
 {
 atomic_fetch_add(&atomic_counter);
 atomic_compare_exchange(&atomic_counter, i + 1000, i);
 i += 1;
 } while (atomic_counter != i);
 return 0;
}


// Function: sub_401b54 at 0x401b54
void sub_401b54()
{
 thread_atomic_load_store();
 return;
}


// Function: thread_atomic_load_store at 0x401b60
void * thread_atomic_load_store()
{
 struct_0 *v1; // edx

 (void)__x86_get_pc_thunk_dx();
 atomic_exchange(&atomic_counter, atomic_counter + 100);
 return (void *)0;
}


// Function: sub_401b81 at 0x401b81
int sub_401b81()
{
 thread_tls_test(0);
 return 0;
}


// Function: thread_tls_test at 0x401b90
unsigned int thread_tls_test(unsigned int a0)
{
 unsigned long v0; // ldt
 unsigned long v1; // gdt
 unsigned short v2; // gs
 unsigned int v3; // eax
 unsigned int v4; // edi
 unsigned int v5; // esi
 unsigned int *ptr; // eax

 v3 = 0xffffffe0 + *((int *)_ccall(v0, v1, (unsigned int)v2, 0));
 v4 = *((int *)_ccall(v0, v1, (unsigned int)v2, 4294967260));
 v5 = v4 + 50;
 *((unsigned int *)_ccall(v0, v1, (unsigned int)v2, 4294967260)) = v5;
 (void)sub_4016a0(v3, a0, 31);
 ptr = sub_4015e0(8);
 ptr[0] = v4;
 ptr[1] = v5;
 return v5;
}


// Function: sub_401be7 at 0x401be7
int sub_401be7()
{
 param_strcpy(0, 0);
 return 0;
}


// Function: param_strcpy at 0x401bf0
int param_strcpy(unsigned int a0, unsigned int a1)
{
 return sub_401510(a0, a1) - a0;
}


// Function: sub_401c1a at 0x401c1a
void sub_401c1a()
{
 int result = call_strcpy();
 (void)result;
}


// Function: call_strcpy at 0x401c20
int call_strcpy()
{
 return 8;
}


// Function: sub_401c2a at 0x401c2a
int sub_401c2a()
{
 param_strcmp(0, 0);
 return 0;
}


// Function: param_strcmp at 0x401c30
unsigned int param_strcmp(unsigned int a0, unsigned int a1)
{
 unsigned int v1; // ebx
 unsigned int v2; // edx
 unsigned int v0; // [bp-0x4]

 v0 = v1;
 v2 = sub_401440(a0, a1);
 if (!((char)_ccall(15, 15, v2, 0)))
 return -(v2);
 return 1;
}


// Function: sub_401c6a at 0x401c6a
void sub_401c6a()
{
 call_strcmp();
}


// Function: call_strcmp at 0x401c70
unsigned int call_strcmp()
{
 return 0;
}


// Function: sub_401c77 at 0x401c77
int sub_401c77()
{
 param_strlen(0);
 return 0;
}


// Function: param_strlen at 0x401c80
void param_strlen(unsigned int a0)
{
 sub_401630(a0);
 return;
}


// Function: sub_401ca1 at 0x401ca1
void sub_401ca1()
{
 call_strlen();
}


// Function: call_strlen at 0x401cb0
unsigned int call_strlen()
{
 return 12;
}


// Function: sub_401cba at 0x401cba
int sub_401cba()
{
 param_memcpy(0, 0, 0);
 return 0;
}


// Function: param_memcpy at 0x401cc0
void param_memcpy(unsigned int a0, unsigned int a1, unsigned int a2)
{
 sub_401490(a0, a1, a2);
 return;
}


// Function: sub_401cee at 0x401cee
void sub_401cee()
{
 call_memcpy();
}


// Function: call_memcpy at 0x401cf0
void call_memcpy()
{
 return;
}


// Function: sub_401cfa at 0x401cfa
int sub_401cfa()
{
 param_memcmp(0, 0, 0);
 return 0;
}


// Function: param_memcmp at 0x401d00
int param_memcmp(unsigned int a0, unsigned int a1, unsigned int a2)
{
 unsigned int v1; // ebx
 unsigned int v2; // edx
 unsigned int v0; // [bp-0x4]

 v0 = v1;
 v2 = sub_4014e0(a0, a1, a2);
 if (!((char)_ccall(15, 15, v2, 0)))
 return -(v2);
 return 1;
}


// Function: sub_401d3e at 0x401d3e
int sub_401d3e()
{
 call_memcmp();
 return 0;
}


// Function: call_memcmp at 0x401d40
unsigned int call_memcmp()
{
 unsigned long v11; // ldt
 unsigned long v12; // gdt
 unsigned short v13; // gs
 unsigned int v14; // eax
 char v15; // sil
 unsigned int v16; // eax
 char v17; // al
 unsigned int result; // [bp-0x34]
 unsigned int v1; // [bp-0x30]
 unsigned int v2; // [bp-0x2c]
 unsigned int flag1; // [bp-0x28]
 unsigned int v4; // [bp-0x24]
 unsigned int v5; // [bp-0x20]
 unsigned int flag2; // [bp-0x1c]
 unsigned int v7; // [bp-0x18]
 unsigned int v8; // [bp-0x14]
 unsigned int v9; // [bp-0x10]

 v9 = *((int *)_ccall(v11, v12, (unsigned int)v13, 20));
 result = 1;
 v1 = 2;
 v2 = 3;
 flag1 = 1;
 v4 = 2;
 v5 = 4;
 flag2 = 1;
 v7 = 2;
 v8 = 3;
 sub_4014e0(&result, &flag1, 12);
 v15 = 1;
 v16 = sub_4014e0(0, 0, 0);
 v17 = 1;
 if (v9 != *((int *)_ccall(v11, v12, (unsigned int)v13, 20)))
 {
 __stack_chk_fail_local();
 return 0;
 }
 return v17 + v15;
}


// Function: param_printf at 0x401e20
int param_printf(unsigned int a0, unsigned int a1)
{
 return sub_4016f0(1, "Value: %d, Name: %s\n", a0, a1);
}


// Function: sub_401e4e at 0x401e4e
int sub_401e4e()
{
 call_printf();
 return 0;
}


// Function: call_printf at 0x401e50
int call_printf()
{
 return sub_4016f0(1, "Value: %d, Name: %s\n", 42, "Test");
}


// Function: sub_401e7f at 0x401e7f
int sub_401e7f()
{
 param_scanf(0);
 return 0;
}


// Function: param_scanf at 0x401e80
unsigned int param_scanf(unsigned int a0)
{
 unsigned long v3; // ldt
 unsigned long v4; // gdt
 unsigned short v5; // gs
 unsigned int v6; // eax
 char v0; // [bp-0x18]
 char v1; // [bp-0x14]
 unsigned int v2; // [bp-0x10]

 v2 = *((int *)_ccall(v3, v4, (unsigned int)v5, 20));
 v6 = (sub_401660(a0, "%d,%d", &v0, &v1) == 2 ? v1 + v0 : 4294967295);
 if (v2 != *((int *)_ccall(v3, v4, (unsigned int)v5, 20)))
 {
 __stack_chk_fail_local();
 return call_scanf();
 }
 return v6;
}


// Function: sub_401edb at 0x401edb
void sub_401edb()
{
}


// Function: call_scanf at 0x401ef0
unsigned int call_scanf()
{
 unsigned long v4; // ldt
 unsigned long v5; // gdt
 unsigned short v6; // gs
 unsigned int v7; // eax
 char v0; // [bp-0x18]
 char v1; // [bp-0x14]
 unsigned int v2; // [bp-0x10]

 v2 = *((int *)_ccall(v4, v5, (unsigned int)v6, 20));
 v7 = (sub_401660("123,456", "%d,%d", &v0, &v1) == 2 ? v1 + v0 : 4294967295);
 if (v2 != *((int *)_ccall(v4, v5, (unsigned int)v6, 20)))
 {
 __stack_chk_fail_local();
 return param_fopen_fclose(0);
 }
 return v7;
}


// Function: sub_401f4e at 0x401f4e
void sub_401f4e()
{
}


// Function: param_fopen_fclose at 0x401f60
unsigned int param_fopen_fclose(unsigned int a0)
{
 unsigned int result; // eax
 unsigned int v1; // eax

 result = sub_401670(a0, "r");
 if (!result)
 return 4294967295;
 v1 = sub_4016c0(result);
 sub_4014b0(result);
 return v1;
}


// Function: sub_401faf at 0x401faf
int sub_401faf()
{
 call_fopen_fclose();
 return 0;
}


// Function: call_fopen_fclose at 0x401fb0
unsigned int call_fopen_fclose()
{
 unsigned int result; // eax
 unsigned int v2; // eax

 result = sub_401670("/etc/passwd", "r");
 if (result)
 {
 v2 = sub_4016c0(result);
 sub_4014b0(result);
 if (v2 >= 0)
 return 42;
 }
 return 4294967295;
}


// Function: sub_402004 at 0x402004
void sub_402004()
{
}


// Function: sub_40200f at 0x40200f
int sub_40200f()
{
 param_fread_fwrite(0);
 return 0;
}


// Function: param_fread_fwrite at 0x402010
unsigned int param_fread_fwrite(unsigned int a0)
{
 unsigned long v4; // ldt
 unsigned long v5; // gdt
 unsigned short v6; // gs
 unsigned int result; // eax
 unsigned int v8; // esi
 unsigned int v9; // eax
 unsigned int v10; // eax
 unsigned int v0; // [bp-0x54]
 char *v1; // [bp-0x50]
 char v2; // [bp-0x40]
 unsigned int v3; // [bp-0x20]

 v3 = *((int *)_ccall(v4, v5, (unsigned int)v6, 20));
 result = sub_401670(a0, "w+");
 if (result)
 {
 v8 = result;
 if (sub_401580("BinBench Test Data", 1, 18, result) == 18)
 {
 sub_401530(v8);
 v1 = &v2;
 v9 = sub_4015b0(&v2, 1, 18, v8);
 (&v2)[v9] = 0;
 v0 = v9;
 sub_4014b0(v8);
 sub_401570(a0);
 v10 = (v0 == 18 ? (-(sub_401440(v1, "BinBench Test Data") < 1) & 45) - 3 : 4294967293);
 }
 else
 {
 sub_4014b0(v8);
 v10 = 4294967294;
 }
 }
 else
 {
 v10 = 4294967295;
 }
 if (v3 != *((int *)_ccall(v4, v5, (unsigned int)v6, 20)))
 {
 __stack_chk_fail_local();
 return call_fread_fwrite();
 }
 return v10;
}


// Function: sub_4020e7 at 0x4020e7
void sub_4020e7()
{
}


// Function: call_fread_fwrite at 0x402110
unsigned int call_fread_fwrite()
{
 return param_fread_fwrite(__x86_get_pc_thunk_ax() - -7995);
}


// Function: sub_402131 at 0x402131
int sub_402131()
{
 param_malloc_free(0);
 return 0;
}


// Function: param_malloc_free at 0x402140
unsigned int param_malloc_free(unsigned int a0)
{
 unsigned int v0; // edi
 unsigned int *result; // eax
 unsigned int i; // eax
 unsigned int *ptr; // edx

 v0 = a0 * 4;
 result = sub_4015e0(v0);
 if (!result)
 return 4294967295;
 if (a0)
 {
 i = 0;
 ptr = result;
 do
 {
 *(ptr) = i;
 i += 10;
 ptr += 1;
 } while ((v0 + a0) * 2 != i);
 }
 sub_401480(result);
 return *(result) + *((int *)(-4 + (char *)result + v0));
}


// Function: sub_4021ae at 0x4021ae
int sub_4021ae()
{
 call_malloc_free();
 return 0;
}


// Function: call_malloc_free at 0x4021b0
unsigned int call_malloc_free()
{
 unsigned int *result; // eax
 unsigned int i; // edx
 unsigned int *ptr; // ecx

 result = sub_4015e0(40);
 if (!result)
 return 4294967295;
 i = 0;
 ptr = result;
 do
 {
 ptr[0] = i;
 i += 10;
 ptr = &ptr[1];
 } while (i != 100);
 sub_401480(result);
 return result[9] + result[0];
}


// Function: sub_40220b at 0x40220b
int sub_40220b()
{
 param_memset(0, 0);
 return 0;
}


// Function: param_memset at 0x402210
unsigned int param_memset(char *a0, unsigned int a1)
{
 char *v0; // esi
 unsigned int v1; // edx
 char *i; // eax
 unsigned int v3; // edx
 char *ptr; // eax
 char *v5; // eax
 unsigned int v6; // edx

 v0 = a0;
 sub_401680(v0, 0, a1);
 if (!a1)
 return 0;
 v1 = 0;
 i = v0;
 do
 {
 v3 = v1;
 ptr = i;
 v5 = ptr + 1;
 v6 = v3 + *(ptr);
 i = v5;
 v1 = v6;
 } while (i != &v0[a1]);
 return v3 + *(ptr);
}


// Function: sub_40225a at 0x40225a
void sub_40225a()
{
}


// Function: sub_402268 at 0x402268
void sub_402268()
{
 call_memset();
 return;
}


// Function: call_memset at 0x402270
unsigned int call_memset()
{
 return 0;
}


// Function: sub_402277 at 0x402277
int sub_402277()
{
 param_strchr_strstr(0, 0, 0);
 return 0;
}


// Function: param_strchr_strstr at 0x402280
int param_strchr_strstr(unsigned int a0, char a1, unsigned int a2)
{
 unsigned int v3; // edi
 unsigned int v4; // esi
 unsigned int v5; // ebx
 unsigned int flag1; // eax
 unsigned int v7; // esi
 unsigned int result; // eax
 unsigned int v9; // eax
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]
 unsigned int v2; // [bp-0x8]

 v2 = v3;
 v1 = v4;
 v0 = v5;
 flag1 = sub_401620(a0, a1);
 v7 = flag1 - a0;
 if (!flag1)
 v7 = 4294967295;
 result = sub_401430();
 v9 = 4294967295;
 if (result)
 v9 = result - a0;
 return v9 + v7;
}


// Function: sub_4022d5 at 0x4022d5
void sub_4022d5()
{
 call_strchr_strstr();
}


// Function: call_strchr_strstr at 0x4022e0
unsigned int call_strchr_strstr()
{
 return 15;
}


// Function: sub_4022ea at 0x4022ea
int sub_4022ea()
{
 test_standard_library_functions(0);
 return 0;
}


// Function: test_standard_library_functions at 0x4022f0
int test_standard_library_functions()
{
 unsigned long v4; // ldt
 unsigned long v5; // gdt
 unsigned int *ptr; // eax
 unsigned int i; // edx
 unsigned int *p; // ecx
 unsigned int v19; // esi
 unsigned short v6; // gs
 unsigned int result; // eax
 unsigned int v12; // eax
 unsigned int v13; // eax
 char v0; // [bp-0x18]
 char v1; // [bp-0x14]
 unsigned int v2; // [bp-0x10]

 v2 = *((int *)_ccall(v4, v5, (unsigned int)v6, 20));
 sub_4015f0(&g_404390);
 sub_4016f0(1, &g_40406b, 8);
 sub_4016f0(1, &g_404086, call_strcmp());
 sub_4016f0(1, &g_4040a1, 12);
 sub_4016f0(1, &g_4040bd, 90);
 sub_4016f0(1, &g_4040d9, call_memcmp());
 sub_4016f0(1, &g_4040f5, sub_4016f0(1, "Value: %d, Name: %s\n", 42, "Test"));
 sub_4016f0(1, &g_404111, (sub_401660("123,456", "%d,%d", &v0, &v1) == 2 ? v1 + v0 : 4294967295));
 result = sub_401670("/etc/passwd", "r");
 if (result)
 {
 v12 = sub_4016c0(result);
 sub_4014b0(result);
 v13 = 42;
 if (v12 >= 0)
 goto LABEL_402435;
 }
 v13 = 4294967295;
LABEL_402435:
 sub_4016f0(1, &g_40412e, v13);
 sub_4016f0(1, &g_40414a, param_fread_fwrite("/tmp/binbench_test_tmp"));
 ptr = sub_4015e0(40);
 if (ptr)
 {
 i = 0;
 p = ptr;
 do
 {
 p[0] = i;
 i += 10;
 p = &p[1];
 } while (i != 100);
 v19 = ptr[9] + ptr[0];
 sub_401480(ptr);
 }
 while (1)
 {
 sub_4016f0(1, &g_404166, v19);
 sub_4016f0(1, &g_404182, call_memset());
 sub_4016f0(1, &g_40419d, 15);
 if (v2 == *((int *)_ccall(v4, v5, (unsigned int)v6, 20)))
 break;
 __stack_chk_fail_local();
 v19 = 4294967295;
 }
 return v2 - *((int *)_ccall(v4, v5, (unsigned int)v6, 20));
}


// Function: sub_402517 at 0x402517
int sub_402517()
{
 param_linux_syscall(0);
 return 0;
}


// Function: param_linux_syscall at 0x402520
unsigned int param_linux_syscall(unsigned int a0)
{
 unsigned int v0; // eax

 v0 = sub_4016b0(5, a0, 0);
 if (v0 < 0)
 return -(*((int *)sub_401690()));
 sub_4016b0(6, v0);
 return v0;
}


// Function: sub_402571 at 0x402571
int sub_402571()
{
 call_linux_syscall();
 return 0;
}


// Function: call_linux_syscall at 0x402580
unsigned int call_linux_syscall()
{
 unsigned int v1; // eax

 v1 = sub_4016b0(5, "/etc/passwd", 0);
 if (v1 < 0)
 return ((char)_ccall(15, 15, (unsigned int)*((int *)sub_401690()), 0) ? 4294967295 : 42);
 sub_4016b0(6, v1);
 return 42;
}


// Function: sub_4025c2 at 0x4025c2
void sub_4025c2()
{
}


// Function: sub_4025e3 at 0x4025e3
int sub_4025e3()
{
 param_win32_api(0);
 return 0;
}


// Function: param_win32_api at 0x4025f0
unsigned int param_win32_api(unsigned int a0)
{
 unsigned long v3; // ldt
 unsigned long v4; // gdt
 unsigned short v5; // gs
 unsigned int v6; // eax
 char v0; // [bp-0x68]
 char v1; // [bp-0x3c]
 unsigned int v2; // [bp-0x10]

 v2 = *((int *)_ccall(v3, v4, (unsigned int)v5, 20));
 v6 = (sub_401600(a0, &v0) < 0 ? 4294967295 : (*((int *)&v1) <= 0 ? 4294967294 : 42));
 if (v2 != *((int *)_ccall(v3, v4, (unsigned int)v5, 20)))
 {
 __stack_chk_fail_local();
 return call_win32_api();
 }
 return v6;
}


// Function: call_win32_api at 0x402660
unsigned int call_win32_api()
{
 unsigned long v4; // ldt
 unsigned long v5; // gdt
 unsigned short v6; // gs
 unsigned int v7; // eax
 char v0; // [bp-0x68]
 char v1; // [bp-0x3c]
 unsigned int v2; // [bp-0x10]

 v2 = *((int *)_ccall(v4, v5, (unsigned int)v6, 20));
 v7 = (sub_401600("/etc/passwd", &v0) < 0 ? 4294967295 : (*((int *)&v1) <= 0 ? 4294967294 : 42));
 if (v2 != *((int *)_ccall(v4, v5, (unsigned int)v6, 20)))
 {
 __stack_chk_fail_local();
 return param_fork_exec(0, 0);
 }
 return v7;
}


// Function: param_fork_exec at 0x4026d0
unsigned int param_fork_exec(unsigned int a0, unsigned int a1)
{
 unsigned long v2; // ldt
 unsigned long v3; // gdt
 unsigned short v4; // gs
 unsigned int result; // eax
 unsigned int v6; // eax
 char v0; // [bp-0x14], Other Possible Types: unsigned int
 unsigned int v1; // [bp-0x10]

 v1 = *((int *)_ccall(v2, v3, (unsigned int)v4, 20));
 result = sub_401720();
 if (result >= 0)
 {
 if (!result)
 goto LABEL_402754;
 v6 = 4294967294;
 if (sub_401590(result, &v0, 0) >= 0)
 {
 v6 = v0 >> 8 & 255;
 if (((char)v0 & 127))
 v6 = 4294967293;
 }
 }
 else
 {
 v6 = 4294967295;
 }
 if (v1 == *((int *)_ccall(v2, v3, (unsigned int)v4, 20)))
 return v6;
 __stack_chk_fail_local();
LABEL_402754:
 sub_4016d0(a0, a0, a1, 0);
 sub_401470(127);
 return call_fork_exec(127);
}


// Function: call_fork_exec at 0x402770
int call_fork_exec()
{
 return (-(param_fork_exec(__x86_get_pc_thunk_ax() - -6720, 0) < 1) & 43) - 1;
}


// Function: sub_40279e at 0x40279e
int sub_40279e()
{
 param_pipe_communication();
 return 0;
}


// Function: param_pipe_communication at 0x4027a0
unsigned int param_pipe_communication()
{
 unsigned int v10; // esi
 unsigned int v11; // ebx
 unsigned long v12; // ldt
 unsigned long v13; // gdt
 unsigned short v14; // gs
 unsigned int result; // eax
 unsigned int v16; // eax
 unsigned int v17; // eax
 unsigned int v0; // [bp-0x48]
 unsigned int v1; // [bp-0x44]
 char v2; // [bp-0x40]
 char v3; // [bp-0x38], Other Possible Types: unsigned int
 char v4; // [bp-0x34]
 char v5; // [bp-0x20]
 unsigned int v6; // [bp-0x10]
 unsigned int v7; // [bp-0x8]
 unsigned int v8; // [bp-0x4]

 v8 = v10;
 v7 = v11;
 v6 = *((int *)_ccall(v12, v13, (unsigned int)v14, 20));
 if (sub_4016e0(&v3) >= 0)
 {
 result = sub_401720();
 if (result >= 0)
 {
 if (!result)
 {
 sub_401780(v3);
 v1 = 9;
 v0 = "HelloPipe";
 sub_401640(*((int *)&v4), "HelloPipe", 9);
 sub_401780(*((int *)&v4));
 sub_401470(0);
 }
 sub_401780(v1);
 v16 = sub_401460(v0, &v2, 31);
 (&v2)[v16] = 0;
 sub_401780(v0);
 sub_401540(0);
 v17 = (v16 <= 0 ? 4294967293 : 42);
 }
 else
 {
 v17 = 4294967294;
 }
 }
 else
 {
 v17 = 4294967295;
 }
 if (*((int *)&v5) != *((int *)_ccall(v12, v13, (unsigned int)v14, 20)))
 {
 __stack_chk_fail_local();
 return call_pipe_communication();
 }
 return v17;
}


// Function: sub_402881 at 0x402881
void sub_402881()
{
}


// Function: call_pipe_communication at 0x4028a0
int call_pipe_communication()
{
 param_pipe_communication();
 return 0;
}


// Function: sub_4028a9 at 0x4028a9
int sub_4028a9()
{
 param_socket_create();
 return 0;
}


// Function: param_socket_create at 0x4028b0
unsigned int param_socket_create()
{
 unsigned long v8; // ldt
 unsigned long v9; // gdt
 unsigned short v10; // gs
 unsigned int v11; // eax
 unsigned int v12; // esi
 unsigned int v13; // eax
 unsigned int result; // [bp-0x24]
 unsigned int v1; // [bp-0x20]
 unsigned short v2; // [bp-0x20]
 unsigned int flag1; // [bp-0x1c]
 unsigned int flag2; // [bp-0x18]
 unsigned int flag3; // [bp-0x14]
 unsigned int v6; // [bp-0x10]

 v6 = *((int *)_ccall(v8, v9, (unsigned int)v10, 20));
 v11 = sub_401750(2, 1, 0);
 if (v11 >= 0)
 {
 result = 1;
 v12 = v11;
 if (sub_4013f0(v12, 1, 2, &result, 4) >= 0)
 {
 v1 = 0;
 flag1 = 0;
 flag2 = 0;
 flag3 = 0;
 v2 = 2;
 v1 = v1 & 0xffff0000 | v2;
 if (sub_401650(v12, &v1, 16) < 0)
 {
 sub_401780(v12);
 v13 = 4294967293;
 }
 else if (sub_401730(v12, 5) >= 0)
 {
 sub_401780(v12);
 v13 = 42;
 }
 else
 {
 sub_401780(v12);
 v13 = 0xfffffffc;
 }
 }
 else
 {
 sub_401780(v12);
 v13 = 4294967294;
 }
 }
 else
 {
 v13 = 4294967295;
 }
 if (v6 != *((int *)_ccall(v8, v9, (unsigned int)v10, 20)))
 {
 __stack_chk_fail_local();
 return call_socket_create();
 }
 return v13;
}


// Function: sub_402986 at 0x402986
void sub_402986()
{
}


// Function: sub_402997 at 0x402997
void sub_402997()
{
}


// Function: call_socket_create at 0x4029e0
int call_socket_create()
{
 param_socket_create();
 return 0;
}


// Function: sub_4029e9 at 0x4029e9
int sub_4029e9()
{
 param_shmget_shmat();
 return 0;
}


// Function: param_shmget_shmat at 0x4029f0
unsigned int param_shmget_shmat()
{
 unsigned int v1; // eax
 unsigned int v2; // eax
 unsigned int v3; // eax
 struct_0 *ptr; // eax

 v1 = sub_401610("/tmp/binbench_shm", 66, 438);
 if (v1 < 0)
 return 4294967295;
 sub_401780(v1);
 v2 = sub_401740("/tmp/binbench_shm", 42);
 if (v2 >= 0)
 {
 v3 = sub_4014a0(v2, 0x1000, 950);
 if (v3 < 0)
 return 4294967294;
 ptr = sub_401550(v3, 0, 0);
 if (ptr == 0xffffffff)
 return 4294967293;
 ((unsigned int *)ptr)[0] = 1918986323;
 ((unsigned int *)ptr)[1] = 1699570789;
 ((unsigned int *)ptr)[2] = 2037542765;
 ((unsigned int *)ptr)[3] = 0;
 sub_401700(ptr);
 sub_4015c0(v3, 0, 0);
 return 12;
 }
 return 4294967295;
}


// Function: sub_402aa9 at 0x402aa9
void sub_402aa9()
{
}


// Function: sub_402ab7 at 0x402ab7
void sub_402ab7()
{
}


// Function: sub_402ace at 0x402ace
void sub_402ace()
{
 call_shmget_shmat();
 return;
}


// Function: call_shmget_shmat at 0x402ad0
unsigned int call_shmget_shmat()
{
 return (param_shmget_shmat() <= 0 ? 4294967295 : 42);
}


// Function: sub_402aef at 0x402aef
int sub_402aef()
{
 param_signal_handling();
 return 0;
}


// Function: param_signal_handling at 0x402af0
unsigned int param_signal_handling()
{
 unsigned int v1; // esi
 unsigned int result; // esi
 unsigned int v3; // esi
 unsigned int v4; // esi
 unsigned int flag1; // esi
 unsigned int v6; // esi

 if (sub_4014d0(10, signal_handler) == 4294967295)
 {
 return 4294967295;
 }
 else if (sub_4014d0(14, signal_handler) != 4294967295)
 {
 signal_received = 0;
 sub_401410(10);
 if (!signal_received)
 {
 v1 = 1000;
 do
 {
 result = v1;
 sub_4015a0(1000);
 } while (!signal_received && (v3 = result - 1, v1 = result - 1, result != 1));
 }
 if (!signal_received)
 {
 return 4294967293;
 }
 else if (signal_number == 10)
 {
 signal_received = 0;
 sub_401500(1);
 if (!signal_received)
 {
 v4 = 2000;
 do
 {
 flag1 = v4;
 sub_4015a0(1000);
 } while (!signal_received && (v6 = flag1 - 1, v4 = flag1 - 1, flag1 != 1));
 }
 if (!signal_received || signal_number != 14)
 {
 return 4294967291;
 }
 sub_4014d0(10, 0);
 sub_4014d0(14, 0);
 return 42;
 }
 else
 {
 return 0xfffffffc;
 }
 }
 else
 {
 return 4294967294;
 }
}


// Function: sub_402b5d at 0x402b5d
void sub_402b5d()
{
}


// Function: sub_402bc4 at 0x402bc4
void sub_402bc4()
{
}


// Function: sub_402c44 at 0x402c44
void sub_402c44()
{
 call_signal_handling();
}


// Function: call_signal_handling at 0x402c50
int call_signal_handling()
{
 param_signal_handling();
 return 0;
}


// Function: sub_402c59 at 0x402c59
int sub_402c59()
{
 test_system_calls(0);
 return 0;
}


// Function: test_system_calls at 0x402c60
extern unsigned int g_4041df;
extern unsigned int g_4041fa;
extern unsigned int g_404216;
extern unsigned int g_404232;
extern unsigned int g_40424e;
extern unsigned int g_40426a;
extern unsigned int g_404286;
extern unsigned int g_4042a2;

int test_system_calls()
{
 unsigned long v4; // ldt
 unsigned long v5; // gdt
 unsigned short v6; // gs
 unsigned int v7; // eax
 unsigned int v8; // eax
 char v0; // [bp-0x68]
 char v1; // [bp-0x3c]
 unsigned int v2; // [bp-0x10]

 v2 = *((int *)_ccall(v4, v5, (unsigned int)v6, 20));
 sub_4015f0(&g_4041df);
 v7 = sub_4016b0(5, "/etc/passwd", 0);
 if (v7 >= 0)
 {
 sub_4016b0(6, v7);
 v8 = 42;
 }
 else
 {
 v8 = ((char)_ccall(15, 15, *((int *)sub_401690()), 0) ? 4294967295 : 42);
 }
 sub_4016f0(1, &g_4041fa, v8);
 sub_4016f0(1, &g_404216, (sub_401600("/etc/passwd", &v0) < 0 ? 4294967295 : (*((int *)&v1) <= 0 ? 4294967294 : 42)));
 sub_4016f0(1, &g_404232, (-(param_fork_exec("/bin/true", 0) < 1) & 43) - 1);
 sub_4016f0(1, &g_40424e, param_pipe_communication());
 sub_4016f0(1, &g_40426a, param_socket_create());
 sub_4016f0(1, &g_404286, 0);
 sub_4016f0(1, &g_4042a2, param_signal_handling());
 if (v2 != *((int *)_ccall(v4, v5, (unsigned int)v6, 20)))
 {
 __stack_chk_fail_local();
 return param_pthread_create(0);
 }
 return v2 - *((int *)_ccall(v4, v5, (unsigned int)v6, 20));
}


// Function: sub_402dba at 0x402dba
void sub_402dba()
{
}


// Function: param_pthread_create at 0x402df0
unsigned int param_pthread_create(unsigned int a0)
{
 unsigned long v4; // ldt
 unsigned long v5; // gdt
 unsigned short v6; // gs
 unsigned int v7; // esi
 char v0; // [bp-0x1c], Other Possible Types: unsigned int
 unsigned int v1; // [bp-0x18]
 unsigned int *ptr; // [bp-0x14], Other Possible Types: char
 unsigned int v3; // [bp-0x10]

 v3 = *((int *)_ccall(v4, v5, (unsigned int)v6, 20));
 v1 = a0;
 if (!sub_401710(&v0, 0, thread_compute, &v1))
 {
 sub_401760(v0, &ptr);
 v7 = *(ptr);
 sub_401480(ptr);
 }
 else
 {
 v7 = 4294967295;
 }
 if (v3 != *((int *)_ccall(v4, v5, (unsigned int)v6, 20)))
 {
 __stack_chk_fail_local();
 return call_pthread_create();
 }
 return v7;
}


// Function: sub_402e6c at 0x402e6c
void sub_402e6c()
{
}


// Function: call_pthread_create at 0x402e80
unsigned int call_pthread_create()
{
 unsigned long v5; // ldt
 unsigned long v6; // gdt
 unsigned short v7; // gs
 unsigned int v8; // esi
 char v0; // [bp-0x1c], Other Possible Types: unsigned int
 unsigned int v1; // [bp-0x18]
 unsigned int *ptr; // [bp-0x14], Other Possible Types: char
 unsigned int v3; // [bp-0x10]

 v3 = *((int *)_ccall(v5, v6, (unsigned int)v7, 20));
 v1 = 7;
 if (!sub_401710(&v0, 0, thread_compute, &v1))
 {
 sub_401760(v0, &ptr);
 v8 = *(ptr);
 sub_401480(ptr);
 }
 else
 {
 v8 = 4294967295;
 }
 if (v3 != *((int *)_ccall(v5, v6, (unsigned int)v7, 20)))
 {
 __stack_chk_fail_local();
 return 0;
 }
 return v8;
}


// Function: sub_402efe at 0x402efe
void sub_402efe()
{
}


// Function: param_pthread_join at 0x402f10
unsigned int param_pthread_join()
{
 unsigned long v16; // ldt
 unsigned long v17; // gdt
 unsigned short v18; // gs
 struct_0 *v19; // edi
 unsigned int *v20; // ebp
 char *v21; // esi
 unsigned int v22; // esi
 struct_0 *v0; // [bp-0x68]
 unsigned int v1; // [bp-0x64]
 struct_0 *cur; // [bp-0x60]
 unsigned int v3; // [bp-0x50]
 unsigned int result_val; // [bp-0x44]
 unsigned int v6; // [bp-0x40]
 unsigned int flag1; // [bp-0x3c]
 unsigned int v8; // [bp-0x38]
 unsigned int v9; // [bp-0x34]
 unsigned int flag2; // [bp-0x30]
 unsigned int v11; // [bp-0x2c]
 unsigned int v12; // [bp-0x28]
 unsigned int flag3; // [bp-0x24]
 unsigned int v14; // [bp-0x20]
 int join_result;
 unsigned int field_c_val;

 v14 = *((int *)_ccall(v16, v17, (unsigned int)v18, 20));
 v19 = (struct_0 *)&result_val;
 result_val = 1;
 v0 = (struct_0 *)&v14;
 v20 = &v3;
 v6 = 10;
 v21 = (char *)&v3;
 flag1 = 0;
 v8 = 11;
 v9 = 20;
 flag2 = 0;
 v11 = 21;
 v12 = 30;
 flag3 = 0;
 v1 = (unsigned int)thread_sum;
 cur = (struct_0 *)&result_val;
 do
 {
 join_result = sub_401710((unsigned int)v21, 0, v1, (unsigned int)v19);
 if (join_result)
 {
 v22 = 4294967295;
 goto LABEL_402fe3;
 }
 v21 += 4;
 v19 = (struct_0 *)((char *)v19 + 12);
 } while (v19 != v0);
 v22 = 0;
 do
 {
 join_result = sub_401760(*(v20), 0);
 if (join_result)
 {
 v22 = 4294967294;
 break;
 }
 field_c_val = ((struct_0 *)cur)->field_c;
 v22 += field_c_val;
 v20 += 4;
 cur = (struct_0 *)((char *)cur + 12);
 } while (cur != v0);
LABEL_402fe3:
 if (v14 != *((int *)_ccall(v16, v17, (unsigned int)v18, 20)))
 {
 __stack_chk_fail_local();
 return call_pthread_join();
 }
 return v22;
}


// Function: sub_402ffa at 0x402ffa
void sub_402ffa()
{
}


// Function: sub_403007 at 0x403007
void sub_403007()
{
}


// Function: call_pthread_join at 0x403020
int call_pthread_join()
{
 param_pthread_join();
 return 0;
}


// Function: sub_403029 at 0x403029
int sub_403029()
{
 param_mutex_lock(0, 0);
 return 0;
}


// Function: param_mutex_lock at 0x403030
unsigned int param_mutex_lock(unsigned int a0, unsigned int a1)
{
 unsigned int result; // eax
 unsigned int i; // esi
 unsigned int v4; // ecx
 unsigned int v5; // edi
 unsigned int v6; // edi
 unsigned int v0; // [bp-0x24]
 unsigned int v1; // [bp-0x20]

 result = sub_4015e0(a0 * 4);
 v1 = result;
 if (!result)
 return 4294967295;
 shared_counter = 0;
 if (a0 > 0)
 {
 i = 0;
 v0 = thread_increment;
 while (1)
 {
 unsigned int vvar_1 = a1;
 if (sub_401710(result, 0, v0, &vvar_1))
 {
 sub_401480(v1);
 return 4294967294;
 }
 v4 = i + 1;
 result += 4;
 if (a0 == v4)
 break;
 i = v4;
 }
 v5 = 0;
 do
 {
 v6 = v5;
 sub_401760(*((int *)(v1 + v6 * 4)), 0);
 v5 = v6 + 1;
 } while (i != v6);
 }
 sub_401480(v1);
 return (shared_counter != a1 * a0 ? 4294967293 : 42);
}


// Function: sub_40308c at 0x40308c
void sub_40308c()
{
}


// Function: sub_4030ce at 0x4030ce
void sub_4030ce()
{
}


// Function: sub_403138 at 0x403138
void sub_403138()
{
 call_mutex_lock();
}


// Function: call_mutex_lock at 0x403140
unsigned int call_mutex_lock()
{
 return param_mutex_lock(4, 1000);
}


// Function: sub_403157 at 0x403157
int sub_403157()
{
 param_condition_variable();
 return 0;
}


// Function: param_condition_variable at 0x403160
unsigned int param_condition_variable()
{
 unsigned long v5; // ldt
 unsigned long v6; // gdt
 unsigned short v7; // gs
 unsigned int v8; // esi
 char v0; // [bp-0x1c], Other Possible Types: unsigned int
 char v1; // [bp-0x18], Other Possible Types: unsigned int
 unsigned int *ptr; // [bp-0x14], Other Possible Types: char
 unsigned int v3; // [bp-0x10]

 v3 = *((int *)_ccall(v5, v6, (unsigned int)v7, 20));
 ready = 0;
 data = 0;
 if (sub_401710(&v1, 0, consumer_thread, 0))
 {
 v8 = 4294967295;
 }
 else if (!sub_401710(&v0, 0, producer_thread, 0))
 {
 sub_401760(v1, &ptr);
 sub_401760(v0, 0);
 v8 = *(ptr);
 sub_401480(ptr);
 }
 else
 {
 v8 = 4294967294;
 sub_401770(v1);
 }
 if (v3 != *((int *)_ccall(v5, v6, (unsigned int)v7, 20)))
 {
 __stack_chk_fail_local();
 return call_condition_variable();
 }
 return v8;
}


// Function: sub_403217 at 0x403217
void sub_403217()
{
}


// Function: call_condition_variable at 0x403240
int call_condition_variable()
{
 param_condition_variable();
 return 0;
}


// Function: sub_403249 at 0x403249
int sub_403249()
{
 param_atomic_ops(0);
 return 0;
}


// Function: param_atomic_ops at 0x403250
unsigned int param_atomic_ops(unsigned int i)
{
 unsigned long v5; // ldt
 unsigned long v6; // gdt
 unsigned int v15; // esi
 unsigned short v7; // gs
 unsigned int v8; // ebp
 unsigned int v9; // esi
 unsigned int v10; // esi
 unsigned int v11; // esi
 unsigned int v12; // eax
 unsigned int v13; // esi
 unsigned int v14; // edi
 char *v0; // [bp-0x34]
 unsigned int result; // [bp-0x30]
 char v2; // [bp-0x24], Other Possible Types: unsigned int
 unsigned int v3; // [bp-0x20]
 char v4; // [bp+0x8]

 v3 = *((int *)_ccall(v5, v6, (unsigned int)v7, 20));
 result = sub_4015e0(i * 4);
 if (result)
 {
 atomic_exchange(&atomic_counter, 0);
 if (i > 0)
 {
 v8 = 0;
 v0 = &v4;
 v9 = result;
 do
 {
 v10 = v9;
 if (sub_401710(v10, 0, thread_atomic_increment, v0))
 {
 sub_401480(result);
 v12 = 4294967294;
 goto LABEL_4032f4;
 }
 } while ((v8 += 1, v11 = v10 + 4, v9 = v10 + 4, i != v8));
 v13 = 0;
 if (sub_401710(&v2, 0, thread_atomic_load_store, 0))
 {
 v13 = 0;
 v14 = result;
 }
 else
 {
 sub_401760(v2, 0);
 v14 = result;
 }
 do
 {
 v15 = v13 + 1;
 sub_401760(*((int *)(v14 + v13 * 4)), 0);
 v13 = v15;
 } while (i > v13);
 }
 else if (!sub_401710(&v2, 0, thread_atomic_load_store, 0))
 {
 sub_401760(v2, 0);
 }
 sub_401480(result);
 v12 = (atomic_counter <= 0 ? 4294967293 : 42);
 }
 else
 {
 v12 = 4294967295;
 }
LABEL_4032f4:
 if (v3 != *((int *)_ccall(v5, v6, (unsigned int)v7, 20)))
 {
 __stack_chk_fail_local();
 return call_atomic_ops();
 }
 return v12;
}


// Function: sub_4032b8 at 0x4032b8
void sub_4032b8()
{
}


// Function: sub_40330d at 0x40330d
void sub_40330d()
{
}


// Function: call_atomic_ops at 0x4033e0
unsigned int call_atomic_ops()
{
 unsigned int v0; // [bp-0x18]

 v0 = 500;
 return param_atomic_ops(4);
}


// Function: sub_4033f7 at 0x4033f7
int sub_4033f7()
{
 param_thread_local_storage(0);
 return 0;
}


// Function: param_thread_local_storage at 0x403400
unsigned int param_thread_local_storage(unsigned int i)
{
 unsigned long v8; // ldt
 unsigned long v9; // gdt
 unsigned int v18; // ebp
 unsigned int v19; // ebp
 unsigned int result; // eax
 unsigned int v21; // ebp
 unsigned int *j; // ebp
 unsigned int *v23; // ebp
 unsigned int v24; // eax
 unsigned int v25; // edi
 unsigned int v26; // esi
 unsigned int v27; // esi
 unsigned short v10; // gs
 unsigned int v29; // esi
 unsigned int v11; // esi
 unsigned int *p; // eax
 unsigned int v13; // esi
 unsigned int index; // esi
 unsigned int v15; // eax
 unsigned int v17; // edi
 unsigned int *flag2; // [bp-0x40]
 unsigned int v1; // [bp-0x3c]
 unsigned int v2; // [sp-0x38]
 char *v3; // [bp-0x38]
 unsigned int flag1; // [bp-0x34]
 unsigned int k; // [bp-0x30]
 unsigned int v6[2]; // [bp-0x24], Other Possible Types: char
 unsigned int v7; // [bp-0x20]
 unsigned int *ptr; // eax
 unsigned int v30; // [bp-0x1c]

 v7 = *((int *)_ccall(v8, v9, (unsigned int)v10, 20));
 v11 = i * 4;
 flag1 = (unsigned int)sub_4015e0(v11);
 p = (unsigned int *)sub_4015e0(v11);
 flag2 = p;
 if (flag1 && flag2)
 {
 if (i > 0)
 {
 v13 = 0;
 do
 {
 index = v13;
 v15 = sub_4015e0(16);
 p[index] = v15;
 sub_401420(v15, 16, 1, 16);
 v13 = index + 1;
 } while (i != v13);
 v2 = index;
 v17 = 0;
 v1 = (unsigned int)thread_tls_test;
 v18 = flag1;
 }
 else
 {
 v25 = 0;
 result = 0;
 v24 = 4294967295;
 goto LABEL_4035b0;
 }
 do
 {
 v19 = v18;
 result = sub_401710(v19, 0, v1, flag2[v17]);
 if (!result)
 {
 v21 = v19 + 4;
 if (v2 != v17)
 {
 v17 += 1;
 v18 = v21;
 }
 else
 {
 v25 = 0;
 v3 = (char *)&v6;
 v26 = 0;
 k = v2;
 do
 {
 v27 = v26;
 v1 = v27;
 sub_401760(*((int *)(flag1 + v27 * 4)), v3);
 ptr = v6;
 result += ptr[0];
 v25 += ptr[1];
 sub_401480(ptr);
 v29 = v27 + 1;
 sub_401480(flag2[v27]);
 v26 = v29;
 } while (k != v27);
 sub_401480(flag2);
 sub_401480(flag1);
 if (i * 100 == result && i * 150 == v25)
 {
 v24 = 42;
 }
 else
 {
 v24 = 4294967293;
 }
 goto LABEL_4035b0;
 }
 }
 else
 {
 unsigned int *j;
 j = flag2;
 do
 {
 v23 = j + 1;
 sub_401480(*j);
 j = v23;
 } while (v23 != p);
 sub_401480(flag2);
 sub_401480(flag1);
 v24 = 4294967294;
 }
 } while (v2 != v17);
 if (v24 != 42 && v24 != 4294967293)
 {
 v24 = 4294967295;
 }
LABEL_4035b0:
 if (v7 != *((int *)_ccall(v8, v9, (unsigned int)v10, 20)))
 {
 __stack_chk_fail_local();
 return call_thread_local_storage();
 }
 return v24;
}


// Function: sub_4034ba at 0x4034ba
void sub_4034ba()
{
}


// Function: sub_403544 at 0x403544
void sub_403544()
{
}


// Function: sub_4035e1 at 0x4035e1
void sub_4035e1()
{
}


// Function: call_thread_local_storage at 0x403610
unsigned int call_thread_local_storage()
{
 return param_thread_local_storage(4);
}


// Function: sub_403622 at 0x403622
int sub_403622()
{
 test_thread_concurrency(0);
 return 0;
}


// Function: test_thread_concurrency at 0x403630
extern unsigned int g_4042c8;
extern unsigned int g_4042e6;
extern unsigned int g_404302;
extern unsigned int g_40431f;
extern unsigned int g_40433b;
extern unsigned int g_404357;
extern unsigned int g_404373;

int test_thread_concurrency()
{
 unsigned long v5; // ldt
 unsigned long v6; // gdt
 unsigned short v7; // gs
 unsigned int v8; // esi
 char v0; // [bp-0x1c], Other Possible Types: unsigned int
 unsigned int v1; // [bp-0x18]
 unsigned int *ptr; // [bp-0x14], Other Possible Types: char
 unsigned int v3; // [bp-0x10]

 v3 = *((int *)_ccall(v5, v6, (unsigned int)v7, 20));
 sub_4015f0(&g_4042c8);
 v1 = 7;
 if (!sub_401710(&v0, 0, thread_compute, &v1))
 {
 sub_401760(v0, &ptr);
 v8 = *(ptr);
 sub_401480(ptr);
 }
 else
 {
 v8 = 4294967295;
 }
 sub_4016f0(1, &g_4042e6, v8);
 sub_4016f0(1, &g_404302, param_pthread_join());
 sub_4016f0(1, &g_40431f, param_mutex_lock(4, 1000));
 sub_4016f0(1, &g_40433b, param_condition_variable());
 sub_4016f0(1, &g_404357, param_atomic_ops(4));
 sub_4016f0(1, &g_404373, param_thread_local_storage(4));
 if (v3 == *((int *)_ccall(v5, v6, (unsigned int)v7, 20)))
 return v3 - *((int *)_ccall(v5, v6, (unsigned int)v7, 20));
 __stack_chk_fail_local();
 return 0;
}


// Function: sub_40375d at 0x40375d
void sub_40375d()
{
}


// Function: __x86_get_pc_thunk_ax at 0x40376f
unsigned int __x86_get_pc_thunk_ax()
{
 char v0; // [bp+0x0]

 return *((int *)&v0);
}


// Function: __x86_get_pc_thunk_cx at 0x403773
void __x86_get_pc_thunk_cx()
{
}


// Function: sub_403777 at 0x403777
int sub_403777()
{
 __stack_chk_fail_local();
 return 0;
}


// Function: __stack_chk_fail_local at 0x403780
int __stack_chk_fail_local()
{
 unsigned int v2; // ebx
 unsigned int v0; // [bp-0x4]

 v0 = v2;
 (void)sub_401520();
 (void)__do_global_ctors_aux();
 return 0;
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */

unsigned int __do_global_ctors_aux()
{
 struct_0 *v2; // edx
 char *ptr; // edx
 unsigned int *v4; // eax
 unsigned int v5; // ebx
 char *v6; // ebx
 char *p; // ebx
 unsigned int v0; // [bp-0x8]

 __x86_get_pc_thunk_dx();
 v2 = g_406ff4;
 ptr = &v2->padding_0[227];
 v4 = (unsigned int *)&ptr[232];
 if (*((int *)&ptr[232]) == 0xffffffff)
 return 4294967295;
 v0 = v5;
 v6 = &ptr[232];
 do
 {
 p = v6;
 ((void (*)())*v4)();
 v4 = (unsigned int *)&p[4];
 v6 = &p[4];
 } while (*((int *)&p[4]) != 0xffffffff);
 return 4294967295;
}


// Function: sub_4037e2 at 0x4037e2
void sub_4037e2()
{
}



/* CRT stub function _fini removed by preprocessor */

