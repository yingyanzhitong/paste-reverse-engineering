/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100b37d94 | FUN_100b37d94 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b37d94(long param_1)

{
  long lVar1;
  class_t *self;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  
  lVar1 = param_1;
  FUN_100b3a1c0();
  if ((int)lVar1 != 0) {
    FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentrySDKInternal.m",
                  0x101,&cf_SDKmainthreadinitstarted___);
  }
  self = &objc::class_t::SentryHubInternal;
  _objc_alloc();
  IVar2 = objc_stub::initWithClient_andScope_
                    ((ID)self,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  SentrySDKInternal::setCurrentHub_((ID)&objc::class_t::SentrySDKInternal,IVar2);
  IVar3 = objc_stub::sharedInstance((ID)&objc::class_t::_TtC6Sentry25SentryDependencyContainer);
  IVar3 = objc_stub::crashWrapper(IVar3);
  objc_stub::startBinaryImageCache(IVar3);
  IVar3 = objc_stub::sharedInstance((ID)&objc::class_t::_TtC6Sentry25SentryDependencyContainer);
  IVar3 = objc_stub::binaryImageCache(IVar3);
  IVar4 = objc_stub::debug(*(ID *)(param_1 + 0x30));
  objc_stub::start_(IVar3,IVar4);
  SentrySDKInternal::installIntegrations((ID)&objc::class_t::SentrySDKInternal);
  if ((DAT_1010e2e91 == '\x01') && ((DAT_1010e2e92 & 1) == 0)) {
    DAT_1010e2e90 = 1;
    IVar3 = objc_stub::onLastRunStatusDetermined(*(ID *)(param_1 + 0x30));
    if (IVar3 != 0) {
      IVar3 = objc_stub::onLastRunStatusDetermined(*(ID *)(param_1 + 0x30));
      (**(code **)(IVar3 + 0x10))(IVar3,1,0);
    }
  }
  FUN_100b4f828(*(undefined8 *)(param_1 + 0x30),IVar2);
  return 0;
}



/* Address: 0x100b37f14 | SentrySDKInternal::captureFatalEvent: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentrySDKInternal::captureFatalEvent_(ID param_1,SEL param_2,ID param_3)

{
  ID self;
  
  self = objc_stub::currentHub((ID)&objc::class_t::SentrySDKInternal);
  objc_stub::FUN_100bfef20(self,param_3);
  return;
}



/* Address: 0x100b37f68 | SentrySDKInternal::captureFatalEvent:withScope: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void SentrySDKInternal::captureFatalEvent_withScope_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID self;
  
  self = objc_stub::currentHub((ID)&objc::class_t::SentrySDKInternal);
  objc_stub::FUN_100bfef40(self,param_3,param_4);
  return;
}



/* Address: 0x100b37fe0 | SentrySDKInternal::captureEvent: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentrySDKInternal::captureEvent_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
  IVar1 = objc_stub::currentHub((ID)&objc::class_t::SentrySDKInternal);
  IVar1 = objc_stub::scope(IVar1);
  IVar1 = objc_stub::FUN_100bfee40((ID)&objc::class_t::SentrySDKInternal,param_3,IVar1);
  return IVar1;
}



/* Address: 0x100b38070 | SentrySDKInternal::captureEvent:withScopeBlock: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID SentrySDKInternal::captureEvent_withScopeBlock_
             (ID param_1,SEL param_2,ID param_3,ID param_4,undefined4 param_5)

{
  ID IVar1;
  class_t *self;
  
  self = &objc::class_t::SentryScope;
  _objc_alloc();
  IVar1 = objc_stub::currentHub((ID)&objc::class_t::SentrySDKInternal);
  IVar1 = objc_stub::scope(IVar1);
  IVar1 = objc_stub::FUN_100c04ae0((ID)self,IVar1);
  (**(code **)(param_4 + 0x10))(param_4,IVar1);
  IVar1 = objc_stub::FUN_100bfee40((ID)&objc::class_t::SentrySDKInternal,param_3,IVar1);
  return IVar1;
}



/* Address: 0x100b38158 | SentrySDKInternal::captureEvent:withScope: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID SentrySDKInternal::captureEvent_withScope_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  
  IVar1 = objc_stub::currentHub((ID)&objc::class_t::SentrySDKInternal);
  IVar1 = objc_stub::FUN_100bfee40(IVar1,param_3,param_4);
  return IVar1;
}



/* Address: 0x100b381e4 | SentrySDKInternal::startTransactionWithName:operation: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID SentrySDKInternal::startTransactionWithName_operation_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  
  IVar1 = objc_stub::currentHub((ID)&objc::class_t::SentrySDKInternal);
  IVar1 = objc_stub::FUN_100c0f5e0(IVar1,param_3,param_4);
  return IVar1;
}



/* Address: 0x100b38270 | SentrySDKInternal::startTransactionWithName:operation:bindToScope: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x24 bytes */

ID SentrySDKInternal::startTransactionWithName_operation_bindToScope_
             (ID param_1,SEL param_2,ID param_3,ID param_4,bool param_5)

