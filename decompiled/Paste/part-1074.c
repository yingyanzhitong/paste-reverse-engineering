/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100b77be4 | FUN_100b77be4 */

void FUN_100b77be4(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  _swift_getKeyPath(&DAT_100c99a28);
  uVar1 = *(undefined8 *)(unaff_x20 + _TtC6Sentry25SentryDependencyContainer::paramLock);
  FUN_10021b704();
  FUN_100b78d58();
  FUN_100b78d80();
  FUN_100bb5e80();
  FUN_100b78cdc();
  FUN_100b56ee0(uVar1);
  return;
}



/* Address: 0x100b77c48 | FUN_100b77c48 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100b77c48(undefined8 *param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar1 = SentryOptions::inAppIncludes;
  _swift_beginAccess(param_2 + SentryOptions::inAppIncludes,auStack_58,0,0);
  uVar3 = *(undefined8 *)(param_2 + lVar1);
  FUN_100ba8244(0);
  _objc_allocWithZone();
  _swift_bridgeObjectRetain();
  FUN_100ba7ce4();
  uVar2 = uVar3;
  FUN_100b75d24();
  lVar1 = _TtC6Sentry25SentryDependencyContainer::dispatchQueueWrapper;
  _swift_beginAccess(param_3 + _TtC6Sentry25SentryDependencyContainer::dispatchQueueWrapper,
                     auStack_70,0,0);
  uVar4 = *(undefined8 *)(param_3 + lVar1);
  FUN_100b83698(0);
  _objc_allocWithZone();
  FUN_100b83068(uVar3,uVar2,uVar4);
  *param_1 = uVar3;
  return;
}



/* Address: 0x100b77d28 | FUN_100b77d28 */

void FUN_100b77d28(undefined8 param_1)

{
  long lVar1;
  class_t *self;
  ID IVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 local_68 [3];
  long local_50;
  undefined1 auStack_48 [24];
  
  self = &objc::class_t::SentryDefaultThreadInspector;
  _objc_allocWithZone();
  IVar2 = _objc_msgSend((ID)self,"initWithOptions:",param_1);
  lVar1 = _TtC6Sentry25SentryDependencyContainer::processInfoWrapper;
  lVar3 = unaff_x20 + _TtC6Sentry25SentryDependencyContainer::processInfoWrapper;
  FUN_100b78ca0(lVar3,auStack_48);
  uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
  FUN_100b69e00();
  local_68[0] = uVar4;
  local_50 = lVar3;
  _objc_allocWithZone(&objc::class_t::SentryCoreDataTracker);
  _swift_unknownObjectRetain(uVar4);
  FUN_100b785f8(IVar2,local_68);
  return;
}



