/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100b462bc | SentryCrash::sink */

/* Function Stack Size: 0x10 bytes */

ID SentryCrash::sink(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x20);
}



/* Address: 0x100b462c4 | SentryCrash::setSink: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryCrash::setSink_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x20) = param_3;
  return;
}



/* Address: 0x100b462d0 | SentryCrash::deleteBehaviorAfterSendAll */

/* Function Stack Size: 0x10 bytes */

int SentryCrash::deleteBehaviorAfterSendAll(ID param_1,SEL param_2)

{
  return *(int *)(param_1 + 0xc);
}



/* Address: 0x100b462d8 | SentryCrash::setDeleteBehaviorAfterSendAll: */

/* Function Stack Size: 0x14 bytes */

void SentryCrash::setDeleteBehaviorAfterSendAll_(ID param_1,SEL param_2,int param_3)

{
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



/* Address: 0x100b462e0 | SentryCrash::monitoring */

/* Function Stack Size: 0x10 bytes */

int SentryCrash::monitoring(ID param_1,SEL param_2)

{
  return *(int *)(param_1 + 0x10);
}



/* Address: 0x100b462e8 | SentryCrash::onCrash */

/* Function Stack Size: 0x10 bytes */

undefined4 * SentryCrash::onCrash(ID param_1,SEL param_2)

{
  return *(undefined4 **)(param_1 + 0x30);
}



/* Address: 0x100b462f0 | SentryCrash::bundleName */

/* Function Stack Size: 0x10 bytes */

ID SentryCrash::bundleName(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x38);
}



/* Address: 0x100b462f8 | SentryCrash::setBundleName: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryCrash::setBundleName_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x38) = param_3;
  return;
}



/* Address: 0x100b46304 | SentryCrash::basePath */

/* Function Stack Size: 0x10 bytes */

ID SentryCrash::basePath(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x40);
}



/* Address: 0x100b4630c | SentryCrash::setBasePath: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryCrash::setBasePath_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x40) = param_3;
  return;
}



/* Address: 0x100b46318 | SentryCrash::bridge */

/* Function Stack Size: 0x10 bytes */

ID SentryCrash::bridge(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x48);
}



/* Address: 0x100b46320 | SentryCrash::setBridge: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryCrash::setBridge_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x48) = param_3;
  return;
}



/* Address: 0x100b4632c | SentryCrash::introspectMemory */

/* Function Stack Size: 0x10 bytes */

bool SentryCrash::introspectMemory(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + 8);
}



/* Address: 0x100b46334 | SentryCrash::doNotIntrospectClasses */

/* Function Stack Size: 0x10 bytes */

ID SentryCrash::doNotIntrospectClasses(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x50);
}



/* Address: 0x100b4633c | SentryCrash::demangleLanguages */

/* Function Stack Size: 0x10 bytes */

int SentryCrash::demangleLanguages(ID param_1,SEL param_2)

{
  return *(int *)(param_1 + 0x14);
}



/* Address: 0x100b46344 | SentryCrash::setDemangleLanguages: */

/* Function Stack Size: 0x14 bytes */

void SentryCrash::setDemangleLanguages_(ID param_1,SEL param_2,int param_3)

{
  *(int *)(param_1 + 0x14) = param_3;
  return;
}



/* Address: 0x100b4634c | SentryCrash::maxReportCount */

/* Function Stack Size: 0x10 bytes */

int SentryCrash::maxReportCount(ID param_1,SEL param_2)

{
  return *(int *)(param_1 + 0x18);
}



/* Address: 0x100b46354 | SentryCrash::uncaughtExceptionHandler */

/* Function Stack Size: 0x10 bytes */

undefined4 * SentryCrash::uncaughtExceptionHandler(ID param_1,SEL param_2)

{
  return *(undefined4 **)(param_1 + 0x58);
}



/* Address: 0x100b4635c | SentryCrash::setUncaughtExceptionHandler: */

/* Function Stack Size: 0x18 bytes */

void SentryCrash::setUncaughtExceptionHandler_(ID param_1,SEL param_2,undefined4 *param_3)

{
  *(undefined4 **)(param_1 + 0x58) = param_3;
  return;
}



/* Address: 0x100b46364 | SentryCrash::printPreviousLog */

/* Function Stack Size: 0x10 bytes */

bool SentryCrash::printPreviousLog(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + 9);
}



/* Address: 0x100b4636c | SentryCrash::monitoringWhenUninstalled */

/* Function Stack Size: 0x10 bytes */

int SentryCrash::monitoringWhenUninstalled(ID param_1,SEL param_2)

{
  return *(int *)(param_1 + 0x1c);
}



/* Address: 0x100b46374 | SentryCrash::setMonitoringWhenUninstalled: */

/* Function Stack Size: 0x14 bytes */

void SentryCrash::setMonitoringWhenUninstalled_(ID param_1,SEL param_2,int param_3)

{
  *(int *)(param_1 + 0x1c) = param_3;
  return;
}



/* Address: 0x100b4637c | SentryCrash::monitoringFromUninstalledToRestore */

/* Function Stack Size: 0x10 bytes */

bool SentryCrash::monitoringFromUninstalledToRestore(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + 10);
}



/* Address: 0x100b46384 | SentryCrash::setMonitoringFromUninstalledToRestore: */

/* Function Stack Size: 0x14 bytes */

void SentryCrash::setMonitoringFromUninstalledToRestore_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + 10) = (char)param_3;
  return;
}



/* Address: 0x100b4638c | SentryCrash::.cxx_destruct */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryCrash::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}



/* Address: 0x100b463ec | SentryTransportFactory::initTransports:dateProvider:sentryFileManager:rateLimits:reachability: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x38 bytes */

ID SentryTransportFactory::initTransports_dateProvider_sentryFileManager_rateLimits_reachability_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,ID param_7)

