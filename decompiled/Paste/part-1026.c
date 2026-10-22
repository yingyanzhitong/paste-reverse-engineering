/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100b15740 | FUN_100b15740 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainBlock replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

undefined1 * FUN_100b15740(void)

{
  undefined1 local_50 [48];
  
  return local_50;
}



/* Address: 0x100b157c8 | FUN_100b157c8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100b157c8(long param_1,undefined8 param_2,ID param_3)

{
  code *pcVar1;
  
  SentryNSExceptionCaptureHelper::reportException_
            ((ID)&objc::class_t::SentryNSExceptionCaptureHelper,param_3);
  pcVar1 = (code *)objc_stub::getOriginalImplementation(*(ID *)(param_1 + 0x20));
  (*pcVar1)(param_2,*(undefined8 *)(param_1 + 0x28),param_3);
  SentryNSExceptionCaptureHelper::reportExceptionDidFinish
            ((ID)&objc::class_t::SentryNSExceptionCaptureHelper);
  return;
}



/* Address: 0x100b15840 | SentryUncaughtNSExceptions::swizzleNSApplicationCrashOnException */

/* Function Stack Size: 0x10 bytes */

void SentryUncaughtNSExceptions::swizzleNSApplicationCrashOnException(ID param_1,SEL param_2)

{
  if (DAT_1010e1978 == -1) {
    return;
  }
  FUN_100b15b54();
  return;
}



/* Address: 0x100b15868 | FUN_100b15868 */

void FUN_100b15868(void)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  ID IVar3;
  undefined4 in_w5;
  const_void__ in_x7;
  undefined *local_a0;
  undefined8 local_98;
  code *local_90;
  undefined *puStack_88;
  cfstringStruct *local_80;
  undefined *local_78;
  undefined8 local_70;
  code *local_68;
  undefined *puStack_60;
  cfstringStruct *local_58;
  
  pcVar2 = &cf__crashOnException_;
  _NSSelectorFromString();
  IVar3 = NSApplication::class((ID)&_OBJC_CLASS___NSApplication);
  _class_getClassMethod(IVar3,pcVar2);
  puVar1 = PTR___NSConcreteStackBlock_100ea82a0;
  if (IVar3 != 0) {
    IVar3 = NSApplication::class((ID)&_OBJC_CLASS___NSApplication);
    local_78 = puVar1;
    local_70 = 0xc0000000;
    local_68 = FUN_100b15974;
    puStack_60 = &DAT_100f34390;
    local_58 = pcVar2;
    SentrySwizzle::swizzleClassMethod_inClass_newImpFactory_
              ((ID)&objc::class_t::SentrySwizzle,(SEL)pcVar2,IVar3,(ID)&local_78,in_w5);
  }
  IVar3 = NSApplication::class((ID)&_OBJC_CLASS___NSApplication);
  _class_getInstanceMethod(IVar3,pcVar2);
  if (IVar3 != 0) {
    IVar3 = NSApplication::class((ID)&_OBJC_CLASS___NSApplication);
    local_a0 = puVar1;
    local_98 = 0xc0000000;
    local_90 = FUN_100b15a64;
    puStack_88 = &DAT_100f34390;
    local_80 = pcVar2;
    SentrySwizzle::swizzleInstanceMethod_inClass_newImpFactory_mode_key_
              ((ID)&objc::class_t::SentrySwizzle,(SEL)pcVar2,IVar3,(ID)&local_a0,2,
               (unsigned_long_long)pcVar2,in_x7);
  }
  return;
}



/* Address: 0x100b15974 | FUN_100b15974 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainBlock replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

undefined1 * FUN_100b15974(void)

{
  undefined1 local_50 [48];
  
  return local_50;
}



/* Address: 0x100b159fc | FUN_100b159fc */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b159fc(long param_1,undefined8 param_2,ID param_3)

{
  code *pcVar1;
  
  SentryNSExceptionCaptureHelper::crashOnException_
            ((ID)&objc::class_t::SentryNSExceptionCaptureHelper,param_3);
  pcVar1 = (code *)objc_stub::getOriginalImplementation(*(ID *)(param_1 + 0x20));
  (*pcVar1)(param_2,*(undefined8 *)(param_1 + 0x28),param_3);
  return 0;
}



/* Address: 0x100b15a64 | FUN_100b15a64 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainBlock replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

undefined1 * FUN_100b15a64(void)

{
  undefined1 local_50 [48];
  
  return local_50;
}



/* Address: 0x100b15aec | FUN_100b15aec */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b15aec(long param_1,undefined8 param_2,ID param_3)

{
  code *pcVar1;
  
  SentryNSExceptionCaptureHelper::crashOnException_
            ((ID)&objc::class_t::SentryNSExceptionCaptureHelper,param_3);
  pcVar1 = (code *)objc_stub::getOriginalImplementation(*(ID *)(param_1 + 0x20));
  (*pcVar1)(param_2,*(undefined8 *)(param_1 + 0x28),param_3);
  return 0;
}



/* Address: 0x100b15b54 | FUN_100b15b54 */

void FUN_100b15b54(void)

{
  _dispatch_once(&DAT_1010e1978,&PTR___NSConcreteGlobalBlock_100f343b0);
  return;
}



/* Address: 0x100b15b68 | FUN_100b15b68 */

int * FUN_100b15b68(int *param_1,undefined8 param_2,uint param_3)

{
  mach_port_t host;
  kern_return_t kVar1;
  undefined8 *puVar2;
  ulong uVar3;
  int iVar4;
  
  FUN_100b16728(param_1 + 2);
  puVar2 = (undefined8 *)0x18;
  __Znwm();
  *puVar2 = 0;
  puVar2[1] = 0;
  param_1[0xe] = 0x32aaaba7;
  param_1[0xf] = 0;
  puVar2[2] = 0;
  *(undefined8 **)(param_1 + 10) = puVar2;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined8 *)((long)param_1 + 0x71) = 0;
  *(undefined8 *)((long)param_1 + 0x69) = 0;
  host = _mach_host_self();
  kVar1 = _host_get_clock_service(host,0,(clock_serv_t *)(param_1 + 0x22));
  if (kVar1 == 0) {
    kVar1 = _mach_port_allocate(*(ipc_space_t *)PTR__mach_task_self__100ea8778,1,
                                (mach_port_name_t *)(param_1 + 0x23));
    if (kVar1 == 0) {
      uVar3 = (ulong)((1.0 / (float)param_3) * 1e+09);
      iVar4 = (int)(uVar3 / 1000000000);
      *param_1 = iVar4;
      param_1[1] = (int)uVar3 + iVar4 * -1000000000;
      *(undefined1 *)(param_1 + 0xc) = 1;
    }
    else {
      FUN_100b57c64();
      FUN_100b5e930("ERROR",
                    "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentrySamplingProfiler.cpp"
                    ,0x5c,"%s failed with kern return code: %d, description: %s");
    }
  }
  else {
    FUN_100b57c64();
    FUN_100b5e930("ERROR",
                  "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentrySamplingProfiler.cpp"
                  ,0x57,"%s failed with kern return code: %d, description: %s");
  }
  return param_1;
}



/* Address: 0x100b15d4c | thunk_FUN_100b15b68 */

int * thunk_FUN_100b15b68(int *param_1,undefined8 param_2,uint param_3)

{
  mach_port_t host;
  kern_return_t kVar1;
  undefined8 *puVar2;
  ulong uVar3;
  int iVar4;
  
  FUN_100b16728(param_1 + 2);
  puVar2 = (undefined8 *)0x18;
  __Znwm();
  *puVar2 = 0;
  puVar2[1] = 0;
  param_1[0xe] = 0x32aaaba7;
  param_1[0xf] = 0;
  puVar2[2] = 0;
  *(undefined8 **)(param_1 + 10) = puVar2;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined8 *)((long)param_1 + 0x71) = 0;
  *(undefined8 *)((long)param_1 + 0x69) = 0;
  host = _mach_host_self();
  kVar1 = _host_get_clock_service(host,0,(clock_serv_t *)(param_1 + 0x22));
  if (kVar1 == 0) {
    kVar1 = _mach_port_allocate(*(ipc_space_t *)PTR__mach_task_self__100ea8778,1,
                                (mach_port_name_t *)(param_1 + 0x23));
    if (kVar1 == 0) {
      uVar3 = (ulong)((1.0 / (float)param_3) * 1e+09);
      iVar4 = (int)(uVar3 / 1000000000);
      *param_1 = iVar4;
      param_1[1] = (int)uVar3 + iVar4 * -1000000000;
      *(undefined1 *)(param_1 + 0xc) = 1;
    }
    else {
      FUN_100b57c64();
      FUN_100b5e930("ERROR",
                    "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentrySamplingProfiler.cpp"
                    ,0x5c,"%s failed with kern return code: %d, description: %s");
    }
  }
  else {
    FUN_100b57c64();
    FUN_100b5e930("ERROR",
                  "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentrySamplingProfiler.cpp"
                  ,0x57,"%s failed with kern return code: %d, description: %s");
  }
  return param_1;
}



/* Address: 0x100b15d50 | FUN_100b15d50 */

long FUN_100b15d50(long param_1)

{
  kern_return_t kVar1;
  long *plVar2;
  long lVar3;
  
  if (*(char *)(param_1 + 0x30) == '\x01') {
    FUN_100b15e2c(param_1);
    kVar1 = _mach_port_mod_refs(*(ipc_space_t *)PTR__mach_task_self__100ea8778,
                                *(mach_port_name_t *)(param_1 + 0x8c),1,-1);
    if (kVar1 != 0) {
      FUN_100b57c64();
      FUN_100b5e930("ERROR",
                    "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentrySamplingProfiler.cpp"
                    ,0x6f,"%s failed with kern return code: %d, description: %s");
    }
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x38);
  FUN_100b1678c(param_1 + 0x28,0);
  plVar2 = *(long **)(param_1 + 0x20);
  if (plVar2 == (long *)(param_1 + 8)) {
    lVar3 = 0x20;
  }
  else {
    if (plVar2 == (long *)0x0) {
      return param_1;
    }
    lVar3 = 0x28;
  }
  (**(code **)(*plVar2 + lVar3))();
  return param_1;
}



/* Address: 0x100b15e2c | FUN_100b15e2c */

void FUN_100b15e2c(long param_1)

