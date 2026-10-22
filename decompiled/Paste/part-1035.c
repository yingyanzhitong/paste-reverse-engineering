/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100b2bf08 | FUN_100b2bf08 */

void FUN_100b2bf08(void)

{
  return;
}



/* Address: 0x100b2bf0c | thunk_FUN_100b0afe4 */

void thunk_FUN_100b0afe4(char *param_1)

{
  _pthread_mutex_lock((pthread_mutex_t *)&DAT_100ffa400);
  if (DAT_1010e1560 != (void *)0x0) {
    _free(DAT_1010e1560);
  }
  if (param_1 == (char *)0x0) {
    DAT_1010e1560 = (char *)0x0;
  }
  else {
    DAT_1010e1560 = _strdup(param_1);
  }
  _pthread_mutex_unlock((pthread_mutex_t *)&DAT_100ffa400);
  return;
}



/* Address: 0x100b2bf10 | thunk_FUN_100b0b03c */

void thunk_FUN_100b0b03c(undefined1 param_1)

{
  DAT_1010e1548 = param_1;
  return;
}



/* Address: 0x100b2bf14 | thunk_FUN_100b0b048 */

void thunk_FUN_100b0b048(long param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  undefined8 *puVar5;
  void *pvVar6;
  ulong uVar7;
  long lVar8;
  
  uVar2 = DAT_1010e1558;
  puVar1 = DAT_1010e1550;
  pvVar6 = (void *)0x0;
  uVar7 = (ulong)DAT_1010e1558;
  uVar3 = 0;
  if ((param_1 != 0) && (0 < (int)param_2)) {
    pvVar6 = _malloc((ulong)param_2 << 3);
    if (pvVar6 == (void *)0x0) {
      FUN_100b5e930("ERROR",
                    "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/SentryCrashReport.c"
                    ,0x6fa,"Could not allocate memory");
      return;
    }
    lVar8 = 0;
    do {
      pcVar4 = _strdup(*(char **)(param_1 + lVar8));
      *(char **)((long)pvVar6 + lVar8) = pcVar4;
      lVar8 = lVar8 + 8;
      uVar3 = param_2;
    } while ((ulong)param_2 * 8 - lVar8 != 0);
  }
  DAT_1010e1558 = uVar3;
  DAT_1010e1550 = pvVar6;
  if (puVar1 == (undefined8 *)0x0) {
    return;
  }
  puVar5 = puVar1;
  if (0 < (int)uVar2) {
    do {
      if ((void *)*puVar5 != (void *)0x0) {
        _free((void *)*puVar5);
      }
      uVar7 = uVar7 - 1;
      puVar5 = puVar5 + 1;
    } while (uVar7 != 0);
  }
  _free(puVar1);
  return;
}



/* Address: 0x100b2bf18 | thunk_FUN_100b19bdc */

void thunk_FUN_100b19bdc(undefined4 param_1)

{
  DAT_100ffa540 = param_1;
  return;
}



/* Address: 0x100b2bf1c | FUN_100b2bf1c */

void FUN_100b2bf1c(undefined8 param_1)

{
  DAT_1010e2370 = param_1;
  return;
}



/* Address: 0x100b2bf28 | thunk_FUN_100b41424 */

void thunk_FUN_100b41424(int param_1)

{
  double dVar1;
  timeval tStack_40;
  
  dVar1 = DAT_1010e2f50;
  if (DAT_1010e2f60 == '\x01') {
    DAT_1010e2f58._0_1_ = (undefined1)param_1;
    if (param_1 == 0) {
      _gettimeofday(&tStack_40,(void *)0x0);
      dVar1 = ((double)tStack_40.tv_usec / 1000000.0 + (double)tStack_40.tv_sec) - dVar1;
      DAT_1010e2f28 = DAT_1010e2f28 + dVar1;
      DAT_1010e2f10 = DAT_1010e2f10 + dVar1;
    }
    else {
      _gettimeofday(&tStack_40,(void *)0x0);
      DAT_1010e2f50 = (double)tStack_40.tv_usec / 1000000.0 + (double)tStack_40.tv_sec;
    }
  }
  return;
}



/* Address: 0x100b2bf2c | thunk_FUN_100b41548 */

void thunk_FUN_100b41548(int param_1)

{
  undefined8 uVar1;
  double dVar2;
  timeval tStack_30;
  
  uVar1 = DAT_1010e2f08;
  if (DAT_1010e2f60 == '\x01') {
    DAT_1010e2f58._1_1_ = (undefined1)param_1;
    if (param_1 == 0) {
      _gettimeofday(&tStack_30,(void *)0x0);
      DAT_1010e2f50 = (double)tStack_30.tv_usec / 1000000.0 + (double)tStack_30.tv_sec;
      FUN_100b411e8(uVar1);
      return;
    }
    _gettimeofday(&tStack_30,(void *)0x0);
    dVar2 = ((double)tStack_30.tv_usec / 1000000.0 + (double)tStack_30.tv_sec) - DAT_1010e2f50;
    DAT_1010e2f30 = DAT_1010e2f30 + dVar2;
    DAT_1010e2f18 = dVar2 + DAT_1010e2f18;
    DAT_1010e2f20._4_4_ = DAT_1010e2f20._4_4_ + 1;
    DAT_1010e2f38 = DAT_1010e2f38 + 1;
  }
  return;
}



/* Address: 0x100b2bf30 | thunk_FUN_100b41640 */

void thunk_FUN_100b41640(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  double dVar2;
  timeval tStack_40;
  
  dVar2 = DAT_1010e2f50;
  uVar1 = DAT_1010e2f08;
  if (DAT_1010e2f60 == '\x01') {
    _gettimeofday(&tStack_40,(void *)0x0);
    DAT_1010e2f18 =
         DAT_1010e2f18 +
         (((double)tStack_40.tv_usec / 1000000.0 + (double)tStack_40.tv_sec) - dVar2);
    FUN_100b411e8(uVar1);
    return;
  }
  return;
}



/* Address: 0x100b2bf34 | thunk_FUN_100b197b0 */

int thunk_FUN_100b197b0(ID param_1,SEL param_2)

{
  int iVar1;
  
  iVar1 = _pthread_mutex_lock((pthread_mutex_t *)&DAT_100ffa500);
  FUN_100b197ec();
  _pthread_mutex_unlock((pthread_mutex_t *)&DAT_100ffa500);
  return iVar1;
}



/* Address: 0x100b2bf38 | thunk_FUN_100b19890 */

