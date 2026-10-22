/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100b901e4 | FUN_100b901e4 */

void FUN_100b901e4(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = SentryOptions::sendDefaultPii;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100b90210 | SentryOptions::enableAutoPerformanceTracing */

/* Function Stack Size: 0x10 bytes */

bool SentryOptions::enableAutoPerformanceTracing(ID param_1,SEL param_2)

{
  uint uVar1;
  
  uVar1 = (uint)param_1;
  FUN_100b90234();
  return uVar1 & 1;
}



/* Address: 0x100b90234 | FUN_100b90234 */

void FUN_100b90234(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = SentryOptions::enableAutoPerformanceTracing;
  FUN_100b78c58();
  FUN_100b6f9fc(*(undefined1 *)(unaff_x20 + lVar1));
  return;
}



/* Address: 0x100b9025c | SentryOptions::setEnableAutoPerformanceTracing: */

/* Function Stack Size: 0x14 bytes */

void SentryOptions::setEnableAutoPerformanceTracing_(ID param_1,SEL param_2,bool param_3)

{
  FUN_100b90280(param_3);
  return;
}



/* Address: 0x100b90280 | FUN_100b90280 */

void FUN_100b90280(void)

{
  long lVar1;
  undefined1 unaff_w19;
  long unaff_x20;
  
  FUN_100b78d24();
  lVar1 = SentryOptions::enableAutoPerformanceTracing;
  FUN_100b78c6c();
  *(undefined1 *)(unaff_x20 + lVar1) = unaff_w19;
  FUN_100b78c90();
  return;
}



/* Address: 0x100b902ac | FUN_100b902ac */

void FUN_100b902ac(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = SentryOptions::enableAutoPerformanceTracing;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100b902d8 | SentryOptions::enablePersistingTracesWhenCrashing */

/* Function Stack Size: 0x10 bytes */

bool SentryOptions::enablePersistingTracesWhenCrashing(ID param_1,SEL param_2)

{
  uint uVar1;
  
  uVar1 = (uint)param_1;
  FUN_100b902fc();
  return uVar1 & 1;
}



/* Address: 0x100b902fc | FUN_100b902fc */

void FUN_100b902fc(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = SentryOptions::enablePersistingTracesWhenCrashing;
  FUN_100b78c58();
  FUN_100b6f9fc(*(undefined1 *)(unaff_x20 + lVar1));
  return;
}



/* Address: 0x100b90324 | SentryOptions::setEnablePersistingTracesWhenCrashing: */

/* Function Stack Size: 0x14 bytes */

void SentryOptions::setEnablePersistingTracesWhenCrashing_(ID param_1,SEL param_2,bool param_3)

{
  FUN_100b90348(param_3);
  return;
}



/* Address: 0x100b90348 | FUN_100b90348 */

void FUN_100b90348(void)

{
  long lVar1;
  undefined1 unaff_w19;
  long unaff_x20;
  
  FUN_100b78d24();
  lVar1 = SentryOptions::enablePersistingTracesWhenCrashing;
  FUN_100b78c6c();
  *(undefined1 *)(unaff_x20 + lVar1) = unaff_w19;
  FUN_100b78c90();
  return;
}



/* Address: 0x100b90374 | FUN_100b90374 */

void FUN_100b90374(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = SentryOptions::enablePersistingTracesWhenCrashing;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100b903a0 | SentryOptions::initialScope */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryOptions::initialScope(ID param_1,SEL param_2)

{
  void *pvVar1;
  undefined *local_50;
  undefined8 local_48;
  code *local_40;
  undefined *puStack_38;
  ID local_30;
  SEL local_28;
  
  FUN_100b90410();
  local_50 = PTR___NSConcreteStackBlock_100ea82a0;
  local_48 = 0x42000000;
  local_40 = FUN_100059c14;
  puStack_38 = &DAT_100f383e8;
  local_30 = param_1;
  local_28 = param_2;
  pvVar1 = __Block_copy(&local_50);
  _swift_release(local_28);
  return (ID)pvVar1;
}



/* Address: 0x100b90410 | FUN_100b90410 */

void FUN_100b90410(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = unaff_x20 + SentryOptions::initialScope;
  FUN_100b78ca0(lVar1,auStack_38);
  _swift_retain(*(undefined8 *)(lVar1 + 8));
  FUN_100b6fbdc();
  FUN_100b6f9fc();
  return;
}



/* Address: 0x100b90450 | SentryOptions::setInitialScope: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryOptions::setInitialScope_(ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  void *pvVar1;
  undefined *puVar2;
  
  pvVar1 = __Block_copy((void *)param_3);
  puVar2 = &DAT_100f383d0;
  _swift_allocObject(&DAT_100f383d0,0x18,7);
  *(void **)(puVar2 + 0x10) = pvVar1;
  FUN_100b904bc(FUN_100b93d10,puVar2);
  return;
}



/* Address: 0x100b904bc | FUN_100b904bc */

void FUN_100b904bc(undefined8 param_1,undefined8 param_2)

{
  FUN_100b92dd4(param_1,param_2,&SentryOptions::initialScope,PTR__swift_release_100eae3e8);
  return;
}



/* Address: 0x100b904d0 | FUN_100b904d0 */

void FUN_100b904d0(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(*param_2 + SentryOptions::initialScope);
  _swift_beginAccess(puVar1,auStack_48,0,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  puVar4 = &DAT_100f38768;
  _swift_allocObject(&DAT_100f38768,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar2;
  *(undefined8 *)(puVar4 + 0x18) = uVar3;
  *param_1 = FUN_100b93db4;
  param_1[1] = puVar4;
  _swift_retain(uVar3);
  return;
}



/* Address: 0x100b90550 | FUN_100b90550 */

void FUN_100b90550(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [24];
  
  uVar4 = *param_1;
  uVar2 = param_1[1];
  puVar3 = &DAT_100f38740;
  _swift_allocObject(&DAT_100f38740,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar4;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  puVar1 = (undefined8 *)(*param_2 + SentryOptions::initialScope);
  _swift_beginAccess(puVar1,auStack_48,1,0);
  uVar4 = puVar1[1];
  *puVar1 = FUN_100b93d94;
  puVar1[1] = puVar3;
  _swift_retain(uVar2);
  _swift_release(uVar4);
  return;
}



/* Address: 0x100b905e0 | FUN_100b905e0 */

void FUN_100b905e0(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = SentryOptions::initialScope;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100b9060c | SentryOptions::enableNetworkTracking */

/* Function Stack Size: 0x10 bytes */

bool SentryOptions::enableNetworkTracking(ID param_1,SEL param_2)

{
  uint uVar1;
  
  uVar1 = (uint)param_1;
  FUN_100b90630();
  return uVar1 & 1;
}



/* Address: 0x100b90630 | FUN_100b90630 */

void FUN_100b90630(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = SentryOptions::enableNetworkTracking;
  FUN_100b78c58();
  FUN_100b6f9fc(*(undefined1 *)(unaff_x20 + lVar1));
  return;
}



/* Address: 0x100b90658 | SentryOptions::setEnableNetworkTracking: */

/* Function Stack Size: 0x14 bytes */

void SentryOptions::setEnableNetworkTracking_(ID param_1,SEL param_2,bool param_3)

{
  FUN_100b9067c(param_3);
  return;
}



/* Address: 0x100b9067c | FUN_100b9067c */

void FUN_100b9067c(void)

{
  long lVar1;
  undefined1 unaff_w19;
  long unaff_x20;
  
  FUN_100b78d24();
  lVar1 = SentryOptions::enableNetworkTracking;
  FUN_100b78c6c();
  *(undefined1 *)(unaff_x20 + lVar1) = unaff_w19;
  FUN_100b78c90();
  return;
}



/* Address: 0x100b906a8 | FUN_100b906a8 */

void FUN_100b906a8(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = SentryOptions::enableNetworkTracking;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100b906d4 | SentryOptions::enableFileIOTracing */

/* Function Stack Size: 0x10 bytes */

bool SentryOptions::enableFileIOTracing(ID param_1,SEL param_2)

{
  uint uVar1;
  
  uVar1 = (uint)param_1;
  FUN_100b906f8();
  return uVar1 & 1;
}



/* Address: 0x100b906f8 | FUN_100b906f8 */

void FUN_100b906f8(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = SentryOptions::enableFileIOTracing;
  FUN_100b78c58();
  FUN_100b6f9fc(*(undefined1 *)(unaff_x20 + lVar1));
  return;
}



/* Address: 0x100b90720 | SentryOptions::setEnableFileIOTracing: */

/* Function Stack Size: 0x14 bytes */

void SentryOptions::setEnableFileIOTracing_(ID param_1,SEL param_2,bool param_3)

{
  FUN_100b90744(param_3);
  return;
}



/* Address: 0x100b90744 | FUN_100b90744 */

void FUN_100b90744(void)

{
  long lVar1;
  undefined1 unaff_w19;
  long unaff_x20;
  
  FUN_100b78d24();
  lVar1 = SentryOptions::enableFileIOTracing;
  FUN_100b78c6c();
  *(undefined1 *)(unaff_x20 + lVar1) = unaff_w19;
  FUN_100b78c90();
  return;
}



/* Address: 0x100b90770 | FUN_100b90770 */

void FUN_100b90770(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = SentryOptions::enableFileIOTracing;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100b9079c | SentryOptions::enableDataSwizzling */

/* Function Stack Size: 0x10 bytes */

bool SentryOptions::enableDataSwizzling(ID param_1,SEL param_2)

{
  uint uVar1;
  
  uVar1 = (uint)param_1;
  FUN_100b907c0();
  return uVar1 & 1;
}



/* Address: 0x100b907c0 | FUN_100b907c0 */

void FUN_100b907c0(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = SentryOptions::enableDataSwizzling;
  FUN_100b78c58();
  FUN_100b6f9fc(*(undefined1 *)(unaff_x20 + lVar1));
  return;
}



/* Address: 0x100b907e8 | SentryOptions::setEnableDataSwizzling: */

/* Function Stack Size: 0x14 bytes */

void SentryOptions::setEnableDataSwizzling_(ID param_1,SEL param_2,bool param_3)

{
  FUN_100b9080c(param_3);
  return;
}



/* Address: 0x100b9080c | FUN_100b9080c */

void FUN_100b9080c(void)

{
  long lVar1;
  undefined1 unaff_w19;
  long unaff_x20;
  
  FUN_100b78d24();
  lVar1 = SentryOptions::enableDataSwizzling;
  FUN_100b78c6c();
  *(undefined1 *)(unaff_x20 + lVar1) = unaff_w19;
  FUN_100b78c90();
  return;
}



/* Address: 0x100b90838 | FUN_100b90838 */

void FUN_100b90838(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = SentryOptions::enableDataSwizzling;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100b90864 | SentryOptions::enableFileManagerSwizzling */

/* Function Stack Size: 0x10 bytes */

bool SentryOptions::enableFileManagerSwizzling(ID param_1,SEL param_2)

{
  uint uVar1;
  
  uVar1 = (uint)param_1;
  FUN_100b90888();
  return uVar1 & 1;
}



/* Address: 0x100b90888 | FUN_100b90888 */

void FUN_100b90888(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = SentryOptions::enableFileManagerSwizzling;
  FUN_100b78c58();
  FUN_100b6f9fc(*(undefined1 *)(unaff_x20 + lVar1));
  return;
}



/* Address: 0x100b908b0 | SentryOptions::setEnableFileManagerSwizzling: */

/* Function Stack Size: 0x14 bytes */

void SentryOptions::setEnableFileManagerSwizzling_(ID param_1,SEL param_2,bool param_3)

{
  FUN_100b908d4(param_3);
  return;
}



/* Address: 0x100b908d4 | FUN_100b908d4 */

void FUN_100b908d4(void)

{
  long lVar1;
  undefined1 unaff_w19;
  long unaff_x20;
  
  FUN_100b78d24();
  lVar1 = SentryOptions::enableFileManagerSwizzling;
  FUN_100b78c6c();
  *(undefined1 *)(unaff_x20 + lVar1) = unaff_w19;
  FUN_100b78c90();
  return;
}



/* Address: 0x100b90900 | FUN_100b90900 */

void FUN_100b90900(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = SentryOptions::enableFileManagerSwizzling;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100b9092c | SentryOptions::tracesSampleRate */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryOptions::tracesSampleRate(ID param_1,SEL param_2)

{
  FUN_100b9094c();
  return param_1;
}



/* Address: 0x100b9094c | FUN_100b9094c */

void FUN_100b9094c(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + SentryOptions::_tracesSampleRate);
  FUN_100b78d78();
  FUN_100b56e88(uVar1);
  return;
}



/* Address: 0x100b90974 | SentryOptions::setTracesSampleRate: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryOptions::setTracesSampleRate_(ID param_1,SEL param_2,ID param_3)

{
  FUN_100b909b4(param_3);
  return;
}



/* Address: 0x100b909b4 | FUN_100b909b4 */

void FUN_100b909b4(undefined8 param_1)

{
  FUN_100b909c4(param_1,0,&SentryOptions::_tracesSampleRate);
  return;
}



/* Address: 0x100b909c4 | FUN_100b909c4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b909c4(NSNumber *param_1,__int64 param_2,long *param_3)

{
  NSNumber *this;
  long unaff_x20;
  
  if ((param_1 != (NSNumber *)0x0) && (this = param_1, FUN_100b8fb54(), ((ulong)this & 1) == 0)) {
    FUN_100b94080();
    param_1 = (NSNumber *)(extension_Foundation)::__C::NSNumber::__allocating_init(this,param_2);
  }
  *(NSNumber **)(unaff_x20 + *param_3) = param_1;
  return 0;
}



/* Address: 0x100b90a58 | FUN_100b90a58 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100b90a58(undefined8 *param_1)

{
  FUN_100b909b4(*param_1);
  return;
}



/* Address: 0x100b90a88 | FUN_100b90a88 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100b90a88(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + SentryOptions::_tracesSampleRate);
  *param_1 = uVar1;
  param_1[1] = unaff_x20;
  FUN_100b6fbdc(uVar1);
  FUN_100b56e88();
  return;
}



/* Address: 0x100b90ac0 | FUN_100b90ac0 */

void FUN_100b90ac0(undefined8 param_1,undefined8 param_2)

{
  FUN_100b90acc(param_1,param_2,FUN_100b909b4);
  return;
}



/* Address: 0x100b90acc | FUN_100b90acc */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100b90acc(undefined8 *param_1,uint param_2,code *param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  if ((param_2 & 1) != 0) {
    (*param_3)(uVar1);
    FUN_100b78d38(uVar1);
    return;
  }
  (*param_3)(uVar1);
  FUN_100b56e60();
  return;
}



/* Address: 0x100b90b18 | SentryOptions::tracesSampler */

/* Function Stack Size: 0x10 bytes */

ID SentryOptions::tracesSampler(ID param_1,SEL param_2)

{
  FUN_100b8e888(param_1,param_2,FUN_100b90b34,thunk_FUN_100b90b48,&DAT_100f38398);
  return param_1;
}



/* Address: 0x100b90b34 | FUN_100b90b34 */

void FUN_100b90b34(void)

{
  FUN_100b9336c(&SentryOptions::tracesSampler,thunk_FUN_100011128);
  return;
}



/* Address: 0x100b90b48 | FUN_100b90b48 */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

undefined8 FUN_100b90b48(undefined8 param_1)

{
  code *unaff_x21;
  
  FUN_100b940b0();
  FUN_100b78d78();
  (*unaff_x21)();
  _swift_release();
  FUN_100b6faa8();
  return param_1;
}



/* Address: 0x100b90b8c | SentryOptions::setTracesSampler: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryOptions::setTracesSampler_(ID param_1,SEL param_2,ID param_3,undefined4 param_4)

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
    puVar2 = &DAT_100f38380;
    _swift_allocObject(&DAT_100f38380,0x18,7);
    *(void **)(puVar2 + 0x10) = pvVar1;
    pcVar3 = thunk_FUN_100b93d10;
  }
  FUN_100b90c0c(pcVar3,puVar2);
  return;
}



/* Address: 0x100b90c0c | FUN_100b90c0c */

void FUN_100b90c0c(undefined8 param_1,undefined8 param_2)

{
  FUN_100b933d0(param_1,param_2,&SentryOptions::tracesSampler,thunk_FUN_100004550);
  return;
}



/* Address: 0x100b90c20 | FUN_100b90c20 */

void FUN_100b90c20(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined1 auStack_48 [24];
  
  plVar1 = (long *)(*param_2 + SentryOptions::tracesSampler);
  _swift_beginAccess(plVar1,auStack_48,0,0);
  lVar2 = *plVar1;
  lVar3 = plVar1[1];
  if (lVar2 == 0) {
    pcVar5 = (code *)0x0;
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = &DAT_100f38718;
    _swift_allocObject(&DAT_100f38718,0x20,7);
    *(long *)(puVar4 + 0x10) = lVar2;
    *(long *)(puVar4 + 0x18) = lVar3;
    pcVar5 = thunk_FUN_100b93db4;
  }
  *param_1 = pcVar5;
  param_1[1] = puVar4;
  FUN_100011128(lVar2,lVar3);
  return;
}



/* Address: 0x100b90cb4 | FUN_100b90cb4 */

void FUN_100b90cb4(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x100b90cd8 | FUN_100b90cd8 */

void FUN_100b90cd8(long *param_1,long *param_2)

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
    puVar6 = &DAT_100f386f0;
    _swift_allocObject(&DAT_100f386f0,0x20,7);
    *(long *)(puVar6 + 0x10) = lVar2;
    *(long *)(puVar6 + 0x18) = lVar4;
    pcVar7 = thunk_FUN_100b93d94;
  }
  puVar1 = (undefined8 *)(*param_2 + SentryOptions::tracesSampler);
  _swift_beginAccess(puVar1,auStack_68,1,0);
  uVar3 = *puVar1;
  uVar5 = puVar1[1];
  *puVar1 = pcVar7;
  puVar1[1] = puVar6;
  FUN_100011128(lVar2,lVar4);
  FUN_100004550(uVar3,uVar5);
  return;
}



/* Address: 0x100b90d90 | FUN_100b90d90 */

void FUN_100b90d90(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = SentryOptions::tracesSampler;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100b90dbc | SentryOptions::isTracingEnabled */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

bool SentryOptions::isTracingEnabled(ID param_1,SEL param_2)

{
  uint uVar1;
  
  uVar1 = (uint)param_1;
  FUN_100b8cd10();
  return uVar1 & 1;
}



/* Address: 0x100b90df0 | FUN_100b90df0 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_100b90df0(void)

{
  ID IVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long local_28;
  
  uVar3 = 0;
  IVar1 = _objc_msgSend((ID)&_OBJC_CLASS___NSBundle,"mainBundle");
  FUN_100b93e98();
  if (IVar1 == 0) {
    uStack_38 = 0;
    local_40 = 0;
    local_28 = 0;
    uStack_30 = 0;
  }
  else {
    if (*(long *)(IVar1 + 0x10) != 0) {
      uVar5 = 0;
      lVar2 = -0x2fffffffffffffee;
      FUN_100071370(0xd000000000000012);
      if ((uVar5 & 1) != 0) {
        FUN_10000cbfc(*(long *)(IVar1 + 0x38) + lVar2 * 0x20,&local_40);
        _swift_bridgeObjectRelease(IVar1);
        if (local_28 != 0) {
          _swift_dynamicCast(&local_50,&local_40,PTR___type_metadata_for_Any_100eae0c0 + 8,
                             PTR___type_metadata_for_Swift_String_100eac208,6);
          if ((uVar3 & 1) == 0) {
            return;
          }
          puVar4 = &DAT_101044958;
          FUN_100b6730c();
          _swift_allocObject();
          *(undefined8 *)(puVar4 + 0x18) = 2;
          *(undefined8 *)(puVar4 + 0x10) = 1;
          *(undefined8 *)(puVar4 + 0x20) = local_50;
          *(undefined8 *)(puVar4 + 0x28) = uStack_48;
          return;
        }
        goto LAB_100b90ee8;
      }
    }
    uStack_38 = 0;
    local_40 = 0;
    local_28 = 0;
    uStack_30 = 0;
    _swift_bridgeObjectRelease(IVar1);
  }
LAB_100b90ee8:
  FUN_100013954(&local_40);
  return;
}



/* Address: 0x100b90f08 | SentryOptions::inAppIncludes */

/* Function Stack Size: 0x10 bytes */

ID SentryOptions::inAppIncludes(ID param_1,SEL param_2)

{
  FUN_100b91ff0(param_1,param_2,FUN_100b90f1c,PTR___type_metadata_for_Swift_String_100eac208);
  return param_1;
}



/* Address: 0x100b90f1c | FUN_100b90f1c */

void FUN_100b90f1c(void)

{
  FUN_100b92498(&SentryOptions::inAppIncludes);
  return;
}



/* Address: 0x100b90f28 | SentryOptions::setInAppIncludes: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryOptions::setInAppIncludes_(ID param_1,SEL param_2,ID param_3)

{
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  FUN_100b92418(param_3,&inAppIncludes);
  return;
}



/* Address: 0x100b90f7c | FUN_100b90f7c */

void FUN_100b90f7c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  
  lVar1 = SentryOptions::inAppIncludes;
  FUN_100b94020(unaff_x20 + SentryOptions::inAppIncludes);
  _swift_bridgeObjectRetain(param_2);
  FUN_100b939e4(FUN_100089044);
  lVar3 = *(long *)(*(long *)(unaff_x20 + lVar1) + 0x10);
  FUN_100b93c38(lVar3,FUN_100089044);
  lVar2 = *(long *)(unaff_x20 + lVar1);
  *(long *)(lVar2 + 0x10) = lVar3 + 1;
  lVar3 = lVar2 + lVar3 * 0x10;
  *(undefined8 *)(lVar3 + 0x20) = param_1;
  *(undefined8 *)(lVar3 + 0x28) = param_2;
  *(long *)(unaff_x20 + lVar1) = lVar2;
  return;
}



/* Address: 0x100b9101c | SentryOptions::addInAppInclude: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryOptions::addInAppInclude_(ID param_1,SEL param_2,ID param_3)

{
  String SVar1;
  
  SVar1 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  FUN_100b90f7c(SVar1.str,SVar1.bridgeObject);
  _swift_bridgeObjectRelease(SVar1.bridgeObject);
  return;
}



/* Address: 0x100b91078 | SentryOptions::urlSessionDelegate */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryOptions::urlSessionDelegate(ID param_1,SEL param_2)

{
  FUN_100b91098();
  return param_1;
}


