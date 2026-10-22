/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100b75c78 | _TtC6Sentry25SentryDependencyContainer::setProcessInfoWrapper: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry25SentryDependencyContainer::setProcessInfoWrapper_
               (ID param_1,SEL param_2,ID param_3)

{
  _swift_unknownObjectRetain(param_3);
  FUN_100b75cb8(param_3);
  return;
}



/* Address: 0x100b75cb8 | FUN_100b75cb8 */

void FUN_100b75cb8(undefined8 param_1)

{
  FUN_100b7686c(param_1,&_TtC6Sentry25SentryDependencyContainer::processInfoWrapper);
  return;
}



/* Address: 0x100b75cc4 | FUN_100b75cc4 */

void FUN_100b75cc4(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = _TtC6Sentry25SentryDependencyContainer::processInfoWrapper;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100b75cf0 | _TtC6Sentry25SentryDependencyContainer::crashWrapper */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry25SentryDependencyContainer::crashWrapper(ID param_1,SEL param_2)

{
  FUN_100b75d24();
  return param_1;
}



/* Address: 0x100b75d24 | FUN_100b75d24 */

void FUN_100b75d24(void)

{
  long lVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined1 auStack_80 [16];
  
  lVar1 = _TtC6Sentry25SentryDependencyContainer::___lazy_storage___crashWrapper;
  puVar2 = *(undefined1 **)
            (unaff_x20 + _TtC6Sentry25SentryDependencyContainer::___lazy_storage___crashWrapper);
  puVar5 = puVar2;
  if (puVar2 == (undefined1 *)0x0) {
    puVar3 = &DAT_100c99100;
    _swift_getKeyPath(&DAT_100c99100);
    uVar6 = *(undefined8 *)(unaff_x20 + _TtC6Sentry25SentryDependencyContainer::paramLock);
    puVar4 = puVar3;
    FUN_10021b704();
    FUN_100b78d58();
    FUN_100bb5a88(uVar6,puVar4,puVar3,FUN_100b75f74,auStack_80);
    FUN_100b78cdc();
    uVar6 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined1 **)(unaff_x20 + lVar1) = auStack_80;
    _swift_unknownObjectRetain(auStack_80);
    _swift_unknownObjectRelease(uVar6);
    puVar2 = (undefined1 *)0x0;
    puVar5 = auStack_80;
  }
  _swift_unknownObjectRetain(puVar2);
  FUN_100b69e70(puVar5);
  return;
}



/* Address: 0x100b75dec | _TtC6Sentry25SentryDependencyContainer::setCrashWrapper: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry25SentryDependencyContainer::setCrashWrapper_(ID param_1,SEL param_2,ID param_3)

{
  _swift_unknownObjectRetain(param_3);
  FUN_100b75e2c(param_3);
  return;
}



/* Address: 0x100b75e2c | FUN_100b75e2c */

void FUN_100b75e2c(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)
           (unaff_x20 + _TtC6Sentry25SentryDependencyContainer::___lazy_storage___crashWrapper);
  *(undefined8 *)
   (unaff_x20 + _TtC6Sentry25SentryDependencyContainer::___lazy_storage___crashWrapper) = param_1;
  _swift_unknownObjectRelease(uVar1);
  return;
}



/* Address: 0x100b75e44 | FUN_100b75e44 */

void FUN_100b75e44(undefined8 *param_1)

{
  _swift_unknownObjectRetain(*param_1);
  FUN_100b75e2c();
  return;
}



/* Address: 0x100b75e6c | FUN_100b75e6c */