{
  int iVar1;
  int *piVar2;
  undefined **ppuVar3;
  
  if (*(char *)(param_1 + 0x30) == '\x01') {
    __ZNSt3__15mutex4lockEv(param_1 + 0x38);
    if (*(char *)(param_1 + 0x78) == '\x01') {
      piVar2 = ___error();
      *piVar2 = 0;
      _pthread_cancel(*(pthread_t *)(param_1 + 0x80));
      piVar2 = ___error();
      iVar1 = *piVar2;
      if (iVar1 != 0) {
        ppuVar3 = &PTR___tlv_bootstrap_101048ff8;
        (*(code *)PTR___tlv_bootstrap_101048ff8)();
        iVar1 = _strerror_r(iVar1,(char *)ppuVar3,0x400);
        if (iVar1 != 0) {
          _snprintf((char *)ppuVar3,0x400,"Unknown error %d");
        }
        FUN_100b5e930("ERROR",
                      "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentrySamplingProfiler.cpp"
                      ,0xa4,"%s failed with code: %d, description: %s");
      }
      piVar2 = ___error();
      *piVar2 = 0;
      _pthread_join(*(pthread_t *)(param_1 + 0x80),(void **)0x0);
      piVar2 = ___error();
      iVar1 = *piVar2;
      if (iVar1 != 0) {
        ppuVar3 = &PTR___tlv_bootstrap_101049010;
        (*(code *)PTR___tlv_bootstrap_101049010)();
        iVar1 = _strerror_r(iVar1,(char *)ppuVar3,0x400);
        if (iVar1 != 0) {
          _snprintf((char *)ppuVar3,0x400,"Unknown error %d");
        }
        FUN_100b5e930("ERROR",
                      "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentrySamplingProfiler.cpp"
                      ,0xa5,"%s failed with code: %d, description: %s");
      }
      *(undefined1 *)(param_1 + 0x78) = 0;
    }
    __ZNSt3__15mutex6unlockEv(param_1 + 0x38);
    return;
  }
  return;
}



/* Address: 0x100b15fd4 | FUN_100b15fd4 */

long FUN_100b15fd4(long param_1)

{
  kern_return_t kVar1;
  long *plVar2;
  long lVar3;
  
  ___cxa_begin_catch();
  __ZSt9terminatev();
  if (*(char *)(param_1 + 0x30) == '\x01') {
    FUN_100b15e2c(param_1);
    kVar1 = _mach_port_mod_refs(*(ipc_space_t *)PTR__mach_task_self__100ea8778,
                                *(mach_port_name_t *)(param_1 + 0x8c),1,-1);
    if (kVar1 != 0) {
      FUN_100b57c64();
      FUN_100b5e930("ERROR",
                    "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentrySamplingProfiler.cpp"
                    ,0x6f,"%s failed with kern return code: %d, description: %s");
    }
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x38);
  FUN_100b1678c(param_1 + 0x28,0);
  plVar2 = *(long **)(param_1 + 0x20);
  if (plVar2 == (long *)(param_1 + 8)) {
    lVar3 = 0x20;
  }
  else {
    if (plVar2 == (long *)0x0) {
      return param_1;
    }
    lVar3 = 0x28;
  }
  (**(code **)(*plVar2 + lVar3))();
  return param_1;
}



/* Address: 0x100b15fe4 | thunk_FUN_100b15d50 */

long thunk_FUN_100b15d50(long param_1)

{
  kern_return_t kVar1;
  long *plVar2;
  long lVar3;
  
  if (*(char *)(param_1 + 0x30) == '\x01') {
    FUN_100b15e2c(param_1);
    kVar1 = _mach_port_mod_refs(*(ipc_space_t *)PTR__mach_task_self__100ea8778,
                                *(mach_port_name_t *)(param_1 + 0x8c),1,-1);
    if (kVar1 != 0) {
      FUN_100b57c64();
      FUN_100b5e930("ERROR",
                    "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentrySamplingProfiler.cpp"
                    ,0x6f,"%s failed with kern return code: %d, description: %s");
    }
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x38);
  FUN_100b1678c(param_1 + 0x28,0);
  plVar2 = *(long **)(param_1 + 0x20);
  if (plVar2 == (long *)(param_1 + 8)) {
    lVar3 = 0x20;
  }
  else {
    if (plVar2 == (long *)0x0) {
      return param_1;
    }
    lVar3 = 0x28;
  }
  (**(code **)(*plVar2 + lVar3))();
  return param_1;
}



/* Address: 0x100b15fe8 | FUN_100b15fe8 */

void FUN_100b15fe8(mach_timespec_t *param_1,undefined8 param_2)

{
  mach_timespec_t *pmVar1;
  int iVar2;
  int iVar3;
  kern_return_t kVar4;
  int *piVar5;
  undefined **ppuVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  mach_timespec_t mVar10;
  undefined8 uVar11;
  sched_param local_a0;
  pthread_attr_t pStack_98;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_100ea82f0;
  if ((char)param_1[6].tv_sec != '\x01') goto LAB_100b163ac;
  __ZNSt3__15mutex4lockEv(param_1 + 7);
  if ((param_1[0xf].tv_sec & 1) == 0) {
    *(undefined1 *)&param_1[0xf].tv_sec = 1;
    pmVar1 = param_1 + 0x12;
    pmVar1->tv_sec = 0;
    pmVar1->tv_nsec = 0;
    piVar5 = ___error();
    *piVar5 = 0;
    iVar2 = _pthread_attr_init(&pStack_98);
    piVar5 = ___error();
    iVar3 = *piVar5;
    if (iVar3 != 0) {
      ppuVar6 = &PTR___tlv_bootstrap_101048f98;
      (*(code *)PTR___tlv_bootstrap_101048f98)();
      iVar3 = _strerror_r(iVar3,(char *)ppuVar6,0x400);
      if (iVar3 != 0) {
        _snprintf((char *)ppuVar6,0x400,"Unknown error %d");
      }
      FUN_100b5e930("ERROR",
                    "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentrySamplingProfiler.cpp"
                    ,0x81,"%s failed with code: %d, description: %s");
    }
    if (iVar2 == 0) {
      piVar5 = ___error();
      *piVar5 = 0;
      iVar2 = _pthread_attr_getschedparam(&pStack_98,&local_a0);
      piVar5 = ___error();
      iVar3 = *piVar5;
      if (iVar3 != 0) {
        ppuVar6 = &PTR___tlv_bootstrap_101048fb0;
        (*(code *)PTR___tlv_bootstrap_101048fb0)();
        iVar3 = _strerror_r(iVar3,(char *)ppuVar6,0x400);
        if (iVar3 != 0) {
          _snprintf((char *)ppuVar6,0x400,"Unknown error %d");
        }
        FUN_100b5e930("ERROR",
                      "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentrySamplingProfiler.cpp"
                      ,0x85,"%s failed with code: %d, description: %s");
      }
      if (iVar2 == 0) {
        local_a0.sched_priority = 0x32;
        piVar5 = ___error();
        *piVar5 = 0;
        _pthread_attr_setschedparam(&pStack_98,&local_a0);
        piVar5 = ___error();
        iVar3 = *piVar5;
        if (iVar3 != 0) {
          ppuVar6 = &PTR___tlv_bootstrap_101048fc8;
          (*(code *)PTR___tlv_bootstrap_101048fc8)();
          iVar3 = _strerror_r(iVar3,(char *)ppuVar6,0x400);
          if (iVar3 != 0) {
            _snprintf((char *)ppuVar6,0x400,"Unknown error %d");
          }
          FUN_100b5e930("ERROR",
                        "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentrySamplingProfiler.cpp"
                        ,0x8b,"%s failed with code: %d, description: %s");
        }
      }
      puVar7 = (undefined8 *)0x60;
      __Znwm();
      uVar11 = NEON_rev64(param_1[0x11],4);
      *puVar7 = uVar11;
      mVar10 = param_1[5];
      *(mach_timespec_t *)(puVar7 + 1) = *param_1;
      *(mach_timespec_t *)(puVar7 + 2) = mVar10;
      FUN_100b16858(puVar7 + 3,param_1 + 1);
      puVar7[7] = pmVar1;
      FUN_100b168bc(puVar7 + 8,param_2);
      piVar5 = ___error();
      *piVar5 = 0;
      iVar2 = _pthread_create((pthread_t *)(param_1 + 0x10),&pStack_98,(void **)FUN_100b16434,puVar7
                             );
      piVar5 = ___error();
      iVar3 = *piVar5;
      if (iVar3 != 0) {
        ppuVar6 = &PTR___tlv_bootstrap_101048fe0;
        (*(code *)PTR___tlv_bootstrap_101048fe0)();
        iVar3 = _strerror_r(iVar3,(char *)ppuVar6,0x400);
        if (iVar3 != 0) {
          _snprintf((char *)ppuVar6,0x400,"Unknown error %d");
        }
        FUN_100b5e930("ERROR",
                      "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentrySamplingProfiler.cpp"
                      ,0x91,"%s failed with code: %d, description: %s");
      }
      if (iVar2 == 0) {
        kVar4 = _clock_alarm(param_1[0x11].tv_sec,1,*param_1,param_1[0x11].tv_nsec);
        if (kVar4 != 0) {
          FUN_100b57c64();
          FUN_100b5e930("ERROR",
                        "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentrySamplingProfiler.cpp"
                        ,0x97,"%s failed with kern return code: %d, description: %s");
        }
      }
      else {
        plVar8 = (long *)puVar7[0xb];
        if (plVar8 == puVar7 + 8) {
          lVar9 = 0x20;
LAB_100b16368:
          (**(code **)(*plVar8 + lVar9))();
        }
        else if (plVar8 != (long *)0x0) {
          lVar9 = 0x28;
          goto LAB_100b16368;
        }
        plVar8 = (long *)puVar7[6];
        if (plVar8 == puVar7 + 3) {
          lVar9 = 0x20;
LAB_100b16390:
          (**(code **)(*plVar8 + lVar9))();
        }
        else if (plVar8 != (long *)0x0) {
          lVar9 = 0x28;
          goto LAB_100b16390;
        }
        __ZdlPv(puVar7);
      }
    }
  }
  __ZNSt3__15mutex6unlockEv(param_1 + 7);
LAB_100b163ac:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100b16434 | FUN_100b16434 */

undefined8 FUN_100b16434(clock_reply_t *param_1)

{
  long lVar1;
  int iVar2;
  kern_return_t kVar3;
  int *piVar4;
  undefined **ppuVar5;
  mach_msg_header_t *msg;
  pthread_t p_Var6;
  pthread_t p_Var7;
  undefined8 uVar8;
  char *pcVar9;
  __darwin_pthread_handler_rec local_70;
  __darwin_pthread_handler_rec local_58;
  
  piVar4 = ___error();
  *piVar4 = 0;
  _pthread_setname_np("io.sentry.SamplingProfiler");
  piVar4 = ___error();
  iVar2 = *piVar4;
  if (iVar2 != 0) {
    ppuVar5 = &PTR___tlv_bootstrap_101049028;
    (*(code *)PTR___tlv_bootstrap_101049028)();
    iVar2 = _strerror_r(iVar2,(char *)ppuVar5,0x400);
    if (iVar2 != 0) {
      _snprintf((char *)ppuVar5,0x400,"Unknown error %d");
    }
    FUN_100b5e930("ERROR",
                  "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentrySamplingProfiler.cpp"
                  ,0x2d,"%s failed with code: %d, description: %s");
  }
  if (*(long **)(param_1 + 0x16) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x16) + 0x30))();
  }
  msg = _malloc(0x200);
  p_Var6 = _pthread_self();
  local_58.__routine = _free;
  local_58.__next = p_Var6->__cleanup_stack;
  p_Var6->__cleanup_stack = &local_58;
  local_58.__arg = msg;
  p_Var7 = _pthread_self();
  local_70.__routine = FUN_100b166a8;
  local_70.__next = p_Var7->__cleanup_stack;
  p_Var7->__cleanup_stack = &local_70;
  local_70.__arg = param_1;
  _pthread_testcancel();
  iVar2 = _mach_msg(msg,2,0,0x200,*param_1,0,0);
  do {
    if (iVar2 != 0) {
      FUN_100b57c88();
      pcVar9 = "%s failed with mach_msg return code: %d, description: %s";
      uVar8 = 0x39;
LAB_100b165f8:
      FUN_100b5e930("ERROR",
                    "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentrySamplingProfiler.cpp"
                    ,uVar8,pcVar9);
      p_Var7->__cleanup_stack = local_70.__next;
      (*local_70.__routine)(local_70.__arg);
      p_Var6->__cleanup_stack = local_58.__next;
      (*local_58.__routine)(local_58.__arg);
      return 0;
    }
    kVar3 = _clock_alarm(param_1[1],1,*(mach_timespec_t *)(param_1 + 2),*param_1);
    if (kVar3 != 0) {
      FUN_100b57c64();
      pcVar9 = "%s failed with kern return code: %d, description: %s";
      uVar8 = 0x3e;
      goto LAB_100b165f8;
    }
    lVar1 = **(long **)(param_1 + 0xe);
    **(long **)(param_1 + 0xe) = lVar1 + 1;
    FUN_100b406e0(lVar1,param_1 + 6,*(undefined8 *)(param_1 + 4));
    _pthread_testcancel();
    iVar2 = _mach_msg(msg,2,0,0x200,*param_1,0,0);
  } while( true );
}