/* Address: 0x100b77dc0 | FUN_100b77dc0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100b77dc0(class_t *param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  class_t *pcVar7;
  class_t *pcVar8;
  ID IVar9;
  ID IVar10;
  long unaff_x20;
  objc_super local_80;
  objc_super local_70;
  objc_super local_60;
  
  FUN_100b69e00();
  lVar1 = _TtC6Sentry25SentryDependencyContainer::paramLock;
  puVar3 = &_OBJC_CLASS___NSRecursiveLock;
  _objc_allocWithZone();
  FUN_10021b704();
  puVar4 = puVar3;
  FUN_100b78d44();
  *(undefined **)(unaff_x20 + lVar1) = puVar4;
  *(undefined8 *)(puVar3 + _TtC6Sentry25SentryDependencyContainer::_startOptions) = 0;
  *(undefined8 *)
   (puVar3 + _TtC6Sentry25SentryDependencyContainer::___lazy_storage___sessionDispatchQueue) = 0;
  lVar1 = _TtC6Sentry25SentryDependencyContainer::dispatchQueueWrapper;
  if (DAT_101042e18 != -1) {
    _swift_once(&DAT_101042e18,FUN_100bb473c);
  }
  *(undefined8 *)(puVar3 + lVar1) = DAT_101046d48;
  lVar1 = _TtC6Sentry25SentryDependencyContainer::random;
  if (DAT_101042df8 != -1) {
    _swift_once(&DAT_101042df8,FUN_100bb45d0);
  }
  *(undefined8 *)(puVar3 + lVar1) = DAT_101046d30;
  lVar2 = _TtC6Sentry25SentryDependencyContainer::threadWrapper;
  lVar1 = DAT_101042e00;
  _swift_unknownObjectRetain();
  if (lVar1 != -1) {
    _swift_once(&DAT_101042e00,FUN_100bb4614);
  }
  *(undefined8 *)(puVar3 + lVar2) = DAT_101046d38;
  lVar1 = _TtC6Sentry25SentryDependencyContainer::binaryImageCache;
  if (DAT_101042e28 != -1) {
    _swift_once(&DAT_101042e28,FUN_100bb4830);
  }
  *(undefined8 *)(puVar3 + lVar1) = DAT_101046d58;
  lVar1 = _TtC6Sentry25SentryDependencyContainer::dateProvider;
  if (DAT_101042e40 != -1) {
    _swift_once(&DAT_101042e40,FUN_100bb48fc);
  }
  *(undefined8 *)(puVar3 + lVar1) = DAT_101046d70;
  lVar1 = _TtC6Sentry25SentryDependencyContainer::notificationCenterWrapper;
  if (DAT_101042e20 != -1) {
    _swift_once(&DAT_101042e20,FUN_100bb47ac);
  }
  *(undefined8 *)(puVar3 + lVar1) = DAT_101046d50;
  lVar2 = _TtC6Sentry25SentryDependencyContainer::processInfoWrapper;
  lVar1 = DAT_101042e08;
  _swift_unknownObjectRetain();
  if (lVar1 != -1) {
    _swift_once(&DAT_101042e08,FUN_100bb4658);
  }
  uVar5 = DAT_101046d40;
  *(undefined8 *)(puVar3 + lVar2) = DAT_101046d40;
  *(undefined8 *)(puVar3 + _TtC6Sentry25SentryDependencyContainer::_crashWrapper) = 0;
  *(undefined8 *)(puVar3 + _TtC6Sentry25SentryDependencyContainer::___lazy_storage___crashWrapper) =
       0;
  lVar1 = _TtC6Sentry25SentryDependencyContainer::dispatchFactory;
  FUN_100b852b0(0);
  _objc_allocWithZone();
  _swift_unknownObjectRetain();
  FUN_100b78d44();
  *(undefined8 *)(puVar3 + lVar1) = uVar5;
  lVar1 = _TtC6Sentry25SentryDependencyContainer::timerFactory;
  uVar5 = 0;
  FUN_100be6c54();
  _objc_allocWithZone();
  FUN_100b78d50();
  *(undefined8 *)(puVar3 + lVar1) = uVar5;
  *(undefined8 *)(puVar3 + _TtC6Sentry25SentryDependencyContainer::_fileIOTracker) = 0;
  *(undefined8 *)(puVar3 + _TtC6Sentry25SentryDependencyContainer::___lazy_storage___fileIOTracker)
       = 0;
  *(undefined8 *)(puVar3 + _TtC6Sentry25SentryDependencyContainer::_threadInspector) = 0;
  *(undefined8 *)
   (puVar3 + _TtC6Sentry25SentryDependencyContainer::___lazy_storage___threadInspector) = 0;
  lVar1 = _TtC6Sentry25SentryDependencyContainer::nsDataSwizzling;
  uVar5 = 0;
  FUN_100be70f0();
  _objc_allocWithZone();
  FUN_100b78d50();
  *(undefined8 *)(puVar3 + lVar1) = uVar5;
  lVar1 = _TtC6Sentry25SentryDependencyContainer::nsFileManagerSwizzling;
  uVar5 = 0;
  FUN_100b7a214();
  _objc_allocWithZone();
  FUN_100b78d50();
  *(undefined8 *)(puVar3 + lVar1) = uVar5;
  lVar1 = _TtC6Sentry25SentryDependencyContainer::rateLimits;
  uVar6 = 0;
  FUN_100be1424();
  _objc_allocWithZone();
  FUN_100b78d50();
  uVar5 = DAT_101046d70;
  pcVar7 = (class_t *)0x0;
  FUN_100bbf560();
  pcVar8 = pcVar7;
  _objc_allocWithZone();
  *(undefined8 *)((long)&pcVar8->isa + SentryRetryAfterHeaderParser::httpDateParser) = uVar6;
  *(undefined8 *)((long)&pcVar8->isa + SentryRetryAfterHeaderParser::currentDateProvider) = uVar5;
  local_60.receiver = (ID)pcVar8;
  local_60.super_class = pcVar7;
  FUN_100b78d30();
  IVar9 = _objc_msgSendSuper2(&local_60,"init");
  uVar5 = DAT_101046d70;
  pcVar7 = (class_t *)0x0;
  FUN_100b847a0();
  pcVar8 = pcVar7;
  _objc_allocWithZone();
  *(undefined8 *)((long)&pcVar8->isa + SentryRateLimitParser::currentDateProvider) = uVar5;
  local_70.receiver = (ID)pcVar8;
  local_70.super_class = pcVar7;
  FUN_100b78d30();
  IVar10 = _objc_msgSendSuper2(&local_70,"init");
  uVar6 = 0;
  FUN_100bc5d94(0);
  _objc_allocWithZone();
  uVar5 = uVar6;
  FUN_100b78d98();
  FUN_100b787fc(IVar9,IVar10,uVar5,uVar6);
  *(ID *)(puVar3 + lVar1) = IVar9;
  lVar1 = _TtC6Sentry25SentryDependencyContainer::reachability;
  uVar5 = 0;
  FUN_100bee920();
  _objc_allocWithZone();
  FUN_100b78d50();
  *(undefined8 *)(puVar3 + lVar1) = uVar5;
  lVar1 = _TtC6Sentry25SentryDependencyContainer::sysctlWrapper;
  if (DAT_101042e38 != -1) {
    _swift_once(&DAT_101042e38,FUN_100bb48b8);
  }
  *(undefined8 *)(puVar3 + lVar1) = DAT_101046d68;
  lVar1 = _TtC6Sentry25SentryDependencyContainer::debugImageProvider;
  if (DAT_101042e30 != -1) {
    _swift_once(&DAT_101042e30,FUN_100bb4874);
  }
  *(undefined8 *)(puVar3 + lVar1) = DAT_101046d60;
  lVar1 = _TtC6Sentry25SentryDependencyContainer::objcRuntimeWrapper;
  uVar5 = 0;
  FUN_100b8c97c();
  _objc_allocWithZone();
  FUN_100b78d04();
  FUN_100b78d44();
  *(undefined8 *)(puVar3 + lVar1) = uVar5;
  lVar1 = _TtC6Sentry25SentryDependencyContainer::extensionDetector;
  FUN_100b768c8();
  *(undefined8 *)(puVar3 + lVar1) = uVar5;
  lVar1 = _TtC6Sentry25SentryDependencyContainer::coreDataSwizzling;
  uVar5 = 0;
  switchD_100bc9348::caseD_1f();
  _objc_allocWithZone();
  FUN_100b78d50();
  *(undefined8 *)(puVar3 + lVar1) = uVar5;
  *(undefined8 *)
   (puVar3 + _TtC6Sentry25SentryDependencyContainer::___lazy_storage___runLoopDelayTracker) = 0;
  *(undefined8 *)(puVar3 + _TtC6Sentry25SentryDependencyContainer::___lazy_storage___appHangTracker)
       = 0;
  *(undefined8 *)(puVar3 + _TtC6Sentry25SentryDependencyContainer::_extraContextProvider) = 0;
  *(undefined8 *)
   (puVar3 + _TtC6Sentry25SentryDependencyContainer::___lazy_storage___extraContextProvider) = 0;
  *(undefined8 *)(puVar3 + _TtC6Sentry25SentryDependencyContainer::_eventContextEnricher) = 0;
  *(undefined8 *)(puVar3 + _TtC6Sentry25SentryDependencyContainer::crashIntegrationSessionHandler) =
       0;
  *(undefined8 *)(puVar3 + _TtC6Sentry25SentryDependencyContainer::_fileManager) = 0;
  *(undefined8 *)(puVar3 + _TtC6Sentry25SentryDependencyContainer::___lazy_storage___fileManager) =
       1;
  *(undefined8 *)(puVar3 + _TtC6Sentry25SentryDependencyContainer::_scopePersistentStore) = 0;
  *(undefined8 *)
   (puVar3 + _TtC6Sentry25SentryDependencyContainer::___lazy_storage___scopePersistentStore) = 1;
  *(undefined8 *)(puVar3 + _TtC6Sentry25SentryDependencyContainer::_globalEventProcessor) = 0;
  *(undefined8 *)
   (puVar3 + _TtC6Sentry25SentryDependencyContainer::___lazy_storage___globalEventProcessor) = 0;
  *(undefined8 *)(puVar3 + _TtC6Sentry25SentryDependencyContainer::_appStateManager) = 0;
  *(undefined8 *)
   (puVar3 + _TtC6Sentry25SentryDependencyContainer::___lazy_storage___appStateManager) = 0;
  *(undefined8 *)(puVar3 + _TtC6Sentry25SentryDependencyContainer::_crashReporter) = 0;
  *(undefined8 *)(puVar3 + _TtC6Sentry25SentryDependencyContainer::___lazy_storage___crashReporter)
       = 0;
  *(undefined8 *)(puVar3 + _TtC6Sentry25SentryDependencyContainer::anrTracker) = 0;
  *(undefined8 *)(puVar3 + _TtC6Sentry25SentryDependencyContainer::crashInstallationReporter) = 0;
  FUN_100b6f868();
  local_80.receiver = (ID)puVar3;
  local_80.super_class = param_1;
  _objc_msgSendSuper2(&local_80,"init");
  return;
}



/* Address: 0x100b78370 | _TtC6Sentry25SentryDependencyContainer::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry25SentryDependencyContainer::init(ID param_1,SEL param_2)

{
  FUN_100b77dc0();
  return param_1;
}



/* Address: 0x100b78390 | _TtC6Sentry25SentryDependencyContainer::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC6Sentry25SentryDependencyContainer::_cxx_destruct(ID param_1,SEL param_2)

{
  FUN_100b78cd4(_startOptions,0);
  FUN_100b78cd4(___lazy_storage___sessionDispatchQueue);
  FUN_100b78cd4(dispatchQueueWrapper);
  FUN_100b78cfc(random);
  FUN_100b78cd4(threadWrapper);
  FUN_100b78cd4(binaryImageCache);
  FUN_100b78cfc(dateProvider);
  FUN_100b78cfc(notificationCenterWrapper);
  FUN_100b78cfc(processInfoWrapper);
  FUN_100b78cfc(_crashWrapper);
  FUN_100b78cfc(___lazy_storage___crashWrapper);
  FUN_100b78cd4(dispatchFactory);
  FUN_100b78cd4(timerFactory);
  FUN_100b78cd4(_fileIOTracker);
  FUN_100b78cd4(___lazy_storage___fileIOTracker);
  FUN_100b78cd4(_threadInspector);
  FUN_100b78cd4(___lazy_storage___threadInspector);
  FUN_100b78cd4(nsDataSwizzling);
  FUN_100b78cd4(nsFileManagerSwizzling);
  FUN_100b78cfc(rateLimits);
  FUN_100b78cd4(reachability);
  FUN_100b78cd4(sysctlWrapper);
  FUN_100b78cd4(debugImageProvider);
  FUN_100b78cfc(objcRuntimeWrapper);
  FUN_100b78cd4(extensionDetector);
  FUN_100b78cd4(coreDataSwizzling);
  _swift_release(*(undefined8 *)(param_1 + ___lazy_storage___runLoopDelayTracker));
  _swift_release(*(undefined8 *)(param_1 + ___lazy_storage___appHangTracker));
  FUN_100b78cd4(_extraContextProvider);
  FUN_100b78cd4(___lazy_storage___extraContextProvider);
  FUN_100b78cfc(_eventContextEnricher);
  FUN_100b78cd4(crashIntegrationSessionHandler);
  FUN_100b78cd4(_fileManager);
  FUN_10001486c(*(undefined8 *)(param_1 + ___lazy_storage___fileManager));
  FUN_100b78cd4(_scopePersistentStore);
  FUN_10001486c(*(undefined8 *)(param_1 + ___lazy_storage___scopePersistentStore));
  FUN_100b78cd4(_globalEventProcessor);
  FUN_100b78cd4(___lazy_storage___globalEventProcessor);
  FUN_100b78cd4(_appStateManager);
  FUN_100b78cd4(___lazy_storage___appStateManager);
  FUN_100b78cd4(_crashReporter);
  FUN_100b78cd4(___lazy_storage___crashReporter);
  FUN_100b78cd4(anrTracker);
  return;
}



/* Address: 0x100b785dc | FUN_100b785dc */

