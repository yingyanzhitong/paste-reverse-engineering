/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100b91098 | FUN_100b91098 */

void FUN_100b91098(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = SentryOptions::urlSessionDelegate;
  FUN_100b78c58();
  _swift_unknownObjectWeakLoadStrong(unaff_x20 + lVar1);
  FUN_100b6f9fc();
  return;
}



/* Address: 0x100b910c4 | SentryOptions::setUrlSessionDelegate: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryOptions::setUrlSessionDelegate_(ID param_1,SEL param_2,ID param_3)

{
  _swift_unknownObjectRetain(param_3);
  FUN_100b91104(param_3);
  return;
}



/* Address: 0x100b91104 | FUN_100b91104 */

void FUN_100b91104(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78d24();
  lVar1 = SentryOptions::urlSessionDelegate;
  FUN_100b78c6c();
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar1);
  _swift_unknownObjectRelease();
  FUN_100b78c90();
  return;
}



/* Address: 0x100b91140 | FUN_100b91140 */

void FUN_100b91140(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = SentryOptions::urlSessionDelegate;
  lVar2 = *param_2;
  _swift_beginAccess(lVar2 + SentryOptions::urlSessionDelegate,auStack_48,0,0);
  lVar2 = lVar2 + lVar1;
  _swift_unknownObjectWeakLoadStrong();
  *param_1 = lVar2;
  return;
}



/* Address: 0x100b91198 | FUN_100b91198 */

void FUN_100b91198(undefined8 *param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_48 [24];
  
  lVar1 = SentryOptions::urlSessionDelegate;
  uVar2 = *param_1;
  lVar3 = *param_2;
  _swift_beginAccess(lVar3 + SentryOptions::urlSessionDelegate,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(lVar3 + lVar1,uVar2);
  return;
}



/* Address: 0x100b911f0 | FUN_100b911f0 */

undefined1  [16] FUN_100b911f0(undefined8 *param_1)

{
  void *pvVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auVar3 [16];
  
  pvVar1 = _malloc(0x30);
  *param_1 = pvVar1;
  lVar2 = SentryOptions::urlSessionDelegate;
  *(long *)((long)pvVar1 + 0x20) = unaff_x20;
  *(long *)((long)pvVar1 + 0x28) = lVar2;
  _swift_beginAccess(unaff_x20 + lVar2,pvVar1,0x21,0);
  lVar2 = unaff_x20 + lVar2;
  _swift_unknownObjectWeakLoadStrong();
  *(long *)((long)pvVar1 + 0x18) = lVar2;
  auVar3._8_8_ = (long *)((long)pvVar1 + 0x18);
  auVar3._0_8_ = FUN_100b9125c;
  return auVar3;
}



/* Address: 0x100b9125c | FUN_100b9125c */

void FUN_100b9125c(undefined8 *param_1,ulong param_2)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = (void *)*param_1;
  uVar2 = *(undefined8 *)((long)pvVar1 + 0x18);
  _swift_unknownObjectWeakAssign
            (*(long *)((long)pvVar1 + 0x20) + *(long *)((long)pvVar1 + 0x28),uVar2);
  if ((param_2 & 1) == 0) {
    _swift_endAccess(pvVar1);
    _swift_unknownObjectRelease(uVar2);
  }
  else {
    _swift_unknownObjectRelease(*(undefined8 *)((long)pvVar1 + 0x18));
    _swift_endAccess(pvVar1);
  }
  _free(pvVar1);
  return;
}



/* Address: 0x100b912c8 | SentryOptions::urlSession */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryOptions::urlSession(ID param_1,SEL param_2)

{
  FUN_100b912e8();
  return param_1;
}



/* Address: 0x100b912e8 | FUN_100b912e8 */

void FUN_100b912e8(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  lVar1 = SentryOptions::urlSession;
  FUN_100b78c58();
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  FUN_100b78d78();
  FUN_100b6f9fc(uVar2);
  return;
}



/* Address: 0x100b91318 | SentryOptions::setUrlSession: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryOptions::setUrlSession_(ID param_1,SEL param_2,ID param_3)

{
  FUN_100b91358(param_3);
  return;
}



/* Address: 0x100b91358 | FUN_100b91358 */

void FUN_100b91358(void)

{
  FUN_100b78d24();
  FUN_100b78c6c();
  FUN_100b78cbc();
  FUN_100b78c90();
  return;
}