undefined8 thunk_FUN_100b19890(undefined8 param_1,undefined8 param_2)

{
  _pthread_mutex_lock((pthread_mutex_t *)&DAT_100ffa500);
  FUN_100b198e4(param_1,param_2);
  _pthread_mutex_unlock((pthread_mutex_t *)&DAT_100ffa500);
  return param_1;
}



/* Address: 0x100b2bf3c | FUN_100b2bf3c */

void * FUN_100b2bf3c(void *param_1)

{
  void *pvVar1;
  undefined8 uVar2;
  char *pcVar3;
  
  if ((long)param_1 < 1) {
    pcVar3 = "Report ID was %llx";
    uVar2 = 0x117;
  }
  else {
    FUN_100b199bc();
    if (param_1 != (void *)0x0) {
      pvVar1 = param_1;
      FUN_100b52988();
      if (pvVar1 == (void *)0x0) {
        FUN_100b5e930("ERROR",
                      "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/SentryCrashC.c"
                      ,0x123,"Failed to fixup report ID %llx");
      }
      _free(param_1);
      return pvVar1;
    }
    pcVar3 = "Failed to load report ID %llx";
    uVar2 = 0x11d;
  }
  FUN_100b5e930("ERROR",
                "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/SentryCrashC.c"
                ,uVar2,pcVar3);
  return (void *)0x0;
}



/* Address: 0x100b2c00c | thunk_FUN_100b19b20 */

void thunk_FUN_100b19b20(ID param_1,SEL param_2)

{
  _pthread_mutex_lock((pthread_mutex_t *)&DAT_100ffa500);
  FUN_100b18098(&DAT_1010e1b94);
  _pthread_mutex_unlock((pthread_mutex_t *)&DAT_100ffa500);
  return;
}



/* Address: 0x100b2c010 | thunk_FUN_100b19b58 */

void thunk_FUN_100b19b58(void)