void FUN_100b785dc(void)

{
  FUN_100b75b24();
  FUN_100b56e88();
  return;
}



/* Address: 0x100b785f8 | FUN_100b785f8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100b785f8(undefined8 param_1,long param_2)

{
  long lVar1;
  ID IVar2;
  ID unaff_x20;
  
  lVar1 = param_2;
  FUN_100004640(param_2,*(undefined8 *)(param_2 + 0x18));
  Swift::__bridgeAnythingToObjectiveC();
  IVar2 = _objc_msgSend(unaff_x20,"initWithThreadInspector:processInfoWrapper:",param_1,lVar1);
  _swift_unknownObjectRelease(lVar1);
  FUN_100004594(param_2);
  return IVar2;
}



/* Address: 0x100b78674 | FUN_100b78674 */

ID FUN_100b78674(long *param_1)

{
  class_t *pcVar1;
  class_t *pcVar2;
  long **pplVar3;
  ID IVar4;
  long lVar5;
  undefined8 *puVar6;
  objc_super local_a0;
  undefined8 local_90 [3];
  long local_78;
  undefined **ppuStack_70;
  long *local_68 [3];
  long local_50;
  undefined **ppuStack_48;
  
  lVar5 = *param_1;
  ppuStack_48 = &PTR_PTR_100f37728;
  pcVar1 = (class_t *)0x0;
  local_68[0] = param_1;
  local_50 = lVar5;
  FUN_100bbd0ac();
  pcVar2 = pcVar1;
  _objc_allocWithZone();
  pplVar3 = local_68;
  FUN_10007d048(pplVar3,lVar5);
  puVar6 = (undefined8 *)
           ((long)&local_a0 - (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0))
  ;
  (**(code **)(*(long *)(lVar5 + -8) + 0x10))(puVar6,pplVar3,lVar5);
  local_90[0] = *puVar6;
  ppuStack_70 = &PTR_PTR_100f37728;
  local_78 = lVar5;
  FUN_100b78bc0(local_90,(long)&pcVar2->isa + _TtC6Sentry23SentryExtensionDetector::infoPlistWrapper
               );
  local_a0.receiver = (ID)pcVar2;
  local_a0.super_class = pcVar1;
  IVar4 = _objc_msgSendSuper2(&local_a0,"init");
  FUN_100004594(local_90);
  FUN_100004594(local_68);
  return IVar4;
}