{
  ID IVar1;
  
  IVar1 = objc_stub::currentHub((ID)&objc::class_t::SentrySDKInternal);
  IVar1 = objc_stub::FUN_100c0f600(IVar1,param_3,param_4,(ulong)param_5);
  return IVar1;
}



/* Address: 0x100b38304 | SentrySDKInternal::startTransactionWithContext: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentrySDKInternal::startTransactionWithContext_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
  IVar1 = objc_stub::currentHub((ID)&objc::class_t::SentrySDKInternal);
  IVar1 = objc_stub::FUN_100c0f540(IVar1,param_3);
  return IVar1;
}



/* Address: 0x100b38374 | SentrySDKInternal::startTransactionWithContext:bindToScope: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x1c bytes */

ID SentrySDKInternal::startTransactionWithContext_bindToScope_
             (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  ID IVar1;
  
  IVar1 = objc_stub::currentHub((ID)&objc::class_t::SentrySDKInternal);
  IVar1 = objc_stub::FUN_100c0f560(IVar1,param_3,(ulong)param_4);
  return IVar1;
}



/* Address: 0x100b383ec | SentrySDKInternal::startTransactionWithContext:bindToScope:customSamplingContext: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x24 bytes */

ID SentrySDKInternal::startTransactionWithContext_bindToScope_customSamplingContext_
             (ID param_1,SEL param_2,ID param_3,bool param_4,ID param_5)

{
  ID IVar1;
  
  IVar1 = objc_stub::currentHub((ID)&objc::class_t::SentrySDKInternal);
  IVar1 = objc_stub::FUN_100c0f580(IVar1,param_3,(ulong)param_4,param_5);
  return IVar1;
}



/* Address: 0x100b38480 | SentrySDKInternal::startTransactionWithContext:customSamplingContext: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID SentrySDKInternal::startTransactionWithContext_customSamplingContext_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  
  IVar1 = objc_stub::currentHub((ID)&objc::class_t::SentrySDKInternal);
  IVar1 = objc_stub::FUN_100c0f5c0(IVar1,param_3,param_4);
  return IVar1;
}



/* Address: 0x100b3850c | SentrySDKInternal::captureError: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentrySDKInternal::captureError_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
  IVar1 = objc_stub::currentHub((ID)&objc::class_t::SentrySDKInternal);
  IVar1 = objc_stub::scope(IVar1);
  IVar1 = objc_stub::FUN_100bfede0((ID)&objc::class_t::SentrySDKInternal,param_3,IVar1);
  return IVar1;
}



/* Address: 0x100b3859c | SentrySDKInternal::captureError:withScopeBlock: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID SentrySDKInternal::captureError_withScopeBlock_
             (ID param_1,SEL param_2,ID param_3,ID param_4,undefined4 param_5)

{
  ID IVar1;
  class_t *self;
  
  self = &objc::class_t::SentryScope;
  _objc_alloc();
  IVar1 = objc_stub::currentHub((ID)&objc::class_t::SentrySDKInternal);
  IVar1 = objc_stub::scope(IVar1);
  IVar1 = objc_stub::FUN_100c04ae0((ID)self,IVar1);
  (**(code **)(param_4 + 0x10))(param_4,IVar1);
  IVar1 = objc_stub::FUN_100bfede0((ID)&objc::class_t::SentrySDKInternal,param_3,IVar1);
  return IVar1;
}



/* Address: 0x100b38684 | SentrySDKInternal::captureError:withScope: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID SentrySDKInternal::captureError_withScope_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  
  IVar1 = objc_stub::currentHub((ID)&objc::class_t::SentrySDKInternal);
  IVar1 = objc_stub::FUN_100bfede0(IVar1,param_3,param_4);
  return IVar1;
}



/* Address: 0x100b38710 | SentrySDKInternal::captureException: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentrySDKInternal::captureException_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
  IVar1 = objc_stub::currentHub((ID)&objc::class_t::SentrySDKInternal);
  IVar1 = objc_stub::scope(IVar1);
  IVar1 = objc_stub::FUN_100bfeec0((ID)&objc::class_t::SentrySDKInternal,param_3,IVar1);
  return IVar1;
}



/* Address: 0x100b387a0 | SentrySDKInternal::captureException:withScopeBlock: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID SentrySDKInternal::captureException_withScopeBlock_
             (ID param_1,SEL param_2,ID param_3,ID param_4,undefined4 param_5)

{
  ID IVar1;
  class_t *self;
  
  self = &objc::class_t::SentryScope;
  _objc_alloc();
  IVar1 = objc_stub::currentHub((ID)&objc::class_t::SentrySDKInternal);
  IVar1 = objc_stub::scope(IVar1);
  IVar1 = objc_stub::FUN_100c04ae0((ID)self,IVar1);
  (**(code **)(param_4 + 0x10))(param_4,IVar1);
  IVar1 = objc_stub::FUN_100bfeec0((ID)&objc::class_t::SentrySDKInternal,param_3,IVar1);
  return IVar1;
}



/* Address: 0x100b38888 | SentrySDKInternal::captureException:withScope: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID SentrySDKInternal::captureException_withScope_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  
  IVar1 = objc_stub::currentHub((ID)&objc::class_t::SentrySDKInternal);
  IVar1 = objc_stub::FUN_100bfeec0(IVar1,param_3,param_4);
  return IVar1;
}



/* Address: 0x100b38914 | SentrySDKInternal::captureMessage: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentrySDKInternal::captureMessage_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
  IVar1 = objc_stub::currentHub((ID)&objc::class_t::SentrySDKInternal);
  IVar1 = objc_stub::scope(IVar1);
  IVar1 = objc_stub::FUN_100bfefa0((ID)&objc::class_t::SentrySDKInternal,param_3,IVar1);
  return IVar1;
}



/* Address: 0x100b389a4 | SentrySDKInternal::captureMessage:withScopeBlock: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID SentrySDKInternal::captureMessage_withScopeBlock_
             (ID param_1,SEL param_2,ID param_3,ID param_4,undefined4 param_5)

{
  ID IVar1;
  class_t *self;
  
  self = &objc::class_t::SentryScope;
  _objc_alloc();
  IVar1 = objc_stub::currentHub((ID)&objc::class_t::SentrySDKInternal);
  IVar1 = objc_stub::scope(IVar1);
  IVar1 = objc_stub::FUN_100c04ae0((ID)self,IVar1);
  (**(code **)(param_4 + 0x10))(param_4,IVar1);
  IVar1 = objc_stub::FUN_100bfefa0((ID)&objc::class_t::SentrySDKInternal,param_3,IVar1);
  return IVar1;
}



/* Address: 0x100b38a8c | SentrySDKInternal::captureMessage:withScope: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID SentrySDKInternal::captureMessage_withScope_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  
  IVar1 = objc_stub::currentHub((ID)&objc::class_t::SentrySDKInternal);
  IVar1 = objc_stub::FUN_100bfefa0(IVar1,param_3,param_4);
  return IVar1;
}



/* Address: 0x100b38b18 | SentrySDKInternal::captureEnvelope: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentrySDKInternal::captureEnvelope_(ID param_1,SEL param_2,ID param_3)

{
  ID self;
  
  self = objc_stub::currentHub((ID)&objc::class_t::SentrySDKInternal);
  objc_stub::captureEnvelope_(self,param_3);
  return;
}



/* Address: 0x100b38b6c | SentrySDKInternal::storeEnvelope: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentrySDKInternal::storeEnvelope_(ID param_1,SEL param_2,ID param_3)

{
  ID self;
  
  self = objc_stub::currentHub((ID)&objc::class_t::SentrySDKInternal);
  objc_stub::storeEnvelope_(self,param_3);
  return;
}



/* Address: 0x100b38bc0 | SentrySDKInternal::captureSerializedFeedback:withEventId:attachments: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x28 bytes */