/* Address: 0x100b91384 | FUN_100b91384 */

void FUN_100b91384(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = SentryOptions::urlSession;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100b913b0 | SentryOptions::enableSwizzling */

/* Function Stack Size: 0x10 bytes */

bool SentryOptions::enableSwizzling(ID param_1,SEL param_2)

{
  uint uVar1;
  
  uVar1 = (uint)param_1;
  FUN_100b913d4();
  return uVar1 & 1;
}



/* Address: 0x100b913d4 | FUN_100b913d4 */

void FUN_100b913d4(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = SentryOptions::enableSwizzling;
  FUN_100b78c58();
  FUN_100b6f9fc(*(undefined1 *)(unaff_x20 + lVar1));
  return;
}



/* Address: 0x100b913fc | SentryOptions::setEnableSwizzling: */

/* Function Stack Size: 0x14 bytes */

void SentryOptions::setEnableSwizzling_(ID param_1,SEL param_2,bool param_3)

{
  FUN_100b91420(param_3);
  return;
}



/* Address: 0x100b91420 | FUN_100b91420 */

void FUN_100b91420(void)

{
  long lVar1;
  undefined1 unaff_w19;
  long unaff_x20;
  
  FUN_100b78d24();
  lVar1 = SentryOptions::enableSwizzling;
  FUN_100b78c6c();
  *(undefined1 *)(unaff_x20 + lVar1) = unaff_w19;
  FUN_100b78c90();
  return;
}



/* Address: 0x100b9144c | FUN_100b9144c */

void FUN_100b9144c(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = SentryOptions::enableSwizzling;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100b91478 | SentryOptions::swizzleClassNameExcludes */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryOptions::swizzleClassNameExcludes(ID param_1,SEL param_2)

{
  NSSet *pNVar1;
  
  FUN_100b914c0();
  pNVar1 = (extension_Foundation)::Swift::Set::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_1);
  return (ID)pNVar1;
}



/* Address: 0x100b914c0 | FUN_100b914c0 */

void FUN_100b914c0(void)

{
  FUN_100b92498(&SentryOptions::swizzleClassNameExcludes);
  return;
}



/* Address: 0x100b914cc | SentryOptions::setSwizzleClassNameExcludes: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryOptions::setSwizzleClassNameExcludes_(ID param_1,SEL param_2,ID param_3)

{
  Set<undefined> SVar1;
  
  SVar1 = (extension_Foundation)::Swift::Set::__unconditionallyBridgeFromObjectiveC();
  FUN_100b91524(SVar1.unknown);
  return;
}



/* Address: 0x100b91524 | FUN_100b91524 */

void FUN_100b91524(undefined8 param_1)

{
  FUN_100b92418(param_1,&SentryOptions::swizzleClassNameExcludes);
  return;
}



/* Address: 0x100b91530 | FUN_100b91530 */

void FUN_100b91530(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = SentryOptions::swizzleClassNameExcludes;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100b9155c | SentryOptions::enableCoreDataTracing */

/* Function Stack Size: 0x10 bytes */

bool SentryOptions::enableCoreDataTracing(ID param_1,SEL param_2)

{
  uint uVar1;
  
  uVar1 = (uint)param_1;
  FUN_100b91580();
  return uVar1 & 1;
}



/* Address: 0x100b91580 | FUN_100b91580 */

void FUN_100b91580(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = SentryOptions::enableCoreDataTracing;
  FUN_100b78c58();
  FUN_100b6f9fc(*(undefined1 *)(unaff_x20 + lVar1));
  return;
}



/* Address: 0x100b915a8 | SentryOptions::setEnableCoreDataTracing: */

/* Function Stack Size: 0x14 bytes */

void SentryOptions::setEnableCoreDataTracing_(ID param_1,SEL param_2,bool param_3)

{
  FUN_100b915cc(param_3);
  return;
}



/* Address: 0x100b915cc | FUN_100b915cc */

void FUN_100b915cc(void)

{
  long lVar1;
  undefined1 unaff_w19;
  long unaff_x20;
  
  FUN_100b78d24();
  lVar1 = SentryOptions::enableCoreDataTracing;
  FUN_100b78c6c();
  *(undefined1 *)(unaff_x20 + lVar1) = unaff_w19;
  FUN_100b78c90();
  return;
}



/* Address: 0x100b915f8 | FUN_100b915f8 */

void FUN_100b915f8(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = SentryOptions::enableCoreDataTracing;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100b91624 | SentryOptions::configureProfiling */

/* Function Stack Size: 0x10 bytes */

ID SentryOptions::configureProfiling(ID param_1,SEL param_2)

{
  FUN_100b8e888(param_1,param_2,FUN_100b91640,thunk_FUN_100b91658,&DAT_100f38348);
  return param_1;
}



/* Address: 0x100b91640 | FUN_100b91640 */

void FUN_100b91640(void)

{
  FUN_100b9336c(&SentryOptions::configureProfiling,thunk_FUN_100011128);
  return;
}



/* Address: 0x100b91654 | thunk_FUN_100b91658 */

void thunk_FUN_100b91658(undefined8 param_1)

{
  code *unaff_x21;
  
  FUN_100b940b0();
  FUN_100b78d78();
  (*unaff_x21)();
  _swift_release();
  FUN_100b78d38(param_1);
  return;
}



/* Address: 0x100b91658 | FUN_100b91658 */

void FUN_100b91658(undefined8 param_1)

{
  code *unaff_x21;
  
  FUN_100b940b0();
  FUN_100b78d78();
  (*unaff_x21)();
  _swift_release();
  FUN_100b78d38(param_1);
  return;
}



/* Address: 0x100b9168c | SentryOptions::setConfigureProfiling: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryOptions::setConfigureProfiling_(ID param_1,SEL param_2,ID param_3,undefined4 param_4)

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
    puVar2 = &DAT_100f38330;
    _swift_allocObject(&DAT_100f38330,0x18,7);
    *(void **)(puVar2 + 0x10) = pvVar1;
    pcVar3 = FUN_100405dac;
  }
  FUN_100b9170c(pcVar3,puVar2);
  return;
}



/* Address: 0x100b9170c | FUN_100b9170c */

void FUN_100b9170c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + SentryOptions::configureProfiling);
  FUN_100b80d38(puVar1,auStack_58);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  FUN_100011128(param_1,param_2);
  FUN_100004550(uVar2,uVar3);
  FUN_100b918a0();
  FUN_100004550(param_1,param_2);
  return;
}



/* Address: 0x100b9178c | FUN_100b9178c */

void FUN_100b9178c(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined1 auStack_48 [24];
  
  plVar1 = (long *)(*param_2 + SentryOptions::configureProfiling);
  _swift_beginAccess(plVar1,auStack_48,0,0);
  lVar2 = *plVar1;
  lVar3 = plVar1[1];
  if (lVar2 == 0) {
    pcVar5 = (code *)0x0;
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = &DAT_100f386c8;
    _swift_allocObject(&DAT_100f386c8,0x20,7);
    *(long *)(puVar4 + 0x10) = lVar2;
    *(long *)(puVar4 + 0x18) = lVar3;
    pcVar5 = FUN_100b93d74;
  }
  *param_1 = pcVar5;
  param_1[1] = puVar4;
  FUN_100011128(lVar2,lVar3);
  return;
}



/* Address: 0x100b91820 | FUN_100b91820 */

void FUN_100b91820(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  code *pcVar4;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  if (lVar1 == 0) {
    pcVar4 = (code *)0x0;
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = &DAT_100f386a0;
    _swift_allocObject(&DAT_100f386a0,0x20,7);
    *(long *)(puVar3 + 0x10) = lVar1;
    *(long *)(puVar3 + 0x18) = lVar2;
    pcVar4 = FUN_100b93d4c;
  }
  FUN_100011128(lVar1,lVar2);
  FUN_100b9170c(pcVar4,puVar3);
  return;
}



/* Address: 0x100b918a0 | FUN_100b918a0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b918a0(void)

{
  undefined8 *puVar1;
  long lVar2;
  ID IVar3;
  long unaff_x20;
  undefined8 uVar4;
  code *pcVar5;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  IVar3 = 0;
  FUN_100b9c444();
  _objc_allocWithZone();
  IVar3 = _objc_msgSend(IVar3,"init");
  puVar1 = (undefined8 *)(unaff_x20 + SentryOptions::configureProfiling);
  _swift_beginAccess(puVar1,auStack_48,0,0);
  lVar2 = SentryOptions::profiling;
  pcVar5 = (code *)*puVar1;
  if (pcVar5 == (code *)0x0) {
    _swift_beginAccess(unaff_x20 + SentryOptions::profiling,auStack_60,1,0);
    *(undefined8 *)(unaff_x20 + lVar2) = 0;
  }
  else {
    uVar4 = puVar1[1];
    _swift_retain(uVar4);
    (*pcVar5)(IVar3);
    FUN_100004550(pcVar5,uVar4);
    lVar2 = SentryOptions::profiling;
    _swift_beginAccess(unaff_x20 + SentryOptions::profiling,auStack_60,1,0);
    *(ID *)(unaff_x20 + lVar2) = IVar3;
  }
  return 0;
}



/* Address: 0x100b91988 | FUN_100b91988 */

void FUN_100b91988(long param_1)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  *(long *)(param_1 + 0x18) = unaff_x20;
  lVar1 = SentryOptions::configureProfiling;
  FUN_100b78c80();
  FUN_100b56e88(FUN_100b919b8,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100b919b8 | FUN_100b919b8 */

void FUN_100b919b8(undefined8 param_1,undefined8 param_2)

{
  FUN_100b92d34(param_1,param_2,FUN_100b918a0);
  return;
}



/* Address: 0x100b919c4 | SentryOptions::profiling */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryOptions::profiling(ID param_1,SEL param_2)

{
  FUN_100b919e4();
  return param_1;
}



/* Address: 0x100b919e4 | FUN_100b919e4 */

void FUN_100b919e4(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  lVar1 = SentryOptions::profiling;
  FUN_100b78c58();
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  FUN_100b78d78();
  FUN_100b6f9fc(uVar2);
  return;
}



/* Address: 0x100b91a14 | SentryOptions::setProfiling: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryOptions::setProfiling_(ID param_1,SEL param_2,ID param_3)

{
  FUN_100b91a54(param_3);
  return;
}



/* Address: 0x100b91a54 | FUN_100b91a54 */

void FUN_100b91a54(void)

{
  FUN_100b78d24();
  FUN_100b78c6c();
  FUN_100b78cbc();
  FUN_100b78c90();
  return;
}



/* Address: 0x100b91a80 | FUN_100b91a80 */

void FUN_100b91a80(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = SentryOptions::profiling;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100b91aac | FUN_100b91aac */

void FUN_100b91aac(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = SentryOptions::profiling;
  FUN_100b78c58();
  FUN_100b6f9fc(*(long *)(unaff_x20 + lVar1) != 0);
  return;
}



/* Address: 0x100b91adc | SentryOptions::isContinuousProfilingEnabled */

/* Function Stack Size: 0x10 bytes */

bool SentryOptions::isContinuousProfilingEnabled(ID param_1,SEL param_2)

{
  uint uVar1;
  
  uVar1 = (uint)param_1;
  FUN_100b91aac();
  return uVar1 & 1;
}



/* Address: 0x100b91b00 | FUN_100b91b00 */

bool FUN_100b91b00(void)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  lVar3 = SentryOptions::profiling;
  FUN_100b78ca0(unaff_x20 + SentryOptions::profiling,auStack_38);
  lVar1 = _TtC6Sentry20SentryProfileOptions::lifecycle;
  lVar3 = *(long *)(unaff_x20 + lVar3);
  if (lVar3 == 0) {
    bVar2 = false;
  }
  else {
    FUN_100b78ca0(lVar3 + _TtC6Sentry20SentryProfileOptions::lifecycle,auStack_50);
    bVar2 = *(long *)(lVar3 + lVar1) == 1;
  }
  return bVar2;
}



/* Address: 0x100b91b68 | SentryOptions::isProfilingCorrelatedToTraces */

/* Function Stack Size: 0x10 bytes */

bool SentryOptions::isProfilingCorrelatedToTraces(ID param_1,SEL param_2)

{
  uint uVar1;
  
  uVar1 = (uint)param_1;
  FUN_100b91b00();
  return uVar1 & 1;
}



/* Address: 0x100b91b8c | SentryOptions::sendClientReports */

/* Function Stack Size: 0x10 bytes */

bool SentryOptions::sendClientReports(ID param_1,SEL param_2)

{
  uint uVar1;
  
  uVar1 = (uint)param_1;
  FUN_100b91bb0();
  return uVar1 & 1;
}



/* Address: 0x100b91bb0 | FUN_100b91bb0 */

void FUN_100b91bb0(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = SentryOptions::sendClientReports;
  FUN_100b78c58();
  FUN_100b6f9fc(*(undefined1 *)(unaff_x20 + lVar1));
  return;
}



/* Address: 0x100b91bd8 | SentryOptions::setSendClientReports: */

/* Function Stack Size: 0x14 bytes */

void SentryOptions::setSendClientReports_(ID param_1,SEL param_2,bool param_3)

{
  FUN_100b91bfc(param_3);
  return;
}



/* Address: 0x100b91bfc | FUN_100b91bfc */

void FUN_100b91bfc(void)

{
  long lVar1;
  undefined1 unaff_w19;
  long unaff_x20;
  
  FUN_100b78d24();
  lVar1 = SentryOptions::sendClientReports;
  FUN_100b78c6c();
  *(undefined1 *)(unaff_x20 + lVar1) = unaff_w19;
  FUN_100b78c90();
  return;
}



/* Address: 0x100b91c28 | FUN_100b91c28 */

void FUN_100b91c28(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = SentryOptions::sendClientReports;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100b91c54 | SentryOptions::enableAppHangTracking */

/* Function Stack Size: 0x10 bytes */

bool SentryOptions::enableAppHangTracking(ID param_1,SEL param_2)

{
  uint uVar1;
  
  uVar1 = (uint)param_1;
  FUN_100b91c78();
  return uVar1 & 1;
}



/* Address: 0x100b91c78 | FUN_100b91c78 */

void FUN_100b91c78(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = SentryOptions::enableAppHangTracking;
  FUN_100b78c58();
  FUN_100b6f9fc(*(undefined1 *)(unaff_x20 + lVar1));
  return;
}



/* Address: 0x100b91ca0 | SentryOptions::setEnableAppHangTracking: */

/* Function Stack Size: 0x14 bytes */

void SentryOptions::setEnableAppHangTracking_(ID param_1,SEL param_2,bool param_3)

{
  FUN_100b91cc4(param_3);
  return;
}



/* Address: 0x100b91cc4 | FUN_100b91cc4 */

void FUN_100b91cc4(void)

{
  long lVar1;
  undefined1 unaff_w19;
  long unaff_x20;
  
  FUN_100b78d24();
  lVar1 = SentryOptions::enableAppHangTracking;
  FUN_100b78c6c();
  *(undefined1 *)(unaff_x20 + lVar1) = unaff_w19;
  FUN_100b78c90();
  return;
}



/* Address: 0x100b91cf0 | FUN_100b91cf0 */

void FUN_100b91cf0(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = SentryOptions::enableAppHangTracking;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100b91d1c | SentryOptions::appHangTimeoutInterval */

/* Function Stack Size: 0x10 bytes */

double SentryOptions::appHangTimeoutInterval(ID param_1,SEL param_2)

{
  double in_d0;
  
  FUN_100b91d3c();
  return in_d0;
}



/* Address: 0x100b91d3c | FUN_100b91d3c */

void FUN_100b91d3c(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = SentryOptions::appHangTimeoutInterval;
  FUN_100b78c58();
  FUN_100b6f9fc(*(undefined8 *)(unaff_x20 + lVar1));
  return;
}



/* Address: 0x100b91d64 | SentryOptions::setAppHangTimeoutInterval: */

/* Function Stack Size: 0x18 bytes */

void SentryOptions::setAppHangTimeoutInterval_(ID param_1,SEL param_2,double param_3)

{
  FUN_100b91d84();
  return;
}



/* Address: 0x100b91d84 | FUN_100b91d84 */

void FUN_100b91d84(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = SentryOptions::appHangTimeoutInterval;
  FUN_100b94020(unaff_x20 + SentryOptions::appHangTimeoutInterval);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  FUN_100b940d0();
  return;
}



/* Address: 0x100b91db8 | FUN_100b91db8 */

void FUN_100b91db8(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = SentryOptions::appHangTimeoutInterval;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100b91de4 | SentryOptions::enableAutoBreadcrumbTracking */

/* Function Stack Size: 0x10 bytes */

bool SentryOptions::enableAutoBreadcrumbTracking(ID param_1,SEL param_2)

{
  uint uVar1;
  
  uVar1 = (uint)param_1;
  FUN_100b91e08();
  return uVar1 & 1;
}



/* Address: 0x100b91e08 | FUN_100b91e08 */

void FUN_100b91e08(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = SentryOptions::enableAutoBreadcrumbTracking;
  FUN_100b78c58();
  FUN_100b6f9fc(*(undefined1 *)(unaff_x20 + lVar1));
  return;
}


