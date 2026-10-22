/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100bacae0 | _TtC6Sentry9SentrySDK::captureException:withScopeBlock: */

/* Function Stack Size: 0x20 bytes */

ID _TtC6Sentry9SentrySDK::captureException_withScopeBlock_
             (ID param_1,SEL param_2,ID param_3,ID param_4,undefined4 param_5)

{
  FUN_100bac794();
  return param_1;
}



/* Address: 0x100bacafc | FUN_100bacafc */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_100bacafc(undefined8 param_1,uint param_2)

{
  ID self;
  undefined *self_00;
  
  self = _objc_msgSend((ID)&objc::class_t::SentrySDKInternal,"currentHub");
  _objc_msgSend(self,"scope");
  self_00 = &_OBJC_CLASS___NSNumber;
  _objc_allocWithZone();
  _objc_msgSend((ID)self_00,"initWithBool:",(ulong)(param_2 & 1));
  FUN_100bad890(self,"captureException:withScope:attachAllThreads:",param_1);
  FUN_100b6f934();
  FUN_100b6fce4();
  FUN_100b6f868();
  FUN_100b56e60(self);
  return;
}



/* Address: 0x100bacba8 | _TtC6Sentry9SentrySDK::captureException:attachAllThreads: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x1c bytes */

ID _TtC6Sentry9SentrySDK::captureException_attachAllThreads_
             (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  FUN_100bacafc(param_3,param_4);
  return param_3;
}



/* Address: 0x100bacbe8 | FUN_100bacbe8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_100bacbe8(void)

{
  FUN_100b6fe18();
  FUN_100bad834(&objc::class_t::SentrySDKInternal);
  FUN_100ba9f60();
  FUN_100bad7d4();
  FUN_100b56e60();
  return;
}



/* Address: 0x100bacc38 | _TtC6Sentry9SentrySDK::captureMessage: */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC6Sentry9SentrySDK::captureMessage_(ID param_1,SEL param_2,ID param_3)

{
  char *pcVar1;
  String SVar2;
  
  SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  pcVar1 = SVar2.str;
  FUN_100bacbe8();
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  return (ID)pcVar1;
}



/* Address: 0x100bacc70 | FUN_100bacc70 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_100bacc70(void)

{
  undefined8 unaff_x22;
  
  FUN_100bad8dc();
  FUN_100bad800(&objc::class_t::SentrySDKInternal);
  FUN_100bad7e0();
  FUN_100b6f868();
  FUN_100b56e60(unaff_x22);
  return;
}



/* Address: 0x100baccc8 | _TtC6Sentry9SentrySDK::captureMessage:withScope: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID _TtC6Sentry9SentrySDK::captureMessage_withScope_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  char *pcVar1;
  String SVar2;
  
  SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  pcVar1 = SVar2.str;
  FUN_100bacc70(pcVar1,SVar2.bridgeObject,param_4);
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  return (ID)pcVar1;
}



/* Address: 0x100bacd30 | FUN_100bacd30 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_100bacd30(void)

{
  FUN_100bad8b4();
  FUN_100bad824(&objc::class_t::SentrySDKInternal);
  FUN_100b97e5c(switchD_100bab490::caseD_51);
  FUN_100bad84c();
  FUN_100bad87c();
  FUN_100bad884();
  FUN_100bad818();
  FUN_100b6f934();
  FUN_100bad7ec();
  return;
}



/* Address: 0x100bacdc4 | _TtC6Sentry9SentrySDK::captureMessage:withScopeBlock: */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID _TtC6Sentry9SentrySDK::captureMessage_withScopeBlock_
             (ID param_1,SEL param_2,ID param_3,ID param_4,undefined4 param_5)

{
  void *pvVar1;
  char *pcVar2;
  undefined *puVar3;
  String SVar4;
  
  pvVar1 = __Block_copy((void *)param_4);
  SVar4 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  pcVar2 = SVar4.str;
  puVar3 = &DAT_100f39c60;
  _swift_allocObject(&DAT_100f39c60,0x18,7);
  *(void **)(puVar3 + 0x10) = pvVar1;
  FUN_100bacd30(pcVar2,SVar4.bridgeObject,thunk_FUN_100403f54,puVar3);
  _swift_bridgeObjectRelease(SVar4.bridgeObject);
  _swift_release(puVar3);
  return (ID)pcVar2;
}