void SentrySDKInternal::captureSerializedFeedback_withEventId_attachments_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  ID self;
  
  self = objc_stub::currentHub((ID)&objc::class_t::SentrySDKInternal);
  objc_stub::FUN_100bff000(self,param_3,param_4,param_5);
  return;
}



/* Address: 0x100b38c54 | SentrySDKInternal::addBreadcrumb: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentrySDKInternal::addBreadcrumb_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  ID IVar2;
  
  IVar2 = objc_stub::isEnabled((ID)&objc::class_t::SentrySDKInternal);
  iVar1 = (int)IVar2;
  if (((IVar2 & 1) == 0) && (FUN_100b3a200(), iVar1 != 0)) {
    FUN_100b3a2f0("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentrySDKInternal.m",
                  0x1d8,&
                        cf_TheSDKisdisabled_soaddBreadcrumbdoesn_twork_PleaseensuretostarttheSDKbeforeaddingbreadcrumbs_
                 );
  }
  IVar2 = objc_stub::currentHub((ID)&objc::class_t::SentrySDKInternal);
  objc_stub::FUN_100bfd480(IVar2,param_3);
  return;
}



/* Address: 0x100b38cdc | SentrySDKInternal::configureScope: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentrySDKInternal::configureScope_(ID param_1,SEL param_2,ID param_3,uint param_4)

{
  ID self;
  
  self = objc_stub::currentHub((ID)&objc::class_t::SentrySDKInternal,param_3,(ulong)param_4);
  objc_stub::FUN_100bffa40(self,param_3);
  return;
}



/* Address: 0x100b38d30 | SentrySDKInternal::setUser: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentrySDKInternal::setUser_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  ID IVar2;
  
  IVar2 = objc_stub::isEnabled((ID)&objc::class_t::SentrySDKInternal);
  iVar1 = (int)IVar2;
  if (((IVar2 & 1) == 0) && (FUN_100b3a200(), iVar1 != 0)) {
    FUN_100b3a2f0("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentrySDKInternal.m",
                  0x1ec,&
                        cf_TheSDKisdisabled_sosetUserdoesn_twork_PleaseensuretostarttheSDKbeforesettingtheuser_
                 );
  }
  IVar2 = objc_stub::currentHub((ID)&objc::class_t::SentrySDKInternal);
  objc_stub::FUN_100c0e6e0(IVar2,param_3);
  return;
}



/* Address: 0x100b38db8 | SentrySDKInternal::crashedLastRun */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