{
  char acStack_21c [500];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_100ea82f0;
  _snprintf(acStack_21c,500,"%s/%s-report-%016llx.json");
  FUN_100b17fcc(acStack_21c,1);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100b2c014 | FUN_100b2c014 */

bool FUN_100b2c014(int param_1)

{
  return DAT_1010e2570 == param_1 || DAT_1010e2574 == param_1;
}



/* Address: 0x100b2c034 | FUN_100b2c034 */

undefined ** FUN_100b2c034(void)

{
  return &PTR_FUN_100ffa740;
}



/* Address: 0x100b2c040 | FUN_100b2c040 */

void FUN_100b2c040(char param_1)

{
  task_t task;
  kern_return_t kVar1;
  int iVar2;
  thread_act_t tVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  char *pcVar6;
  pthread_attr_t pStack_88;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_100ea82f0;
  DAT_1010e2578 = param_1;
  if ((param_1 != '\x01') || ((DAT_1010e2579 & 1) != 0)) goto LAB_100b2c308;
  FUN_100b34cd4(&DAT_1010e257a);
  FUN_100b34cd4(&DAT_1010e259f);
  task = *(task_t *)PTR__mach_task_self__100ea8778;
  kVar1 = _task_get_exception_ports
                    (task,0x6e,&DAT_1010e25c4,&DAT_1010e26a4,&DAT_1010e25fc,&DAT_1010e2634,
                     &DAT_1010e266c);
  if (kVar1 == 0) {
    if (DAT_1010e26a8 == 0) {
      kVar1 = _mach_port_allocate(task,1,&DAT_1010e26a8);
      if (kVar1 == 0) {
        kVar1 = _mach_port_insert_right(task,DAT_1010e26a8,DAT_1010e26a8,0x14);
        if (kVar1 == 0) goto LAB_100b2c10c;
        _mach_error_string(kVar1);
        pcVar6 = "mach_port_insert_right: %s";
        uVar5 = 0x1ee;
      }
      else {
        _mach_error_string(kVar1);
        pcVar6 = "mach_port_allocate: %s";
        uVar5 = 0x1e6;
      }
      goto LAB_100b2c268;
    }
LAB_100b2c10c:
    kVar1 = _task_set_exception_ports(task,0x6e,DAT_1010e26a8,-0x7fffffff,5);
    if (kVar1 != 0) {
      _mach_error_string(kVar1);
      pcVar6 = "task_set_exception_ports: %s";
      uVar5 = 0x1f7;
      goto LAB_100b2c268;
    }
    _pthread_attr_init(&pStack_88);
    _pthread_attr_setdetachstate(&pStack_88,2);
    iVar2 = _pthread_create(&DAT_1010e26b0,&pStack_88,(void **)FUN_100b2c468,
                            "SentryCrash Exception Handler (Secondary)");
    if (iVar2 == 0) {
      DAT_1010e2574 = _pthread_mach_thread_np(DAT_1010e26b0);
      iVar2 = _pthread_create(&DAT_1010e26b8,&pStack_88,(void **)FUN_100b2c468,
                              "SentryCrash Exception Handler (Primary)");
      if (iVar2 == 0) {
        _pthread_attr_destroy(&pStack_88);
        DAT_1010e2570 = _pthread_mach_thread_np(DAT_1010e26b8);
        DAT_1010e2578 = '\x01';
        DAT_1010e2579 = 1;
        goto LAB_100b2c308;
      }
      ppuVar4 = &PTR___tlv_bootstrap_101049268;
      (*(code *)PTR___tlv_bootstrap_101049268)();
      iVar2 = _strerror_r(iVar2,(char *)ppuVar4,0x400);
      if (iVar2 != 0) {
        _snprintf((char *)ppuVar4,0x400,"Unknown error %d");
      }
      pcVar6 = "pthread_create: %s";
      uVar5 = 0x21b;
    }
    else {
      ppuVar4 = &PTR___tlv_bootstrap_101049250;
      (*(code *)PTR___tlv_bootstrap_101049250)();
      iVar2 = _strerror_r(iVar2,(char *)ppuVar4,0x400);
      if (iVar2 != 0) {
        _snprintf((char *)ppuVar4,0x400,"Unknown error %d");
      }
      pcVar6 = "pthread_create_suspended_np: %s";
      uVar5 = 0x20a;
    }
    FUN_100b5e930("ERROR",
                  "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Monitors/SentryCrashMonitor_MachException.c"
                  ,uVar5,pcVar6);
    tVar3 = _pthread_attr_destroy(&pStack_88);
  }
  else {
    _mach_error_string(kVar1);
    pcVar6 = "task_get_exception_ports: %s";
    uVar5 = 0x1de;
LAB_100b2c268:
    tVar3 = 0xdbc080;
    FUN_100b5e930("ERROR",
                  "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Monitors/SentryCrashMonitor_MachException.c"
                  ,uVar5,pcVar6);
  }
  FUN_100b2c7a4();
  FUN_100b40bac();
  if ((DAT_1010e26b8 != (pthread_t)0x0) && (DAT_1010e2570 != tVar3)) {
    if (DAT_1010e26c0 == '\x01') {
      _thread_terminate(DAT_1010e2570);
    }
    else {
      _pthread_cancel(DAT_1010e26b8);
    }
    DAT_1010e2570 = 0;
    DAT_1010e26b8 = (pthread_t)0x0;
  }
  if ((DAT_1010e26b0 != (pthread_t)0x0) && (DAT_1010e2574 != tVar3)) {
    if (DAT_1010e26c0 == '\x01') {
      _thread_terminate(DAT_1010e2574);
    }
    else {
      _pthread_cancel(DAT_1010e26b0);
    }
    DAT_1010e2574 = 0;
    DAT_1010e26b0 = (pthread_t)0x0;
  }
  DAT_1010e2578 = '\0';
  DAT_1010e26a8 = 0;
LAB_100b2c308:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x100b2c414 | FUN_100b2c414 */

undefined1 FUN_100b2c414(void)

{
  return DAT_1010e2578;
}



/* Address: 0x100b2c420 | FUN_100b2c420 */

void FUN_100b2c420(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x20) != 1) {
    if (*(int *)(param_1 + 0x20) == 2) {
      uVar1 = *(int *)(param_1 + 0x78) - 4;
      if (uVar1 < 10) {
        uVar2 = *(undefined4 *)(&DAT_100c976a8 + (ulong)uVar1 * 4);
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 10;
    }
    *(undefined4 *)(param_1 + 0x40) = uVar2;
  }
  return;
}



/* Address: 0x100b2c468 | FUN_100b2c468 */

undefined8 FUN_100b2c468(char *param_1)

{
  thread_act_t target_act;
  int error_value;
  ulong uVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined4 local_78c;
  undefined8 local_788;
  mach_msg_header_t local_780;
  undefined8 uStack_768;
  undefined4 local_760;
  undefined1 auStack_75c [1232];
  mach_msg_header_t local_28c;
  int local_270;
  undefined8 local_258;
  int local_250;
  long local_248;
  undefined8 uStack_240;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_100ea82f0;
  _bzero(&local_28c,0x244);
  local_760 = 0;
  local_780.msgh_remote_port = 0;
  local_780.msgh_local_port = 0;
  local_780.msgh_bits = 0;
  local_780.msgh_size = 0;
  uStack_768 = 0;
  local_780.msgh_reserved = 0;
  local_780.msgh_id = 0;
  _pthread_setname_np(param_1);
  target_act = _strcmp(param_1,"SentryCrash Exception Handler (Secondary)");
  if (target_act == 0) {
    FUN_100b40bac();
    _thread_suspend(target_act);
    puVar3 = &DAT_1010e259f;
  }
  else {
    puVar3 = &DAT_1010e257a;
  }
  error_value = _mach_msg(&local_28c,2,0,0x244,DAT_1010e26a8,0,0);
  while (error_value != 0) {
    _mach_error_string(error_value);
    FUN_100b5e930("ERROR",
                  "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Monitors/SentryCrashMonitor_MachException.c"
                  ,0x140,"mach_msg: %s");
    error_value = _mach_msg(&local_28c,2,0,0x244,DAT_1010e26a8,0,0);
  }
  if (DAT_1010e2578 != '\x01') goto LAB_100b2c728;
  local_788 = 0;
  local_78c = 0;
  uVar1 = 1;
  DAT_1010e26c0 = DAT_1010e2578;
  FUN_100b26c88(1,&local_788,&local_78c);
  FUN_100b40bac();
  if (uVar1 == DAT_1010e2570) {
    FUN_100b2c7a4();
    _thread_resume(DAT_1010e2574);
  }
  DAT_1010e26d8 = auStack_75c;
  FUN_100b18a18(&DAT_1010e2888,0,0);
  FUN_100b5100c(local_270,auStack_75c,1);
  if (local_270 != 0) {
    FUN_100b2acb8(&DAT_1010e2888,100,auStack_75c);
    puVar2 = auStack_75c;
    if (local_250 == 1) {
      FUN_100b26564();
      DAT_1010e26e0 = puVar2;
    }
    else {
      FUN_100b26370();
      DAT_1010e26e0 = puVar2;
    }
  }
  DAT_1010e26e8 = 1;
  DAT_1010e26d3 = 1;
  DAT_1010e2708 = local_250;
  uRam00000001010e2718 = uStack_240;
  DAT_1010e2710 = local_248;
  if (local_248 == 2) {
    if (DAT_1010e26d4 == '\x01') {
      local_248 = 1;
      DAT_1010e2710 = 1;
    }
    else {
      local_248 = 2;
    }
  }
  if (local_250 < 4) {
    if (local_250 == 1) {
      DAT_1010e2740 = 10;
      if (local_248 == 1) {
        DAT_1010e2740 = 0xb;
      }
    }
    else if (local_250 == 2) {
      DAT_1010e2740 = 4;
    }
    else {
      if (local_250 != 3) goto LAB_100b2c708;
      DAT_1010e2740 = 8;
    }
  }
  else if (local_250 == 4) {
    DAT_1010e2740 = 7;
  }
  else if (local_250 == 5) {
    if (3 < local_248 - 0x10000U) goto LAB_100b2c708;
    DAT_1010e2740 = *(undefined4 *)(&DAT_100c30ff0 + (local_248 - 0x10000U) * 4);
  }
  else if (local_250 == 6) {
    DAT_1010e2740 = 5;
  }
  else {
LAB_100b2c708:
    DAT_1010e2740 = 0;
  }
  DAT_1010e2700 = &DAT_1010e2888;
  DAT_1010e26c8 = puVar3;
  FUN_100b26d44();
  DAT_1010e26c0 = 0;
  FUN_100b513c8(local_788,local_78c);
LAB_100b2c728:
  local_780.msgh_remote_port = local_28c.msgh_remote_port;
  local_780.msgh_local_port = local_28c.msgh_local_port;
  local_780.msgh_bits = local_28c.msgh_bits;
  local_780.msgh_size = local_28c.msgh_size;
  local_780.msgh_reserved = local_28c.msgh_reserved;
  local_780.msgh_id = local_28c.msgh_id;
  uStack_768 = local_258;
  local_760 = 5;
  _mach_msg(&local_780,1,0x24,0,0,0,0);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_48) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100b2c7a4 | FUN_100b2c7a4 */

void FUN_100b2c7a4(void)

{
  task_t task;
  kern_return_t error_value;
  ulong uVar1;
  exception_behavior_t *peVar2;
  
  if (DAT_1010e26a4 != 0) {
    uVar1 = 0;
    task = *(task_t *)PTR__mach_task_self__100ea8778;
    peVar2 = &DAT_1010e2634;
    do {
      error_value = _task_set_exception_ports(task,peVar2[-0x1c],peVar2[-0xe],*peVar2,peVar2[0xe]);
      if (error_value != 0) {
        _mach_error_string(error_value);
        FUN_100b5e930("ERROR",
                      "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Monitors/SentryCrashMonitor_MachException.c"
                      ,0xb3,"task_set_exception_ports: %s");
      }
      peVar2 = peVar2 + 1;
      uVar1 = uVar1 + 1;
    } while (uVar1 < DAT_1010e26a4);
    DAT_1010e26a4 = 0;
  }
  return;
}



/* Address: 0x100b2c868 | FUN_100b2c868 */

undefined8 * FUN_100b2c868(void)

{
  return &DAT_1010e2be8;
}



/* Address: 0x100b2c874 | FUN_100b2c874 */

void FUN_100b2c874(undefined8 param_1)

{
  FUN_100b2c880(param_1,&DAT_1010e2be8);
  return;
}



/* Address: 0x100b2c880 | FUN_100b2c880 */

void FUN_100b2c880(char *param_1,undefined8 *param_2)

{
  void *pvVar1;
  char *pcVar2;
  
  pvVar1 = (void *)*param_2;
  *param_2 = 0;
  if (pvVar1 != (void *)0x0) {
    _free(pvVar1);
  }
  if (param_1 != (char *)0x0) {
    pcVar2 = _strdup(param_1);
    *param_2 = pcVar2;
  }
  return;
}



/* Address: 0x100b2c8c0 | FUN_100b2c8c0 */

void FUN_100b2c8c0(undefined8 param_1)

{
  FUN_100b2c880(param_1,&DAT_1010e2bf0);
  return;
}



/* Address: 0x100b2c8cc | FUN_100b2c8cc */

void FUN_100b2c8cc(undefined8 param_1)

{
  FUN_100b2c880(param_1,&DAT_1010e2bf8);
  return;
}



/* Address: 0x100b2c8d8 | FUN_100b2c8d8 */

void FUN_100b2c8d8(undefined8 param_1)

{
  FUN_100b2c880(param_1,&DAT_1010e2c00);
  return;
}



/* Address: 0x100b2c8e4 | FUN_100b2c8e4 */

void FUN_100b2c8e4(undefined8 param_1)

{
  FUN_100b2c880(param_1,&DAT_1010e2c08);
  return;
}



/* Address: 0x100b2c8f0 | FUN_100b2c8f0 */

void FUN_100b2c8f0(undefined8 param_1)

{
  FUN_100b2c880(param_1,&DAT_1010e2c10);
  return;
}



/* Address: 0x100b2c8fc | FUN_100b2c8fc */

void FUN_100b2c8fc(undefined8 param_1)

{
  FUN_100b2c880(param_1,&DAT_1010e2c18);
  return;
}



/* Address: 0x100b2c908 | FUN_100b2c908 */

void FUN_100b2c908(undefined8 param_1)

{
  FUN_100b2c880(param_1,&DAT_1010e2c20);
  return;
}



/* Address: 0x100b2c914 | FUN_100b2c914 */

void FUN_100b2c914(undefined8 param_1)

{
  FUN_100b2c880(param_1,&DAT_1010e2c28);
  return;
}



/* Address: 0x100b2c920 | FUN_100b2c920 */

void FUN_100b2c920(undefined8 param_1)

{
  long lVar1;
  
  if (DAT_1010e2c30 != 0 && 0 < DAT_1010e2c38) {
    FUN_100b2c880(param_1,DAT_1010e2c30 + DAT_1010e2c40 * 8);
    lVar1 = 0;
    if (DAT_1010e2c38 != 0) {
      lVar1 = (DAT_1010e2c40 + 1) / DAT_1010e2c38;
    }
    DAT_1010e2c40 = (DAT_1010e2c40 + 1) - lVar1 * DAT_1010e2c38;
  }
  return;
}



/* Address: 0x100b2c978 | FUN_100b2c978 */

void FUN_100b2c978(ID param_1,SEL param_2)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  
  if (DAT_1010e2c30 != 0 && 0 < DAT_1010e2c38) {
    lVar3 = 0;
    lVar2 = DAT_1010e2c38;
    do {
      pvVar1 = *(void **)(DAT_1010e2c30 + lVar3 * 8);
      *(undefined8 *)(DAT_1010e2c30 + lVar3 * 8) = 0;
      if (pvVar1 != (void *)0x0) {
        _free(pvVar1);
        lVar2 = DAT_1010e2c38;
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < lVar2);
    DAT_1010e2c40 = 0;
  }
  return;
}



/* Address: 0x100b2c9e8 | FUN_100b2c9e8 */

void FUN_100b2c9e8(long param_1)

{
  DAT_1010e2c40 = 0;
  DAT_1010e2c38 = param_1;
  if (DAT_1010e2c30 != (void *)0x0) {
    _free(DAT_1010e2c30);
  }
  DAT_1010e2c30 = _malloc(param_1 << 3);
  _bzero(DAT_1010e2c30,param_1 << 3);
  return;
}



/* Address: 0x100b2ca34 | FUN_100b2ca34 */

void FUN_100b2ca34(ID param_1,SEL param_2)

{
  void *pvVar1;
  
  pvVar1 = DAT_1010e2be8;
  DAT_1010e2be8 = (void *)0x0;
  if (pvVar1 != (void *)0x0) {
    _free(pvVar1);
  }
  pvVar1 = DAT_1010e2bf0;
  DAT_1010e2bf0 = (void *)0x0;
  if (pvVar1 != (void *)0x0) {
    _free(pvVar1);
  }
  pvVar1 = DAT_1010e2bf8;
  DAT_1010e2bf8 = (void *)0x0;
  if (pvVar1 != (void *)0x0) {
    _free(pvVar1);
  }
  pvVar1 = DAT_1010e2c08;
  DAT_1010e2c08 = (void *)0x0;
  if (pvVar1 != (void *)0x0) {
    _free(pvVar1);
  }
  pvVar1 = DAT_1010e2c10;
  DAT_1010e2c10 = (void *)0x0;
  if (pvVar1 != (void *)0x0) {
    _free(pvVar1);
  }
  pvVar1 = DAT_1010e2c18;
  DAT_1010e2c18 = (void *)0x0;
  if (pvVar1 != (void *)0x0) {
    _free(pvVar1);
  }
  pvVar1 = DAT_1010e2c20;
  DAT_1010e2c20 = (void *)0x0;
  if (pvVar1 != (void *)0x0) {
    _free(pvVar1);
  }
  pvVar1 = DAT_1010e2c28;
  DAT_1010e2c28 = (void *)0x0;
  if (pvVar1 != (void *)0x0) {
    _free(pvVar1);
  }
  FUN_100b2c978((ID)pvVar1,param_2);
  return;
}



/* Address: 0x100b2cae4 | FUN_100b2cae4 */

bool FUN_100b2cae4(ID param_1,ID param_2)

{
  bool bVar1;
  ID IVar2;
  
  bVar1 = false;
  if (param_1 != 0) {
    IVar2 = objc_stub::FUN_100c00c40(param_1);
    bVar1 = IVar2 == param_2;
  }
  return bVar1;
}



/* Address: 0x100b2cb10 | SentryTracer::initWithTransactionContext:hub: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

ID SentryTracer::initWithTransactionContext_hub_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  
  IVar1 = objc_stub::defaultConfiguration((ID)&objc::class_t::SentryTracerConfiguration);
  IVar1 = objc_stub::FUN_100c04f40(param_1,param_3,param_4,IVar1);
  return IVar1;
}



/* Address: 0x100b2cba0 | SentryTracer::initWithTransactionContext:hub:configuration: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x28 bytes */

ID SentryTracer::initWithTransactionContext_hub_configuration_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  int iVar1;
  ID self;
  ID IVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  objc_super local_70;
  
  local_70.super_class = &objc::class_t::SentryTracer;
  local_70.receiver = param_1;
  self = _objc_msgSendSuper2(&local_70,"initWithContext:",param_3);
  if (self != 0) {
    IVar2 = objc_stub::sharedInstance((ID)&objc::class_t::_TtC6Sentry25SentryDependencyContainer);
    IVar2 = objc_stub::FUN_100c00ac0(IVar2);
    IVar2 = objc_stub::FUN_100c100e0(IVar2);
    *(ID *)(self + (long)_startSystemTime) = IVar2;
    *(ID *)(self + (long)_configuration) = param_5;
    IVar2 = objc_stub::sharedInstance((ID)&objc::class_t::_TtC6Sentry25SentryDependencyContainer);
    IVar2 = objc_stub::dispatchQueueWrapper(IVar2);
    uVar4 = *(undefined8 *)(self + (long)_dispatchQueue);
    *(ID *)(self + (long)_dispatchQueue) = IVar2;
    IVar2 = objc_stub::sharedInstance
                      ((ID)&objc::class_t::_TtC6Sentry25SentryDependencyContainer,uVar4);
    IVar2 = objc_stub::FUN_100c00bc0(IVar2);
    uVar4 = *(undefined8 *)(self + (long)_debugImageProvider);
    *(ID *)(self + (long)_debugImageProvider) = IVar2;
    objc_stub::FUN_100c0e500(self,uVar4,param_3);
    puVar3 = &_OBJC_CLASS___NSMutableArray;
    _objc_alloc();
    IVar2 = objc_stub::init((ID)puVar3);
    uVar4 = *(undefined8 *)(self + (long)_children);
    *(ID *)(self + (long)_children) = IVar2;
    objc_stub::FUN_100c0c0a0(self,uVar4,param_4);
    objc_stub::FUN_100c0e9c0(self,0);
    puVar3 = &_OBJC_CLASS___NSMutableDictionary;
    _objc_alloc();
    IVar2 = objc_stub::init((ID)puVar3);
    uVar4 = *(undefined8 *)(self + (long)_measurements);
    *(ID *)(self + (long)_measurements) = IVar2;
    objc_stub::FUN_100c0bce0(self,uVar4,0);
    puVar3 = &_OBJC_CLASS___NSObject;
    _objc_alloc();
    IVar2 = objc_stub::init((ID)puVar3);
    uVar4 = *(undefined8 *)(self + (long)_dispatchTimeoutLock);
    *(ID *)(self + (long)_dispatchTimeoutLock) = IVar2;
    IVar2 = objc_stub::FUN_100c032a0(self,uVar4);
    if ((int)IVar2 != 0) {
      objc_stub::FUN_100c0f440(self);
    }
    IVar2 = objc_stub::FUN_100c05640(self);
    if ((int)IVar2 != 0) {
      objc_stub::FUN_100c0f3e0(self);
    }
    FUN_100b436ec(param_5,param_4,param_3);
    lVar5 = (long)_profilerReferenceID;
    *(ID *)(self + lVar5) = param_5;
    *(bool *)(self + (long)_isProfiling) = *(long *)(self + lVar5) != 0;
    IVar2 = objc_stub::FUN_100c079e0(param_3);
    iVar1 = 0;
    FUN_100b3a1c0();
    if (IVar2 == 0) {
      if (iVar1 != 0) {
        IVar2 = objc_stub::FUN_100c10960(param_3);
        objc_stub::FUN_100c0a000(IVar2);
        objc_stub::FUN_100c0a000(*(ID *)(self + lVar5));
        IVar2 = objc_stub::spanId(self);
        objc_stub::FUN_100c0a0a0(IVar2);
        FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryTracer.m",
                      0xa0,&cf_Startedrootspantracerwithid____profilerReferenceId____spanid___);
      }
    }
    else if (iVar1 != 0) {
      IVar2 = objc_stub::FUN_100c10960(param_3);
      objc_stub::FUN_100c0a000(IVar2);
      objc_stub::FUN_100c0a000(*(ID *)(self + lVar5));
      IVar2 = objc_stub::spanId(self);
      objc_stub::FUN_100c0a0a0(IVar2);
      IVar2 = objc_stub::FUN_100c079e0(param_3);
      objc_stub::FUN_100c0a0a0(IVar2);
      FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryTracer.m",
                    0xa5,&
                         cf_Startedchildspantracerwithid____profilerReferenceId____spanid____parentspanid___
                   );
    }
  }
  return self;
}