/* Address: 0x100b16670 | FUN_100b16670 */

undefined1 FUN_100b16670(long param_1)

{
  undefined1 uVar1;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x38);
  uVar1 = *(undefined1 *)(param_1 + 0x78);
  __ZNSt3__15mutex6unlockEv(param_1 + 0x38);
  return uVar1;
}



/* Address: 0x100b166a4 | _free */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _free(void *param_1)

{
  _free(param_1);
  return;
}



/* Address: 0x100b166a8 | FUN_100b166a8 */

void FUN_100b166a8(long param_1)

{
  long *plVar1;
  long lVar2;
  
  if (param_1 == 0) {
    return;
  }
  plVar1 = *(long **)(param_1 + 0x58);
  if (plVar1 == (long *)(param_1 + 0x40)) {
    lVar2 = 0x20;
LAB_100b166e0:
    (**(code **)(*plVar1 + lVar2))();
  }
  else if (plVar1 != (long *)0x0) {
    lVar2 = 0x28;
    goto LAB_100b166e0;
  }
  plVar1 = *(long **)(param_1 + 0x30);
  if (plVar1 == (long *)(param_1 + 0x18)) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_100b16718;
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
LAB_100b16718:
  __ZdlPv(param_1);
  return;
}



/* Address: 0x100b16728 | FUN_100b16728 */

long FUN_100b16728(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)(param_2 + 0x18);
  lVar2 = *plVar1;
  if (lVar2 == 0) {
    plVar1 = (long *)(param_1 + 0x18);
  }
  else {
    if (lVar2 == param_2) {
      *(long *)(param_1 + 0x18) = param_1;
      (**(code **)(*(long *)*plVar1 + 0x18))((long *)*plVar1,param_1);
      return param_1;
    }
    *(long *)(param_1 + 0x18) = lVar2;
  }
  *plVar1 = 0;
  return param_1;
}



/* Address: 0x100b1678c | FUN_100b1678c */

void FUN_100b1678c(long *param_1,long param_2)

{
  long lVar1;
  long local_28;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    local_28 = lVar1;
    FUN_100b167cc(&local_28);
    __ZdlPv(lVar1);
  }
  return;
}



/* Address: 0x100b167cc | FUN_100b167cc */

void FUN_100b167cc(undefined8 *param_1)