void FUN_100b75e6c(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar2 = _TtC6Sentry25SentryDependencyContainer::notificationCenterWrapper;
  _swift_beginAccess(param_2 + _TtC6Sentry25SentryDependencyContainer::notificationCenterWrapper,
                     auStack_48,0,0);
  lVar1 = _TtC6Sentry25SentryDependencyContainer::dateProvider;
  uVar5 = *(undefined8 *)(param_2 + lVar2);
  _swift_beginAccess(param_2 + _TtC6Sentry25SentryDependencyContainer::dateProvider,auStack_60,0,0);
  uVar6 = *(undefined8 *)(param_2 + lVar1);
  _swift_unknownObjectRetain(uVar5);
  uVar3 = uVar6;
  _swift_unknownObjectRetain(uVar6);
  FUN_100b75f7c();
  uVar4 = 0;
  FUN_100bf1544(0);
  _objc_allocWithZone();
  FUN_100bf13bc(uVar5,uVar6,uVar3,uVar4);
  if (DAT_101042e08 != -1) {
    _swift_once(&DAT_101042e08,FUN_100bb4658);
  }
  uVar3 = DAT_101046d40;
  FUN_100b74520(0);
  _objc_allocWithZone();
  _swift_unknownObjectRetain();
  FUN_100b72318();
  *param_1 = uVar3;
  return;
}



/* Address: 0x100b75f74 | FUN_100b75f74 */

void FUN_100b75f74(void)