/* Address: 0x100b2cfe4 | SentryTracer::dealloc */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryTracer::dealloc(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined8 uVar2;
  objc_super local_40;
  
  IVar1 = objc_stub::FUN_100c05b60(param_1);
  if ((int)IVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + (long)_profilerReferenceID);
    IVar1 = objc_stub::FUN_100c034a0(param_1);
    FUN_100b42a1c(uVar2,IVar1);
  }
  objc_stub::FUN_100bfed40(param_1);
  local_40.super_class = &objc::class_t::SentryTracer;
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"dealloc");
  return;
}



/* Address: 0x100b2d070 | SentryTracer::tracer */

/* Function Stack Size: 0x10 bytes */

ID SentryTracer::tracer(ID param_1,SEL param_2)

{
  return param_1;
}



/* Address: 0x100b2d074 | SentryTracer::hasIdleTimeout */

/* Function Stack Size: 0x10 bytes */

bool SentryTracer::hasIdleTimeout(ID param_1,SEL param_2)

{
  double extraout_d0;
  
  objc_stub::FUN_100c03580(*(ID *)(param_1 + (long)_configuration));
  return (bool)(0.0 < extraout_d0);
}



/* Address: 0x100b2d09c | SentryTracer::dispatchBlockCreate: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryTracer::dispatchBlockCreate_(ID param_1,SEL param_2,ID param_3,uint param_4)

{
  ID IVar1;
  
  IVar1 = objc_stub::FUN_100c0ec60(*(ID *)(param_1 + (long)_dispatchQueue),param_3,(ulong)param_4);
  if ((int)IVar1 == 0) {
    IVar1 = 0;
  }
  else {
    IVar1 = 0;
    _dispatch_block_create(0,param_3);
  }
  return IVar1;
}



/* Address: 0x100b2d0fc | SentryTracer::dispatchCancel: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryTracer::dispatchCancel_(ID param_1,SEL param_2,ID param_3,uint param_4)

{
  ID IVar1;
  
  IVar1 = objc_stub::FUN_100c0ec80(*(ID *)(param_1 + (long)_dispatchQueue),param_3,(ulong)param_4);
  if ((int)IVar1 != 0) {
    _dispatch_block_cancel(param_3);
  }
  return;
}



/* Address: 0x100b2d144 | SentryTracer::startIdleTimeout */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainBlock replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryTracer::startIdleTimeout(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *local_70;
  undefined8 local_68;
  code *local_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  local_70 = PTR___NSConcreteStackBlock_100ea82a0;
  local_68 = 0xc2000000;
  local_60 = FUN_100b2d288;
  puStack_58 = &DAT_100f34938;
  _objc_copyWeak(auStack_50,auStack_48);
  IVar1 = objc_stub::FUN_100c013c0(param_1,&local_70);
  uVar2 = *(undefined8 *)(param_1 + (long)_dispatchTimeoutLock);
  _objc_sync_enter();
  lVar4 = (long)_idleTimeoutBlock;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  objc_stub::FUN_100c03580(*(ID *)(param_1 + (long)_configuration));
  objc_stub::FUN_100c014a0(param_1,uVar3,IVar1);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(ID *)(param_1 + lVar4) = IVar1;
  _objc_sync_exit(uVar3,uVar2);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Address: 0x100b2d288 | FUN_100b2d288 */

/* WARNING: Function: _objc_loadWeakRetained replaced with injection: _objc_load_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

char * FUN_100b2d288(long param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)0x0;
  if (*(long *)(param_1 + 0x20) != 0) {
    objc_stub::finishInternal(*(ID *)(param_1 + 0x20));
    return (char *)0x0;
  }
  FUN_100b3a1c0();
  if ((int)pcVar1 != 0) {
    pcVar1 = "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryTracer.m";
    FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryTracer.m",0xd5,
                  &cf_WeakSelfisnil_Notdoinganything_);
    return pcVar1;
  }
  return pcVar1;
}



/* Address: 0x100b2d300 | FUN_100b2d300 */

void FUN_100b2d300(long param_1,long param_2)

{
  _objc_copyWeak(param_1 + 0x20,param_2 + 0x20);
  return;
}



/* Address: 0x100b2d30c | FUN_100b2d30c */

void FUN_100b2d30c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x20);
  return;
}