/* Address: 0x100bace50 | FUN_100bace50 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_100bace50(undefined8 param_1,undefined8 param_2,uint param_3)

{
  ID IVar1;
  ID IVar2;
  undefined *self;
  ID IVar3;
  ID unaff_x22;
  
  FUN_100bad8dc();
  IVar1 = _objc_msgSend((ID)&objc::class_t::SentrySDKInternal,"currentHub");
  FUN_100bad800(IVar1);
  IVar2 = _objc_msgSend(unaff_x22,"scope");
  self = &_OBJC_CLASS___NSNumber;
  _objc_allocWithZone();
  IVar3 = _objc_msgSend((ID)self,"initWithBool:",(ulong)(param_3 & 1));
  IVar1 = _objc_msgSend(unaff_x22,"captureMessage:withScope:attachAllThreads:",IVar1,IVar2,IVar3);
  FUN_100b6fce4();
  FUN_100b6f868();
  FUN_100b6f934();
  FUN_100b6faa8();
  FUN_100b5e408(IVar1);
  return;
}



/* Address: 0x100bacf14 | _TtC6Sentry9SentrySDK::captureMessage:attachAllThreads: */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x1c bytes */

ID _TtC6Sentry9SentrySDK::captureMessage_attachAllThreads_
             (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  char *pcVar1;
  String SVar2;
  
  SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  pcVar1 = SVar2.str;
  FUN_100bace50(pcVar1,SVar2.bridgeObject,param_4);
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  return (ID)pcVar1;
}



/* Address: 0x100bacf54 | FUN_100bacf54 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100bacf54(long param_1)

{
  long lVar1;
  NSDictionary *pNVar2;
  NSString *pNVar3;
  NSArray *pNVar4;
  String SVar5;
  
  lVar1 = param_1;
  FUN_100bb51d4();
  FUN_100b6c58c();
  _swift_bridgeObjectRelease(lVar1);
  pNVar2 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
  FUN_100b6f980();
  pNVar3 = (NSString *)
           _objc_msgSend(*(ID *)(param_1 + _TtC6Sentry14SentryFeedback::eventId),"sentryIdString");
  if (pNVar3 == (NSString *)0x0) {
    SVar5 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(SVar5.bridgeObject);
  }
  FUN_100bb4ac0();
  FUN_100bad6e8(0);
  pNVar4 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  FUN_100b6f860();
  _objc_msgSend((ID)&objc::class_t::SentrySDKInternal,
                "captureSerializedFeedback:withEventId:attachments:",pNVar2,pNVar3,pNVar4);
  FUN_100b6faa8();
  FUN_100b6f934();
  return 0;
}



/* Address: 0x100bad064 | _TtC6Sentry9SentrySDK::captureFeedback: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry9SentrySDK::captureFeedback_(ID param_1,SEL param_2,ID param_3)

{
  FUN_100bacf54(param_3);
  return;
}



/* Address: 0x100bad090 | _TtC6Sentry9SentrySDK::addBreadcrumb: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry9SentrySDK::addBreadcrumb_(ID param_1,SEL param_2,ID param_3)

{
  FUN_100ba6804(param_3);
  return;
}



/* Address: 0x100bad0bc | FUN_100bad0bc */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_100bad0bc(void)

{
  void *unaff_x20;
  
  FUN_100b6fe18();
  FUN_100b97e5c(switchD_100bab490::caseD_51);
  FUN_100bad84c();
  FUN_100bad87c();
  _objc_msgSend((ID)&objc::class_t::SentrySDKInternal,"configureScope:");
  __Block_release(unaff_x20);
  FUN_100b56ee0();
  return;
}



/* Address: 0x100bad140 | _TtC6Sentry9SentrySDK::configureScope: */