bool SentrySDKInternal::crashedLastRun(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = objc_stub::sharedInstance((ID)&objc::class_t::_TtC6Sentry25SentryDependencyContainer);
  IVar1 = objc_stub::crashReporter(IVar1);
  IVar1 = objc_stub::FUN_100c003a0(IVar1);
  return (bool)IVar1;
}



/* Address: 0x100b38e1c | SentrySDKInternal::lastRunStatus */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

long_long SentrySDKInternal::lastRunStatus(ID param_1,SEL param_2)

{
  long_long lVar1;
  ID IVar2;
  
  if (DAT_1010e2e91 == '\x01') {
    IVar2 = objc_stub::sharedInstance((ID)&objc::class_t::_TtC6Sentry25SentryDependencyContainer);
    IVar2 = objc_stub::crashWrapper(IVar2);
    IVar2 = objc_stub::FUN_100c003a0(IVar2);
    lVar1 = 1;
    if ((int)IVar2 != 0) {
      lVar1 = 2;
    }
    return lVar1;
  }
  return 0;
}



/* Address: 0x100b38ea0 | SentrySDKInternal::detectedStartUpCrash */

/* Function Stack Size: 0x10 bytes */

bool SentrySDKInternal::detectedStartUpCrash(ID param_1,SEL param_2)

{
  return (bool)DAT_1010e2e80;
}



/* Address: 0x100b38eac | SentrySDKInternal::setDetectedStartUpCrash: */

/* Function Stack Size: 0x14 bytes */

void SentrySDKInternal::setDetectedStartUpCrash_(ID param_1,SEL param_2,bool param_3)

{
  DAT_1010e2e80 = (char)param_3;
  return;
}



/* Address: 0x100b38eb8 | SentrySDKInternal::startSession */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void SentrySDKInternal::startSession(ID param_1,SEL param_2)

{
  ID self;
  
  self = objc_stub::currentHub((ID)&objc::class_t::SentrySDKInternal);
  objc_stub::FUN_100c0f480(self);
  return;
}



/* Address: 0x100b38ef0 | SentrySDKInternal::endSession */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void SentrySDKInternal::endSession(ID param_1,SEL param_2)

{
  ID self;
  
  self = objc_stub::currentHub((ID)&objc::class_t::SentrySDKInternal);
  objc_stub::FUN_100c01a40(self);
  return;
}



/* Address: 0x100b38f28 | SentrySDKInternal::installIntegrations */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void SentrySDKInternal::installIntegrations(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = objc_stub::currentHub((ID)&objc::class_t::SentrySDKInternal);
  IVar1 = objc_stub::getClient(IVar1);
  if (IVar1 != 0) {
    IVar1 = objc_stub::currentHub((ID)&objc::class_t::SentrySDKInternal);
    IVar1 = objc_stub::getClient(IVar1);
    IVar1 = objc_stub::options(IVar1);
    objc_stub::FUN_100c053a0((ID)&objc::class_t::_TtC6Sentry31SentrySwiftIntegrationInstaller,IVar1)
    ;
    return;
  }
  return;
}



/* Address: 0x100b38fe8 | SentrySDKInternal::reportFullyDisplayed */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void SentrySDKInternal::reportFullyDisplayed(ID param_1,SEL param_2)

{
  ID self;
  
  self = objc_stub::currentHub((ID)&objc::class_t::SentrySDKInternal);
  objc_stub::FUN_100c09360(self);
  return;
}



/* Address: 0x100b39020 | SentrySDKInternal::pauseAppHangTracking */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void SentrySDKInternal::pauseAppHangTracking(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = objc_stub::currentHub((ID)&objc::class_t::SentrySDKInternal);
  IVar2 = objc_stub::class((ID)&objc::class_t::_TtC6Sentry32SentryHangTrackerIntegrationObjC);
  IVar1 = objc_stub::FUN_100c02e80(IVar1,IVar2);
  objc_stub::FUN_100c07b00(IVar1);
  return;
}



/* Address: 0x100b39088 | SentrySDKInternal::resumeAppHangTracking */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void SentrySDKInternal::resumeAppHangTracking(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = objc_stub::currentHub((ID)&objc::class_t::SentrySDKInternal);
  IVar2 = objc_stub::class((ID)&objc::class_t::_TtC6Sentry32SentryHangTrackerIntegrationObjC);
  IVar1 = objc_stub::FUN_100c02e80(IVar1,IVar2);
  objc_stub::FUN_100c09600(IVar1);
  return;
}



/* Address: 0x100b390f0 | SentrySDKInternal::flush: */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentrySDKInternal::flush_(ID param_1,SEL param_2,double param_3)

{
  ID self;
  
  self = objc_stub::currentHub((ID)&objc::class_t::SentrySDKInternal);
  objc_stub::FUN_100c028c0(self,param_3);
  return;
}