/* Address: 0x100b78754 | FUN_100b78754 */

ID FUN_100b78754(undefined8 param_1,class_t *param_2)

{
  class_t *pcVar1;
  undefined8 uVar2;
  ID IVar3;
  objc_super local_68;
  undefined8 local_58 [3];
  undefined8 local_40;
  undefined **ppuStack_38;
  
  pcVar1 = param_2;
  _swift_getObjectType();
  uVar2 = 0;
  FUN_100b78b84();
  ppuStack_38 = &PTR_PTR_100f36a48;
  *(undefined **)((long)&param_2->isa + _TtC6Sentry16SentryANRTracker::mapping) =
       PTR___swiftEmptyDictionarySingleton_100eae0e0;
  local_58[0] = param_1;
  local_40 = uVar2;
  FUN_100b78bc0(local_58,(long)&param_2->isa + _TtC6Sentry16SentryANRTracker::helper);
  local_68.receiver = (ID)param_2;
  local_68.super_class = pcVar1;
  IVar3 = _objc_msgSendSuper2(&local_68,"init");
  FUN_100004594(local_58);
  return IVar3;
}



/* Address: 0x100b787fc | FUN_100b787fc */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100b78888 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ID FUN_100b787fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,class_t *param_4)

{
  class_t *pcVar1;
  long lVar2;
  Date DVar3;
  Date DVar4;
  Dictionary<undefined,undefined> DVar5;
  undefined *puVar6;
  class_t *pcVar7;
  class_t *pcVar8;
  ID IVar9;
  objc_super local_80;
  objc_super local_70;
  
  pcVar1 = param_4;
  _swift_getObjectType();
  lVar2 = 0;
  FUN_100badb90();
  _swift_allocObject();
  DVar3 = Foundation::Date::typeMetadataAccessor();
  DVar4 = DVar3;
  FUN_100b78b44();
  DVar5 = Swift::Dictionary::_init(DVar4.unknown,&DAT_100f3c108,DVar3.unknown,DVar4.unknown);
  puVar6 = &DAT_101044eb8;
  FUN_100b6730c(&DAT_101044eb8);
  _swift_allocObject();
  FUN_100b88668(DVar5.unknown,puVar6);
  *(undefined **)(lVar2 + 0x10) = DVar5.unknown;
  *(long *)((long)&param_4->isa + SentryDefaultRateLimits::rateLimits) = lVar2;
  *(undefined8 *)((long)&param_4->isa + SentryDefaultRateLimits::retryAfterHeaderParser) = param_1;
  *(undefined8 *)((long)&param_4->isa + SentryDefaultRateLimits::rateLimitParser) = param_2;
  *(undefined8 *)((long)&param_4->isa + SentryDefaultRateLimits::currentDateProvider) = param_3;
  pcVar7 = (class_t *)0x0;
  FUN_100b7d154();
  pcVar8 = pcVar7;
  _objc_allocWithZone();
  *(undefined8 *)((long)&pcVar8->isa + _TtC6Sentry14SentryDateUtil::currentDateProvider) = param_3;
  local_70.receiver = (ID)pcVar8;
  local_70.super_class = pcVar7;
  _swift_unknownObjectRetain(param_3);
  IVar9 = _objc_msgSendSuper2(&local_70,"init");
  *(ID *)((long)&param_4->isa + SentryDefaultRateLimits::dateUtil) = IVar9;
  local_80.receiver = (ID)param_4;
  local_80.super_class = pcVar1;
  IVar9 = _objc_msgSendSuper2(&local_80,"init");
  return IVar9;
}