/* Address: 0x100b2d314 | SentryTracer::cancelIdleTimeout */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryTracer::cancelIdleTimeout(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  ID IVar2;
  
  uVar1 = *(undefined8 *)(param_1 + (long)_dispatchTimeoutLock);
  _objc_sync_enter();
  IVar2 = objc_stub::FUN_100c032a0(param_1);
  if ((int)IVar2 != 0) {
    objc_stub::FUN_100c013e0(param_1,*(undefined8 *)(param_1 + (long)_idleTimeoutBlock));
  }
  _objc_sync_exit(uVar1);
  return;
}



/* Address: 0x100b2d388 | SentryTracer::startDeadlineTimeout */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainBlock replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryTracer::startDeadlineTimeout(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *local_70;
  undefined8 local_68;
  code *local_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  local_70 = PTR___NSConcreteStackBlock_100ea82a0;
  local_68 = 0xc2000000;
  local_60 = FUN_100b2d4bc;
  puStack_58 = &DAT_100f34938;
  _objc_copyWeak(auStack_50,auStack_48);
  IVar1 = objc_stub::FUN_100c013c0(param_1,&local_70);
  uVar2 = *(undefined8 *)(param_1 + (long)_dispatchTimeoutLock);
  _objc_sync_enter();
  lVar4 = (long)_deadlineTimeoutBlock;
  objc_stub::FUN_100c014a0(param_1,0x403e000000000000,*(undefined8 *)(param_1 + lVar4),IVar1);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(ID *)(param_1 + lVar4) = IVar1;
  _objc_sync_exit(uVar3,uVar2);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Address: 0x100b2d4bc | FUN_100b2d4bc */

/* WARNING: Function: _objc_loadWeakRetained replaced with injection: _objc_load_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

char * FUN_100b2d4bc(long param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)0x0;
  if (*(long *)(param_1 + 0x20) != 0) {
    objc_stub::deadlineTimeoutExceeded(*(ID *)(param_1 + 0x20));
    return (char *)0x0;
  }
  FUN_100b3a1c0();
  if ((int)pcVar1 != 0) {
    pcVar1 = "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryTracer.m";
    FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryTracer.m",0xf1,
                  &cf_WeakSelfisnil_Notdoinganything_);
    return pcVar1;
  }
  return pcVar1;
}



/* Address: 0x100b2d534 | SentryTracer::deadlineTimeoutExceeded */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryTracer::deadlineTimeoutExceeded(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined8 uVar2;
  ID IVar3;
  ID IVar4;
  long lVar5;
  ID self;
  ID IVar6;
  undefined8 local_120;
  long lStack_118;
  long *local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_100ea82f0;
  IVar1 = param_1;
  FUN_100b3a1c0();
  if ((int)IVar1 != 0) {
    FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryTracer.m",0x101
                  ,&cf_Sentrytracerdeadlineexceeded);
  }
  _objc_sync_enter();
  IVar1 = objc_stub::isFinished(param_1);
  _objc_sync_exit(param_1);
  IVar3 = 0;
  if ((IVar1 & 1) == 0) {
    lVar5 = (long)_children;
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    _objc_sync_enter();
    lStack_118 = 0;
    local_120 = 0;
    uStack_108 = 0;
    local_110 = (long *)0x0;
    uStack_f8 = 0;
    local_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    IVar1 = *(ID *)(param_1 + lVar5);
    IVar3 = objc_stub::countByEnumeratingWithState_objects_count_(IVar1,&local_120,auStack_d8,0x10);
    if (IVar3 != 0) {
      lVar5 = *local_110;
      do {
        IVar6 = 0;
        do {
          if (*local_110 != lVar5) {
            _objc_enumerationMutation(IVar1);
          }
          self = *(ID *)(lStack_118 + IVar6 * 8);
          IVar4 = objc_stub::isFinished(self);
          if ((IVar4 & 1) == 0) {
            objc_stub::finishWithStatus_(self,2);
          }
          IVar6 = IVar6 + 1;
        } while (IVar3 != IVar6);
        IVar3 = objc_stub::countByEnumeratingWithState_objects_count_
                          (IVar1,&local_120,auStack_d8,0x10);
      } while (IVar3 != 0);
    }
    _objc_sync_exit(uVar2);
    *(undefined8 *)(param_1 + (long)_finishStatus) = 2;
    IVar3 = objc_stub::finishInternal(param_1);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(IVar3);
}



/* Address: 0x100b2d700 | SentryTracer::cancelDeadlineTimeout */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryTracer::cancelDeadlineTimeout(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_1 + (long)_dispatchTimeoutLock);
  _objc_sync_enter();
  lVar2 = (long)_deadlineTimeoutBlock;
  if (*(long *)(param_1 + lVar2) != 0) {
    objc_stub::FUN_100c013e0(param_1);
    *(undefined8 *)(param_1 + lVar2) = 0;
  }
  _objc_sync_exit(uVar1);
  return;
}