/* Address: 0x100b39138 | SentrySDKInternal::close */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

int SentrySDKInternal::close(int param_1)

{
  int iVar1;
  ID IVar2;
  
  FUN_100b3a1c0();
  if (param_1 != 0) {
    FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentrySDKInternal.m",
                  0x245,&cf_StartingtocloseSDK_);
  }
  IVar2 = objc_stub::sharedInstance((ID)&objc::class_t::_TtC6Sentry25SentryDependencyContainer);
  IVar2 = objc_stub::dispatchQueueWrapper(IVar2);
  objc_stub::FUN_100c01480(IVar2,&PTR___NSConcreteGlobalBlock_100f34b38);
  iVar1 = 0;
  FUN_100b3a1c0();
  if (iVar1 != 0) {
    iVar1 = 0xdc1140;
    FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentrySDKInternal.m",
                  0x26c,&cf_SDKclosed_);
    return iVar1;
  }
  return 0;
}



/* Address: 0x100b391dc | FUN_100b391dc */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

undefined8 FUN_100b391dc(void)

{
  int iVar1;
  ID IVar2;
  ID IVar3;
  
  SentryContinuousProfiler::stop((ID)&objc::class_t::SentryContinuousProfiler);
  DAT_1010e2e60 = 0;
  IVar2 = SentrySDKInternal::currentHub((ID)&objc::class_t::SentrySDKInternal);
  IVar3 = objc_stub::removeAllIntegrations(IVar2);
  iVar1 = (int)IVar3;
  FUN_100b3a1c0();
  if (iVar1 != 0) {
    FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentrySDKInternal.m",
                  0x252,&cf_Uninstalledallintegrations_);
  }
  SentrySDKInternal::close(IVar2);
  objc_stub::bindClient_(IVar2,0);
  SentrySDKInternal::setCurrentHub_((ID)&objc::class_t::SentrySDKInternal,0);
  DAT_1010e2e91 = 0;
  DAT_1010e2e92 = 0;
  DAT_1010e2e90 = 0;
  IVar2 = objc_stub::sharedInstance((ID)&objc::class_t::_TtC6Sentry25SentryDependencyContainer);
  IVar2 = objc_stub::crashWrapper(IVar2);
  objc_stub::stopBinaryImageCache(IVar2);
  IVar2 = objc_stub::sharedInstance((ID)&objc::class_t::_TtC6Sentry25SentryDependencyContainer);
  IVar2 = objc_stub::binaryImageCache(IVar2);
  objc_stub::stop(IVar2);
  objc_stub::reset((ID)&objc::class_t::_TtC6Sentry25SentryDependencyContainer);
  return 0;
}



/* Address: 0x100b3930c | SentrySDKInternal::crash */

/* Function Stack Size: 0x10 bytes */

void SentrySDKInternal::crash(ID param_1,SEL param_2)

{
  uRam0000000000000000 = 0;
  return;
}



/* Address: 0x100b39318 | SentrySDKInternal::startProfiler */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

void SentrySDKInternal::startProfiler(ID param_1,SEL param_2)

{
  int iVar1;
  ID IVar2;
  ID IVar3;
  undefined8 uVar4;
  cfstringStruct *pcVar5;
  
  uVar4 = DAT_1010e2e70;
  _objc_sync_enter();
  IVar2 = DAT_1010e2e88;
  _objc_sync_exit(uVar4);
  IVar2 = objc_stub::FUN_100bff480(IVar2);
  IVar2 = objc_stub::options(IVar2);
  iVar1 = 0;
  if (IVar2 == 0) {
    FUN_100b3a1e0();
    if (iVar1 == 0) {
      return;
    }
    pcVar5 = &cf_Cannotstartprofilingwhenoptionsarenil_;
    uVar4 = 0x283;
  }
  else {
    IVar3 = objc_stub::profiling(IVar2);
    if (IVar3 != 0) {
      IVar2 = objc_stub::profiling(IVar2);
      IVar2 = objc_stub::lifecycle(IVar2);
      IVar3 = 0;
      if (IVar2 == 1) {
        FUN_100b3a1e0();
        if ((int)IVar3 == 0) {
          return;
        }
        pcVar5 = &
                 cf_Theprofilinglifecycleissettotrace_soyoucannotstartprofilesessionsmanually_SeeSentryProfileLifecycleformoreinformation_
        ;
        uVar4 = 0x28b;
        goto LAB_100b3948c;
      }
      FUN_100b43c58();
      IVar2 = objc_stub::FUN_100c083e0(IVar3);
      IVar2 = objc_stub::FUN_100c00c40(IVar2);
      iVar1 = 0;
      if (IVar2 != 1) {
        FUN_100b3a1c0();
        if (iVar1 == 0) {
          return;
        }
        FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentrySDKInternal.m"
                      ,0x293,&cf_Theprofilingsessionhasbeensampledout_noprofilingwilltakeplace_);
        return;
      }
    }
    IVar2 = objc_stub::FUN_100c056e0((ID)&objc::class_t::SentryContinuousProfiler);
    iVar1 = (int)IVar2;
    if (iVar1 == 0) {
      objc_stub::start((ID)&objc::class_t::SentryContinuousProfiler);
      return;
    }
    FUN_100b3a1e0();
    if (iVar1 == 0) {
      return;
    }
    pcVar5 = &cf_Thereisalreadyaprofilesessionrunning_;
    uVar4 = 0x299;
  }