{
  long unaff_x20;
  
  FUN_100b75e6c(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100b75f7c | FUN_100b75f7c */

void FUN_100b75f7c(void)

{
  FUN_100b77518(&_TtC6Sentry25SentryDependencyContainer::___lazy_storage___crashReporter,
                &DAT_100c99120,FUN_100b77974,FUN_100bb5b3c);
  return;
}



/* Address: 0x100b75fa0 | FUN_100b75fa0 */

void FUN_100b75fa0(undefined8 param_1)

{
  undefined8 *unaff_x19;
  
  FUN_100b78d18();
  FUN_100b75d24();
  *unaff_x19 = param_1;
  FUN_100b56e88(FUN_100b75fcc);
  return;
}



/* Address: 0x100b75fcc | FUN_100b75fcc */

void FUN_100b75fcc(undefined8 *param_1,uint param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  if ((param_2 & 1) != 0) {
    _swift_unknownObjectRetain(uVar1);
    FUN_100b75e2c();
    _swift_unknownObjectRelease(uVar1);
    return;
  }
  FUN_100b75e2c(uVar1);
  FUN_100b56e88();
  return;
}



/* Address: 0x100b7600c | _TtC6Sentry25SentryDependencyContainer::dispatchFactory */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry25SentryDependencyContainer::dispatchFactory(ID param_1,SEL param_2)

{
  FUN_100b7602c();
  return param_1;
}



/* Address: 0x100b7602c | FUN_100b7602c */

void FUN_100b7602c(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = _TtC6Sentry25SentryDependencyContainer::dispatchFactory;
  FUN_100b78c58();
  FUN_100b78cc8(*(undefined8 *)(unaff_x20 + lVar1));
  return;
}



/* Address: 0x100b76054 | _TtC6Sentry25SentryDependencyContainer::setDispatchFactory: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry25SentryDependencyContainer::setDispatchFactory_(ID param_1,SEL param_2,ID param_3)

{
  FUN_100b76098(param_3);
  return;
}



/* Address: 0x100b76098 | FUN_100b76098 */

void FUN_100b76098(void)

{
  FUN_100b78d24();
  FUN_100b78c6c();
  FUN_100b78cbc();
  FUN_100b78c90();
  return;
}



/* Address: 0x100b760c4 | FUN_100b760c4 */

void FUN_100b760c4(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = _TtC6Sentry25SentryDependencyContainer::dispatchFactory;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100b760f0 | _TtC6Sentry25SentryDependencyContainer::timerFactory */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry25SentryDependencyContainer::timerFactory(ID param_1,SEL param_2)

{
  FUN_100b76110();
  return param_1;
}



/* Address: 0x100b76110 | FUN_100b76110 */

void FUN_100b76110(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = _TtC6Sentry25SentryDependencyContainer::timerFactory;
  FUN_100b78c58();
  FUN_100b78cc8(*(undefined8 *)(unaff_x20 + lVar1));
  return;
}



/* Address: 0x100b76138 | _TtC6Sentry25SentryDependencyContainer::setTimerFactory: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry25SentryDependencyContainer::setTimerFactory_(ID param_1,SEL param_2,ID param_3)

{
  FUN_100b7617c(param_3);
  return;
}



/* Address: 0x100b7617c | FUN_100b7617c */

void FUN_100b7617c(void)

{
  FUN_100b78d24();
  FUN_100b78c6c();
  FUN_100b78cbc();
  FUN_100b78c90();
  return;
}



/* Address: 0x100b761a8 | FUN_100b761a8 */

void FUN_100b761a8(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = _TtC6Sentry25SentryDependencyContainer::timerFactory;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100b761d4 | _TtC6Sentry25SentryDependencyContainer::fileIOTracker */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry25SentryDependencyContainer::fileIOTracker(ID param_1,SEL param_2)

{
  FUN_100b76208();
  return param_1;
}



/* Address: 0x100b76208 | FUN_100b76208 */

void FUN_100b76208(void)

{
  FUN_100b77518(&_TtC6Sentry25SentryDependencyContainer::___lazy_storage___fileIOTracker,
                &DAT_100c99140,FUN_100b7797c,FUN_100bb5e80);
  return;
}



/* Address: 0x100b7622c | _TtC6Sentry25SentryDependencyContainer::setFileIOTracker: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry25SentryDependencyContainer::setFileIOTracker_(ID param_1,SEL param_2,ID param_3)

{
  FUN_100b76270(param_3);
  return;
}



/* Address: 0x100b76270 | FUN_100b76270 */

void FUN_100b76270(void)

{
  FUN_100b78cac();
  return;
}



/* Address: 0x100b7627c | FUN_100b7627c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100b7627c(undefined8 *param_1)

{
  FUN_100b76270(*param_1);
  return;
}



/* Address: 0x100b762a4 | FUN_100b762a4 */

void FUN_100b762a4(void)

{
  FUN_100b77518(&_TtC6Sentry25SentryDependencyContainer::___lazy_storage___threadInspector,
                &DAT_100c99160,FUN_100b779ac,FUN_100bb5e80);
  return;
}



/* Address: 0x100b762c8 | FUN_100b762c8 */

void FUN_100b762c8(undefined8 param_1)

{
  undefined8 *unaff_x19;
  
  FUN_100b78d18();
  FUN_100b76208();
  *unaff_x19 = param_1;
  FUN_100b56e88(FUN_100b762f4);
  return;
}



/* Address: 0x100b762f4 | FUN_100b762f4 */

void FUN_100b762f4(undefined8 param_1,undefined8 param_2)

{
  FUN_100b77a6c(param_1,param_2,FUN_100b76270);
  return;
}



/* Address: 0x100b76300 | _TtC6Sentry25SentryDependencyContainer::threadInspector */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry25SentryDependencyContainer::threadInspector(ID param_1,SEL param_2)

{
  FUN_100b762a4();
  return param_1;
}



/* Address: 0x100b76334 | _TtC6Sentry25SentryDependencyContainer::setThreadInspector: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry25SentryDependencyContainer::setThreadInspector_(ID param_1,SEL param_2,ID param_3)

{
  FUN_100b76378(param_3);
  return;
}



/* Address: 0x100b76378 | FUN_100b76378 */

void FUN_100b76378(void)

{
  FUN_100b78cac();
  return;
}



/* Address: 0x100b76384 | FUN_100b76384 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100b76384(undefined8 *param_1)

{
  FUN_100b76378(*param_1);
  return;
}



/* Address: 0x100b763ac | FUN_100b763ac */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100b763ac(undefined8 *param_1,long param_2)

{
  ID self;
  undefined8 uVar1;
  
  self = *(ID *)(param_2 + _TtC6Sentry25SentryDependencyContainer::paramLock);
  _objc_msgSend(self,"lock");
  uVar1 = *(undefined8 *)(param_2 + _TtC6Sentry25SentryDependencyContainer::_startOptions);
  _objc_msgSend(self,"unlock");
  FUN_100bc1048(0);
  _objc_allocWithZone();
  FUN_100bc0d2c();
  *param_1 = uVar1;
  return;
}



/* Address: 0x100b7643c | FUN_100b7643c */

void FUN_100b7643c(undefined8 param_1)

{
  undefined8 *unaff_x19;
  
  FUN_100b78d18();
  FUN_100b762a4();
  *unaff_x19 = param_1;
  FUN_100b56e88(FUN_100b76468);
  return;
}



/* Address: 0x100b76468 | FUN_100b76468 */

void FUN_100b76468(undefined8 param_1,undefined8 param_2)

{
  FUN_100b77a6c(param_1,param_2,FUN_100b76378);
  return;
}



/* Address: 0x100b76474 | _TtC6Sentry25SentryDependencyContainer::rateLimits */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry25SentryDependencyContainer::rateLimits(ID param_1,SEL param_2)

{
  FUN_100b76494();
  return param_1;
}



/* Address: 0x100b76494 | FUN_100b76494 */

void FUN_100b76494(void)

{
  FUN_100b767f0(&_TtC6Sentry25SentryDependencyContainer::rateLimits);
  return;
}



/* Address: 0x100b764a0 | _TtC6Sentry25SentryDependencyContainer::setRateLimits: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry25SentryDependencyContainer::setRateLimits_(ID param_1,SEL param_2,ID param_3)

{
  _swift_unknownObjectRetain(param_3);
  FUN_100b764e0(param_3);
  return;
}



/* Address: 0x100b764e0 | FUN_100b764e0 */

void FUN_100b764e0(undefined8 param_1)

{
  FUN_100b7686c(param_1,&_TtC6Sentry25SentryDependencyContainer::rateLimits);
  return;
}



/* Address: 0x100b764ec | FUN_100b764ec */

void FUN_100b764ec(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = _TtC6Sentry25SentryDependencyContainer::rateLimits;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100b76518 | _TtC6Sentry25SentryDependencyContainer::reachability */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry25SentryDependencyContainer::reachability(ID param_1,SEL param_2)

{
  FUN_100b76538();
  return param_1;
}



/* Address: 0x100b76538 | FUN_100b76538 */

void FUN_100b76538(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = _TtC6Sentry25SentryDependencyContainer::reachability;
  FUN_100b78c58();
  FUN_100b78cc8(*(undefined8 *)(unaff_x20 + lVar1));
  return;
}



/* Address: 0x100b76560 | _TtC6Sentry25SentryDependencyContainer::setReachability: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry25SentryDependencyContainer::setReachability_(ID param_1,SEL param_2,ID param_3)

{
  FUN_100b765a4(param_3);
  return;
}



/* Address: 0x100b765a4 | FUN_100b765a4 */

void FUN_100b765a4(void)

{
  FUN_100b78d24();
  FUN_100b78c6c();
  FUN_100b78cbc();
  FUN_100b78c90();
  return;
}



/* Address: 0x100b765d0 | FUN_100b765d0 */

void FUN_100b765d0(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = _TtC6Sentry25SentryDependencyContainer::reachability;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100b765fc | _TtC6Sentry25SentryDependencyContainer::sysctlWrapper */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry25SentryDependencyContainer::sysctlWrapper(ID param_1,SEL param_2)

{
  FUN_100b7661c();
  return param_1;
}



/* Address: 0x100b7661c | FUN_100b7661c */

void FUN_100b7661c(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = _TtC6Sentry25SentryDependencyContainer::sysctlWrapper;
  FUN_100b78c58();
  FUN_100b78cc8(*(undefined8 *)(unaff_x20 + lVar1));
  return;
}



/* Address: 0x100b76644 | _TtC6Sentry25SentryDependencyContainer::setSysctlWrapper: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry25SentryDependencyContainer::setSysctlWrapper_(ID param_1,SEL param_2,ID param_3)

{
  FUN_100b76688(param_3);
  return;
}



/* Address: 0x100b76688 | FUN_100b76688 */

void FUN_100b76688(void)

{
  FUN_100b78d24();
  FUN_100b78c6c();
  FUN_100b78cbc();
  FUN_100b78c90();
  return;
}



/* Address: 0x100b766b4 | FUN_100b766b4 */

void FUN_100b766b4(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = _TtC6Sentry25SentryDependencyContainer::sysctlWrapper;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100b766e0 | _TtC6Sentry25SentryDependencyContainer::debugImageProvider */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry25SentryDependencyContainer::debugImageProvider(ID param_1,SEL param_2)

{
  FUN_100b76700();
  return param_1;
}



/* Address: 0x100b76700 | FUN_100b76700 */

void FUN_100b76700(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = _TtC6Sentry25SentryDependencyContainer::debugImageProvider;
  FUN_100b78c58();
  FUN_100b78cc8(*(undefined8 *)(unaff_x20 + lVar1));
  return;
}



/* Address: 0x100b76728 | _TtC6Sentry25SentryDependencyContainer::setDebugImageProvider: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry25SentryDependencyContainer::setDebugImageProvider_
               (ID param_1,SEL param_2,ID param_3)

{
  FUN_100b7676c(param_3);
  return;
}



/* Address: 0x100b7676c | FUN_100b7676c */

void FUN_100b7676c(void)

{
  FUN_100b78d24();
  FUN_100b78c6c();
  FUN_100b78cbc();
  FUN_100b78c90();
  return;
}



/* Address: 0x100b76798 | FUN_100b76798 */

void FUN_100b76798(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = _TtC6Sentry25SentryDependencyContainer::debugImageProvider;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100b767c4 | _TtC6Sentry25SentryDependencyContainer::objcRuntimeWrapper */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry25SentryDependencyContainer::objcRuntimeWrapper(ID param_1,SEL param_2)

{
  FUN_100b767e4();
  return param_1;
}



/* Address: 0x100b767e4 | FUN_100b767e4 */

void FUN_100b767e4(void)

{
  FUN_100b767f0(&_TtC6Sentry25SentryDependencyContainer::objcRuntimeWrapper);
  return;
}



/* Address: 0x100b767f0 | FUN_100b767f0 */

void FUN_100b767f0(long *param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *param_1;
  FUN_100b78c58();
  _swift_unknownObjectRetain(*(undefined8 *)(unaff_x20 + lVar1));
  return;
}



/* Address: 0x100b76820 | _TtC6Sentry25SentryDependencyContainer::setObjcRuntimeWrapper: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry25SentryDependencyContainer::setObjcRuntimeWrapper_
               (ID param_1,SEL param_2,ID param_3)

{
  _swift_unknownObjectRetain(param_3);
  FUN_100b76860(param_3);
  return;
}



/* Address: 0x100b76860 | FUN_100b76860 */

void FUN_100b76860(undefined8 param_1)

{
  FUN_100b7686c(param_1,&_TtC6Sentry25SentryDependencyContainer::objcRuntimeWrapper);
  return;
}



/* Address: 0x100b7686c | FUN_100b7686c */

void FUN_100b7686c(undefined8 param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  long lVar2;
  
  FUN_100b78d24();
  lVar2 = *param_2;
  FUN_100b78c6c();
  uVar1 = *(undefined8 *)(unaff_x20 + lVar2);
  *(undefined8 *)(unaff_x20 + lVar2) = unaff_x19;
  _swift_unknownObjectRelease(uVar1);
  FUN_100b78c90();
  return;
}