{
  if (*(long *)*param_1 != 0) {
    FUN_100b1680c();
    __ZdlPv(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Address: 0x100b1680c | FUN_100b1680c */

/* WARNING: Removing unreachable block (ram,0x000100b16834) */

void FUN_100b1680c(long *param_1)

{
  long lVar1;
  
  for (lVar1 = param_1[1]; lVar1 != *param_1; lVar1 = lVar1 + -0x30) {
  }
  param_1[1] = *param_1;
  return;
}



/* Address: 0x100b16858 | FUN_100b16858 */

long FUN_100b16858(long param_1,long *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)param_2[3];
  if (plVar1 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else if (plVar1 == param_2) {
    *(long *)(param_1 + 0x18) = param_1;
    (**(code **)(*(long *)param_2[3] + 0x18))((long *)param_2[3],param_1);
  }
  else {
    (**(code **)(*plVar1 + 0x10))();
    *(long **)(param_1 + 0x18) = plVar1;
  }
  return param_1;
}



/* Address: 0x100b168bc | FUN_100b168bc */

long FUN_100b168bc(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)(param_2 + 0x18);
  lVar2 = *plVar1;
  if (lVar2 == 0) {
    plVar1 = (long *)(param_1 + 0x18);
  }
  else {
    if (lVar2 == param_2) {
      *(long *)(param_1 + 0x18) = param_1;
      (**(code **)(*(long *)*plVar1 + 0x18))((long *)*plVar1,param_1);
      return param_1;
    }
    *(long *)(param_1 + 0x18) = lVar2;
  }
  *plVar1 = 0;
  return param_1;
}



/* Address: 0x100b16920 | FUN_100b16920 */

cfstringStruct * FUN_100b16920(long param_1)

{
  if (param_1 - 1U < 0x11) {
    return (cfstringStruct *)(&PTR_cf_ok_100f343d8)[param_1 - 1U];
  }
  return &cf_undefined;
}



/* Address: 0x100b16948 | FUN_100b16948 */

void * FUN_100b16948(void *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  int *piVar7;
  undefined **ppuVar8;
  int extraout_w8;
  ulong uVar9;
  
  if (param_1 == (void *)0x0) {
    return (void *)0xffffffff;
  }
  pvVar4 = param_1;
  if (DAT_1010e1980 == (void *)0x0) {
    DAT_1010e1988 = 0;
    DAT_1010e1990 = 0x19;
    pvVar4 = _malloc(400);
    DAT_1010e1980 = pvVar4;
    if (pvVar4 == (void *)0x0) {
      piVar7 = ___error();
      ppuVar8 = &PTR___tlv_bootstrap_101049040;
      (*(code *)PTR___tlv_bootstrap_101049040)(*piVar7);
      iVar3 = _strerror_r(extraout_w8,(char *)ppuVar8,0x400);
      if (iVar3 != 0) {
        ___error();
        _snprintf((char *)ppuVar8,0x400,"Unknown error %d");
      }
      FUN_100b5e930("ERROR",
                    "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Tools/SentryCrashCxaThrowSwapper.c"
                    ,0x1b5,"Failed to allocate memory for g_cxa_originals: %s");
      return (void *)0xffffffff;
    }
  }
  if (DAT_1010e1998 == (void *)0x0) {
    DAT_1010e1998 = param_1;
    __dyld_register_func_for_add_image(FUN_100b16aa4);
  }
  else {
    DAT_1010e1998 = param_1;
    __dyld_image_count();
    if ((int)pvVar4 == 0) {
      return pvVar4;
    }
    uVar9 = 0;
    do {
      uVar5 = uVar9;
      __dyld_get_image_header();
      uVar6 = uVar9;
      __dyld_get_image_vmaddr_slide();
      if ((uVar5 != 0) && (uVar6 != 0)) {
        uVar6 = uVar9;
        __dyld_get_image_header();
        uVar5 = uVar9;
        __dyld_get_image_vmaddr_slide(uVar9);
        FUN_100b16aac(uVar6,uVar5,1);
      }
      uVar2 = (uint)uVar6;
      uVar1 = (int)uVar9 + 1;
      uVar9 = (ulong)uVar1;
      __dyld_image_count();
    } while (uVar1 < uVar2);
  }
  return (void *)0x0;
}



/* Address: 0x100b16aa4 | FUN_100b16aa4 */

void FUN_100b16aa4(undefined8 param_1,undefined8 param_2)

{
  FUN_100b16aac(param_1,param_2,1);
  return;
}



/* Address: 0x100b16aac | FUN_100b16aac */

void FUN_100b16aac(long param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_70 [32];
  
  if (((param_1 != 0) && (param_2 != 0)) &&
     (lVar4 = param_1, _dladdr(param_1,auStack_70), (int)lVar4 != 0)) {
    lVar4 = param_1;
    FUN_100b6070c(param_1,2);
    lVar5 = param_1;
    FUN_100b6070c(param_1,0xb);
    lVar6 = param_1;
    FUN_100b60770(param_1,"__LINKEDIT");
    if (((lVar4 != 0) && (lVar5 != 0)) && (lVar6 != 0)) {
      lVar6 = (*(long *)(lVar6 + 0x18) + param_2) - *(long *)(lVar6 + 0x28);
      uVar1 = *(uint *)(lVar4 + 8);
      uVar2 = *(uint *)(lVar4 + 0x10);
      uVar3 = *(uint *)(lVar5 + 0x38);
      FUN_100b16c58(param_1,param_2,"__DATA",lVar6 + (ulong)uVar1,lVar6 + (ulong)uVar2,
                    lVar6 + (ulong)uVar3,param_3);
      FUN_100b16c58(param_1,param_2,"__DATA_CONST",lVar6 + (ulong)uVar1,lVar6 + (ulong)uVar2,
                    lVar6 + (ulong)uVar3,param_3);
    }
  }
  return;
}



/* Address: 0x100b16ba4 | FUN_100b16ba4 */

undefined8 FUN_100b16ba4(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  if ((DAT_1010e1998 == 0 || DAT_1010e1980 == 0) || DAT_1010e1988 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    __dyld_image_count();
    if (param_1 != 0) {
      uVar6 = 0;
      do {
        uVar4 = uVar6;
        __dyld_get_image_header();
        uVar5 = uVar6;
        __dyld_get_image_vmaddr_slide();
        if ((uVar4 != 0) && (uVar5 != 0)) {
          FUN_100b16aac(uVar4,uVar5,0);
          uVar5 = uVar4;
        }
        uVar2 = (uint)uVar5;
        uVar1 = (int)uVar6 + 1;
        uVar6 = (ulong)uVar1;
        __dyld_image_count();
      } while (uVar1 < uVar2);
    }
    uVar3 = 0;
    DAT_1010e1998 = 0;
  }
  return uVar3;
}



/* Address: 0x100b16c44 | FUN_100b16c44 */

bool FUN_100b16c44(void)

{
  return DAT_1010e1998 != 0;
}



/* Address: 0x100b16c58 | FUN_100b16c58 */

void FUN_100b16c58(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  
  FUN_100b60770(param_1,param_3);
  if (param_1 != 0) {
    lVar1 = param_1;
    FUN_100b60824();
    FUN_100b60824(param_1,6);
    if (lVar1 != 0) {
      FUN_100b16d1c(lVar1,param_2,param_4,param_5,param_6,param_7);
    }
    if (param_1 != 0) {
      FUN_100b16d1c(param_1,param_2,param_4,param_5,param_6,param_7);
      return;
    }
  }
  return;
}



/* Address: 0x100b16d1c | FUN_100b16d1c */

void FUN_100b16d1c(long param_1,long param_2,long param_3,long param_4,long param_5,int param_6)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  char *pcVar7;
  undefined **ppuVar8;
  long lVar9;
  undefined8 uVar10;
  int extraout_w8;
  int extraout_w8_00;
  long *plVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long local_a0;
  undefined1 auStack_80 [8];
  long local_78;
  
  uVar2 = *(uint *)(param_1 + 0x44);
  uVar1 = *(long *)(param_1 + 0x20) + param_2;
  iVar4 = _strcmp((char *)(param_1 + 0x10),"__DATA_CONST");
  if (iVar4 == 0) {
    FUN_100b60884();
    uVar16 = *(ulong *)(param_1 + 0x28);
    if (uVar1 != 0 && uVar16 != 0) {
      uVar17 = _sysconf(0x1d);
      if ((0 < (long)uVar17) && (!CARRY8(uVar1,uVar16))) {
        uVar16 = uVar16 + uVar1;
        uVar14 = 0;
        if (uVar17 != 0) {
          uVar14 = uVar16 / uVar17;
        }
        lVar13 = uVar16 - uVar14 * uVar17;
        if (lVar13 != 0) {
          uVar14 = uVar17 - lVar13;
          if (CARRY8(uVar16,uVar14)) goto LAB_100b16e50;
          uVar16 = uVar14 + uVar16;
        }
        uVar14 = 0;
        if (uVar17 != 0) {
          uVar14 = uVar1 / uVar17;
        }
        local_a0 = uVar14 * uVar17;
        lVar9 = uVar16 - local_a0;
        lVar13 = local_a0;
        _mprotect(local_a0,lVar9,3);
        if ((int)lVar13 != 0) {
          piVar6 = ___error();
          ppuVar8 = &PTR___tlv_bootstrap_101049058;
          (*(code *)PTR___tlv_bootstrap_101049058)(*piVar6);
          iVar4 = _strerror_r(extraout_w8_00,(char *)ppuVar8,0x400);
          if (iVar4 != 0) {
            ___error();
            _snprintf((char *)ppuVar8,0x400,"Unknown error %d");
          }
          pcVar7 = "mprotect failed to set PROT_READ | PROT_WRITE for section %s,%s: %s";
          uVar10 = 0x10f;
          goto LAB_100b16e70;
        }
        goto LAB_100b16d90;
      }
    }
LAB_100b16e50:
    pcVar7 = "Failed to page-align mprotect range for section %s,%s";
    uVar10 = 0x109;
  }
  else {
    local_a0 = 0;
    lVar9 = 0;
LAB_100b16d90:
    uVar16 = *(ulong *)(param_1 + 0x28);
    if (7 < uVar16) {
      ppuVar8 = &PTR___tlv_bootstrap_101049088;
      (*(code *)PTR___tlv_bootstrap_101049088)(&PTR___tlv_bootstrap_101049088,lVar9);
      uVar17 = 0;
      do {
        uVar3 = *(uint *)(param_5 + (ulong)uVar2 * 4 + uVar17 * 4);
        if (((((uVar3 != 0x80000000 && uVar3 != 0xc0000000) && uVar3 != 0x40000000) &&
             (pcVar7 = (char *)(param_4 + (ulong)*(uint *)(param_3 + (ulong)uVar3 * 0x10)),
             *pcVar7 != '\0')) && (pcVar7 = pcVar7 + 1, *pcVar7 != '\0')) &&
           (iVar5 = _strcmp(pcVar7,"__cxa_throw"), iVar5 == 0)) {
          lVar15 = param_1;
          _dladdr(param_1,auStack_80);
          lVar9 = local_78;
          lVar13 = DAT_1010e1988;
          if ((int)lVar15 != 0) {
            if (param_6 == 0) {
              if (DAT_1010e1988 != 0) {
                plVar11 = (long *)((long)DAT_1010e1980 + 8);
                do {
                  if (plVar11[-1] == local_78) {
                    if (*plVar11 != 0) {
                      *(long *)(uVar1 + uVar17 * 8) = *plVar11;
                    }
                    break;
                  }
                  plVar11 = plVar11 + 2;
                  lVar13 = lVar13 + -1;
                } while (lVar13 != 0);
              }
            }
            else {
              lVar15 = *(long *)(uVar1 + uVar17 * 8);
              if (DAT_1010e1988 != 0) {
                plVar11 = (long *)((long)DAT_1010e1980 + 8);
                lVar12 = DAT_1010e1988;
                do {
                  if (plVar11[-1] == local_78) {
                    if (*plVar11 != 0) goto LAB_100b17000;
                    break;
                  }
                  plVar11 = plVar11 + 2;
                  lVar12 = lVar12 + -1;
                } while (lVar12 != 0);
              }
              if (DAT_1010e1988 == DAT_1010e1990) {
                DAT_1010e1990 = DAT_1010e1988 << 1;
                DAT_1010e1980 = _realloc(DAT_1010e1980,DAT_1010e1988 << 5);
                if (DAT_1010e1980 != (void *)0x0) goto LAB_100b16fec;
                piVar6 = ___error();
                iVar5 = _strerror_r(*piVar6,(char *)ppuVar8,0x400);
                if (iVar5 != 0) {
                  ___error();
                  _snprintf((char *)ppuVar8,0x400,"Unknown error %d");
                }
                FUN_100b5e930("ERROR",
                              "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Tools/SentryCrashCxaThrowSwapper.c"
                              ,0xb3,"Failed to realloc memory for g_cxa_originals: %s");
              }
              else {
LAB_100b16fec:
                DAT_1010e1988 = lVar13 + 1;
                plVar11 = (long *)((long)DAT_1010e1980 + lVar13 * 0x10);
                *plVar11 = lVar9;
                plVar11[1] = lVar15;
              }
LAB_100b17000:
              *(code **)(uVar1 + uVar17 * 8) = FUN_100b17180;
            }
          }
          uVar16 = *(ulong *)(param_1 + 0x28);
        }
        uVar17 = (ulong)((int)uVar17 + 1);
      } while (uVar17 < uVar16 >> 3);
    }
    if (iVar4 != 0) {
      return;
    }
    _mprotect();
    if ((int)local_a0 == 0) {
      return;
    }
    piVar6 = ___error();
    ppuVar8 = &PTR___tlv_bootstrap_101049070;
    (*(code *)PTR___tlv_bootstrap_101049070)(*piVar6);
    iVar4 = _strerror_r(extraout_w8,(char *)ppuVar8,0x400);
    if (iVar4 != 0) {
      ___error();
      _snprintf((char *)ppuVar8,0x400,"Unknown error %d");
    }
    pcVar7 = "mprotect failed to restore protection for section %s,%s: %s";
    uVar10 = 0x148;
  }
LAB_100b16e70:
  FUN_100b5e930("ERROR",
                "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Tools/SentryCrashCxaThrowSwapper.c"
                ,uVar10,pcVar7);
  return;
}



/* Address: 0x100b17180 | FUN_100b17180 */

void FUN_100b17180(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined1 auStack_68 [8];
  long local_60;
  void *pvStack_48;
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ea82f0;
  if (DAT_1010e1998 != (code *)0x0) {
    (*DAT_1010e1998)(param_1,param_2,param_3);
  }
  iVar1 = _backtrace(&pvStack_48,2);
  if (iVar1 < 2) {
    pcVar3 = 
    "Received only %d frames from backtrace. We can\'t identify throwsite and therefore can\'t call the original cxa_throw."
    ;
    uVar2 = 0xd8;
  }
  else {
    _dladdr(local_40,auStack_68);
    if ((int)local_40 == 0) {
      pcVar3 = "dladdr failed for throwsite. Can\'t identify image of throwsite.";
      uVar2 = 0xde;
    }
    else {
      if (DAT_1010e1988 != 0) {
        puVar5 = (undefined8 *)(DAT_1010e1980 + 8);
        lVar4 = DAT_1010e1988;
        do {
          if (puVar5[-1] == local_60) {
            if ((code *)*puVar5 != (code *)0x0) {
              (*(code *)*puVar5)(param_1,param_2,param_3);
              goto LAB_100b172a8;
            }
            break;
          }
          puVar5 = puVar5 + 2;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
      }
      pcVar3 = "Can\'t find original cxa_throw for the image of the throwsite.";
      uVar2 = 0xe5;
    }
  }
  FUN_100b5e930("ERROR",
                "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Tools/SentryCrashCxaThrowSwapper.c"
                ,uVar2,pcVar3);
LAB_100b172a8:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x100b172d8 | SentryAsyncLogWrapper::initializeAsyncLogFile */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryAsyncLogWrapper::initializeAsyncLogFile(ID param_1,SEL param_2)

{
  int iVar1;
  ID IVar2;
  int *piVar3;
  char *pcVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  cfstringStruct *pcVar7;
  undefined8 local_48;
  
  FUN_100b5ab18();
  if (param_1 == 0) {
    FUN_100b3a1f0();
    if ((int)param_1 != 0) {
      FUN_100b3a2b8("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryAsyncLog.m",
                    0x10,&cf_Failedtogetstaticcachespathforasynclogfile_);
    }
  }
  else {
    IVar2 = objc_stub::stringByAppendingPathComponent_(param_1,&cf_async_log);
    _objc_retainAutorelease();
    IVar2 = objc_stub::UTF8String(IVar2);
    local_48 = 0;
    FUN_100b5835c(param_1,&local_48);
    if ((param_1 & 1) == 0) {
      uVar6 = local_48;
      FUN_100b3a1f0();
      if ((int)uVar6 == 0) {
        return;
      }
      pcVar7 = &cf_Failedtoinitializedirectoryforasynclogfile___;
      uVar6 = 0x1a;
    }
    else {
      piVar3 = ___error();
      *piVar3 = 0;
      FUN_100b5e888(IVar2,1);
      pcVar4 = (char *)___error();
      iVar1 = *(int *)pcVar4;
      if ((iVar1 != 0) && (FUN_100b3a1f0(), (int)pcVar4 != 0)) {
        ppuVar5 = &PTR___tlv_bootstrap_1010490a0;
        (*(code *)PTR___tlv_bootstrap_1010490a0)();
        iVar1 = _strerror_r(iVar1,(char *)ppuVar5,0x400);
        if (iVar1 != 0) {
          _snprintf((char *)ppuVar5,0x400,"Unknown error %d");
        }
        pcVar4 = "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryAsyncLog.m";
        FUN_100b3a2b8("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryAsyncLog.m"
                      ,0x1f,&cf__sfailedwithcode__d_description__s);
      }
      iVar1 = (int)pcVar4;
      if ((int)IVar2 == 0) {
        return;
      }
      FUN_100b3a1f0();
      if (iVar1 == 0) {
        return;
      }
      pcVar7 = &cf_Couldnotopenahandletospecifiedpathforasynclogging_s;
      uVar6 = 0x22;
    }
    FUN_100b3a2b8("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryAsyncLog.m",
                  uVar6,pcVar7);
  }
  return;
}



/* Address: 0x100b17484 | SentrySerialization::deserializeDictionaryFromJsonData: */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentrySerialization::deserializeDictionaryFromJsonData_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  long lVar2;
  long local_28;
  
  local_28 = 0;
  IVar1 = objc_stub::JSONObjectWithData_options_error_
                    ((ID)&_OBJC_CLASS___NSJSONSerialization,param_3,0,&local_28);
  if ((local_28 != 0) && (lVar2 = local_28, FUN_100b3a1f0(), (int)lVar2 != 0)) {
    FUN_100b3a2b8("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentrySerialization.m"
                  ,0x16,&cf_Failedtodeserializejsonitemdictionary___);
  }
  return IVar1;
}



/* Address: 0x100b17508 | SentrySerialization::levelFromData: */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

unsigned_long_long SentrySerialization::levelFromData_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  long lVar2;
  long local_38;
  
  local_38 = 0;
  IVar1 = objc_stub::JSONObjectWithData_options_error_
                    ((ID)&_OBJC_CLASS___NSJSONSerialization,param_3,0,&local_38);
  if (local_38 == 0) {
    IVar1 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_level);
    FUN_100b425d0();
  }
  else {
    lVar2 = local_38;
    FUN_100b3a1f0();
    if ((int)lVar2 != 0) {
      FUN_100b3a2b8("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentrySerialization.m"
                    ,0x23,&cf_Failedtoretrieveeventlevelfromenvelopeitemdata___);
    }
    IVar1 = 4;
  }
  return IVar1;
}