LAB_100b3948c:
  FUN_100b3a280("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentrySDKInternal.m",
                uVar4,pcVar5);
  return;
}



/* Address: 0x100b394dc | SentrySDKInternal::stopProfiler */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

void SentrySDKInternal::stopProfiler(ID param_1,SEL param_2)

{
  int iVar1;
  ID IVar2;
  ID IVar3;
  undefined8 uVar4;
  cfstringStruct *pcVar5;
  
  FUN_100b43c58();
  IVar2 = objc_stub::isProfilingThisLaunch(param_1);
  uVar4 = DAT_1010e2e70;
  if ((int)IVar2 != 0) {
    IVar2 = objc_stub::profileOptions(param_1);
    iVar1 = 0;
    if (IVar2 == 0) {
      FUN_100b3a1e0();
      if (iVar1 == 0) {
        return;
      }
      pcVar5 = &
               cf_Thecurrentprofilerwasstartedonapplaunchandwasconfiguredasatransactionprofiler_whichcannotbestoppedmanually_TransactionprofilingisdeprecatedandwillberemovedinafutureSDKversion_
      ;
      uVar4 = 0x2aa;
    }
    else {
      IVar2 = objc_stub::profileOptions(param_1);
      IVar2 = objc_stub::lifecycle(IVar2);
      iVar1 = 0;
      if (IVar2 != 1) {
        FUN_100b3a1c0();
        if (iVar1 != 0) {
          FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentrySDKInternal.m"
                        ,0x2b5,&cf_StoppinglaunchUIprofilerwithmanuallifecycle_);
        }
        objc_stub::stop((ID)&objc::class_t::SentryContinuousProfiler);
        return;
      }
      FUN_100b3a1e0();
      if (iVar1 == 0) {
        return;
      }
      pcVar5 = &
               cf_Thelaunchprofilelifecyclewassettotrace_soyoucannotstopprofilesessionsmanually_SeeSentryProfileLifecycleformoreinformation_
      ;
      uVar4 = 0x2b1;
    }
    FUN_100b3a280("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentrySDKInternal.m",
                  uVar4,pcVar5);
    return;
  }
  _objc_sync_enter();
  IVar2 = DAT_1010e2e88;
  _objc_sync_exit(uVar4);
  IVar2 = objc_stub::FUN_100bff480(IVar2);
  IVar2 = objc_stub::options(IVar2);
  iVar1 = 0;
  if (IVar2 == 0) {
    FUN_100b3a1e0();
    if (iVar1 == 0) {
      return;
    }
    pcVar5 = &cf_Cannotstopprofilingwhenoptionsarenil_;
    uVar4 = 0x2c0;
  }
  else {
    IVar3 = objc_stub::profiling(IVar2);
    if (IVar3 != 0) {
      IVar2 = objc_stub::profiling(IVar2);
      IVar2 = objc_stub::lifecycle(IVar2);
      iVar1 = 0;
      if (IVar2 == 1) {
        FUN_100b3a1e0();
        if (iVar1 == 0) {
          return;
        }
        pcVar5 = &
                 cf_Theprofilinglifecycleissettotrace_soyoucannotstopprofilesessionsmanually_SeeSentryProfileLifecycleformoreinformation_
        ;
        uVar4 = 0x2c6;
        goto LAB_100b396f8;
      }
    }
    IVar2 = objc_stub::FUN_100c056e0((ID)&objc::class_t::SentryContinuousProfiler);
    iVar1 = (int)IVar2;
    if ((IVar2 & 1) != 0) {
      objc_stub::stop((ID)&objc::class_t::SentryContinuousProfiler);
      return;
    }
    FUN_100b3a1e0();
    if (iVar1 == 0) {
      return;
    }
    pcVar5 = &cf_Noprofilesessiontostop_;
    uVar4 = 0x2cb;
  }
LAB_100b396f8:
  FUN_100b3a280("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentrySDKInternal.m",
                uVar4,pcVar5);
  return;
}



/* Address: 0x100b3971c | SentrySDKInternal::trimmedInstalledIntegrationNames */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentrySDKInternal::trimmedInstalledIntegrationNames(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = objc_stub::currentHub((ID)&objc::class_t::SentrySDKInternal);
  IVar1 = objc_stub::FUN_100c10c40(IVar1);
  return IVar1;
}



/* Address: 0x100b39768 | SentryId::empty */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryId::empty(ID param_1,SEL param_2)

{
  class_t *self;
  ID IVar1;
  
  self = &objc::class_t::SentryId;
  _objc_alloc();
  IVar1 = objc_stub::FUN_100c05120((ID)self,&cf_00000000_0000_0000_0000_000000000000);
  return IVar1;
}