{
  int iVar1;
  ID self;
  ID IVar2;
  class_t *pcVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  ID IVar7;
  ID IVar8;
  ID IVar9;
  
  self = objc_stub::array((ID)&_OBJC_CLASS___NSMutableArray);
  IVar2 = objc_stub::FUN_100c030a0(param_1,param_3);
  pcVar3 = &objc::class_t::SentryQueueableRequestManager;
  _objc_alloc();
  IVar2 = objc_stub::FUN_100c04b40((ID)pcVar3,IVar2);
  pcVar3 = &objc::class_t::SentryEnvelopeRateLimit;
  _objc_alloc();
  IVar4 = objc_stub::FUN_100c049a0((ID)pcVar3,param_6);
  IVar5 = objc_stub::FUN_100c004a0(param_1);
  pcVar3 = &objc::class_t::_TtC6Sentry25SentryNSURLRequestBuilder;
  _objc_alloc();
  IVar6 = objc_stub::init((ID)pcVar3);
  IVar7 = objc_stub::FUN_100c018c0(param_3);
  iVar1 = (int)IVar7;
  FUN_100b3a1c0();
  if ((int)IVar7 == 0) {
    if (iVar1 != 0) {
      FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryTransportFactory.m"
                    ,0x2b,&cf_Spotlightisdisabledinoptions_notaddingSpotlighttransport_);
    }
  }
  else {
    if (iVar1 != 0) {
      FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryTransportFactory.m"
                    ,0x23,&cf_Spotlightisenabled_creatingSpotlighttransport_);
    }
    pcVar3 = &objc::class_t::SentrySpotlightTransport;
    _objc_alloc();
    IVar7 = objc_stub::FUN_100c047c0((ID)pcVar3,param_3,IVar2,IVar6);
    objc_stub::addObject_(self,IVar7);
  }
  IVar7 = objc_stub::FUN_100c07a60(param_3);
  iVar1 = 0;
  if (IVar7 == 0) {
    FUN_100b3a1e0();
    if (iVar1 != 0) {
      FUN_100b3a280("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryTransportFactory.m"
                    ,0x43,&
                          cf_FailedtocreateHTTPtransportbecausetheSentryOptionsdoesnotcontainaparsedDSN_
                   );
    }
  }
  else {
    FUN_100b3a1c0();
    if (iVar1 != 0) {
      FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryTransportFactory.m"
                    ,0x2f,&cf_OptionscontainparsedDSN_creatingHTTPtransport_);
    }
    IVar8 = objc_stub::FUN_100c07a60(param_3);
    pcVar3 = &objc::class_t::SentryHttpTransport;
    IVar7 = IVar8;
    _objc_alloc();
    IVar9 = objc_stub::FUN_100c09e60(param_3);
    IVar2 = objc_stub::FUN_100c04060
                      ((ID)pcVar3,0x3fb999999999999a,IVar8,IVar9,param_4,param_5,IVar2,IVar6,param_6
                       ,IVar4,IVar5,param_7,IVar7);
    objc_stub::addObject_(self,IVar2);
  }
  return self;
}



/* Address: 0x100b466f4 | SentryTransportFactory::getUrlSession: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryTransportFactory::getUrlSession_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  ID IVar2;
  ID IVar3;
  
  IVar2 = objc_stub::FUN_100c11020(param_3);
  iVar1 = 0;
  if (IVar2 == 0) {
    IVar2 = objc_stub::FUN_100c01e00((ID)&_OBJC_CLASS___NSURLSessionConfiguration);
    IVar3 = objc_stub::FUN_100c11040(param_3);
    IVar2 = objc_stub::sessionWithConfiguration_delegate_delegateQueue_
                      ((ID)&_OBJC_CLASS___NSURLSession,IVar2,IVar3,0);
  }
  else {
    FUN_100b3a1c0();
    if (iVar1 != 0) {
      FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryTransportFactory.m"
                    ,0x4c,&cf_UsingURLsessionprovidedinSDKoptionsforHTTPtransport_);
    }
    IVar2 = objc_stub::FUN_100c11020(param_3);
  }
  return IVar2;
}



/* Address: 0x100b467e0 | SentryTransportFactory::createDispatchQueueWrapper */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryTransportFactory::createDispatchQueueWrapper(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  class_t *self;
  ID IVar2;
  
  uVar1 = 0;
  _dispatch_queue_attr_make_with_qos_class(0,0xfffffffe,0);
  self = &objc::class_t::_TtC6Sentry26SentryDispatchQueueWrapper;
  _objc_alloc();
  IVar2 = objc_stub::FUN_100c045a0((ID)self,"io.sentry.http-transport",uVar1);
  return IVar2;
}



/* Address: 0x100b46840 | SentryScope::initWithMaxBreadcrumbs: */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryScope::initWithMaxBreadcrumbs_(ID param_1,SEL param_2,long_long param_3)

{
  ID self;
  undefined *puVar1;
  ID IVar2;
  class_t *self_00;
  undefined8 uVar3;
  objc_super local_40;
  
  local_40.super_class = &objc::class_t::SentryScope;
  local_40.receiver = param_1;
  self = _objc_msgSendSuper2(&local_40,"init");
  if (self != 0) {
    *(long_long *)(self + 0x40) = param_3 & ((long)param_3 >> 0x3f ^ 0xffffffffffffffffU);
    *(undefined8 *)(self + 0x48) = 0;
    puVar1 = &_OBJC_CLASS___NSMutableArray;
    _objc_alloc();
    IVar2 = objc_stub::FUN_100c03c60((ID)puVar1,*(undefined8 *)(self + 0x40));
    uVar3 = *(undefined8 *)(self + 0x60);
    *(ID *)(self + 0x60) = IVar2;
    puVar1 = &_OBJC_CLASS___NSMutableDictionary;
    _objc_alloc(uVar3);
    IVar2 = objc_stub::init((ID)puVar1);
    objc_stub::FUN_100c0e000(self,IVar2);
    puVar1 = &_OBJC_CLASS___NSMutableDictionary;
    _objc_alloc();
    IVar2 = objc_stub::init((ID)puVar1);
    objc_stub::FUN_100c0bac0(self,IVar2);
    puVar1 = &_OBJC_CLASS___NSMutableDictionary;
    _objc_alloc();
    IVar2 = objc_stub::init((ID)puVar1);
    objc_stub::FUN_100c0b100(self,IVar2);
    puVar1 = &_OBJC_CLASS___NSMutableArray;
    _objc_alloc();
    IVar2 = objc_stub::init((ID)puVar1);
    objc_stub::FUN_100c0a7a0(self,IVar2);
    puVar1 = &_OBJC_CLASS___NSMutableArray;
    _objc_alloc();
    IVar2 = objc_stub::init((ID)puVar1);
    objc_stub::FUN_100c0bc80(self,IVar2);
    puVar1 = &_OBJC_CLASS___NSMutableDictionary;
    _objc_alloc();
    IVar2 = objc_stub::init((ID)puVar1);
    objc_stub::FUN_100c0a880(self,IVar2);
    IVar2 = objc_stub::FUN_100c09b60((ID)&objc::class_t::SentryFeatureFlagBufferWrapper);
    uVar3 = *(undefined8 *)(self + 0x20);
    *(ID *)(self + 0x20) = IVar2;
    puVar1 = &_OBJC_CLASS___NSObject;
    _objc_alloc(uVar3);
    IVar2 = objc_stub::init((ID)puVar1);
    uVar3 = *(undefined8 *)(self + 8);
    *(ID *)(self + 8) = IVar2;
    puVar1 = &_OBJC_CLASS___NSObject;
    _objc_alloc(uVar3);
    IVar2 = objc_stub::init((ID)puVar1);
    uVar3 = *(undefined8 *)(self + 0x10);
    *(ID *)(self + 0x10) = IVar2;
    puVar1 = &_OBJC_CLASS___NSObject;
    _objc_alloc(uVar3);
    IVar2 = objc_stub::init((ID)puVar1);
    uVar3 = *(undefined8 *)(self + 0x18);
    *(ID *)(self + 0x18) = IVar2;
    puVar1 = &_OBJC_CLASS___NSMutableArray;
    _objc_alloc(uVar3);
    IVar2 = objc_stub::init((ID)puVar1);
    objc_stub::FUN_100c0ce40(self,IVar2);
    self_00 = &objc::class_t::_TtC6Sentry24SentryPropagationContext;
    _objc_alloc();
    IVar2 = objc_stub::init((ID)self_00);
    objc_stub::setPropagationContext_(self,IVar2);
  }
  return self;
}