/* Address: 0x100b789ac | FUN_100b789ac */

void FUN_100b789ac(undefined8 param_1)

{
  undefined8 *unaff_x19;
  
  FUN_100b78d0c();
  FUN_100b751ec();
  *unaff_x19 = param_1;
  FUN_100b56e88();
  return;
}



/* Address: 0x100b789cc | thunk_FUN_100b7531c */

void thunk_FUN_100b7531c(void)

{
  FUN_100b7531c();
  return;
}



/* Address: 0x100b789d0 | FUN_100b789d0 */

void FUN_100b789d0(undefined8 param_1)

{
  undefined8 *unaff_x19;
  
  FUN_100b78d0c();
  FUN_100b75d24();
  *unaff_x19 = param_1;
  FUN_100b56e88();
  return;
}



/* Address: 0x100b789f0 | thunk_FUN_100b75e44 */

void thunk_FUN_100b75e44(void)

{
  FUN_100b75e44();
  return;
}



/* Address: 0x100b789f4 | FUN_100b789f4 */

void FUN_100b789f4(undefined8 param_1)

{
  undefined8 *unaff_x19;
  
  FUN_100b78d0c();
  FUN_100b76208();
  *unaff_x19 = param_1;
  FUN_100b56e88();
  return;
}



/* Address: 0x100b78a14 | thunk_FUN_100b7627c */