/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry9SentrySDK::configureScope_(ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  void *pvVar1;
  undefined *puVar2;
  
  pvVar1 = __Block_copy((void *)param_3);
  puVar2 = &DAT_100f39c38;
  _swift_allocObject(&DAT_100f39c38,0x18,7);
  *(void **)(puVar2 + 0x10) = pvVar1;
  FUN_100bad0bc(FUN_100403f54,puVar2);
  _swift_release(puVar2);
  return;
}



/* Address: 0x100bad194 | FUN_100bad194 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_100bad194(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined *aBlock;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  
  FUN_100bad8dc();
  puVar1 = &DAT_100f39be8;
  _swift_allocObject(&DAT_100f39be8,0x21,7);
  *(undefined8 *)(puVar1 + 0x10) = unaff_x21;
  *(undefined8 *)(puVar1 + 0x18) = unaff_x20;
  puVar1[0x20] = param_3;
  aBlock = puVar1;
  FUN_100b97e5c(switchD_100bab490::caseD_51);
  _swift_bridgeObjectRetain();
  _swift_release(puVar1);
  FUN_100ba9f60(&objc::class_t::SentrySDKInternal,"configureScope:");
  __Block_release(aBlock);
  FUN_100b56ee0();
  return;
}



/* Address: 0x100bad24c | FUN_100bad24c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100bad24c(ID param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  NSString *pNVar1;
  
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _objc_msgSend(param_1,"addFeatureFlagWithName:result:",pNVar1,(ulong)(param_4 & 1));
  return 0;
}



/* Address: 0x100bad2a0 | _TtC6Sentry9SentrySDK::crashedLastRun */

/* Function Stack Size: 0x10 bytes */

bool _TtC6Sentry9SentrySDK::crashedLastRun(ID param_1,SEL param_2)

{
  uint uVar1;
  
  uVar1 = (uint)param_1;
  FUN_100bad2b8();
  return uVar1 & 1;
}



/* Address: 0x100bad2b8 | FUN_100bad2b8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_100bad2b8(void)

{
  _objc_msgSend((ID)&objc::class_t::SentrySDKInternal,"crashedLastRun");
  return;
}



/* Address: 0x100bad2e0 | _TtC6Sentry9SentrySDK::lastRunStatus */

/* Function Stack Size: 0x10 bytes */

long_long _TtC6Sentry9SentrySDK::lastRunStatus(ID param_1,SEL param_2)

{
  FUN_100bad2f4();
  return param_1;
}



/* Address: 0x100bad2f4 | FUN_100bad2f4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

ID FUN_100bad2f4(void)

{
  ID IVar1;
  
  IVar1 = _objc_msgSend((ID)&objc::class_t::SentrySDKInternal,"lastRunStatus");
  if (IVar1 != 2) {
    IVar1 = (ulong)(IVar1 == 1);
  }
  return IVar1;
}



/* Address: 0x100bad32c | _TtC6Sentry9SentrySDK::detectedStartUpCrash */

/* Function Stack Size: 0x10 bytes */

bool _TtC6Sentry9SentrySDK::detectedStartUpCrash(ID param_1,SEL param_2)

{
  uint uVar1;
  
  uVar1 = (uint)param_1;
  FUN_100bad344();
  return uVar1 & 1;
}



/* Address: 0x100bad344 | FUN_100bad344 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_100bad344(void)

{
  _objc_msgSend((ID)&objc::class_t::SentrySDKInternal,"detectedStartUpCrash");
  return;
}



/* Address: 0x100bad36c | FUN_100bad36c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_100bad36c(undefined8 param_1)

{
  _objc_msgSend((ID)&objc::class_t::SentrySDKInternal,"setUser:",param_1);
  return;
}



/* Address: 0x100bad3a0 | _TtC6Sentry9SentrySDK::setUser: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry9SentrySDK::setUser_(ID param_1,SEL param_2,ID param_3)

{
  FUN_100bad36c(param_3);
  return;
}



/* Address: 0x100bad3d4 | FUN_100bad3d4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_100bad3d4(void)

{
  _objc_msgSend((ID)&objc::class_t::SentrySDKInternal,"startSession");
  return;
}



/* Address: 0x100bad3f8 | _TtC6Sentry9SentrySDK::startSession */

/* Function Stack Size: 0x10 bytes */