/* Address: 0x100b175d0 | SentrySerialization::deserializeArrayFromJsonData: */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentrySerialization::deserializeArrayFromJsonData_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  ID self;
  long lVar2;
  ID IVar3;
  long local_38;
  
  local_38 = 0;
  self = objc_stub::JSONObjectWithData_options_error_
                   ((ID)&_OBJC_CLASS___NSJSONSerialization,param_3,0,&local_38);
  if (local_38 == 0) {
    IVar3 = objc_stub::class((ID)&_OBJC_CLASS___NSArray);
    IVar3 = objc_stub::isKindOfClass_(self,IVar3);
    iVar1 = (int)IVar3;
    if ((IVar3 & 1) != 0) {
      return self;
    }
    FUN_100b3a1f0();
    if (iVar1 != 0) {
      objc_stub::class(self);
      _NSStringFromClass();
      FUN_100b3a2b8("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentrySerialization.m"
                    ,0x34,&cf_DeserializedjsonisnotanNSArray_found__);
    }
  }
  else {
    lVar2 = local_38;
    FUN_100b3a1f0();
    if ((int)lVar2 != 0) {
      FUN_100b3a2b8("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentrySerialization.m"
                    ,0x2f,&cf_Failedtodeserializejsonitemarray___);
    }
  }
  return 0;
}



/* Address: 0x100b176dc | FUN_100b176dc */

undefined8 FUN_100b176dc(undefined8 param_1,long param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int *piVar5;
  undefined **ppuVar6;
  int extraout_w8;
  
  if (param_3 < 1) {
    return 1;
  }
  do {
    uVar4 = param_1;
    _write(param_1,param_2,param_3);
    iVar3 = (int)uVar4;
    if (iVar3 == -1) {
      piVar5 = ___error();
      ppuVar6 = &PTR___tlv_bootstrap_1010490b8;
      (*(code *)PTR___tlv_bootstrap_1010490b8)(*piVar5);
      iVar3 = _strerror_r(extraout_w8,(char *)ppuVar6,0x400);
      if (iVar3 != 0) {
        ___error();
        _snprintf((char *)ppuVar6,0x400,"Unknown error %d");
      }
      FUN_100b5e930("ERROR",
                    "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Tools/SentryCrashFileUtils.c"
                    ,0xfa,"Could not write to fd %d: %s");
      return 0;
    }
    param_2 = param_2 + iVar3;
    iVar2 = param_3 - iVar3;
    bVar1 = iVar3 <= param_3;
    param_3 = iVar2;
  } while (iVar2 != 0 && bVar1);
  return 1;
}



/* Address: 0x100b177c4 | FUN_100b177c4 */

undefined8 FUN_100b177c4(undefined8 param_1,long param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  char *pcVar7;
  int extraout_w8;
  
  if (param_3 < 1) {
    return 1;
  }
  do {
    uVar6 = param_1;
    _read(param_1,param_2,param_3);
    iVar3 = (int)uVar6;
    if (iVar3 == 0) {
      pcVar7 = "Unexpected EOF on fd %d: expected %d more bytes";
      uVar6 = 0x110;
LAB_100b178b8:
      FUN_100b5e930("ERROR",
                    "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Tools/SentryCrashFileUtils.c"
                    ,uVar6,pcVar7);
      return 0;
    }
    if (iVar3 == -1) {
      piVar4 = ___error();
      ppuVar5 = &PTR___tlv_bootstrap_1010490d0;
      (*(code *)PTR___tlv_bootstrap_1010490d0)(*piVar4);
      iVar3 = _strerror_r(extraout_w8,(char *)ppuVar5,0x400);
      if (iVar3 != 0) {
        ___error();
        _snprintf((char *)ppuVar5,0x400,"Unknown error %d");
      }
      pcVar7 = "Could not read from fd %d: %s";
      uVar6 = 0x10b;
      goto LAB_100b178b8;
    }
    param_2 = param_2 + iVar3;
    iVar2 = param_3 - iVar3;
    bVar1 = param_3 < iVar3;
    param_3 = iVar2;
    if (iVar2 == 0 || bVar1) {
      return 1;
    }
  } while( true );
}



/* Address: 0x100b178d4 | FUN_100b178d4 */

undefined8 FUN_100b178d4(char *param_1,undefined8 *param_2,undefined4 *param_3,ulong param_4)