void thunk_FUN_100b7627c(void)

{
  FUN_100b7627c();
  return;
}



/* Address: 0x100b78a18 | FUN_100b78a18 */

void FUN_100b78a18(undefined8 param_1)

{
  undefined8 *unaff_x19;
  
  FUN_100b78d0c();
  FUN_100b762a4();
  *unaff_x19 = param_1;
  FUN_100b56e88();
  return;
}



/* Address: 0x100b78a38 | thunk_FUN_100b76384 */

void thunk_FUN_100b76384(void)

{
  FUN_100b76384();
  return;
}



/* Address: 0x100b78a3c | FUN_100b78a3c */

void FUN_100b78a3c(undefined8 param_1)

{
  undefined8 *unaff_x19;
  
  FUN_100b78d0c();
  FUN_100b769bc();
  *unaff_x19 = param_1;
  FUN_100b56e88();
  return;
}



/* Address: 0x100b78a5c | thunk_FUN_100b76a30 */

void thunk_FUN_100b76a30(void)

{
  FUN_100b76a30();
  return;
}



/* Address: 0x100b78a60 | FUN_100b78a60 */

void FUN_100b78a60(undefined8 param_1)

{
  undefined8 *unaff_x19;
  
  FUN_100b78d0c();
  FUN_100b76d10();
  *unaff_x19 = param_1;
  FUN_100b56e88();
  return;
}