/* Address: 0x100b2d780 | SentryTracer::dispatchTimeout:newBlock:interval: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x28 bytes */

void SentryTracer::dispatchTimeout_newBlock_interval_
               (ID param_1,SEL param_2,ID param_3,uint param_4,ID param_5,uint param_6,
               double param_7)

{
  ID IVar1;
  ulong uVar2;
  
  uVar2 = (ulong)param_4;
  if (param_3 != 0) {
    IVar1 = objc_stub::FUN_100c013e0(param_1,param_3,uVar2,param_5,(ulong)param_6);
    param_4 = (uint)IVar1;
  }
  if (uVar2 == 0) {
    FUN_100b3a1e0();
    if (param_4 != 0) {
      FUN_100b3a280("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryTracer.m",
                    0x127,&cf_Couldn_tcreatedispatchafterblock_Finishingtransaction_);
    }
    objc_stub::finishInternal(param_1);
  }
  else {
    objc_stub::FUN_100c01360(*(ID *)(param_1 + (long)_dispatchQueue),param_7,uVar2);
  }
  return;
}



/* Address: 0x100b2d830 | SentryTracer::isAutoGeneratedTransaction */

/* Function Stack Size: 0x10 bytes */

bool SentryTracer::isAutoGeneratedTransaction(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = objc_stub::FUN_100c113c0(*(ID *)(param_1 + (long)_configuration));
  if ((IVar1 & 1) != 0) {
    return 1;
  }
  IVar1 = objc_stub::FUN_100c032a0(param_1);
  return (bool)IVar1;
}