{
  int iVar1;
  int iVar2;
  off_t oVar3;
  int *piVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  char *pcVar7;
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  void *pvVar8;
  undefined4 uVar9;
  ulong uVar10;
  stat sStack_e0;
  
  iVar1 = _open(param_1,0);
  if (iVar1 < 0) {
    piVar4 = ___error();
    ppuVar5 = &PTR___tlv_bootstrap_1010490e8;
    (*(code *)PTR___tlv_bootstrap_1010490e8)(*piVar4);
    iVar1 = _strerror_r(extraout_w8_00,(char *)ppuVar5,0x400);
    if (iVar1 != 0) {
      ___error();
      _snprintf((char *)ppuVar5,0x400,"Unknown error %d");
    }
    FUN_100b5e930("ERROR",
                  "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Tools/SentryCrashFileUtils.c"
                  ,0x124,"Could not open %s: %s");
LAB_100b17b34:
    uVar9 = 0;
    uVar6 = 0;
    pvVar8 = (void *)0x0;
    goto LAB_100b17b40;
  }
  iVar2 = _fstat(iVar1,&sStack_e0);
  if (iVar2 < 0) {
    piVar4 = ___error();
    ppuVar5 = &PTR___tlv_bootstrap_101049100;
    (*(code *)PTR___tlv_bootstrap_101049100)(*piVar4);
    iVar2 = _strerror_r(extraout_w8_01,(char *)ppuVar5,0x400);
    if (iVar2 != 0) {
      ___error();
      _snprintf((char *)ppuVar5,0x400,"Unknown error %d");
    }
    pcVar7 = "Could not fstat %s: %s";
    uVar6 = 0x12a;
LAB_100b17ab0:
    FUN_100b5e930("ERROR",
                  "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Tools/SentryCrashFileUtils.c"
                  ,uVar6,pcVar7);
    pvVar8 = (void *)0x0;
LAB_100b17b10:
    uVar10 = 0;
    uVar6 = 0;
  }
  else {
    iVar2 = (int)param_4;
    uVar10 = (ulong)(uint)sStack_e0.st_size;
    if ((((iVar2 != 0) && (iVar2 < (int)(uint)sStack_e0.st_size)) && (uVar10 = param_4, 0 < iVar2))
       && (oVar3 = _lseek(iVar1,(long)-iVar2,2), oVar3 < 0)) {
      piVar4 = ___error();
      ppuVar5 = &PTR___tlv_bootstrap_101049118;
      (*(code *)PTR___tlv_bootstrap_101049118)(*piVar4);
      iVar2 = _strerror_r(extraout_w8,(char *)ppuVar5,0x400);
      if (iVar2 != 0) {
        ___error();
        _snprintf((char *)ppuVar5,0x400,"Unknown error %d");
      }
      pcVar7 = "Could not seek to %d from end of %s: %s";
      uVar6 = 0x133;
      goto LAB_100b17ab0;
    }
    pvVar8 = _malloc((ulong)((int)uVar10 + 1));
    if (pvVar8 == (void *)0x0) {
      FUN_100b5e930("ERROR",
                    "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Tools/SentryCrashFileUtils.c"
                    ,0x13a,"Out of memory");
      goto LAB_100b17b10;
    }
    iVar2 = iVar1;
    FUN_100b177c4(iVar1,pvVar8,uVar10);
    if (iVar2 == 0) {
      _close(iVar1);
      _free(pvVar8);
      goto LAB_100b17b34;
    }
    *(undefined1 *)((long)pvVar8 + (long)(int)uVar10) = 0;
    uVar6 = 1;
  }
  uVar9 = (undefined4)uVar10;
  _close(iVar1);
LAB_100b17b40:
  *param_2 = pvVar8;
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = uVar9;
  }
  return uVar6;
}



/* Address: 0x100b17b6c | FUN_100b17b6c */

undefined8 FUN_100b17b6c(char *param_1)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  undefined **ppuVar4;
  int extraout_w8;
  int extraout_w8_00;
  long lVar5;
  undefined8 uVar6;
  
  if (param_1 == (char *)0x0) {
    pcVar2 = "Cannot create directory for NULL path";
    uVar6 = 0x19f;
  }
  else if (*param_1 == '\0') {
    pcVar2 = "Cannot create directory for empty path";
    uVar6 = 0x1a3;
  }
  else {
    pcVar2 = _strdup(param_1);
    if (pcVar2 != (char *)0x0) {
      lVar5 = 1;
      do {
        if (pcVar2[lVar5] == '/') {
          pcVar2[lVar5] = '\0';
          iVar1 = _mkdir(pcVar2,0x1c0);
          if ((iVar1 < 0) && (piVar3 = ___error(), *piVar3 != 0x11)) {
            piVar3 = ___error();
            ppuVar4 = &PTR___tlv_bootstrap_101049130;
            (*(code *)PTR___tlv_bootstrap_101049130)(*piVar3);
            iVar1 = _strerror_r(extraout_w8,(char *)ppuVar4,0x400);
            if (iVar1 != 0) {
              ___error();
              _snprintf((char *)ppuVar4,0x400,"Unknown error %d");
            }
            uVar6 = 0x1b2;
            goto LAB_100b17d58;
          }
          pcVar2[lVar5] = '/';
        }
        else if (pcVar2[lVar5] == '\0') {
          iVar1 = _mkdir(pcVar2,0x1c0);
          if ((iVar1 < 0) && (piVar3 = ___error(), *piVar3 != 0x11)) {
            piVar3 = ___error();
            ppuVar4 = &PTR___tlv_bootstrap_101049148;
            (*(code *)PTR___tlv_bootstrap_101049148)(*piVar3);
            iVar1 = _strerror_r(extraout_w8_00,(char *)ppuVar4,0x400);
            if (iVar1 != 0) {
              ___error();
              _snprintf((char *)ppuVar4,0x400,"Unknown error %d");
            }
            uVar6 = 0x1ba;
LAB_100b17d58:
            FUN_100b5e930("ERROR",
                          "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Tools/SentryCrashFileUtils.c"
                          ,uVar6,"Could not create directory %s: %s");
            uVar6 = 0;
          }
          else {
            uVar6 = 1;
          }
          _free(pcVar2);
          return uVar6;
        }
        lVar5 = lVar5 + 1;
      } while( true );
    }
    pcVar2 = "Could not copy path: out of memory";
    uVar6 = 0x1aa;
  }
  FUN_100b5e930("ERROR",
                "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Tools/SentryCrashFileUtils.c"
                ,uVar6,pcVar2);
  return 0;
}



/* Address: 0x100b17d80 | FUN_100b17d80 */

undefined8 FUN_100b17d80(char *param_1,long param_2)

{
  int iVar1;
  int *piVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  char *pcVar5;
  int extraout_w8;
  int extraout_w8_00;
  long lVar6;
  
  if (param_1 == (char *)0x0) {
    pcVar5 = "Cannot create directory for NULL path";
    uVar4 = 0x1c8;
  }
  else if (param_2 == 0) {
    pcVar5 = "Cannot create directory with zero-length path buffer";
    uVar4 = 0x1cc;
  }
  else if (*param_1 == '\0') {
    pcVar5 = "Cannot create directory for empty path";
    uVar4 = 0x1d0;
  }
  else {
    lVar6 = 0;
    do {
      if (param_1[lVar6] == '\0') {
        if (1 < lVar6) {
          pcVar5 = param_1 + 1;
          do {
            if (*pcVar5 == '/') {
              *pcVar5 = '\0';
              iVar1 = _mkdir(param_1,0x1c0);
              if ((iVar1 < 0) && (piVar2 = ___error(), *piVar2 != 0x11)) {
                piVar2 = ___error();
                ppuVar3 = &PTR___tlv_bootstrap_101049160;
                (*(code *)PTR___tlv_bootstrap_101049160)(*piVar2);
                iVar1 = _strerror_r(extraout_w8_00,(char *)ppuVar3,0x400);
                if (iVar1 != 0) {
                  ___error();
                  _snprintf((char *)ppuVar3,0x400,"Unknown error %d");
                }
                FUN_100b5e930("ERROR",
                              "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Tools/SentryCrashFileUtils.c"
                              ,0x1e2,"Could not create directory %s: %s");
                *pcVar5 = '/';
                return 0;
              }
              *pcVar5 = '/';
            }
            pcVar5 = pcVar5 + 1;
          } while (pcVar5 < param_1 + lVar6);
        }
        iVar1 = _mkdir(param_1,0x1c0);
        if ((-1 < iVar1) || (piVar2 = ___error(), *piVar2 == 0x11)) {
          return 1;
        }
        piVar2 = ___error();
        ppuVar3 = &PTR___tlv_bootstrap_101049178;
        (*(code *)PTR___tlv_bootstrap_101049178)(*piVar2);
        iVar1 = _strerror_r(extraout_w8,(char *)ppuVar3,0x400);
        if (iVar1 != 0) {
          ___error();
          _snprintf((char *)ppuVar3,0x400,"Unknown error %d");
        }
        pcVar5 = "Could not create directory %s: %s";
        uVar4 = 0x1eb;
        goto LAB_100b17e3c;
      }
      lVar6 = lVar6 + 1;
    } while (param_2 != lVar6);
    pcVar5 = "Could not create directory: path is not null-terminated";
    uVar4 = 0x1d9;
  }
LAB_100b17e3c:
  FUN_100b5e930("ERROR",
                "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Tools/SentryCrashFileUtils.c"
                ,uVar4,pcVar5);
  return 0;
}



/* Address: 0x100b17fcc | FUN_100b17fcc */

uint FUN_100b17fcc(char *param_1,ulong param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined **ppuVar4;
  int extraout_w8;
  
  uVar1 = _remove(param_1);
  if (((int)uVar1 < 0) && (((param_2 & 1) != 0 || (piVar3 = ___error(), *piVar3 != 2)))) {
    piVar3 = ___error();
    ppuVar4 = &PTR___tlv_bootstrap_101049190;
    (*(code *)PTR___tlv_bootstrap_101049190)(*piVar3);
    iVar2 = _strerror_r(extraout_w8,(char *)ppuVar4,0x400);
    if (iVar2 != 0) {
      ___error();
      _snprintf((char *)ppuVar4,0x400,"Unknown error %d");
    }
    FUN_100b5e930("ERROR",
                  "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Tools/SentryCrashFileUtils.c"
                  ,0x1f6,"Could not delete %s: %s");
  }
  return ~uVar1 >> 0x1f;
}



/* Address: 0x100b18098 | FUN_100b18098 */

void FUN_100b18098(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_100b180d0();
  if ((int)uVar1 != 0) {
    FUN_100b18134(param_1,0);
    return;
  }
  return;
}



/* Address: 0x100b180d0 | FUN_100b180d0 */

bool FUN_100b180d0(char *param_1)

{
  char *pcVar1;
  
  pcVar1 = _strrchr(param_1,0x2f);
  if (pcVar1 != (char *)0x0) {
    param_1 = pcVar1 + 1;
  }
  if (*param_1 == '.') {
    if (param_1[1] == '\0') {
      return false;
    }
    if (param_1[1] == '.') {
      return param_1[2] != '\0';
    }
  }
  return true;
}



/* Address: 0x100b18134 | FUN_100b18134 */

undefined8 FUN_100b18134(char *param_1,ulong param_2)

