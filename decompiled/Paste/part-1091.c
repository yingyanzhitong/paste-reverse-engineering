/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100b8f4cc | FUN_100b8f4cc */

void FUN_100b8f4cc(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  code *pcVar7;
  undefined1 auStack_68 [24];
  
  lVar2 = *param_1;
  lVar4 = param_1[1];
  if (lVar2 == 0) {
    pcVar7 = (code *)0x0;
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = &DAT_100f38830;
    _swift_allocObject(&DAT_100f38830,0x20,7);
    *(long *)(puVar6 + 0x10) = lVar2;
    *(long *)(puVar6 + 0x18) = lVar4;
    pcVar7 = thunk_FUN_100b93e28;
  }
  puVar1 = (undefined8 *)(*param_2 + SentryOptions::beforeCaptureViewHierarchy);
  _swift_beginAccess(puVar1,auStack_68,1,0);
  uVar3 = *puVar1;
  uVar5 = puVar1[1];
  *puVar1 = pcVar7;
  puVar1[1] = puVar6;
  FUN_100011128(lVar2,lVar4);
  FUN_100004550(uVar3,uVar5);
  return;
}



/* Address: 0x100b8f584 | FUN_100b8f584 */

void FUN_100b8f584(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = SentryOptions::beforeCaptureViewHierarchy;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100b8f5b0 | SentryOptions::onCrashedLastRun */

/* Function Stack Size: 0x10 bytes */

ID SentryOptions::onCrashedLastRun(ID param_1,SEL param_2)

{
  FUN_100b8e888(param_1,param_2,FUN_100b8f5cc,thunk_FUN_100b91658,&DAT_100f38488);
  return param_1;
}



/* Address: 0x100b8f5cc | FUN_100b8f5cc */

void FUN_100b8f5cc(void)

{
  FUN_100b9336c(&SentryOptions::onCrashedLastRun,thunk_FUN_100011128);
  return;
}



/* Address: 0x100b8f5e0 | SentryOptions::setOnCrashedLastRun: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryOptions::setOnCrashedLastRun_(ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  void *pvVar1;
  undefined *puVar2;
  code *pcVar3;
  
  pvVar1 = __Block_copy((void *)param_3);
  if (pvVar1 == (void *)0x0) {
    puVar2 = (undefined *)0x0;
    pcVar3 = (code *)0x0;
  }
  else {
    puVar2 = &DAT_100f38470;
    _swift_allocObject(&DAT_100f38470,0x18,7);
    *(void **)(puVar2 + 0x10) = pvVar1;
    pcVar3 = thunk_FUN_100405dac;
  }
  FUN_100b8f660(pcVar3,puVar2);
  return;
}



/* Address: 0x100b8f660 | FUN_100b8f660 */

void FUN_100b8f660(undefined8 param_1,undefined8 param_2)

{
  FUN_100b933d0(param_1,param_2,&SentryOptions::onCrashedLastRun,thunk_FUN_100004550);
  return;
}



/* Address: 0x100b8f674 | FUN_100b8f674 */

void FUN_100b8f674(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined1 auStack_48 [24];
  
  plVar1 = (long *)(*param_2 + SentryOptions::onCrashedLastRun);
  _swift_beginAccess(plVar1,auStack_48,0,0);
  lVar2 = *plVar1;
  lVar3 = plVar1[1];
  if (lVar2 == 0) {
    pcVar5 = (code *)0x0;
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = &DAT_100f38808;
    _swift_allocObject(&DAT_100f38808,0x20,7);
    *(long *)(puVar4 + 0x10) = lVar2;
    *(long *)(puVar4 + 0x18) = lVar3;
    pcVar5 = thunk_FUN_100b93d74;
  }
  *param_1 = pcVar5;
  param_1[1] = puVar4;
  FUN_100011128(lVar2,lVar3);
  return;
}



/* Address: 0x100b8f708 | FUN_100b8f708 */

void FUN_100b8f708(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  code *pcVar7;
  undefined1 auStack_68 [24];
  
  lVar2 = *param_1;
  lVar4 = param_1[1];
  if (lVar2 == 0) {
    pcVar7 = (code *)0x0;
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = &DAT_100f387e0;
    _swift_allocObject(&DAT_100f387e0,0x20,7);
    *(long *)(puVar6 + 0x10) = lVar2;
    *(long *)(puVar6 + 0x18) = lVar4;
    pcVar7 = thunk_FUN_100b93d4c;
  }
  puVar1 = (undefined8 *)(*param_2 + SentryOptions::onCrashedLastRun);
  _swift_beginAccess(puVar1,auStack_68,1,0);
  uVar3 = *puVar1;
  uVar5 = puVar1[1];
  *puVar1 = pcVar7;
  puVar1[1] = puVar6;
  FUN_100011128(lVar2,lVar4);
  FUN_100004550(uVar3,uVar5);
  return;
}



/* Address: 0x100b8f7c0 | FUN_100b8f7c0 */

void FUN_100b8f7c0(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = SentryOptions::onCrashedLastRun;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100b8f7ec | SentryOptions::onLastRunStatusDetermined */

/* Function Stack Size: 0x10 bytes */

ID SentryOptions::onLastRunStatusDetermined(ID param_1,SEL param_2)

{
  FUN_100b8e888(param_1,param_2,FUN_100b8f808,FUN_100b8f81c,&DAT_100f38438);
  return param_1;
}



/* Address: 0x100b8f808 | FUN_100b8f808 */

void FUN_100b8f808(void)

{
  FUN_100b9336c(&SentryOptions::onLastRunStatusDetermined,FUN_100011128);
  return;
}



/* Address: 0x100b8f81c | FUN_100b8f81c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b8f81c(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _swift_retain(uVar2);
  (*pcVar1)(param_2,param_3);
  _swift_release(uVar2);
  return 0;
}



/* Address: 0x100b8f880 | SentryOptions::setOnLastRunStatusDetermined: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryOptions::setOnLastRunStatusDetermined_
               (ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  void *pvVar1;
  undefined *puVar2;
  code *pcVar3;
  
  pvVar1 = __Block_copy((void *)param_3);
  if (pvVar1 == (void *)0x0) {
    puVar2 = (undefined *)0x0;
    pcVar3 = (code *)0x0;
  }
  else {
    puVar2 = &DAT_100f38420;
    _swift_allocObject(&DAT_100f38420,0x18,7);
    *(void **)(puVar2 + 0x10) = pvVar1;
    pcVar3 = FUN_100b93d18;
  }
  FUN_100b8f900(pcVar3,puVar2);
  return;
}



/* Address: 0x100b8f900 | FUN_100b8f900 */

void FUN_100b8f900(undefined8 param_1,undefined8 param_2)

{
  FUN_100b933d0(param_1,param_2,&SentryOptions::onLastRunStatusDetermined,FUN_100004550);
  return;
}



/* Address: 0x100b8f914 | FUN_100b8f914 */

void FUN_100b8f914(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined1 auStack_48 [24];
  
  plVar1 = (long *)(*param_2 + SentryOptions::onLastRunStatusDetermined);
  _swift_beginAccess(plVar1,auStack_48,0,0);
  lVar2 = *plVar1;
  lVar3 = plVar1[1];
  if (lVar2 == 0) {
    pcVar5 = (code *)0x0;
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = &DAT_100f387b8;
    _swift_allocObject(&DAT_100f387b8,0x20,7);
    *(long *)(puVar4 + 0x10) = lVar2;
    *(long *)(puVar4 + 0x18) = lVar3;
    pcVar5 = FUN_100b93dfc;
  }
  *param_1 = pcVar5;
  param_1[1] = puVar4;
  FUN_100011128(lVar2,lVar3);
  return;
}



/* Address: 0x100b8f9a8 | FUN_100b8f9a8 */

void FUN_100b8f9a8(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  code *pcVar7;
  undefined1 auStack_68 [24];
  
  lVar2 = *param_1;
  lVar4 = param_1[1];
  if (lVar2 == 0) {
    pcVar7 = (code *)0x0;
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = &DAT_100f38790;
    _swift_allocObject(&DAT_100f38790,0x20,7);
    *(long *)(puVar6 + 0x10) = lVar2;
    *(long *)(puVar6 + 0x18) = lVar4;
    pcVar7 = FUN_100b93dd0;
  }
  puVar1 = (undefined8 *)(*param_2 + SentryOptions::onLastRunStatusDetermined);
  _swift_beginAccess(puVar1,auStack_68,1,0);
  uVar3 = *puVar1;
  uVar5 = puVar1[1];
  *puVar1 = pcVar7;
  puVar1[1] = puVar6;
  FUN_100011128(lVar2,lVar4);
  FUN_100004550(uVar3,uVar5);
  return;
}



/* Address: 0x100b8fa60 | FUN_100b8fa60 */

void FUN_100b8fa60(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = SentryOptions::onLastRunStatusDetermined;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100b8fa8c | SentryOptions::sampleRate */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryOptions::sampleRate(ID param_1,SEL param_2)

{
  FUN_100b8faac();
  return param_1;
}



/* Address: 0x100b8faac | FUN_100b8faac */

void FUN_100b8faac(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + SentryOptions::_sampleRate);
  FUN_100b78d78();
  FUN_100b56e88(uVar1);
  return;
}



/* Address: 0x100b8fad4 | SentryOptions::setSampleRate: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryOptions::setSampleRate_(ID param_1,SEL param_2,ID param_3)

{
  FUN_100b8fb14(param_3);
  return;
}



/* Address: 0x100b8fb14 | FUN_100b8fb14 */

void FUN_100b8fb14(undefined8 param_1)

{
  FUN_100b909c4(param_1,1,&SentryOptions::_sampleRate);
  return;
}



/* Address: 0x100b8fb24 | FUN_100b8fb24 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100b8fb24(undefined8 *param_1)

{
  FUN_100b8fb14(*param_1);
  return;
}



/* Address: 0x100b8fb54 | FUN_100b8fb54 */

bool FUN_100b8fb54(double param_1)

{
  bool bVar1;
  
  FUN_100b940ec();
  if (0.0 <= param_1) {
    FUN_100b940ec();
    bVar1 = param_1 <= 1.0;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Address: 0x100b8fb94 | FUN_100b8fb94 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100b8fb94(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + SentryOptions::_sampleRate);
  *param_1 = uVar1;
  param_1[1] = unaff_x20;
  FUN_100b6fbdc(uVar1);
  FUN_100b56e88();
  return;
}



/* Address: 0x100b8fbcc | FUN_100b8fbcc */

void FUN_100b8fbcc(undefined8 param_1,undefined8 param_2)

{
  FUN_100b90acc(param_1,param_2,FUN_100b8fb14);
  return;
}



/* Address: 0x100b8fbd8 | SentryOptions::enableAutoSessionTracking */

/* Function Stack Size: 0x10 bytes */

bool SentryOptions::enableAutoSessionTracking(ID param_1,SEL param_2)

{
  uint uVar1;
  
  uVar1 = (uint)param_1;
  FUN_100b8fbfc();
  return uVar1 & 1;
}



/* Address: 0x100b8fbfc | FUN_100b8fbfc */

void FUN_100b8fbfc(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = SentryOptions::enableAutoSessionTracking;
  FUN_100b78c58();
  FUN_100b6f9fc(*(undefined1 *)(unaff_x20 + lVar1));
  return;
}



/* Address: 0x100b8fc24 | SentryOptions::setEnableAutoSessionTracking: */

/* Function Stack Size: 0x14 bytes */

void SentryOptions::setEnableAutoSessionTracking_(ID param_1,SEL param_2,bool param_3)

{
  FUN_100b8fc48(param_3);
  return;
}



/* Address: 0x100b8fc48 | FUN_100b8fc48 */

void FUN_100b8fc48(void)

{
  long lVar1;
  undefined1 unaff_w19;
  long unaff_x20;
  
  FUN_100b78d24();
  lVar1 = SentryOptions::enableAutoSessionTracking;
  FUN_100b78c6c();
  *(undefined1 *)(unaff_x20 + lVar1) = unaff_w19;
  FUN_100b78c90();
  return;
}



/* Address: 0x100b8fc74 | FUN_100b8fc74 */

void FUN_100b8fc74(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = SentryOptions::enableAutoSessionTracking;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100b8fca0 | SentryOptions::enableGraphQLOperationTracking */

/* Function Stack Size: 0x10 bytes */

bool SentryOptions::enableGraphQLOperationTracking(ID param_1,SEL param_2)

{
  uint uVar1;
  
  uVar1 = (uint)param_1;
  FUN_100b8fcc4();
  return uVar1 & 1;
}



/* Address: 0x100b8fcc4 | FUN_100b8fcc4 */

void FUN_100b8fcc4(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = SentryOptions::enableGraphQLOperationTracking;
  FUN_100b78c58();
  FUN_100b6f9fc(*(undefined1 *)(unaff_x20 + lVar1));
  return;
}



/* Address: 0x100b8fcec | SentryOptions::setEnableGraphQLOperationTracking: */

/* Function Stack Size: 0x14 bytes */

void SentryOptions::setEnableGraphQLOperationTracking_(ID param_1,SEL param_2,bool param_3)

{
  FUN_100b8fd10(param_3);
  return;
}



/* Address: 0x100b8fd10 | FUN_100b8fd10 */

void FUN_100b8fd10(void)

{
  long lVar1;
  undefined1 unaff_w19;
  long unaff_x20;
  
  FUN_100b78d24();
  lVar1 = SentryOptions::enableGraphQLOperationTracking;
  FUN_100b78c6c();
  *(undefined1 *)(unaff_x20 + lVar1) = unaff_w19;
  FUN_100b78c90();
  return;
}



/* Address: 0x100b8fd3c | FUN_100b8fd3c */

void FUN_100b8fd3c(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = SentryOptions::enableGraphQLOperationTracking;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100b8fd68 | SentryOptions::enableWatchdogTerminationTracking */

/* Function Stack Size: 0x10 bytes */

bool SentryOptions::enableWatchdogTerminationTracking(ID param_1,SEL param_2)

{
  uint uVar1;
  
  uVar1 = (uint)param_1;
  FUN_100b8fd8c();
  return uVar1 & 1;
}



/* Address: 0x100b8fd8c | FUN_100b8fd8c */

void FUN_100b8fd8c(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = SentryOptions::enableWatchdogTerminationTracking;
  FUN_100b78c58();
  FUN_100b6f9fc(*(undefined1 *)(unaff_x20 + lVar1));
  return;
}



/* Address: 0x100b8fdb4 | SentryOptions::setEnableWatchdogTerminationTracking: */

/* Function Stack Size: 0x14 bytes */

void SentryOptions::setEnableWatchdogTerminationTracking_(ID param_1,SEL param_2,bool param_3)

{
  FUN_100b8fdd8(param_3);
  return;
}



/* Address: 0x100b8fdd8 | FUN_100b8fdd8 */

void FUN_100b8fdd8(void)

{
  long lVar1;
  undefined1 unaff_w19;
  long unaff_x20;
  
  FUN_100b78d24();
  lVar1 = SentryOptions::enableWatchdogTerminationTracking;
  FUN_100b78c6c();
  *(undefined1 *)(unaff_x20 + lVar1) = unaff_w19;
  FUN_100b78c90();
  return;
}



/* Address: 0x100b8fe04 | FUN_100b8fe04 */

void FUN_100b8fe04(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = SentryOptions::enableWatchdogTerminationTracking;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100b8fe30 | SentryOptions::sessionTrackingIntervalMillis */

/* Function Stack Size: 0x10 bytes */

unsigned_long_long SentryOptions::sessionTrackingIntervalMillis(ID param_1,SEL param_2)

{
  FUN_100b8fe50();
  return param_1;
}



/* Address: 0x100b8fe50 | FUN_100b8fe50 */

void FUN_100b8fe50(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = SentryOptions::sessionTrackingIntervalMillis;
  FUN_100b78c58();
  FUN_100b6f9fc(*(undefined8 *)(unaff_x20 + lVar1));
  return;
}



/* Address: 0x100b8fe78 | SentryOptions::setSessionTrackingIntervalMillis: */

/* Function Stack Size: 0x18 bytes */

void SentryOptions::setSessionTrackingIntervalMillis_
               (ID param_1,SEL param_2,unsigned_long_long param_3)

{
  FUN_100b8fe9c(param_3);
  return;
}



/* Address: 0x100b8fe9c | FUN_100b8fe9c */

void FUN_100b8fe9c(void)

{
  long lVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_100b78d24();
  lVar1 = SentryOptions::sessionTrackingIntervalMillis;
  FUN_100b78c6c();
  *(undefined8 *)(unaff_x20 + lVar1) = unaff_x19;
  FUN_100b78c90();
  return;
}



/* Address: 0x100b8fec8 | FUN_100b8fec8 */

void FUN_100b8fec8(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = SentryOptions::sessionTrackingIntervalMillis;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100b8fef4 | SentryOptions::attachStacktrace */

/* Function Stack Size: 0x10 bytes */

bool SentryOptions::attachStacktrace(ID param_1,SEL param_2)

{
  uint uVar1;
  
  uVar1 = (uint)param_1;
  FUN_100b8ff18();
  return uVar1 & 1;
}



/* Address: 0x100b8ff18 | FUN_100b8ff18 */

void FUN_100b8ff18(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = SentryOptions::attachStacktrace;
  FUN_100b78c58();
  FUN_100b6f9fc(*(undefined1 *)(unaff_x20 + lVar1));
  return;
}



/* Address: 0x100b8ff40 | SentryOptions::setAttachStacktrace: */

/* Function Stack Size: 0x14 bytes */

void SentryOptions::setAttachStacktrace_(ID param_1,SEL param_2,bool param_3)

{
  FUN_100b8ff64(param_3);
  return;
}



/* Address: 0x100b8ff64 | FUN_100b8ff64 */

void FUN_100b8ff64(void)

{
  long lVar1;
  undefined1 unaff_w19;
  long unaff_x20;
  
  FUN_100b78d24();
  lVar1 = SentryOptions::attachStacktrace;
  FUN_100b78c6c();
  *(undefined1 *)(unaff_x20 + lVar1) = unaff_w19;
  FUN_100b78c90();
  return;
}



/* Address: 0x100b8ff90 | FUN_100b8ff90 */

void FUN_100b8ff90(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = SentryOptions::attachStacktrace;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100b8ffbc | SentryOptions::attachAllThreads */

/* Function Stack Size: 0x10 bytes */

bool SentryOptions::attachAllThreads(ID param_1,SEL param_2)

{
  uint uVar1;
  
  uVar1 = (uint)param_1;
  FUN_100b8ffe0();
  return uVar1 & 1;
}



/* Address: 0x100b8ffe0 | FUN_100b8ffe0 */

void FUN_100b8ffe0(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = SentryOptions::attachAllThreads;
  FUN_100b78c58();
  FUN_100b6f9fc(*(undefined1 *)(unaff_x20 + lVar1));
  return;
}



/* Address: 0x100b90008 | SentryOptions::setAttachAllThreads: */

/* Function Stack Size: 0x14 bytes */

void SentryOptions::setAttachAllThreads_(ID param_1,SEL param_2,bool param_3)

{
  FUN_100b9002c(param_3);
  return;
}



/* Address: 0x100b9002c | FUN_100b9002c */

void FUN_100b9002c(void)

{
  long lVar1;
  undefined1 unaff_w19;
  long unaff_x20;
  
  FUN_100b78d24();
  lVar1 = SentryOptions::attachAllThreads;
  FUN_100b78c6c();
  *(undefined1 *)(unaff_x20 + lVar1) = unaff_w19;
  FUN_100b78c90();
  return;
}



/* Address: 0x100b90058 | FUN_100b90058 */

void FUN_100b90058(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = SentryOptions::attachAllThreads;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100b90084 | SentryOptions::maxAttachmentSize */

/* Function Stack Size: 0x10 bytes */

unsigned_long_long SentryOptions::maxAttachmentSize(ID param_1,SEL param_2)

{
  FUN_100b900a4();
  return param_1;
}



/* Address: 0x100b900a4 | FUN_100b900a4 */

void FUN_100b900a4(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = SentryOptions::maxAttachmentSize;
  FUN_100b78c58();
  FUN_100b6f9fc(*(undefined8 *)(unaff_x20 + lVar1));
  return;
}



/* Address: 0x100b900cc | SentryOptions::setMaxAttachmentSize: */

/* Function Stack Size: 0x18 bytes */

void SentryOptions::setMaxAttachmentSize_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  FUN_100b900f0(param_3);
  return;
}



/* Address: 0x100b900f0 | FUN_100b900f0 */

void FUN_100b900f0(void)

{
  long lVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_100b78d24();
  lVar1 = SentryOptions::maxAttachmentSize;
  FUN_100b78c6c();
  *(undefined8 *)(unaff_x20 + lVar1) = unaff_x19;
  FUN_100b78c90();
  return;
}



/* Address: 0x100b9011c | FUN_100b9011c */

void FUN_100b9011c(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = SentryOptions::maxAttachmentSize;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100b90148 | SentryOptions::sendDefaultPii */

/* Function Stack Size: 0x10 bytes */

bool SentryOptions::sendDefaultPii(ID param_1,SEL param_2)

{
  uint uVar1;
  
  uVar1 = (uint)param_1;
  FUN_100b9016c();
  return uVar1 & 1;
}



/* Address: 0x100b9016c | FUN_100b9016c */

void FUN_100b9016c(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = SentryOptions::sendDefaultPii;
  FUN_100b78c58();
  FUN_100b6f9fc(*(undefined1 *)(unaff_x20 + lVar1));
  return;
}



/* Address: 0x100b90194 | SentryOptions::setSendDefaultPii: */

/* Function Stack Size: 0x14 bytes */

void SentryOptions::setSendDefaultPii_(ID param_1,SEL param_2,bool param_3)

{
  FUN_100b901b8(param_3);
  return;
}



/* Address: 0x100b901b8 | FUN_100b901b8 */

void FUN_100b901b8(void)

{
  long lVar1;
  undefined1 unaff_w19;
  long unaff_x20;
  
  FUN_100b78d24();
  lVar1 = SentryOptions::sendDefaultPii;
  FUN_100b78c6c();
  *(undefined1 *)(unaff_x20 + lVar1) = unaff_w19;
  FUN_100b78c90();
  return;
}