/* Address: 0x100b2d874 | SentryTracer::getActiveSpan */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryTracer::getActiveSpan(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined8 uVar2;
  ID IVar3;
  long lVar4;
  
  IVar1 = objc_stub::delegate(param_1);
  if (IVar1 != 0) {
    lVar4 = (long)_children;
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    _objc_sync_enter();
    IVar1 = objc_stub::delegate(param_1);
    IVar1 = objc_stub::FUN_100c02c40(IVar1);
    if ((IVar1 == 0) ||
       (IVar3 = objc_stub::FUN_100bffc80(*(ID *)(param_1 + lVar4),IVar1), (IVar3 & 1) == 0)) {
      IVar1 = param_1;
    }
    _objc_sync_exit(uVar2);
    param_1 = IVar1;
  }
  return param_1;
}



/* Address: 0x100b2d960 | SentryTracer::startChildWithOperation: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryTracer::startChildWithOperation_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
  IVar1 = objc_stub::FUN_100c02c40(param_1);
  if (IVar1 == param_1) {
    IVar1 = objc_stub::spanId(param_1);
    IVar1 = objc_stub::FUN_100c0f3c0(param_1,IVar1,param_3,0);
  }
  else {
    IVar1 = objc_stub::FUN_100c0f380(IVar1,param_3);
  }
  return IVar1;
}



/* Address: 0x100b2da18 | SentryTracer::startChildWithOperation:description: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID SentryTracer::startChildWithOperation_description_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  
  IVar1 = objc_stub::FUN_100c02c40(param_1);
  if (IVar1 == param_1) {
    IVar1 = objc_stub::spanId(param_1);
    IVar1 = objc_stub::FUN_100c0f3c0(param_1,IVar1,param_3,param_4);
  }
  else {
    IVar1 = objc_stub::startChildWithOperation_description_(IVar1,param_3,param_4);
  }
  return IVar1;
}



/* Address: 0x100b2daf4 | SentryTracer::startChildWithParentId:operation:description: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x28 bytes */