{
  int iVar1;
  int *piVar2;
  undefined8 *puVar3;
  char *pcVar4;
  undefined **ppuVar5;
  char *pcVar6;
  char *pcVar7;
  undefined8 uVar8;
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  size_t sVar9;
  undefined8 *puVar10;
  size_t sVar11;
  ulong uVar12;
  stat local_100;
  
  local_100.st_gen = 0;
  local_100.st_lspare = 0;
  local_100.st_blksize = 0;
  local_100.st_flags = 0;
  local_100.st_qspare[1] = 0;
  local_100.st_qspare[0] = 0;
  local_100.st_birthtimespec.tv_nsec = 0;
  local_100.st_birthtimespec.tv_sec = 0;
  local_100.st_blocks = 0;
  local_100.st_size = 0;
  local_100.st_mtimespec.tv_nsec = 0;
  local_100.st_mtimespec.tv_sec = 0;
  local_100.st_ctimespec.tv_nsec = 0;
  local_100.st_ctimespec.tv_sec = 0;
  local_100.st_rdev = 0;
  local_100._28_4_ = 0;
  local_100.st_uid = 0;
  local_100.st_gid = 0;
  local_100.st_atimespec.tv_nsec = 0;
  local_100.st_atimespec.tv_sec = 0;
  local_100.st_ino = 0;
  local_100.st_dev = 0;
  local_100.st_mode = 0;
  local_100.st_nlink = 0;
  iVar1 = _stat(param_1,&local_100);
  if (iVar1 != 0) {
    piVar2 = ___error();
    ppuVar5 = &PTR___tlv_bootstrap_1010491d8;
    (*(code *)PTR___tlv_bootstrap_1010491d8)(*piVar2);
    iVar1 = _strerror_r(extraout_w8,(char *)ppuVar5,0x400);
    if (iVar1 != 0) {
      ___error();
      _snprintf((char *)ppuVar5,0x400,"Unknown error %d");
    }
    pcVar6 = "Could not stat %s: %s";
    uVar8 = 0xbc;
LAB_100b181f0:
    FUN_100b5e930("ERROR",
                  "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Tools/SentryCrashFileUtils.c"
                  ,uVar8,pcVar6);
    return 0;
  }
  if ((local_100.st_mode & 0xf000) == 0x8000) goto LAB_100b184b8;
  if ((local_100.st_mode & 0xf000) != 0x4000) {
    pcVar6 = "Could not delete %s: Not a regular file.";
    uVar8 = 0xdd;
    goto LAB_100b181f0;
  }
  pcVar6 = param_1;
  _opendir();
  if (pcVar6 == (char *)0x0) {
    piVar2 = ___error();
    ppuVar5 = &PTR___tlv_bootstrap_101049208;
    (*(code *)PTR___tlv_bootstrap_101049208)(*piVar2);
    iVar1 = _strerror_r(extraout_w8_00,(char *)ppuVar5,0x400);
    if (iVar1 != 0) {
      ___error();
      _snprintf((char *)ppuVar5,0x400,"Unknown error %d");
    }
    FUN_100b5e930("ERROR",
                  "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Tools/SentryCrashFileUtils.c"
                  ,0x57,"Error reading directory %s: %s");
    puVar3 = (undefined8 *)0x0;
    sVar9 = 0;
  }
  else {
    sVar9 = 0xffffffffffffffff;
    do {
      pcVar4 = pcVar6;
      _readdir();
      sVar9 = sVar9 + 1;
    } while (pcVar4 != (char *)0x0);
    _closedir(pcVar6);
    if ((int)sVar9 != 0) {
      pcVar6 = param_1;
      _opendir();
      if (pcVar6 != (char *)0x0) {
        puVar3 = _calloc(sVar9,8);
        if (puVar3 != (undefined8 *)0x0) {
          pcVar4 = pcVar6;
          _readdir();
          sVar11 = sVar9;
          puVar10 = puVar3;
          while (pcVar4 != (char *)0x0) {
            if (sVar11 == 0) {
              FUN_100b5e930("ERROR",
                            "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Tools/SentryCrashFileUtils.c"
                            ,0x8d,"Contents of %s have been mutated");
              break;
            }
            pcVar4 = _strdup(pcVar4 + 0x15);
            *puVar10 = pcVar4;
            pcVar4 = pcVar6;
            _readdir();
            sVar11 = sVar11 - 1;
            puVar10 = puVar10 + 1;
          }
        }
        _closedir(pcVar6);
        goto LAB_100b183ec;
      }
      piVar2 = ___error();
      ppuVar5 = &PTR___tlv_bootstrap_1010491f0;
      (*(code *)PTR___tlv_bootstrap_1010491f0)(*piVar2);
      iVar1 = _strerror_r(extraout_w8_01,(char *)ppuVar5,0x400);
      if (iVar1 != 0) {
        ___error();
        _snprintf((char *)ppuVar5,0x400,"Unknown error %d");
      }
      FUN_100b5e930("ERROR",
                    "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Tools/SentryCrashFileUtils.c"
                    ,0x78,"Error reading directory %s: %s");
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_100b183ec:
  pcVar6 = _malloc(500);
  _snprintf(pcVar6,500,"%s/");
  sVar11 = _strlen(pcVar6);
  if ((puVar3 == (undefined8 *)0x0) || ((int)sVar9 == 0)) {
    _free(pcVar6);
    if (puVar3 != (undefined8 *)0x0) goto LAB_100b18488;
  }
  else {
    uVar12 = 0;
    do {
      pcVar4 = (char *)puVar3[uVar12];
      if ((pcVar4 != (char *)0x0) && (pcVar7 = pcVar4, FUN_100b180d0(), (int)pcVar7 != 0)) {
        _strlcpy(pcVar6 + sVar11,pcVar4,(long)(500 - (int)sVar11));
        FUN_100b18134(pcVar6,1);
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < (sVar9 & 0xffffffff));
    _free(pcVar6);
LAB_100b18488:
    if ((int)sVar9 != 0) {
      uVar12 = sVar9 & 0xffffffff;
      puVar10 = puVar3;
      do {
        if ((void *)*puVar10 != (void *)0x0) {
          _free((void *)*puVar10);
        }
        puVar10 = puVar10 + 1;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    _free(puVar3);
  }
  if ((param_2 & 1) == 0) {
    return 1;
  }
LAB_100b184b8:
  FUN_100b17fcc(param_1,0);
  return 1;
}



/* Address: 0x100b184e8 | FUN_100b184e8 */

uint FUN_100b184e8(undefined8 *param_1,char *param_2,undefined8 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined **ppuVar4;
  int extraout_w8;
  
  *param_1 = param_3;
  *(undefined4 *)(param_1 + 1) = param_4;
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  uVar1 = _open(param_2,0xa02);
  *(uint *)(param_1 + 2) = uVar1;
  if ((int)uVar1 < 0) {
    piVar3 = ___error();
    ppuVar4 = &PTR___tlv_bootstrap_1010491a8;
    (*(code *)PTR___tlv_bootstrap_1010491a8)(*piVar3);
    iVar2 = _strerror_r(extraout_w8,(char *)ppuVar4,0x400);
    if (iVar2 != 0) {
      ___error();
      _snprintf((char *)ppuVar4,0x400,"Unknown error %d");
    }
    FUN_100b5e930("ERROR",
                  "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Tools/SentryCrashFileUtils.c"
                  ,0x211,"Could not open crash report file %s: %s");
  }
  return ~uVar1 >> 0x1f;
}



/* Address: 0x100b185bc | FUN_100b185bc */

void FUN_100b185bc(long param_1)

{
  if (0 < *(int *)(param_1 + 0x10)) {
    FUN_100b185f8();
    _close(*(undefined4 *)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  }
  return;
}



/* Address: 0x100b185f8 | FUN_100b185f8 */

void FUN_100b185f8(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 2);
  if (((0 < iVar1) && (0 < *(int *)((long)param_1 + 0xc))) &&
     (FUN_100b176dc(iVar1,*param_1), iVar1 != 0)) {
    *(undefined4 *)((long)param_1 + 0xc) = 0;
  }
  return;
}



/* Address: 0x100b18640 | FUN_100b18640 */

ulong FUN_100b18640(long *param_1,void *param_2,undefined8 param_3)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (int)param_1[1];
  iVar2 = (int)param_3;
  if (iVar3 - *(int *)((long)param_1 + 0xc) < iVar2) {
    FUN_100b185f8(param_1);
    iVar3 = (int)param_1[1];
  }
  if (iVar3 < iVar2) {
    uVar1 = (ulong)*(uint *)(param_1 + 2);
    FUN_100b176dc(uVar1,param_2,param_3);
    return uVar1;
  }
  _memcpy((void *)(*param_1 + (long)*(int *)((long)param_1 + 0xc)),param_2,(long)iVar2);
  *(int *)((long)param_1 + 0xc) = *(int *)((long)param_1 + 0xc) + iVar2;
  return 1;
}



/* Address: 0x100b186d4 | FUN_100b186d4 */

undefined8 FUN_100b186d4(long *param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined **ppuVar4;
  int extraout_w8;
  long lVar5;
  
  uVar1 = *(uint *)((long)param_1 + 0xc);
  if (0 < (int)uVar1) {
    _memmove((void *)*param_1,(void *)(*param_1 + (ulong)uVar1),(ulong)uVar1);
    lVar5 = (long)(int)param_1[2] - (long)*(int *)((long)param_1 + 0xc);
    *(undefined4 *)((long)param_1 + 0xc) = 0;
    *(int *)(param_1 + 2) = (int)lVar5;
    *(undefined1 *)(*param_1 + lVar5) = 0;
  }
  if (0 < (int)param_1[1] - (int)param_1[2]) {
    iVar2 = *(int *)((long)param_1 + 0x14);
    _read(iVar2,*param_1 + (long)(int)param_1[2]);
    if (iVar2 < 0) {
      piVar3 = ___error();
      ppuVar4 = &PTR___tlv_bootstrap_101049220;
      (*(code *)PTR___tlv_bootstrap_101049220)(*piVar3);
      iVar2 = _strerror_r(extraout_w8,(char *)ppuVar4,0x400);
      if (iVar2 != 0) {
        ___error();
        _snprintf((char *)ppuVar4,0x400,"Unknown error %d");
      }
      FUN_100b5e930("ERROR",
                    "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Tools/SentryCrashFileUtils.c"
                    ,0x25f,"Could not read: %s");
      return 0;
    }
    lVar5 = (long)(int)param_1[2] + (long)iVar2;
    *(int *)(param_1 + 2) = (int)lVar5;
    *(undefined1 *)(*param_1 + lVar5) = 0;
  }
  return 1;
}



/* Address: 0x100b187e0 | FUN_100b187e0 */

bool FUN_100b187e0(long *param_1,int param_2,void *param_3,int *param_4)

{
  char *pcVar1;
  int iVar2;
  bool bVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = *param_4;
  if (iVar8 < 1) {
    iVar7 = 0;
    bVar3 = false;
  }
  else {
    iVar7 = 0;
    iVar5 = *(int *)((long)param_1 + 0xc);
    iVar6 = (int)param_1[2];
    do {
      iVar2 = iVar6 - iVar5;
      if (iVar8 <= iVar6 - iVar5) {
        iVar2 = iVar8;
      }
      pcVar1 = (char *)(*param_1 + (long)iVar5);
      pcVar4 = _strchr(pcVar1,param_2);
      iVar6 = (int)pcVar4 - (int)pcVar1;
      iVar5 = iVar2;
      if (iVar6 + 1 < iVar2) {
        iVar5 = iVar6 + 1;
      }
      bVar3 = pcVar4 != (char *)0x0;
      if (!bVar3) {
        iVar5 = iVar2;
      }
      _memcpy(param_3,pcVar1,(long)iVar5);
      *(int *)((long)param_1 + 0xc) = iVar5 + *(int *)((long)param_1 + 0xc);
      iVar7 = iVar5 + iVar7;
      iVar8 = iVar8 - iVar5;
      if (pcVar4 != (char *)0x0 || iVar8 < 1) break;
      param_3 = (void *)((long)param_3 + (long)iVar5);
      FUN_100b186d4(param_1);
      iVar5 = *(int *)((long)param_1 + 0xc);
      iVar6 = (int)param_1[2];
    } while (iVar6 != iVar5);
  }
  *param_4 = iVar7;
  return bVar3;
}



/* Address: 0x100b188e8 | FUN_100b188e8 */

uint FUN_100b188e8(undefined8 *param_1,char *param_2,undefined1 *param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined **ppuVar4;
  int extraout_w8;
  
  *param_3 = 0;
  param_3[(long)param_4 + -1] = 0;
  *param_1 = param_3;
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(int *)(param_1 + 1) = (int)((long)param_4 + -1);
  uVar1 = _open(param_2,0);
  *(uint *)((long)param_1 + 0x14) = uVar1;
  if ((int)uVar1 < 0) {
    piVar3 = ___error();
    ppuVar4 = &PTR___tlv_bootstrap_1010491c0;
    (*(code *)PTR___tlv_bootstrap_1010491c0)(*piVar3);
    iVar2 = _strerror_r(extraout_w8,(char *)ppuVar4,0x400);
    if (iVar2 != 0) {
      ___error();
      _snprintf((char *)ppuVar4,0x400,"Unknown error %d");
    }
    FUN_100b5e930("ERROR",
                  "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Tools/SentryCrashFileUtils.c"
                  ,0x2c2,"Could not open file %s: %s");
  }
  else {
    FUN_100b186d4(param_1);
  }
  return ~uVar1 >> 0x1f;
}



/* Address: 0x100b189d4 | FUN_100b189d4 */

void FUN_100b189d4(long param_1)

{
  if (0 < *(int *)(param_1 + 0x14)) {
    _close();
    *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  }
  return;
}



/* Address: 0x100b18a08 | FUN_100b18a08 */

void FUN_100b18a08(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined1 *)((long)param_1 + 0x2c) = 0;
  *param_1 = 0;
  return;
}



/* Address: 0x100b18a18 | FUN_100b18a18 */

void FUN_100b18a18(long param_1,code *param_2,code *param_3)

{
  code *pcVar1;
  code *pcVar2;
  
  pcVar1 = FUN_100b18a40;
  if (param_3 != (code *)0x0) {
    pcVar1 = param_3;
  }
  pcVar2 = FUN_100b18a08;
  if (param_2 != (code *)0x0) {
    pcVar2 = param_2;
  }
  *(code **)(param_1 + 0x30) = pcVar2;
  *(code **)(param_1 + 0x38) = pcVar1;
  (*pcVar2)();
  return;
}



/* Address: 0x100b18a40 | FUN_100b18a40 */

undefined8 FUN_100b18a40(void)

{
  return 0;
}



/* Address: 0x100b18a48 | FUN_100b18a48 */

long FUN_100b18a48(undefined8 param_1,undefined8 param_2,undefined8 *param_3,uint param_4)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 local_380;
  code *local_368;
  
  iVar1 = (int)&local_3a0;
  FUN_100b5100c(param_1,param_2,0);
  FUN_100b2acb8(&local_3a0,100,param_2);
  (*local_368)();
  lVar3 = 0;
  if (iVar1 != 0 && param_4 != 0) {
    lVar4 = 0;
    do {
      param_3[1] = uStack_398;
      *param_3 = local_3a0;
      param_3[3] = uStack_388;
      param_3[2] = uStack_390;
      param_3[4] = local_380;
      lVar3 = lVar4 + 1;
      iVar1 = (int)&local_3a0;
      (*local_368)();
      param_3 = param_3 + 5;
      bVar2 = (ulong)param_4 - 1 != lVar4;
      lVar4 = lVar3;
    } while (iVar1 != 0 && bVar2);
  }
  return lVar3;
}



/* Address: 0x100b18afc | SentryDefaultThreadInspector::initWithStacktraceBuilder:andMachineContextWrapper: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

ID SentryDefaultThreadInspector::initWithStacktraceBuilder_andMachineContextWrapper_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID self;
  objc_super local_40;
  
  local_40.super_class = &objc::class_t::SentryDefaultThreadInspector;
  local_40.receiver = param_1;
  self = _objc_msgSendSuper2(&local_40,"init");
  if (self != 0) {
    objc_stub::FUN_100c0dd40(self,param_3);
    objc_stub::FUN_100c0c7e0(self,param_4);
  }
  return self;
}



/* Address: 0x100b18b94 | SentryDefaultThreadInspector::initWithOptions: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryDefaultThreadInspector::initWithOptions_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  class_t *pcVar3;
  
  pcVar3 = &objc::class_t::_TtC6Sentry16SentryInAppLogic;
  _objc_alloc();
  IVar1 = objc_stub::FUN_100c03800(param_3);
  IVar2 = *(ID *)PTR____NSArray0___100ea9b00;
  if (IVar1 != 0) {
    IVar2 = IVar1;
  }
  IVar2 = objc_stub::FUN_100c04360((ID)pcVar3,IVar2);
  pcVar3 = &objc::class_t::SentryCrashStackEntryMapper;
  _objc_alloc();
  IVar2 = objc_stub::FUN_100c04380((ID)pcVar3,IVar2);
  pcVar3 = &objc::class_t::SentryStacktraceBuilder;
  _objc_alloc();
  IVar2 = objc_stub::FUN_100c03e40((ID)pcVar3,IVar2);
  pcVar3 = &objc::class_t::SentryCrashDefaultMachineContextWrapper;
  _objc_alloc();
  IVar1 = objc_stub::init((ID)pcVar3);
  IVar2 = objc_stub::FUN_100c04c60(param_1,IVar2,IVar1);
  return IVar2;
}



/* Address: 0x100b18ca0 | SentryDefaultThreadInspector::stacktraceForCurrentThreadAsyncUnsafe */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryDefaultThreadInspector::stacktraceForCurrentThreadAsyncUnsafe(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = objc_stub::FUN_100c0f220(param_1);
  IVar1 = objc_stub::FUN_100bfe9e0(IVar1);
  return IVar1;
}



/* Address: 0x100b18ce4 | SentryDefaultThreadInspector::getCurrentThreads */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryDefaultThreadInspector::getCurrentThreads(ID param_1,SEL param_2)

{
  uint uVar1;
  undefined *self;
  ID self_00;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  class_t *self_01;
  ID IVar5;
  ID IVar6;
  ulong uVar7;
  undefined1 auStack_540 [1232];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  self = &_OBJC_CLASS___NSMutableArray;
  _objc_alloc();
  self_00 = objc_stub::init((ID)self);
  IVar2 = self_00;
  FUN_100b40bac();
  IVar3 = objc_stub::FUN_100c06760(param_1);
  objc_stub::FUN_100c02540(IVar3,auStack_540);
  IVar3 = objc_stub::FUN_100c06760(param_1);
  IVar3 = objc_stub::FUN_100c02fe0(IVar3,auStack_540);
  if (0 < (int)(uint)IVar3) {
    uVar7 = 0;
    do {
      IVar4 = objc_stub::FUN_100c06760(param_1);
      IVar4 = objc_stub::FUN_100c02fc0(IVar4,auStack_540,uVar7);
      self_01 = &objc::class_t::SentryThread;
      _objc_alloc();
      IVar5 = objc_stub::numberWithInt_((ID)&_OBJC_CLASS___NSNumber,uVar7);
      IVar5 = objc_stub::FUN_100c04d20((ID)self_01,IVar5);
      IVar6 = objc_stub::FUN_100c06760(param_1);
      IVar6 = objc_stub::FUN_100c05aa0(IVar6,IVar4);
      IVar6 = objc_stub::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,IVar6);
      objc_stub::FUN_100c0c4a0(IVar5,IVar6);
      IVar6 = objc_stub::FUN_100c03020(param_1,IVar4);
      objc_stub::setName_(IVar5,IVar6);
      IVar6 = objc_stub::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,0);
      objc_stub::FUN_100c0b200(IVar5,IVar6);
      IVar6 = objc_stub::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,(ulong)(IVar4 == IVar2));
      objc_stub::FUN_100c0b280(IVar5,IVar6);
      if (IVar4 == IVar2) {
        IVar6 = objc_stub::FUN_100c0f220(param_1);
        IVar6 = objc_stub::FUN_100bfe9c0(IVar6);
        objc_stub::FUN_100c0dd20(IVar5,IVar6);
      }
      IVar6 = objc_stub::FUN_100c06760(param_1);
      IVar4 = objc_stub::FUN_100c05aa0(IVar6,IVar4);
      if ((int)IVar4 == 0) {
        objc_stub::addObject_(self_00,IVar5);
      }
      else {
        objc_stub::FUN_100c05300(self_00,IVar5,0);
      }
      uVar1 = (int)uVar7 + 1;
      uVar7 = (ulong)uVar1;
    } while ((uint)IVar3 != uVar1);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_70) {
    return self_00;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}