/* Address: 0x100b46a64 | SentryScope::init */

/* Function Stack Size: 0x10 bytes */

ID SentryScope::init(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = objc_stub::FUN_100c04520(param_1,100);
  return IVar1;
}



/* Address: 0x100b46a6c | SentryScope::featureFlagBuffer */

/* WARNING: Function: _objc_retainAutoreleaseReturnValue replaced with injection: _objc_retain_fixup
    */
/* Function Stack Size: 0x10 bytes */

ID SentryScope::featureFlagBuffer(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x20);
}



/* Address: 0x100b46a74 | SentryScope::initWithScope: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryScope::initWithScope_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  undefined8 uVar3;
  undefined *self;
  undefined8 uVar4;
  ID IVar5;
  
  IVar1 = objc_stub::FUN_100c06a60(param_3);
  IVar1 = objc_stub::FUN_100c04520(param_1,IVar1);
  if (IVar1 != 0) {
    IVar5 = *(ID *)(IVar1 + 0x80);
    IVar2 = objc_stub::FUN_100c022a0(param_3);
    objc_stub::addEntriesFromDictionary_(IVar5,IVar2);
    IVar5 = *(ID *)(IVar1 + 0xa0);
    IVar2 = objc_stub::FUN_100c10160(param_3);
    objc_stub::addEntriesFromDictionary_(IVar5,IVar2);
    uVar3 = *(undefined8 *)(param_3 + 0x98);
    _objc_sync_enter();
    IVar5 = *(ID *)(IVar1 + 0x98);
    IVar2 = objc_stub::copy(*(ID *)(param_3 + 0x98));
    objc_stub::addEntriesFromDictionary_(IVar5,IVar2);
    IVar2 = objc_stub::FUN_100c00020(*(ID *)(param_3 + 0x20));
    uVar4 = *(undefined8 *)(IVar1 + 0x20);
    *(ID *)(IVar1 + 0x20) = IVar2;
    _objc_sync_exit(uVar4,uVar3);
    IVar2 = objc_stub::FUN_100bfe8a0(param_3);
    self = &_OBJC_CLASS___NSMutableArray;
    _objc_alloc();
    IVar5 = objc_stub::FUN_100c06a60(param_3);
    IVar5 = objc_stub::FUN_100c03c60((ID)self,IVar5);
    uVar3 = *(undefined8 *)(IVar1 + 0x60);
    *(ID *)(IVar1 + 0x60) = IVar5;
    IVar5 = objc_stub::count(IVar2,uVar3);
    *(ID *)(IVar1 + 0x48) = IVar5;
    objc_stub::FUN_100bfd740(*(ID *)(IVar1 + 0x60),IVar2);
    IVar5 = *(ID *)(IVar1 + 0x88);
    IVar2 = objc_stub::FUN_100c02600(param_3);
    objc_stub::FUN_100bfd740(IVar5,IVar2);
    IVar5 = *(ID *)(IVar1 + 0x50);
    IVar2 = objc_stub::attachments(param_3);
    objc_stub::FUN_100bfd740(IVar5,IVar2);
    IVar5 = *(ID *)(IVar1 + 0x68);
    IVar2 = objc_stub::FUN_100bfe2a0(param_3);
    objc_stub::addEntriesFromDictionary_(IVar5,IVar2);
    IVar2 = objc_stub::FUN_100c084a0(param_3);
    objc_stub::setPropagationContext_(IVar1,IVar2);
    IVar2 = objc_stub::FUN_100c06a60(param_3);
    objc_stub::FUN_100c0c8a0(IVar1,IVar2);
    IVar2 = objc_stub::FUN_100c11180(param_3);
    IVar2 = objc_stub::copy(IVar2);
    objc_stub::FUN_100c0e7a0(IVar1,IVar2);
    IVar2 = objc_stub::FUN_100c01540(param_3);
    objc_stub::FUN_100c0b680(IVar1,IVar2);
    IVar2 = objc_stub::FUN_100c01de0(param_3);
    objc_stub::FUN_100c0b920(IVar1,IVar2);
    IVar2 = objc_stub::FUN_100c06220(param_3);
    objc_stub::FUN_100c0c680(IVar1,IVar2);
    IVar2 = objc_stub::FUN_100c0efc0(param_3);
    objc_stub::FUN_100c0dc60(IVar1,IVar2);
    IVar2 = objc_stub::FUN_100c092a0(param_3);
    objc_stub::FUN_100c0d640(IVar1,IVar2);
  }
  return IVar1;
}



/* Address: 0x100b46dac | SentryScope::add: */

/* Function Stack Size: 0x18 bytes */

ID __objc_msgSend_stub SentryScope::add_(ID self,...)

{
  (*(code *)PTR__objc_msgSend_100ea81a8)(self,"addBreadcrumb:");
  return self;
}