/* Address: 0x100b39790 | SentryId::init */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryId::init(ID param_1,SEL param_2)

{
  ID self;
  ID IVar1;
  objc_super local_30;
  
  local_30.super_class = &objc::class_t::SentryId;
  local_30.receiver = param_1;
  self = _objc_msgSendSuper2(&local_30,"init");
  if (self != 0) {
    IVar1 = objc_stub::FUN_100bfd0e0((ID)&_OBJC_CLASS___NSUUID);
    objc_stub::FUN_100c0c0c0(self,IVar1);
  }
  return self;
}



/* Address: 0x100b39814 | SentryId::isEqual: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

bool SentryId::isEqual_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  
  IVar2 = objc_stub::class((ID)&objc::class_t::SentryId);
  IVar2 = objc_stub::isKindOfClass_(param_3,IVar2);
  if ((int)IVar2 == 0) {
    bVar1 = 0;
  }
  else {
    IVar2 = objc_stub::FUN_100c03520(param_1);
    IVar3 = objc_stub::FUN_100c03520(param_3);
    IVar2 = objc_stub::isEqual_(IVar2,IVar3);
    bVar1 = (bool)IVar2;
  }
  return bVar1;
}



/* Address: 0x100b398bc | SentryId::sentryIdString */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryId::sentryIdString(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = objc_stub::FUN_100c03520(param_1);
  IVar1 = objc_stub::FUN_100bfd100(IVar1);
  IVar1 = objc_stub::stringByReplacingOccurrencesOfString_withString_(IVar1,&cf__,&cf___);
  IVar1 = objc_stub::FUN_100c06700(IVar1);
  return IVar1;
}



/* Address: 0x100b39948 | SentryId::initWithUuid: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryId::initWithUuid_(ID param_1,SEL param_2,ID param_3)

{
  ID self;
  objc_super local_30;
  
  local_30.super_class = &objc::class_t::SentryId;
  local_30.receiver = param_1;
  self = _objc_msgSendSuper2(&local_30,"init");
  if (self != 0) {
    objc_stub::FUN_100c0c0c0(self,param_3);
  }
  return self;
}



/* Address: 0x100b399c4 | SentryId::initWithUUIDString: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryId::initWithUUIDString_(ID param_1,SEL param_2,ID param_3)

{
  ID self;
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  ulong uVar4;
  objc_super local_60;
  
  local_60.super_class = &objc::class_t::SentryId;
  local_60.receiver = param_1;
  self = _objc_msgSendSuper2(&local_60,"init");
  if (self != 0) {
    puVar1 = &_OBJC_CLASS___NSUUID;
    _objc_alloc();
    IVar2 = objc_stub::FUN_100c05120((ID)puVar1,param_3);
    if (IVar2 == 0) {
      IVar2 = objc_stub::length(param_3);
      if (IVar2 == 0x20) {
        IVar2 = objc_stub::FUN_100c0fb00((ID)&_OBJC_CLASS___NSMutableString,0x24);
        IVar3 = objc_stub::length(param_3);
        if (IVar3 != 0) {
          uVar4 = 0;
          do {
            if ((uVar4 - 8 >> 2 | uVar4 << 0x3e) < 4) {
              objc_stub::appendString_(IVar2,&cf__);
            }
            objc_stub::characterAtIndex_(param_3,uVar4);
            objc_stub::appendFormat_(IVar2,&cf__C);
            uVar4 = uVar4 + 1;
            IVar3 = objc_stub::length(param_3);
          } while (uVar4 < IVar3);
        }
        puVar1 = &_OBJC_CLASS___NSUUID;
        _objc_alloc();
        IVar2 = objc_stub::FUN_100c05120((ID)puVar1,IVar2);
        if (IVar2 != 0) {
          objc_stub::FUN_100c0c0c0(self,IVar2);
          return self;
        }
      }
      puVar1 = &_OBJC_CLASS___NSUUID;
      _objc_alloc();
      IVar2 = objc_stub::FUN_100c05120((ID)puVar1,&cf_00000000_0000_0000_0000_000000000000);
      if (IVar2 == 0) {
        IVar2 = objc_stub::FUN_100bfd0e0((ID)&_OBJC_CLASS___NSUUID);
        objc_stub::FUN_100c0c0c0(self,IVar2);
      }
      else {
        objc_stub::FUN_100c0c0c0(self,IVar2);
      }
    }
    else {
      objc_stub::FUN_100c0c0c0(self,IVar2);
    }
  }
  return self;
}



/* Address: 0x100b39bbc | SentryId::hash */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

unsigned_long_long SentryId::hash(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = objc_stub::FUN_100c03520(param_1);
  IVar1 = objc_stub::FUN_100c033c0(IVar1);
  return IVar1;
}



/* Address: 0x100b39bf8 | SentryId::description */

/* Function Stack Size: 0x10 bytes */

ID __objc_msgSend_stub SentryId::description(ID self,...)

{
  (*(code *)PTR__objc_msgSend_100ea81a8)(self,"sentryIdString");
  return self;
}



/* Address: 0x100b39bfc | SentryId::id */