void _TtC6Sentry9SentrySDK::startSession(ID param_1,SEL param_2)

{
  FUN_100bad3d4();
  return;
}



/* Address: 0x100bad40c | FUN_100bad40c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_100bad40c(void)

{
  _objc_msgSend((ID)&objc::class_t::SentrySDKInternal,"endSession");
  return;
}



/* Address: 0x100bad430 | _TtC6Sentry9SentrySDK::endSession */

/* Function Stack Size: 0x10 bytes */

void _TtC6Sentry9SentrySDK::endSession(ID param_1,SEL param_2)

{
  FUN_100bad40c();
  return;
}



/* Address: 0x100bad444 | FUN_100bad444 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_100bad444(void)

{
  _objc_msgSend((ID)&objc::class_t::SentrySDKInternal,"crash");
  return;
}



/* Address: 0x100bad468 | _TtC6Sentry9SentrySDK::crash */

/* Function Stack Size: 0x10 bytes */

void _TtC6Sentry9SentrySDK::crash(ID param_1,SEL param_2)

{
  FUN_100bad444();
  return;
}



/* Address: 0x100bad47c | FUN_100bad47c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_100bad47c(void)

{
  _objc_msgSend((ID)&objc::class_t::SentrySDKInternal,"reportFullyDisplayed");
  return;
}



/* Address: 0x100bad4a0 | _TtC6Sentry9SentrySDK::reportFullyDisplayed */

/* Function Stack Size: 0x10 bytes */

void _TtC6Sentry9SentrySDK::reportFullyDisplayed(ID param_1,SEL param_2)

{
  FUN_100bad47c();
  return;
}



/* Address: 0x100bad4b4 | FUN_100bad4b4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_100bad4b4(void)

{
  _objc_msgSend((ID)&objc::class_t::SentrySDKInternal,"pauseAppHangTracking");
  return;
}



/* Address: 0x100bad4d8 | _TtC6Sentry9SentrySDK::pauseAppHangTracking */

/* Function Stack Size: 0x10 bytes */

void _TtC6Sentry9SentrySDK::pauseAppHangTracking(ID param_1,SEL param_2)

{
  FUN_100bad4b4();
  return;
}



/* Address: 0x100bad4ec | FUN_100bad4ec */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_100bad4ec(void)

{
  _objc_msgSend((ID)&objc::class_t::SentrySDKInternal,"resumeAppHangTracking");
  return;
}



/* Address: 0x100bad510 | _TtC6Sentry9SentrySDK::resumeAppHangTracking */

/* Function Stack Size: 0x10 bytes */

void _TtC6Sentry9SentrySDK::resumeAppHangTracking(ID param_1,SEL param_2)

{
  FUN_100bad4ec();
  return;
}



/* Address: 0x100bad524 | FUN_100bad524 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_100bad524(undefined8 param_1)

{
  _objc_msgSend((ID)&objc::class_t::SentrySDKInternal,"flush:",param_1);
  return;
}



/* Address: 0x100bad558 | _TtC6Sentry9SentrySDK::flush: */

/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry9SentrySDK::flush_(ID param_1,SEL param_2,double param_3)

{
  FUN_100bad524();
  return;
}



/* Address: 0x100bad56c | FUN_100bad56c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_100bad56c(void)

{
  _objc_msgSend((ID)&objc::class_t::SentrySDKInternal,"close");
  return;
}



/* Address: 0x100bad590 | _TtC6Sentry9SentrySDK::close */

/* Function Stack Size: 0x10 bytes */

int _TtC6Sentry9SentrySDK::close(int param_1)

{
  FUN_100bad56c();
  return param_1;
}



/* Address: 0x100bad5a4 | FUN_100bad5a4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_100bad5a4(void)

{
  _objc_msgSend((ID)&objc::class_t::SentrySDKInternal,"startProfiler");
  return;
}



/* Address: 0x100bad5c8 | _TtC6Sentry9SentrySDK::startProfiler */

/* Function Stack Size: 0x10 bytes */

void _TtC6Sentry9SentrySDK::startProfiler(ID param_1,SEL param_2)

{
  FUN_100bad5a4();
  return;
}