/* Address: 0x100b78a80 | thunk_FUN_100b76ebc */

void thunk_FUN_100b76ebc(void)

{
  FUN_100b76ebc();
  return;
}



/* Address: 0x100b78a84 | FUN_100b78a84 */

void FUN_100b78a84(undefined8 param_1)

{
  undefined8 *unaff_x19;
  
  FUN_100b78d0c();
  FUN_100b770dc();
  *unaff_x19 = param_1;
  FUN_100b56e88();
  return;
}



/* Address: 0x100b78aa4 | thunk_FUN_100b771f4 */

void thunk_FUN_100b771f4(void)

{
  FUN_100b771f4();
  return;
}



/* Address: 0x100b78aa8 | FUN_100b78aa8 */

void FUN_100b78aa8(undefined8 param_1)

{
  undefined8 *unaff_x19;
  
  FUN_100b78d0c();
  FUN_100b77320();
  *unaff_x19 = param_1;
  FUN_100b56e88();
  return;
}



/* Address: 0x100b78ac8 | thunk_FUN_100b77460 */

void thunk_FUN_100b77460(void)

{
  FUN_100b77460();
  return;
}



/* Address: 0x100b78acc | FUN_100b78acc */

void FUN_100b78acc(undefined8 param_1)

{
  undefined8 *unaff_x19;
  
  FUN_100b78d0c();
  FUN_100b774f4();
  *unaff_x19 = param_1;
  FUN_100b56e88();
  return;
}



/* Address: 0x100b78aec | thunk_FUN_100b7763c */

void thunk_FUN_100b7763c(void)

{
  FUN_100b7763c();
  return;
}



/* Address: 0x100b78af0 | FUN_100b78af0 */

void FUN_100b78af0(undefined8 param_1)

{
  undefined8 *unaff_x19;
  
  FUN_100b78d0c();
  FUN_100b75f7c();
  *unaff_x19 = param_1;
  FUN_100b56e88();
  return;
}



/* Address: 0x100b78b10 | thunk_FUN_100b7785c */

void thunk_FUN_100b7785c(void)

{
  FUN_100b7785c();
  return;
}



/* Address: 0x100b78b14 | FUN_100b78b14 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100b78b14(void)

{
  return ZEXT816(0x100f9f9b0);
}



/* Address: 0x100b78b34 | FUN_100b78b34 */

void FUN_100b78b34(void)