/* Function Stack Size: 0x10 bytes */

ID SentryId::id(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 8);
}



/* Address: 0x100b39c04 | SentryId::setId: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryId::setId_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 8) = param_3;
  return;
}



/* Address: 0x100b39c10 | SentryId::.cxx_destruct */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryId::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



/* Address: 0x100b39c1c | SentryRequestOperation::initWithSession:request:completionHandler: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x28 bytes */

ID SentryRequestOperation::initWithSession_request_completionHandler_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,undefined4 param_6)

{
  ID self;
  ID IVar1;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  ID local_70;
  ID local_68;
  objc_super local_60;
  
  local_60.super_class = &objc::class_t::SentryRequestOperation;
  local_60.receiver = param_1;
  self = _objc_msgSendSuper2(&local_60,"init");
  if (self != 0) {
    objc_stub::FUN_100c0d6a0(self,param_4);
    IVar1 = objc_stub::request(self);
    local_90 = PTR___NSConcreteStackBlock_100ea82a0;
    local_88 = 0xc2000000;
    local_80 = FUN_100b39d74;
    puStack_78 = &DAT_100f34b58;
    local_70 = self;
    local_68 = param_5;
    IVar1 = objc_stub::dataTaskWithRequest_completionHandler_(param_3,IVar1,&local_90);
    objc_stub::FUN_100c0e080(self,IVar1);
  }
  return self;
}



/* Address: 0x100b39d74 | FUN_100b39d74 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b39d74(long param_1,long param_2,ID param_3,long param_4)

{
  int iVar1;
  ID IVar2;
  undefined *self;
  long lVar3;
  
  IVar2 = objc_stub::statusCode(param_3);
  iVar1 = (int)IVar2;
  FUN_100b3a1c0();
  if (iVar1 != 0) {
    FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryRequestOperation.m"
                  ,0x24,&cf_Requeststatus__ld);
  }
  IVar2 = SentrySDKInternal::currentHub((ID)&objc::class_t::SentrySDKInternal);
  IVar2 = objc_stub::getClient(IVar2);
  IVar2 = SentrySDKInternal::options(IVar2);
  IVar2 = objc_stub::debug(IVar2);
  iVar1 = 0;
  if (((int)IVar2 != 0) && (FUN_100b3a1c0(), iVar1 != 0)) {
    if (param_2 == 0) {
      iVar1 = 0xdc16dd;
      FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryRequestOperation.m"
                    ,0x2a,&cf_Requestresponse___);
      goto joined_r0x000100b39ea0;
    }
    self = &_OBJC_CLASS___NSString;
    _objc_alloc();
    objc_stub::initWithData_encoding_((ID)self,param_2,4);
    FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryRequestOperation.m"
                  ,0x2a,&cf_Requestresponse___);
  }
  iVar1 = 0;
joined_r0x000100b39ea0:
  if ((param_4 != 0) && (FUN_100b3a1f0(), iVar1 != 0)) {
    FUN_100b3a2b8("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryRequestOperation.m"
                  ,0x2e,&cf_Requestfailed___);
  }
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar3 != 0) {
    (**(code **)(lVar3 + 0x10))(lVar3,param_3,param_4);
  }
  objc_stub::completeOperation(*(ID *)(param_1 + 0x20));
  return 0;
}



/* Address: 0x100b39f4c | SentryRequestOperation::cancel */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryRequestOperation::cancel(ID param_1,SEL param_2)

{
  ID IVar1;
  objc_super local_30;
  
  IVar1 = objc_stub::FUN_100c10180(param_1);
  if (IVar1 != 0) {
    IVar1 = objc_stub::FUN_100c10180(param_1);
    objc_stub::cancel(IVar1);
  }
  local_30.super_class = &objc::class_t::SentryRequestOperation;
  local_30.receiver = param_1;
  _objc_msgSendSuper2(&local_30,"cancel");
  return;
}



/* Address: 0x100b39fc4 | SentryRequestOperation::main */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryRequestOperation::main(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = objc_stub::FUN_100c10180(param_1);
  if (IVar1 != 0) {
    IVar1 = objc_stub::FUN_100c10180(param_1);
    objc_stub::resume(IVar1);
    return;
  }
  return;
}



/* Address: 0x100b3a020 | SentryRequestOperation::task */

/* Function Stack Size: 0x10 bytes */

ID SentryRequestOperation::task(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_task);
}



/* Address: 0x100b3a030 | SentryRequestOperation::setTask: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryRequestOperation::setTask_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_task) = param_3;
  return;
}



/* Address: 0x100b3a044 | SentryRequestOperation::request */

/* Function Stack Size: 0x10 bytes */

ID SentryRequestOperation::request(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_request);
}



/* Address: 0x100b3a054 | SentryRequestOperation::setRequest: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryRequestOperation::setRequest_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_request) = param_3;
  return;
}



/* Address: 0x100b3a068 | SentryRequestOperation::.cxx_destruct */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryRequestOperation::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_request) = 0;
  *(undefined8 *)(param_1 + (long)_task) = 0;
  return;
}