/* Address: 0x100b46db0 | SentryScope::addBreadcrumb: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryScope::addBreadcrumb_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ID IVar4;
  undefined8 uVar5;
  ID self;
  ID IVar6;
  long lVar7;
  ID IVar8;
  undefined8 local_130;
  long lStack_128;
  long *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  IVar4 = objc_stub::FUN_100c06a60(param_1);
  if (IVar4 != 0) {
    FUN_100b3a1c0();
    if ((int)IVar4 != 0) {
      objc_stub::FUN_100bff0c0(param_3);
      objc_stub::FUN_100c06ca0(param_3);
      FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryScope.m",0x7b
                    ,&cf_Addbreadcrumb______);
    }
    uVar5 = *(undefined8 *)(param_1 + 0x60);
    _objc_sync_enter();
    IVar4 = objc_stub::FUN_100c0eec0(param_3);
    objc_stub::FUN_100c0cdc0(*(ID *)(param_1 + 0x60),IVar4,*(undefined8 *)(param_1 + 0x48));
    uVar2 = *(ulong *)(param_1 + 0x40);
    uVar1 = *(long *)(param_1 + 0x48) + 1;
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = uVar1 / uVar2;
    }
    *(ulong *)(param_1 + 0x48) = uVar1 - uVar3 * uVar2;
    IVar4 = objc_stub::serialize(IVar4);
    uStack_108 = 0;
    local_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    local_130 = 0;
    uStack_118 = 0;
    local_120 = (long *)0x0;
    self = objc_stub::FUN_100c075a0(param_1);
    IVar6 = objc_stub::countByEnumeratingWithState_objects_count_(self,&local_130,auStack_e8,0x10);
    if (IVar6 != 0) {
      lVar7 = *local_120;
      do {
        IVar8 = 0;
        do {
          if (*local_120 != lVar7) {
            _objc_enumerationMutation(self);
          }
          objc_stub::FUN_100bfd8a0(*(ID *)(lStack_128 + IVar8 * 8),IVar4);
          IVar8 = IVar8 + 1;
        } while (IVar6 != IVar8);
        IVar6 = objc_stub::countByEnumeratingWithState_objects_count_
                          (self,&local_130,auStack_e8,0x10);
      } while (IVar6 != 0);
    }
    _objc_sync_exit(uVar5);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}



/* Address: 0x100b46fe0 | SentryScope::setSpan: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryScope::setSpan_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  ID self;
  ID IVar2;
  ID IVar3;
  ID self_00;
  long lVar4;
  ID IVar5;
  undefined8 local_130;
  long lStack_128;
  long *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_sync_enter();
  *(ID *)(param_1 + 0x28) = param_3;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (long *)0x0;
  self = objc_stub::FUN_100c075a0(param_1);
  IVar2 = objc_stub::countByEnumeratingWithState_objects_count_(self,&local_130,auStack_e8,0x10);
  if (IVar2 != 0) {
    lVar4 = *local_120;
    do {
      IVar5 = 0;
      do {
        if (*local_120 != lVar4) {
          _objc_enumerationMutation(self);
        }
        self_00 = *(ID *)(lStack_128 + IVar5 * 8);
        IVar3 = objc_stub::FUN_100bfea20(param_1,param_3);
        objc_stub::FUN_100c0e460(self_00,IVar3);
        IVar5 = IVar5 + 1;
      } while (IVar2 != IVar5);
      IVar2 = objc_stub::countByEnumeratingWithState_objects_count_(self,&local_130,auStack_e8,0x10)
      ;
    } while (IVar2 != 0);
  }
  _objc_sync_exit(uVar1);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}



/* Address: 0x100b47178 | SentryScope::propagationContext */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryScope::propagationContext(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  ID IVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_sync_enter();
  IVar2 = *(ID *)(param_1 + 0x30);
  _objc_sync_exit(uVar1);
  return IVar2;
}



/* Address: 0x100b471c4 | SentryScope::setPropagationContext: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryScope::setPropagationContext_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  ID self;
  ID IVar2;
  ID IVar3;
  long lVar4;
  ID IVar5;
  undefined8 local_130;
  long lStack_128;
  long *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_sync_enter();
  *(ID *)(param_1 + 0x30) = param_3;
  self = objc_stub::FUN_100c075a0(param_1);
  IVar2 = objc_stub::count(self);
  if (IVar2 != 0) {
    IVar2 = objc_stub::FUN_100c10920(param_3);
    uStack_108 = 0;
    local_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    local_130 = 0;
    uStack_118 = 0;
    local_120 = (long *)0x0;
    IVar3 = objc_stub::countByEnumeratingWithState_objects_count_(self,&local_130,auStack_e8,0x10);
    if (IVar3 != 0) {
      lVar4 = *local_120;
      do {
        IVar5 = 0;
        do {
          if (*local_120 != lVar4) {
            _objc_enumerationMutation(self);
          }
          objc_stub::FUN_100c0e460(*(ID *)(lStack_128 + IVar5 * 8),IVar2);
          IVar5 = IVar5 + 1;
        } while (IVar3 != IVar5);
        IVar3 = objc_stub::countByEnumeratingWithState_objects_count_
                          (self,&local_130,auStack_e8,0x10);
      } while (IVar3 != 0);
    }
  }
  _objc_sync_exit(uVar1);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}



/* Address: 0x100b47378 | SentryScope::setPropagationContextWithTraceId:spanId: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void SentryScope::setPropagationContextWithTraceId_spanId_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  class_t *self;
  
  self = &objc::class_t::_TtC6Sentry24SentryPropagationContext;
  _objc_alloc();
  IVar1 = objc_stub::initWithTraceId_spanId_((ID)self,param_3,param_4);
  objc_stub::setPropagationContext_(param_1,IVar1);
  return;
}



/* Address: 0x100b473f8 | SentryScope::span */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryScope::span(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  ID IVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_sync_enter();
  IVar2 = *(ID *)(param_1 + 0x28);
  _objc_sync_exit(uVar1);
  return IVar2;
}



/* Address: 0x100b47444 | SentryScope::getCastedInternalSpan */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryScope::getCastedInternalSpan(ID param_1,SEL param_2)

{
  int iVar1;
  ID self;
  ID IVar2;
  
  self = objc_stub::FUN_100c0efc0(param_1);
  if (self != 0) {
    IVar2 = objc_stub::class((ID)&objc::class_t::SentrySpanInternal);
    IVar2 = objc_stub::isKindOfClass_(self,IVar2);
    iVar1 = (int)IVar2;
    if (iVar1 != 0) {
      return self;
    }
    FUN_100b3a1c0();
    if (iVar1 != 0) {
      FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryScope.m",0xce
                    ,&cf_ThespanonthescopeisnotoftypeSentrySpan_returningnil_);
    }
  }
  return 0;
}



/* Address: 0x100b474cc | SentryScope::clear */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

int __thiscall SentryScope::clear(SentryScope *this)