{
  long unaff_x20;
  
  FUN_100b77c48(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100b78b3c | FUN_100b78b3c */

void FUN_100b78b3c(void)

{
  long unaff_x20;
  
  FUN_100b76c48(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100b78b44 | FUN_100b78b44 */

void FUN_100b78b44(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101044eb0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9e6ec;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9e6ec,&DAT_100f3c108);
  DAT_101044eb0 = pTVar1;
  return;
}



/* Address: 0x100b78b84 | FUN_100b78b84 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_100b78b84(void)

{
  class_t *pcVar1;
  
  if (DAT_101044ec0 == (class_t *)0x0) {
    pcVar1 = &objc::class_t::SentryANRTrackerV1;
    _swift_getObjCClassMetadata();
    DAT_101044ec0 = pcVar1;
  }
  return;
}



/* Address: 0x100b78bc0 | FUN_100b78bc0 */

void FUN_100b78bc0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  FUN_100b56e88(param_2);
  return;
}



/* Address: 0x100b78c00 | FUN_100b78c00 */

void FUN_100b78c00(void)

{
  FUN_10063ee28(&DAT_100f36e08);
  return;
}



/* Address: 0x100b78c0c | FUN_100b78c0c */

void FUN_100b78c0c(void)

{
  FUN_10063ee28(&DAT_100f36e28);
  return;
}



/* Address: 0x100b78c18 | FUN_100b78c18 */

void FUN_100b78c18(void)

{
  FUN_10063ee28(&DAT_100f36e48);
  return;
}



/* Address: 0x100b78c24 | FUN_100b78c24 */

void FUN_100b78c24(void)

{
  FUN_10063ee28(&DAT_100f36e68);
  return;
}



/* Address: 0x100b78c30 | FUN_100b78c30 */

void FUN_100b78c30(void)

{
  FUN_10063ee28(&DAT_100f36e88);
  return;
}



/* Address: 0x100b78c3c | FUN_100b78c3c */

void FUN_100b78c3c(void)

{
  FUN_10063ee28(&DAT_100f36ea8);
  return;
}



/* Address: 0x100b78c48 | FUN_100b78c48 */

undefined1  [16] FUN_100b78c48(void)

{
  return ZEXT816(0x100f36ec8);
}



/* Address: 0x100b78c58 | FUN_100b78c58 */

void FUN_100b78c58(void)

{
  long unaff_x19;
  long unaff_x20;
  
  _swift_beginAccess(unaff_x20 + unaff_x19,&stack0x00000008,0,0);
  return;
}



/* Address: 0x100b78c6c | FUN_100b78c6c */

void FUN_100b78c6c(void)

{
  long unaff_x20;
  long unaff_x21;
  
  _swift_beginAccess(unaff_x20 + unaff_x21,&stack0x00000008,1,0);
  return;
}



/* Address: 0x100b78c80 | FUN_100b78c80 */

void FUN_100b78c80(undefined8 param_1,undefined8 param_2)

{
  long unaff_x19;
  long unaff_x20;
  
  _swift_beginAccess(unaff_x20 + unaff_x19,param_2,0x21,0);
  return;
}



/* Address: 0x100b78c90 | FUN_100b78c90 */

void FUN_100b78c90(void)

{
  return;
}



/* Address: 0x100b78ca0 | FUN_100b78ca0 */

void FUN_100b78ca0(undefined8 param_1,undefined8 param_2)

{
  _swift_beginAccess(param_1,param_2,0,0);
  return;
}



/* Address: 0x100b78cac | FUN_100b78cac */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b78cac(undefined8 param_1)

{
  long in_x9;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + in_x9) = param_1;
  return 0;
}



/* Address: 0x100b78cbc | FUN_100b78cbc */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b78cbc(void)

{
  undefined8 unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  *(undefined8 *)(unaff_x20 + unaff_x21) = unaff_x19;
  return 0;
}



/* Address: 0x100b78cc8 | FUN_100b78cc8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_100b78cc8(undefined8 param_1)

{
  return param_1;
}



/* Address: 0x100b78cd4 | FUN_100b78cd4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b78cd4(void)

{
  return 0;
}



/* Address: 0x100b78cdc | FUN_100b78cdc */

void FUN_100b78cdc(void)

{
  _swift_release();
  return;
}



/* Address: 0x100b78ce8 | FUN_100b78ce8 */

void FUN_100b78ce8(undefined8 param_1,SEL param_2)

{
  ID unaff_x19;
  
  _objc_msgSend(unaff_x19,param_2);
  return;
}



/* Address: 0x100b78cf0 | FUN_100b78cf0 */

void FUN_100b78cf0(void)

{
  return;
}



/* Address: 0x100b78cfc | FUN_100b78cfc */

void FUN_100b78cfc(long param_1)

{
  long unaff_x19;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x19 + param_1));
  return;
}



/* Address: 0x100b78d04 | FUN_100b78d04 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100b78d04(void)

{
  return;
}



/* Address: 0x100b78d0c | FUN_100b78d0c */

void FUN_100b78d0c(void)

{
  return;
}



/* Address: 0x100b78d18 | FUN_100b78d18 */

void FUN_100b78d18(long param_1)

{
  undefined8 unaff_x20;
  
  *(undefined8 *)(param_1 + 8) = unaff_x20;
  return;
}



/* Address: 0x100b78d24 | FUN_100b78d24 */

void FUN_100b78d24(void)

{
  return;
}



/* Address: 0x100b78d30 | FUN_100b78d30 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100b78d30(void)

{
  return;
}



/* Address: 0x100b78d38 | FUN_100b78d38 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b78d38(void)

{
  return 0;
}



/* Address: 0x100b78d44 | FUN_100b78d44 */

void FUN_100b78d44(void)

{
  ID unaff_x22;
  long unaff_x25;
  
  _objc_msgSend(unaff_x22,*(SEL *)(unaff_x25 + 0xa60));
  return;
}