ID SentryTracer::startChildWithParentId_operation_description_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  int iVar1;
  ID IVar2;
  class_t *pcVar3;
  class_t *self;
  ID IVar4;
  ID IVar5;
  undefined8 uVar6;
  long lVar7;
  
  objc_stub::FUN_100bfed80(param_1);
  IVar2 = objc_stub::isFinished(param_1);
  iVar1 = (int)IVar2;
  if (iVar1 == 0) {
    pcVar3 = &objc::class_t::SentrySpanContext;
    _objc_alloc();
    IVar2 = objc_stub::FUN_100c10960(param_1);
    self = &objc::class_t::SentrySpanId;
    _objc_alloc();
    IVar4 = objc_stub::init((ID)self);
    IVar5 = objc_stub::FUN_100c098c0(param_1);
    IVar2 = objc_stub::FUN_100c04e80((ID)pcVar3,IVar2,IVar4,param_3,param_4,param_5,IVar5);
    pcVar3 = &objc::class_t::SentrySpanInternal;
    _objc_alloc();
    IVar2 = objc_stub::FUN_100c04ec0((ID)pcVar3,param_1,IVar2);
    IVar4 = objc_stub::sharedInstance((ID)&objc::class_t::_TtC6Sentry25SentryDependencyContainer);
    IVar4 = objc_stub::FUN_100c00ac0(IVar4);
    IVar4 = objc_stub::date(IVar4);
    objc_stub::FUN_100c0de00(IVar2,IVar4);
    iVar1 = 0;
    FUN_100b3a1c0();
    if (iVar1 != 0) {
      IVar4 = objc_stub::spanId(IVar2);
      objc_stub::FUN_100c0a0a0(IVar4);
      objc_stub::FUN_100c0a0a0(param_3);
      FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryTracer.m",
                    0x17b,&cf_Startedchildspan__under__);
    }
    lVar7 = (long)_children;
    uVar6 = *(undefined8 *)(param_1 + lVar7);
    _objc_sync_enter();
    objc_stub::addObject_(*(ID *)(param_1 + lVar7),IVar2);
    _objc_sync_exit(uVar6);
  }
  else {
    FUN_100b3a1e0();
    if (iVar1 != 0) {
      FUN_100b3a280("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryTracer.m",
                    0x166,&
                          cf_Startingachildwithoperation__anddescription__onafinishedspanisnotsupported_itwon_tbesenttoSentry_
                   );
    }
    IVar2 = objc_stub::FUN_100c0eae0((ID)&objc::class_t::SentryNoOpSpan);
  }
  return IVar2;
}



/* Address: 0x100b2dd84 | SentryTracer::spanFinished: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryTracer::spanFinished_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  ID IVar2;
  
  IVar2 = param_3;
  FUN_100b3a1c0();
  if ((int)IVar2 != 0) {
    IVar2 = objc_stub::spanId(param_3);
    objc_stub::FUN_100c0a0a0(IVar2);
    FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryTracer.m",0x185
                  ,&cf_Finishedspan__);
  }
  iVar1 = 0;
  FUN_100b3a1c0();
  if (param_3 == param_1) {
    if (iVar1 != 0) {
      IVar2 = objc_stub::spanId(param_3);
      objc_stub::FUN_100c0a0a0(IVar2);
      FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryTracer.m",
                    0x18a,&cf_Cannotcallfinishonspanwithid__);
    }
  }
  else {
    if (iVar1 != 0) {
      IVar2 = objc_stub::FUN_100c10960(param_1);
      objc_stub::FUN_100c0a000(IVar2);
      objc_stub::FUN_100c0a000(*(ID *)(param_1 + (long)_profilerReferenceID));
      FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryTracer.m",399
                    ,&cf_Checkingiftracer___profileReferenceId___canbefinished);
    }
    objc_stub::FUN_100bfecc0(param_1);
  }
  return;
}



/* Address: 0x100b2df04 | SentryTracer::traceContext */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleaseReturnValue replaced with injection: _objc_retain_fixup
    */
/* Function Stack Size: 0x10 bytes */

ID SentryTracer::traceContext(ID param_1,SEL param_2)

{
  ID IVar1;
  class_t *self;
  ID IVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_traceContext;
  IVar1 = *(ID *)(param_1 + lVar4);
  if (IVar1 == 0) {
    _objc_sync_enter();
    lVar3 = *(long *)(param_1 + lVar4);
    if (lVar3 == 0) {
      self = &objc::class_t::SentryTraceContext;
      _objc_alloc();
      lVar3 = (long)_hub;
      IVar1 = objc_stub::scope(*(ID *)(param_1 + lVar3));
      IVar2 = objc_stub::FUN_100bff480(*(ID *)(param_1 + lVar3));
      IVar2 = objc_stub::options(IVar2);
      if (IVar2 == 0) {
        IVar2 = objc_stub::options((ID)&objc::class_t::SentrySDKInternal);
      }
      IVar1 = objc_stub::FUN_100c04ee0((ID)self,param_1,IVar1,IVar2);
      lVar3 = *(long *)(param_1 + lVar4);
      *(ID *)(param_1 + lVar4) = IVar1;
    }
    _objc_sync_exit(lVar3,param_1);
    IVar1 = *(ID *)(param_1 + lVar4);
  }
  return IVar1;
}



/* Address: 0x100b2e040 | SentryTracer::children */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryTracer::children(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = objc_stub::copy(*(ID *)(param_1 + (long)_children));
  return IVar1;
}



/* Address: 0x100b2e060 | SentryTracer::setMeasurement:value: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void SentryTracer::setMeasurement_value_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  class_t *self;
  
  self = &objc::class_t::_TtC6Sentry22SentryMeasurementValue;
  _objc_alloc();
  IVar1 = objc_stub::FUN_100c051c0((ID)self,param_4);
  objc_stub::FUN_100c0c9e0(param_1,param_3,IVar1);
  return;
}



/* Address: 0x100b2e0e0 | SentryTracer::setMeasurement:value:unit: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x28 bytes */

void SentryTracer::setMeasurement_value_unit_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  ID IVar1;
  class_t *self;
  
  self = &objc::class_t::_TtC6Sentry22SentryMeasurementValue;
  _objc_alloc();
  IVar1 = objc_stub::FUN_100c05200((ID)self,param_4,param_5);
  objc_stub::FUN_100c0c9e0(param_1,param_3,IVar1);
  return;
}