/* Address: 0x100bad5dc | FUN_100bad5dc */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_100bad5dc(void)

{
  _objc_msgSend((ID)&objc::class_t::SentrySDKInternal,"stopProfiler");
  return;
}



/* Address: 0x100bad600 | _TtC6Sentry9SentrySDK::stopProfiler */

/* Function Stack Size: 0x10 bytes */

void _TtC6Sentry9SentrySDK::stopProfiler(ID param_1,SEL param_2)

{
  FUN_100bad5dc();
  return;
}



/* Address: 0x100bad614 | _TtC6Sentry9SentrySDK::startOption */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry9SentrySDK::startOption(ID param_1,SEL param_2)

{
  FUN_100bad628();
  return param_1;
}



/* Address: 0x100bad628 | FUN_100bad628 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100bad628(long param_1)

{
  ID self;
  undefined8 uVar1;
  
  FUN_100bad85c();
  FUN_100bad844();
  self = *(ID *)(param_1 + _TtC6Sentry25SentryDependencyContainer::paramLock);
  _objc_msgSend(self,"lock");
  uVar1 = *(undefined8 *)(param_1 + _TtC6Sentry25SentryDependencyContainer::_startOptions);
  _objc_msgSend(self,"unlock");
  FUN_100b6f868();
  FUN_100b6f868();
  FUN_100b56e60(uVar1);
  return;
}



/* Address: 0x100bad69c | _TtC6Sentry9SentrySDK::setStartWith: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry9SentrySDK::setStartWith_(ID param_1,SEL param_2,ID param_3)

{
  FUN_100babdc4(param_3);
  return;
}



/* Address: 0x100bad6d0 | FUN_100bad6d0 */

void FUN_100bad6d0(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  _swift_retain(uVar1);
  return;
}



/* Address: 0x100bad6e0 | FUN_100bad6e0 */

void FUN_100bad6e0(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x100bad6e8 | FUN_100bad6e8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_100bad6e8(void)

{
  class_t *pcVar1;
  
  if (DAT_1010449f8 == (class_t *)0x0) {
    pcVar1 = &objc::class_t::SentryAttachment;
    _swift_getObjCClassMetadata();
    DAT_1010449f8 = pcVar1;
  }
  return;
}



/* Address: 0x100bad724 | FUN_100bad724 */

void FUN_100bad724(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x100bad748 | FUN_100bad748 */

void FUN_100bad748(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100bad24c(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined1 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x100bad754 | FUN_100bad754 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100bad754(void)

{
  return ZEXT816(0x100fa2500);
}



/* Address: 0x100bad774 | FUN_100bad774 */

void FUN_100bad774(void)

{
  long unaff_x20;
  
  __Block_release(*(void **)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x100bad798 | thunk_FUN_100bad6d0 */

void thunk_FUN_100bad6d0(void)

{
  FUN_100bad6d0();
  return;
}



/* Address: 0x100bad79c | thunk_FUN_100bad6d0 */

void thunk_FUN_100bad6d0(void)

{
  FUN_100bad6d0();
  return;
}



/* Address: 0x100bad7a0 | thunk_FUN_100bad6d0 */

void thunk_FUN_100bad6d0(void)

{
  FUN_100bad6d0();
  return;
}



/* Address: 0x100bad7a4 | thunk_FUN_100bad6d0 */

void thunk_FUN_100bad6d0(void)

{
  FUN_100bad6d0();
  return;
}



/* Address: 0x100bad7a8 | thunk_FUN_100bad6d0 */

void thunk_FUN_100bad6d0(void)

{
  FUN_100bad6d0();
  return;
}



/* Address: 0x100bad7ac | thunk_FUN_100bad774 */

void thunk_FUN_100bad774(void)

{
  FUN_100bad774();
  return;
}



/* Address: 0x100bad7b0 | thunk_FUN_100bad774 */

void thunk_FUN_100bad774(void)

{
  FUN_100bad774();
  return;
}



/* Address: 0x100bad7b4 | thunk_FUN_100bad774 */

void thunk_FUN_100bad774(void)

{
  FUN_100bad774();
  return;
}