{
  ID in_x0;
  undefined8 uVar1;
  ID self;
  ID IVar2;
  long lVar3;
  ID IVar4;
  undefined8 local_110;
  long lStack_108;
  long *local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_100ea82f0;
  objc_stub::FUN_100bff3a0(in_x0);
  uVar1 = *(undefined8 *)(in_x0 + 0xa0);
  _objc_sync_enter();
  objc_stub::FUN_100c08ee0(*(ID *)(in_x0 + 0xa0));
  _objc_sync_exit(uVar1);
  uVar1 = *(undefined8 *)(in_x0 + 0x80);
  _objc_sync_enter();
  objc_stub::FUN_100c08ee0(*(ID *)(in_x0 + 0x80));
  _objc_sync_exit(uVar1);
  uVar1 = *(undefined8 *)(in_x0 + 0x98);
  _objc_sync_enter();
  objc_stub::FUN_100c08ee0(*(ID *)(in_x0 + 0x98));
  objc_stub::FUN_100c08e60(*(ID *)(in_x0 + 0x20));
  _objc_sync_exit(uVar1);
  uVar1 = *(undefined8 *)(in_x0 + 0x88);
  _objc_sync_enter();
  objc_stub::FUN_100c08ee0(*(ID *)(in_x0 + 0x88));
  _objc_sync_exit(uVar1);
  objc_stub::FUN_100bff380(in_x0);
  uVar1 = *(undefined8 *)(in_x0 + 8);
  _objc_sync_enter();
  *(undefined8 *)(in_x0 + 0x28) = 0;
  _objc_sync_exit(uVar1);
  uVar1 = *(undefined8 *)(in_x0 + 0x68);
  _objc_sync_enter();
  objc_stub::FUN_100c08ee0(*(ID *)(in_x0 + 0x68));
  _objc_sync_exit(uVar1);
  objc_stub::FUN_100c0e7a0(in_x0,0);
  objc_stub::FUN_100c0b680(in_x0,0);
  objc_stub::FUN_100c0b920(in_x0,0);
  objc_stub::FUN_100c0c680(in_x0,0);
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  local_100 = (long *)0x0;
  self = objc_stub::FUN_100c075a0(in_x0);
  IVar2 = objc_stub::countByEnumeratingWithState_objects_count_(self,&local_110,auStack_c8,0x10);
  if (IVar2 != 0) {
    lVar3 = *local_100;
    do {
      IVar4 = 0;
      do {
        if (*local_100 != lVar3) {
          _objc_enumerationMutation(self);
        }
        objc_stub::FUN_100bff360(*(ID *)(lStack_108 + IVar4 * 8));
        IVar4 = IVar4 + 1;
      } while (IVar2 != IVar4);
      IVar2 = objc_stub::countByEnumeratingWithState_objects_count_(self,&local_110,auStack_c8,0x10)
      ;
    } while (IVar2 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_48) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100b47728 | SentryScope::clearBreadcrumbs */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryScope::clearBreadcrumbs(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  ID self;
  ID IVar2;
  long lVar3;
  ID IVar4;
  undefined8 local_110;
  long lStack_108;
  long *local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  _objc_sync_enter();
  *(undefined8 *)(param_1 + 0x48) = 0;
  objc_stub::FUN_100c08ee0(*(ID *)(param_1 + 0x60));
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  local_100 = (long *)0x0;
  self = objc_stub::FUN_100c075a0(param_1);
  IVar2 = objc_stub::countByEnumeratingWithState_objects_count_(self,&local_110,auStack_c8,0x10);
  if (IVar2 != 0) {
    lVar3 = *local_100;
    do {
      IVar4 = 0;
      do {
        if (*local_100 != lVar3) {
          _objc_enumerationMutation(self);
        }
        objc_stub::FUN_100bff3a0(*(ID *)(lStack_108 + IVar4 * 8));
        IVar4 = IVar4 + 1;
      } while (IVar2 != IVar4);
      IVar2 = objc_stub::countByEnumeratingWithState_objects_count_(self,&local_110,auStack_c8,0x10)
      ;
    } while (IVar2 != 0);
  }
  _objc_sync_exit(uVar1);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}



/* Address: 0x100b47874 | SentryScope::breadcrumbs */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryScope::breadcrumbs(ID param_1,SEL param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *self;
  ID self_00;
  undefined8 uVar3;
  ID IVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  
  self = &_OBJC_CLASS___NSMutableArray;
  _objc_alloc();
  self_00 = objc_stub::init((ID)self);
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  _objc_sync_enter();
  uVar5 = *(ulong *)(param_1 + 0x40);
  if (uVar5 != 0) {
    uVar6 = 0;
    do {
      lVar7 = *(long *)(param_1 + 0x48);
      IVar4 = objc_stub::count(*(ID *)(param_1 + 0x60));
      uVar1 = uVar6 + lVar7;
      uVar2 = 0;
      if (uVar5 != 0) {
        uVar2 = uVar1 / uVar5;
      }
      if (uVar1 - uVar2 * uVar5 < IVar4) {
        IVar4 = objc_stub::FUN_100c07480(*(ID *)(param_1 + 0x60));
        objc_stub::addObject_(self_00,IVar4);
      }
      uVar6 = uVar6 + 1;
      uVar5 = *(ulong *)(param_1 + 0x40);
    } while (uVar6 < uVar5);
  }
  _objc_sync_exit(uVar3);
  return self_00;
}



/* Address: 0x100b47950 | SentryScope::setContextValue:forKey: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void SentryScope::setContextValue_forKey_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined8 uVar1;
  ID self;
  ID IVar2;
  ID IVar3;
  ID self_00;
  long lVar4;
  ID IVar5;
  undefined8 local_130;
  long lStack_128;
  long *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  _objc_sync_enter();
  objc_stub::setValue_forKey_(*(ID *)(param_1 + 0x98),param_3,param_4);
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (long *)0x0;
  self = objc_stub::FUN_100c075a0(param_1);
  IVar2 = objc_stub::countByEnumeratingWithState_objects_count_(self,&local_130,auStack_f0,0x10);
  if (IVar2 != 0) {
    lVar4 = *local_120;
    do {
      IVar5 = 0;
      do {
        if (*local_120 != lVar4) {
          _objc_enumerationMutation(self);
        }
        self_00 = *(ID *)(lStack_128 + IVar5 * 8);
        IVar3 = objc_stub::copy(*(ID *)(param_1 + 0x98));
        objc_stub::FUN_100c0b0e0(self_00,IVar3);
        IVar5 = IVar5 + 1;
      } while (IVar2 != IVar5);
      IVar2 = objc_stub::countByEnumeratingWithState_objects_count_(self,&local_130,auStack_f0,0x10)
      ;
    } while (IVar2 != 0);
  }
  _objc_sync_exit(uVar1);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}



/* Address: 0x100b47af8 | SentryScope::getContextForKey: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryScope::getContextForKey_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  ID IVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  _objc_sync_enter();
  IVar2 = objc_stub::objectForKey_(*(ID *)(param_1 + 0x98),param_3);
  _objc_sync_exit(uVar1);
  return IVar2;
}



/* Address: 0x100b47b80 | SentryScope::removeContextForKey: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryScope::removeContextForKey_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  ID self;
  ID IVar2;
  ID IVar3;
  ID self_00;
  long lVar4;
  ID IVar5;
  undefined8 local_130;
  long lStack_128;
  long *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  _objc_sync_enter();
  objc_stub::removeObjectForKey_(*(ID *)(param_1 + 0x98),param_3);
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (long *)0x0;
  self = objc_stub::FUN_100c075a0(param_1);
  IVar2 = objc_stub::countByEnumeratingWithState_objects_count_(self,&local_130,auStack_e8,0x10);
  if (IVar2 != 0) {
    lVar4 = *local_120;
    do {
      IVar5 = 0;
      do {
        if (*local_120 != lVar4) {
          _objc_enumerationMutation(self);
        }
        self_00 = *(ID *)(lStack_128 + IVar5 * 8);
        IVar3 = objc_stub::copy(*(ID *)(param_1 + 0x98));
        objc_stub::FUN_100c0b0e0(self_00,IVar3);
        IVar5 = IVar5 + 1;
      } while (IVar2 != IVar5);
      IVar2 = objc_stub::countByEnumeratingWithState_objects_count_(self,&local_130,auStack_e8,0x10)
      ;
    } while (IVar2 != 0);
  }
  _objc_sync_exit(uVar1);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}



/* Address: 0x100b47d0c | SentryScope::context */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryScope::context(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  ID IVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  _objc_sync_enter();
  IVar2 = objc_stub::copy(*(ID *)(param_1 + 0x98));
  _objc_sync_exit(uVar1);
  return IVar2;
}



/* Address: 0x100b47d6c | SentryScope::setExtraValue:forKey: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void SentryScope::setExtraValue_forKey_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined8 uVar1;
  ID self;
  ID IVar2;
  ID IVar3;
  ID self_00;
  long lVar4;
  ID IVar5;
  undefined8 local_130;
  long lStack_128;
  long *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  _objc_sync_enter();
  objc_stub::setValue_forKey_(*(ID *)(param_1 + 0x80),param_3,param_4);
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (long *)0x0;
  self = objc_stub::FUN_100c075a0(param_1);
  IVar2 = objc_stub::countByEnumeratingWithState_objects_count_(self,&local_130,auStack_f0,0x10);
  if (IVar2 != 0) {
    lVar4 = *local_120;
    do {
      IVar5 = 0;
      do {
        if (*local_120 != lVar4) {
          _objc_enumerationMutation(self);
        }
        self_00 = *(ID *)(lStack_128 + IVar5 * 8);
        IVar3 = objc_stub::copy(*(ID *)(param_1 + 0x80));
        objc_stub::FUN_100c0bb00(self_00,IVar3);
        IVar5 = IVar5 + 1;
      } while (IVar2 != IVar5);
      IVar2 = objc_stub::countByEnumeratingWithState_objects_count_(self,&local_130,auStack_f0,0x10)
      ;
    } while (IVar2 != 0);
  }
  _objc_sync_exit(uVar1);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}



/* Address: 0x100b47f14 | SentryScope::removeExtraForKey: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryScope::removeExtraForKey_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  ID self;
  ID IVar2;
  ID IVar3;
  ID self_00;
  long lVar4;
  ID IVar5;
  undefined8 local_130;
  long lStack_128;
  long *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  _objc_sync_enter();
  objc_stub::removeObjectForKey_(*(ID *)(param_1 + 0x80),param_3);
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (long *)0x0;
  self = objc_stub::FUN_100c075a0(param_1);
  IVar2 = objc_stub::countByEnumeratingWithState_objects_count_(self,&local_130,auStack_e8,0x10);
  if (IVar2 != 0) {
    lVar4 = *local_120;
    do {
      IVar5 = 0;
      do {
        if (*local_120 != lVar4) {
          _objc_enumerationMutation(self);
        }
        self_00 = *(ID *)(lStack_128 + IVar5 * 8);
        IVar3 = objc_stub::copy(*(ID *)(param_1 + 0x80));
        objc_stub::FUN_100c0bb00(self_00,IVar3);
        IVar5 = IVar5 + 1;
      } while (IVar2 != IVar5);
      IVar2 = objc_stub::countByEnumeratingWithState_objects_count_(self,&local_130,auStack_e8,0x10)
      ;
    } while (IVar2 != 0);
  }
  _objc_sync_exit(uVar1);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}



/* Address: 0x100b480a0 | SentryScope::setExtras: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryScope::setExtras_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  ID self;
  ID IVar2;
  ID IVar3;
  ID self_00;
  long lVar4;
  ID IVar5;
  undefined8 local_130;
  long lStack_128;
  long *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x80);
    _objc_sync_enter();
    objc_stub::addEntriesFromDictionary_(*(ID *)(param_1 + 0x80),param_3);
    uStack_108 = 0;
    local_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    local_130 = 0;
    uStack_118 = 0;
    local_120 = (long *)0x0;
    self = objc_stub::FUN_100c075a0(param_1);
    IVar2 = objc_stub::countByEnumeratingWithState_objects_count_(self,&local_130,auStack_e8,0x10);
    if (IVar2 != 0) {
      lVar4 = *local_120;
      do {
        IVar5 = 0;
        do {
          if (*local_120 != lVar4) {
            _objc_enumerationMutation(self);
          }
          self_00 = *(ID *)(lStack_128 + IVar5 * 8);
          IVar3 = objc_stub::copy(*(ID *)(param_1 + 0x80));
          objc_stub::FUN_100c0bb00(self_00,IVar3);
          IVar5 = IVar5 + 1;
        } while (IVar2 != IVar5);
        IVar2 = objc_stub::countByEnumeratingWithState_objects_count_
                          (self,&local_130,auStack_e8,0x10);
      } while (IVar2 != 0);
    }
    _objc_sync_exit(uVar1);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}



/* Address: 0x100b48230 | SentryScope::extras */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryScope::extras(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  ID IVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  _objc_sync_enter();
  IVar2 = objc_stub::copy(*(ID *)(param_1 + 0x80));
  _objc_sync_exit(uVar1);
  return IVar2;
}



/* Address: 0x100b48290 | SentryScope::setTagValue:forKey: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void SentryScope::setTagValue_forKey_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined8 uVar1;
  ID self;
  ID IVar2;
  ID IVar3;
  ID self_00;
  long lVar4;
  ID IVar5;
  undefined8 local_130;
  long lStack_128;
  long *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  _objc_sync_enter();
  objc_stub::setObject_forKeyedSubscript_(*(ID *)(param_1 + 0xa0),param_3,param_4);
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (long *)0x0;
  self = objc_stub::FUN_100c075a0(param_1);
  IVar2 = objc_stub::countByEnumeratingWithState_objects_count_(self,&local_130,auStack_f0,0x10);
  if (IVar2 != 0) {
    lVar4 = *local_120;
    do {
      IVar5 = 0;
      do {
        if (*local_120 != lVar4) {
          _objc_enumerationMutation(self);
        }
        self_00 = *(ID *)(lStack_128 + IVar5 * 8);
        IVar3 = objc_stub::copy(*(ID *)(param_1 + 0xa0));
        objc_stub::FUN_100c0e040(self_00,IVar3);
        IVar5 = IVar5 + 1;
      } while (IVar2 != IVar5);
      IVar2 = objc_stub::countByEnumeratingWithState_objects_count_(self,&local_130,auStack_f0,0x10)
      ;
    } while (IVar2 != 0);
  }
  _objc_sync_exit(uVar1);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}



/* Address: 0x100b48438 | SentryScope::removeTagForKey: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryScope::removeTagForKey_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  ID self;
  ID IVar2;
  ID IVar3;
  ID self_00;
  long lVar4;
  ID IVar5;
  undefined8 local_130;
  long lStack_128;
  long *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  _objc_sync_enter();
  objc_stub::removeObjectForKey_(*(ID *)(param_1 + 0xa0),param_3);
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (long *)0x0;
  self = objc_stub::FUN_100c075a0(param_1);
  IVar2 = objc_stub::countByEnumeratingWithState_objects_count_(self,&local_130,auStack_e8,0x10);
  if (IVar2 != 0) {
    lVar4 = *local_120;
    do {
      IVar5 = 0;
      do {
        if (*local_120 != lVar4) {
          _objc_enumerationMutation(self);
        }
        self_00 = *(ID *)(lStack_128 + IVar5 * 8);
        IVar3 = objc_stub::copy(*(ID *)(param_1 + 0xa0));
        objc_stub::FUN_100c0e040(self_00,IVar3);
        IVar5 = IVar5 + 1;
      } while (IVar2 != IVar5);
      IVar2 = objc_stub::countByEnumeratingWithState_objects_count_(self,&local_130,auStack_e8,0x10)
      ;
    } while (IVar2 != 0);
  }
  _objc_sync_exit(uVar1);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}



/* Address: 0x100b485c4 | SentryScope::setTags: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryScope::setTags_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined8 uVar2;
  ID IVar3;
  ID IVar4;
  ID self;
  long lVar5;
  ID IVar6;
  undefined8 local_130;
  long lStack_128;
  long *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  if (param_3 != 0) {
    IVar1 = objc_stub::copy(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0xa0);
    _objc_sync_enter();
    objc_stub::addEntriesFromDictionary_(*(ID *)(param_1 + 0xa0),IVar1);
    uStack_108 = 0;
    local_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    local_130 = 0;
    uStack_118 = 0;
    local_120 = (long *)0x0;
    IVar1 = objc_stub::FUN_100c075a0(param_1);
    IVar3 = objc_stub::countByEnumeratingWithState_objects_count_(IVar1,&local_130,auStack_f0,0x10);
    if (IVar3 != 0) {
      lVar5 = *local_120;
      do {
        IVar6 = 0;
        do {
          if (*local_120 != lVar5) {
            _objc_enumerationMutation(IVar1);
          }
          self = *(ID *)(lStack_128 + IVar6 * 8);
          IVar4 = objc_stub::copy(*(ID *)(param_1 + 0xa0));
          objc_stub::FUN_100c0e040(self,IVar4);
          IVar6 = IVar6 + 1;
        } while (IVar3 != IVar6);
        IVar3 = objc_stub::countByEnumeratingWithState_objects_count_
                          (IVar1,&local_130,auStack_f0,0x10);
      } while (IVar3 != 0);
    }
    _objc_sync_exit(uVar2);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}



/* Address: 0x100b48768 | SentryScope::tags */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryScope::tags(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  ID IVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  _objc_sync_enter();
  IVar2 = objc_stub::copy(*(ID *)(param_1 + 0xa0));
  _objc_sync_exit(uVar1);
  return IVar2;
}



/* Address: 0x100b487c8 | SentryScope::setUser: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryScope::setUser_(ID param_1,SEL param_2,ID param_3)

{
  ID self;
  ID IVar1;
  long lVar2;
  ID IVar3;
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
  _objc_sync_enter();
  objc_stub::FUN_100c0e7a0(param_1,param_3);
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  local_110 = (long *)0x0;
  self = objc_stub::FUN_100c075a0(param_1);
  IVar1 = objc_stub::countByEnumeratingWithState_objects_count_(self,&local_120,auStack_d8,0x10);
  if (IVar1 != 0) {
    lVar2 = *local_110;
    do {
      IVar3 = 0;
      do {
        if (*local_110 != lVar2) {
          _objc_enumerationMutation(self);
        }
        objc_stub::FUN_100c0e6e0(*(ID *)(lStack_118 + IVar3 * 8),param_3);
        IVar3 = IVar3 + 1;
      } while (IVar1 != IVar3);
      IVar1 = objc_stub::countByEnumeratingWithState_objects_count_(self,&local_120,auStack_d8,0x10)
      ;
    } while (IVar1 != 0);
  }
  _objc_sync_exit(param_1);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}



/* Address: 0x100b48934 | SentryScope::setDist: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryScope::setDist_(ID param_1,SEL param_2,ID param_3)

{
  ID self;
  ID IVar1;
  long lVar2;
  ID IVar3;
  undefined8 local_110;
  long lStack_108;
  long *local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_100ea82f0;
  objc_stub::FUN_100c0b680(param_1,param_3);
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  local_100 = (long *)0x0;
  self = objc_stub::FUN_100c075a0(param_1);
  IVar1 = objc_stub::countByEnumeratingWithState_objects_count_(self,&local_110,auStack_c8,0x10);
  if (IVar1 != 0) {
    lVar2 = *local_100;
    do {
      IVar3 = 0;
      do {
        if (*local_100 != lVar2) {
          _objc_enumerationMutation(self);
        }
        objc_stub::FUN_100c0b660(*(ID *)(lStack_108 + IVar3 * 8),param_3);
        IVar3 = IVar3 + 1;
      } while (IVar1 != IVar3);
      IVar1 = objc_stub::countByEnumeratingWithState_objects_count_(self,&local_110,auStack_c8,0x10)
      ;
    } while (IVar1 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}



/* Address: 0x100b48a50 | SentryScope::setEnvironment: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryScope::setEnvironment_(ID param_1,SEL param_2,ID param_3)

{
  ID self;
  ID IVar1;
  long lVar2;
  ID IVar3;
  undefined8 local_110;
  long lStack_108;
  long *local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_100ea82f0;
  objc_stub::FUN_100c0b920(param_1,param_3);
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  local_100 = (long *)0x0;
  self = objc_stub::FUN_100c075a0(param_1);
  IVar1 = objc_stub::countByEnumeratingWithState_objects_count_(self,&local_110,auStack_c8,0x10);
  if (IVar1 != 0) {
    lVar2 = *local_100;
    do {
      IVar3 = 0;
      do {
        if (*local_100 != lVar2) {
          _objc_enumerationMutation(self);
        }
        objc_stub::FUN_100c0b900(*(ID *)(lStack_108 + IVar3 * 8),param_3);
        IVar3 = IVar3 + 1;
      } while (IVar1 != IVar3);
      IVar1 = objc_stub::countByEnumeratingWithState_objects_count_(self,&local_110,auStack_c8,0x10)
      ;
    } while (IVar1 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}



/* Address: 0x100b48b6c | SentryScope::setFingerprint: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryScope::setFingerprint_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  ID self;
  ID IVar2;
  ID IVar3;
  ID self_00;
  long lVar4;
  ID IVar5;
  undefined8 local_130;
  long lStack_128;
  long *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  _objc_sync_enter();
  objc_stub::FUN_100c08ee0(*(ID *)(param_1 + 0x88));
  if (param_3 != 0) {
    objc_stub::FUN_100bfd740(*(ID *)(param_1 + 0x88),param_3);
  }
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (long *)0x0;
  self = objc_stub::FUN_100c075a0(param_1);
  IVar2 = objc_stub::countByEnumeratingWithState_objects_count_(self,&local_130,auStack_e8,0x10);
  if (IVar2 != 0) {
    lVar4 = *local_120;
    do {
      IVar5 = 0;
      do {
        if (*local_120 != lVar4) {
          _objc_enumerationMutation(self);
        }
        self_00 = *(ID *)(lStack_128 + IVar5 * 8);
        IVar3 = objc_stub::copy(*(ID *)(param_1 + 0x88));
        objc_stub::FUN_100c0bc60(self_00,IVar3);
        IVar5 = IVar5 + 1;
      } while (IVar2 != IVar5);
      IVar2 = objc_stub::countByEnumeratingWithState_objects_count_(self,&local_130,auStack_e8,0x10)
      ;
    } while (IVar2 != 0);
  }
  _objc_sync_exit(uVar1);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}



/* Address: 0x100b48d04 | SentryScope::fingerprints */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryScope::fingerprints(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  ID IVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  _objc_sync_enter();
  IVar2 = objc_stub::copy(*(ID *)(param_1 + 0x88));
  _objc_sync_exit(uVar1);
  return IVar2;
}



/* Address: 0x100b48d64 | SentryScope::setCurrentScreen: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryScope::setCurrentScreen_(ID param_1,SEL param_2,ID param_3)

{
  ID self;
  ID IVar1;
  ID IVar2;
  ID self_00;
  long lVar3;
  ID IVar4;
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
  *(ID *)(param_1 + 0xb0) = param_3;
  lStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  local_110 = (long *)0x0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  self = objc_stub::FUN_100c075a0(param_1);
  IVar1 = objc_stub::countByEnumeratingWithState_objects_count_(self,&local_120,auStack_d8,0x10);
  if (IVar1 != 0) {
    lVar3 = *local_110;
    do {
      IVar4 = 0;
      do {
        if (*local_110 != lVar3) {
          _objc_enumerationMutation(self);
        }
        self_00 = *(ID *)(lStack_118 + IVar4 * 8);
        IVar2 = objc_stub::respondsToSelector_(self_00,"setCurrentScreen:");
        if ((int)IVar2 != 0) {
          objc_stub::FUN_100c0b300(self_00,param_3);
        }
        IVar4 = IVar4 + 1;
      } while (IVar1 != IVar4);
      IVar1 = objc_stub::countByEnumeratingWithState_objects_count_(self,&local_120,auStack_d8,0x10)
      ;
    } while (IVar1 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}



/* Address: 0x100b48ea8 | SentryScope::setLevel: */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryScope::setLevel_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  ID self;
  ID IVar1;
  long lVar2;
  ID IVar3;
  undefined8 local_110;
  long lStack_108;
  long *local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_100ea82f0;
  objc_stub::FUN_100c0c680(param_1);
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  local_100 = (long *)0x0;
  self = objc_stub::FUN_100c075a0(param_1);
  IVar1 = objc_stub::countByEnumeratingWithState_objects_count_(self,&local_110,auStack_c8,0x10);
  if (IVar1 != 0) {
    lVar2 = *local_100;
    do {
      IVar3 = 0;
      do {
        if (*local_100 != lVar2) {
          _objc_enumerationMutation(self);
        }
        objc_stub::setLevel_(*(ID *)(lStack_108 + IVar3 * 8),param_3);
        IVar3 = IVar3 + 1;
      } while (IVar1 != IVar3);
      IVar1 = objc_stub::countByEnumeratingWithState_objects_count_(self,&local_110,auStack_c8,0x10)
      ;
    } while (IVar1 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}



/* Address: 0x100b48fac | SentryScope::includeAttachment: */

/* Function Stack Size: 0x18 bytes */

ID __objc_msgSend_stub SentryScope::includeAttachment_(ID self,...)

{
  (*(code *)PTR__objc_msgSend_100ea81a8)(self,"addAttachment:");
  return self;
}



/* Address: 0x100b48fb0 | SentryScope::addAttachment: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryScope::addAttachment_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  _objc_sync_enter();
  objc_stub::addObject_(*(ID *)(param_1 + 0x50),param_3);
  _objc_sync_exit(uVar1);
  return;
}


