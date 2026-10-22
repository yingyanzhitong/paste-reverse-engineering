/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100b27f88 | SentryHubInternal::captureFatalEvent: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryHubInternal::captureFatalEvent_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
  IVar1 = objc_stub::scope(param_1);
  objc_stub::FUN_100bfef40(param_1,param_3,IVar1);
  return;
}



/* Address: 0x100b27fe8 | SentryHubInternal::captureFatalEvent:withScope: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_unsafeClaimAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void SentryHubInternal::captureFatalEvent_withScope_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID self;
  ID self_00;
  ID IVar1;
  
  objc_stub::FUN_100c0c460(param_3,1);
  self = objc_stub::FUN_100bff480(param_1);
  if (self != 0) {
    self_00 = objc_stub::fileManager(self);
    IVar1 = objc_stub::FUN_100c08860(self_00);
    if (IVar1 == 0) {
      objc_stub::FUN_100bfef40(self,param_3,param_4);
    }
    else {
      objc_stub::FUN_100bfef60(self,param_3,IVar1,param_4);
      objc_stub::FUN_100c00ea0(self_00);
    }
  }
  return;
}



/* Address: 0x100b280e0 | SentryHubInternal::captureTransaction:withScope: */

/* Function Stack Size: 0x20 bytes */

void SentryHubInternal::captureTransaction_withScope_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  objc_stub::captureTransaction_withScope_additionalEnvelopeItems_
            (param_1,param_3,param_4,*(undefined8 *)PTR____NSArray0___100ea9b00);
  return;
}



/* Address: 0x100b280f0 | SentryHubInternal::captureTransaction:withScope:additionalEnvelopeItems: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x28 bytes */

void SentryHubInternal::captureTransaction_withScope_additionalEnvelopeItems_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  ID IVar1;
  ID IVar2;
  undefined *local_88;
  undefined8 local_80;
  code *local_78;
  undefined *puStack_70;
  ID local_68;
  ID local_60;
  ID local_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  IVar1 = objc_stub::FUN_100c108e0(param_3);
  IVar1 = objc_stub::FUN_100c098c0(IVar1);
  if (IVar1 == 1) {
    _objc_initWeak(auStack_48,param_1);
    IVar1 = objc_stub::FUN_100c01440(param_1);
    local_88 = PTR___NSConcreteStackBlock_100ea82a0;
    local_80 = 0xc2000000;
    local_78 = FUN_100b282f0;
    puStack_70 = &DAT_100f34908;
    _objc_copyWeak(auStack_50,auStack_48);
    local_68 = param_3;
    local_60 = param_4;
    local_58 = param_5;
    objc_stub::dispatchAsyncWithBlock_(IVar1,&local_88);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  else {
    IVar1 = objc_stub::FUN_100bff480(param_1);
    objc_stub::recordLostEvent_reason_(IVar1,4,2);
    IVar1 = objc_stub::FUN_100bff480(param_1);
    IVar2 = objc_stub::FUN_100c0f0a0(param_3);
    IVar2 = objc_stub::count(IVar2);
    objc_stub::recordLostEvent_reason_quantity_(IVar1,0xb,2,IVar2 + 1);
  }
  return;
}



/* Address: 0x100b282f0 | FUN_100b282f0 */

/* WARNING: Function: _objc_loadWeakRetained replaced with injection: _objc_load_fixup */
/* WARNING: Function: _objc_unsafeClaimAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b282f0(long param_1)

{
  objc_stub::captureEvent_withScope_additionalEnvelopeItems_
            (*(ID *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28)
             ,*(undefined8 *)(param_1 + 0x30));
  return 0;
}



/* Address: 0x100b28330 | FUN_100b28330 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100b28330(long param_1,long param_2)

{
  _objc_copyWeak(param_1 + 0x38,param_2 + 0x38);
  return;
}



/* Address: 0x100b28370 | FUN_100b28370 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b28370(long param_1)

{
  _objc_destroyWeak(param_1 + 0x38);
  return 0;
}



/* Address: 0x100b283a8 | SentryHubInternal::saveCrashTransaction: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryHubInternal::saveCrashTransaction_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = objc_stub::FUN_100c108e0(param_3);
  IVar1 = objc_stub::FUN_100c098c0(IVar1);
  if ((IVar1 == 1) && (IVar1 = objc_stub::FUN_100bff480(param_1), IVar1 != 0)) {
    IVar2 = objc_stub::scope(param_1);
    objc_stub::FUN_100c099c0(IVar1,param_3,IVar2);
  }
  return;
}



/* Address: 0x100b28450 | SentryHubInternal::captureEvent: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryHubInternal::captureEvent_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
  IVar1 = objc_stub::scope(param_1);
  IVar1 = objc_stub::FUN_100bfee40(param_1,param_3,IVar1);
  return IVar1;
}



/* Address: 0x100b284c4 | SentryHubInternal::captureEvent:withScope: */

/* Function Stack Size: 0x20 bytes */

ID SentryHubInternal::captureEvent_withScope_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  
  IVar1 = objc_stub::captureEvent_withScope_additionalEnvelopeItems_
                    (param_1,param_3,param_4,*(undefined8 *)PTR____NSArray0___100ea9b00);
  return IVar1;
}



/* Address: 0x100b284d4 | SentryHubInternal::captureEvent:withScope:additionalEnvelopeItems: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x28 bytes */

ID SentryHubInternal::captureEvent_withScope_additionalEnvelopeItems_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  ID IVar1;
  
  IVar1 = objc_stub::FUN_100bff480(param_1);
  if (IVar1 == 0) {
    IVar1 = objc_stub::FUN_100c01800((ID)&objc::class_t::SentryId);
  }
  else {
    IVar1 = objc_stub::captureEvent_withScope_additionalEnvelopeItems_
                      (IVar1,param_3,param_4,param_5);
  }
  return IVar1;
}



/* Address: 0x100b285a0 | SentryHubInternal::captureReplayEvent:replayRecording:video: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x28 bytes */

void SentryHubInternal::captureReplayEvent_replayRecording_video_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  ID self;
  ID IVar1;
  
  self = objc_stub::FUN_100bff480(param_1);
  IVar1 = objc_stub::scope(param_1);
  objc_stub::FUN_100bfefe0(self,param_3,param_4,param_5,IVar1);
  return;
}



/* Address: 0x100b2865c | SentryHubInternal::startTransactionWithName:operation: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID SentryHubInternal::startTransactionWithName_operation_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  class_t *self;
  
  self = &objc::class_t::SentryTransactionContext;
  _objc_alloc();
  IVar1 = objc_stub::FUN_100c045e0((ID)self,param_3,0,param_4,&cf_manual);
  IVar1 = objc_stub::FUN_100c0f540(param_1,IVar1);
  return IVar1;
}



/* Address: 0x100b28700 | SentryHubInternal::startTransactionWithName:operation:bindToScope: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x24 bytes */

ID SentryHubInternal::startTransactionWithName_operation_bindToScope_
             (ID param_1,SEL param_2,ID param_3,ID param_4,bool param_5)

{
  ID IVar1;
  class_t *self;
  
  self = &objc::class_t::SentryTransactionContext;
  _objc_alloc();
  IVar1 = objc_stub::FUN_100c045e0((ID)self,param_3,0,param_4,&cf_manual);
  IVar1 = objc_stub::FUN_100c0f560(param_1,IVar1,(ulong)param_5);
  return IVar1;
}



/* Address: 0x100b287b4 | SentryHubInternal::startTransactionWithContext: */

/* Function Stack Size: 0x18 bytes */

ID SentryHubInternal::startTransactionWithContext_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
  IVar1 = objc_stub::FUN_100c0f5c0(param_1,param_3,*(undefined8 *)PTR____NSDictionary0___100ea9b08);
  return IVar1;
}



/* Address: 0x100b287c4 | SentryHubInternal::startTransactionWithContext:bindToScope: */

/* Function Stack Size: 0x1c bytes */

ID SentryHubInternal::startTransactionWithContext_bindToScope_
             (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  ID IVar1;
  
  IVar1 = objc_stub::FUN_100c0f580
                    (param_1,param_3,(ulong)param_4,*(undefined8 *)PTR____NSDictionary0___100ea9b08)
  ;
  return IVar1;
}



/* Address: 0x100b287d4 | SentryHubInternal::startTransactionWithContext:customSamplingContext: */

/* Function Stack Size: 0x20 bytes */

ID SentryHubInternal::startTransactionWithContext_customSamplingContext_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  
  IVar1 = objc_stub::FUN_100c0f580(param_1,param_3,0,param_4);
  return IVar1;
}



/* Address: 0x100b287e0 | SentryHubInternal::startTransactionWithContext:bindToScope:customSamplingContext: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x24 bytes */

ID SentryHubInternal::startTransactionWithContext_bindToScope_customSamplingContext_
             (ID param_1,SEL param_2,ID param_3,bool param_4,ID param_5)

{
  ID IVar1;
  
  IVar1 = objc_stub::defaultConfiguration((ID)&objc::class_t::SentryTracerConfiguration);
  IVar1 = objc_stub::FUN_100c0f5a0(param_1,param_3,(ulong)param_4,param_5,IVar1);
  return IVar1;
}



/* Address: 0x100b28888 | SentryHubInternal::transactionContext:withSampled:sampleRate:sampleRand: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x30 bytes */

ID SentryHubInternal::transactionContext_withSampled_sampleRate_sampleRand_
             (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4,ID param_5,ID param_6)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  ID IVar7;
  ID IVar8;
  ID IVar9;
  ID IVar10;
  class_t *self;
  
  self = &objc::class_t::SentryTransactionContext;
  _objc_alloc();
  IVar1 = objc_stub::name(param_3);
  IVar2 = objc_stub::FUN_100c070e0(param_3);
  IVar3 = objc_stub::operation(param_3);
  IVar4 = objc_stub::FUN_100c07860(param_3);
  IVar5 = objc_stub::FUN_100c10960(param_3);
  IVar6 = objc_stub::spanId(param_3);
  IVar7 = objc_stub::FUN_100c079e0(param_3);
  IVar8 = objc_stub::FUN_100c079c0(param_3);
  IVar9 = objc_stub::FUN_100c079a0(param_3);
  IVar10 = objc_stub::FUN_100c07980(param_3);
  IVar1 = objc_stub::FUN_100c04640
                    ((ID)self,IVar1,IVar2,IVar3,IVar4,IVar5,IVar6,IVar7,param_4,IVar8,param_5,IVar9,
                     param_6,IVar10);
  return IVar1;
}



/* Address: 0x100b28a5c | SentryHubInternal::startTransactionWithContext:bindToScope:customSamplingContext:configuration: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x2c bytes */

ID SentryHubInternal::startTransactionWithContext_bindToScope_customSamplingContext_configuration_
             (ID param_1,SEL param_2,ID param_3,bool param_4,ID param_5,ID param_6)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  class_t *pcVar4;
  
  pcVar4 = &objc::class_t::SentrySamplingContext;
  _objc_alloc();
  IVar1 = objc_stub::FUN_100c04f20((ID)pcVar4,param_3,param_5);
  IVar2 = objc_stub::FUN_100bff480(param_1);
  IVar2 = objc_stub::options(IVar2);
  FUN_100b4c3cc(IVar1,IVar2);
  IVar2 = objc_stub::FUN_100c00c40(IVar1);
  IVar3 = objc_stub::sampleRate(IVar1);
  IVar1 = objc_stub::sampleRand(IVar1);
  IVar2 = objc_stub::FUN_100c10ae0(param_1,param_3,IVar2,IVar3,IVar1);
  pcVar4 = &objc::class_t::SentryTracer;
  _objc_alloc();
  IVar2 = objc_stub::FUN_100c04f40((ID)pcVar4,IVar2,param_1,param_6);
  if (param_4 != 0) {
    IVar1 = objc_stub::scope(param_1);
    objc_stub::FUN_100c0dc60(IVar1,IVar2);
  }
  return IVar2;
}



/* Address: 0x100b28c18 | SentryHubInternal::captureMessage: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryHubInternal::captureMessage_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
  IVar1 = objc_stub::scope(param_1);
  IVar1 = objc_stub::FUN_100bfefa0(param_1,param_3,IVar1);
  return IVar1;
}



/* Address: 0x100b28c8c | SentryHubInternal::captureMessage:withScope: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID SentryHubInternal::captureMessage_withScope_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  
  IVar1 = objc_stub::FUN_100bff480(param_1);
  if (IVar1 == 0) {
    IVar1 = objc_stub::FUN_100c01800((ID)&objc::class_t::SentryId);
  }
  else {
    IVar1 = objc_stub::FUN_100bfefa0(IVar1,param_3,param_4);
  }
  return IVar1;
}



/* Address: 0x100b28d34 | SentryHubInternal::captureMessage:withScope:attachAllThreads: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x28 bytes */

ID SentryHubInternal::captureMessage_withScope_attachAllThreads_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  ID IVar1;
  
  IVar1 = objc_stub::FUN_100bff480(param_1);
  if (IVar1 == 0) {
    IVar1 = objc_stub::FUN_100c01800((ID)&objc::class_t::SentryId);
  }
  else {
    IVar1 = objc_stub::FUN_100bfefc0(IVar1,param_3,param_4,param_5);
  }
  return IVar1;
}



/* Address: 0x100b28e00 | SentryHubInternal::captureError: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryHubInternal::captureError_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
  IVar1 = objc_stub::scope(param_1);
  IVar1 = objc_stub::FUN_100bfede0(param_1,param_3,IVar1);
  return IVar1;
}



/* Address: 0x100b28e74 | SentryHubInternal::captureError:withScope: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID SentryHubInternal::captureError_withScope_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  
  IVar1 = objc_stub::FUN_100bff480(param_1);
  if (IVar1 == 0) {
    IVar1 = objc_stub::FUN_100c01800((ID)&objc::class_t::SentryId);
  }
  else {
    IVar1 = objc_stub::FUN_100bfede0(IVar1,param_3,param_4);
  }
  return IVar1;
}



/* Address: 0x100b28f1c | SentryHubInternal::captureError:withScope:attachAllThreads: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x28 bytes */

ID SentryHubInternal::captureError_withScope_attachAllThreads_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  ID IVar1;
  
  IVar1 = objc_stub::FUN_100bff480(param_1);
  if (IVar1 == 0) {
    IVar1 = objc_stub::FUN_100c01800((ID)&objc::class_t::SentryId);
  }
  else {
    IVar1 = objc_stub::FUN_100bfee00(IVar1,param_3,param_4,param_5);
  }
  return IVar1;
}



/* Address: 0x100b28fe8 | SentryHubInternal::captureException: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryHubInternal::captureException_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
  IVar1 = objc_stub::scope(param_1);
  IVar1 = objc_stub::FUN_100bfeec0(param_1,param_3,IVar1);
  return IVar1;
}



/* Address: 0x100b2905c | SentryHubInternal::captureException:withScope: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID SentryHubInternal::captureException_withScope_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  
  IVar1 = objc_stub::FUN_100bff480(param_1);
  if (IVar1 == 0) {
    IVar1 = objc_stub::FUN_100c01800((ID)&objc::class_t::SentryId);
  }
  else {
    IVar1 = objc_stub::FUN_100bfeec0(IVar1,param_3,param_4);
  }
  return IVar1;
}



/* Address: 0x100b29104 | SentryHubInternal::captureException:withScope:attachAllThreads: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x28 bytes */

ID SentryHubInternal::captureException_withScope_attachAllThreads_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  ID IVar1;
  
  IVar1 = objc_stub::FUN_100bff480(param_1);
  if (IVar1 == 0) {
    IVar1 = objc_stub::FUN_100c01800((ID)&objc::class_t::SentryId);
  }
  else {
    IVar1 = objc_stub::FUN_100bfeee0(IVar1,param_3,param_4,param_5);
  }
  return IVar1;
}



/* Address: 0x100b291d0 | SentryHubInternal::captureErrorEvent: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryHubInternal::captureErrorEvent_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID self;
  
  IVar1 = objc_stub::scope(param_1);
  self = objc_stub::FUN_100bff480(param_1);
  if (self == 0) {
    IVar1 = objc_stub::FUN_100c01800((ID)&objc::class_t::SentryId);
  }
  else {
    IVar1 = objc_stub::FUN_100bfee80(self,param_3,IVar1);
  }
  return IVar1;
}



/* Address: 0x100b2927c | SentryHubInternal::captureFeedback: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryHubInternal::captureFeedback_(ID param_1,SEL param_2,ID param_3)

{
  ID self;
  ID IVar1;
  
  self = objc_stub::FUN_100bff480(param_1);
  if (self != 0) {
    IVar1 = objc_stub::scope(param_1);
    objc_stub::FUN_100bfef80(self,param_3,IVar1);
  }
  return;
}



/* Address: 0x100b292fc | SentryHubInternal::captureSerializedFeedback:withEventId:attachments: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x28 bytes */

void SentryHubInternal::captureSerializedFeedback_withEventId_attachments_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  ID self;
  ID IVar1;
  
  self = objc_stub::FUN_100bff480(param_1);
  if (self != 0) {
    IVar1 = objc_stub::scope(param_1);
    objc_stub::FUN_100bff020(self,param_3,param_4,param_5,IVar1);
  }
  return;
}



/* Address: 0x100b293bc | SentryHubInternal::addBreadcrumb: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryHubInternal::addBreadcrumb_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  ID IVar2;
  ID IVar3;
  
  IVar2 = objc_stub::FUN_100bff480(param_1);
  IVar2 = objc_stub::options(IVar2);
  IVar3 = objc_stub::FUN_100c06a60(IVar2);
  if (IVar3 != 0) {
    IVar2 = objc_stub::FUN_100bfe460(IVar2);
    if (IVar2 != 0) {
      (**(code **)(IVar2 + 0x10))(IVar2,param_3);
      param_3 = IVar2;
    }
    iVar1 = 0;
    if (param_3 == 0) {
      FUN_100b3a1c0();
      if (iVar1 != 0) {
        FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryHub.m",
                      0x275,&cf_DiscardedBreadcrumbin_beforeBreadcrumb_);
      }
    }
    else {
      IVar2 = objc_stub::scope(param_1);
      objc_stub::FUN_100bfd480(IVar2,param_3);
    }
  }
  return;
}



/* Address: 0x100b294e0 | SentryHubInternal::getClient */

/* Function Stack Size: 0x10 bytes */

ID __objc_msgSend_stub SentryHubInternal::getClient(ID self,...)

{
  (*(code *)PTR__objc_msgSend_100ea81a8)(self,"client");
  return self;
}



/* Address: 0x100b294e4 | SentryHubInternal::bindClient: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryHubInternal::bindClient_(ID param_1,SEL param_2,ID param_3)

{
  ID self;
  
  self = objc_stub::FUN_100bff480(param_1);
  objc_stub::FUN_100c0d9c0(self,0);
  objc_stub::FUN_100c0ae20(param_1,param_3);
  if (param_3 != 0) {
    objc_stub::FUN_100c0d9c0(param_3,param_1);
  }
  return;
}



/* Address: 0x100b29558 | SentryHubInternal::scope */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryHubInternal::scope(ID param_1,SEL param_2)

{
  ID IVar1;
  class_t *self;
  
  _objc_sync_enter();
  IVar1 = *(ID *)(param_1 + 0x18);
  if (IVar1 == 0) {
    IVar1 = objc_stub::FUN_100bff480(param_1);
    self = &objc::class_t::SentryScope;
    if (IVar1 == 0) {
      _objc_alloc();
      IVar1 = objc_stub::init((ID)self);
      *(ID *)(param_1 + 0x18) = IVar1;
    }
    else {
      _objc_alloc();
      IVar1 = objc_stub::options(IVar1);
      IVar1 = objc_stub::FUN_100c06a60(IVar1);
      IVar1 = objc_stub::FUN_100c04520((ID)self,IVar1);
      *(ID *)(param_1 + 0x18) = IVar1;
    }
    objc_stub::FUN_100c01b80(*(ID *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x18));
    IVar1 = *(ID *)(param_1 + 0x18);
  }
  _objc_sync_exit(param_1);
  return IVar1;
}



/* Address: 0x100b2964c | SentryHubInternal::configureScope: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryHubInternal::configureScope_(ID param_1,SEL param_2,ID param_3,uint param_4)

{
  ID IVar1;
  
  IVar1 = objc_stub::scope(param_1,param_3,(ulong)param_4);
  if (*(long *)(param_1 + 0x20) != 0 && IVar1 != 0) {
    (**(code **)(param_3 + 0x10))(param_3,IVar1);
  }
  return;
}



/* Address: 0x100b296bc | SentryHubInternal::isIntegrationInstalled: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

bool SentryHubInternal::isIntegrationInstalled_(ID param_1,SEL param_2,CLASS param_3)

{
  undefined8 uVar1;
  ID self;
  ID IVar2;
  ID IVar3;
  bool bVar4;
  long lVar5;
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
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_sync_enter();
  lStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  local_110 = (long *)0x0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  self = *(ID *)(param_1 + 0x58);
  IVar2 = objc_stub::countByEnumeratingWithState_objects_count_(self,&local_120,auStack_d8,0x10);
  if (IVar2 != 0) {
    lVar5 = *local_110;
    do {
      IVar6 = 0;
      do {
        if (*local_110 != lVar5) {
          _objc_enumerationMutation(self);
        }
        IVar3 = objc_stub::isKindOfClass_(*(ID *)(lStack_118 + IVar6 * 8),param_3);
        if ((IVar3 & 1) != 0) {
          bVar4 = 1;
          goto LAB_100b2979c;
        }
        IVar6 = IVar6 + 1;
      } while (IVar2 != IVar6);
      IVar2 = objc_stub::countByEnumeratingWithState_objects_count_(self,&local_120,auStack_d8,0x10)
      ;
    } while (IVar2 != 0);
  }
  bVar4 = 0;
LAB_100b2979c:
  _objc_sync_exit(uVar1);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_58) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}



/* Address: 0x100b29814 | SentryHubInternal::getInstalledIntegration: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryHubInternal::getInstalledIntegration_(ID param_1,SEL param_2,CLASS param_3)

{
  undefined8 uVar1;
  ID self;
  ID IVar2;
  ID IVar3;
  ID self_00;
  long lVar4;
  ID IVar5;
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
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_sync_enter();
  lStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  local_110 = (long *)0x0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  self = *(ID *)(param_1 + 0x58);
  IVar2 = objc_stub::countByEnumeratingWithState_objects_count_(self,&local_120,auStack_d8,0x10);
  if (IVar2 != 0) {
    lVar4 = *local_110;
    do {
      IVar5 = 0;
      do {
        if (*local_110 != lVar4) {
          _objc_enumerationMutation(self);
        }
        self_00 = *(ID *)(lStack_118 + IVar5 * 8);
        IVar3 = objc_stub::isKindOfClass_(self_00,param_3);
        if ((IVar3 & 1) != 0) goto LAB_100b29900;
        IVar5 = IVar5 + 1;
      } while (IVar2 != IVar5);
      IVar2 = objc_stub::countByEnumeratingWithState_objects_count_(self,&local_120,auStack_d8,0x10)
      ;
    } while (IVar2 != 0);
  }
  self_00 = 0;
LAB_100b29900:
  _objc_sync_exit(uVar1);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_58) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return self_00;
}



/* Address: 0x100b29978 | SentryHubInternal::hasIntegration: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

bool SentryHubInternal::hasIntegration_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  ID IVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_sync_enter();
  IVar2 = objc_stub::FUN_100bffc80(*(ID *)(param_1 + 0x38),param_3);
  _objc_sync_exit(uVar1);
  return (bool)IVar2;
}



/* Address: 0x100b299f8 | SentryHubInternal::addInstalledIntegration:name: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void SentryHubInternal::addInstalledIntegration_name_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_sync_enter();
  objc_stub::addObject_(*(ID *)(param_1 + 0x58),param_3);
  objc_stub::addObject_(*(ID *)(param_1 + 0x38),param_4);
  _objc_sync_exit(uVar2);
  iVar1 = 0;
  FUN_100b3a1c0();
  if (iVar1 != 0) {
    FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryHub.m",0x2d1,
                  &cf_Integrationinstalled___);
  }
  return;
}



/* Address: 0x100b29abc | SentryHubInternal::removeAllIntegrations */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryHubInternal::removeAllIntegrations(ID param_1,SEL param_2)

{
  ID self;
  ID IVar1;
  ID IVar2;
  undefined8 uVar3;
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
  lStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (long *)0x0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  self = objc_stub::FUN_100c053e0(param_1);
  IVar1 = objc_stub::countByEnumeratingWithState_objects_count_(self,&local_130,auStack_e8,0x10);
  if (IVar1 != 0) {
    lVar4 = *local_120;
    do {
      IVar5 = 0;
      do {
        if (*local_120 != lVar4) {
          _objc_enumerationMutation(self);
        }
        self_00 = *(ID *)(lStack_128 + IVar5 * 8);
        IVar2 = objc_stub::respondsToSelector_(self_00,"uninstall");
        if ((int)IVar2 != 0) {
          objc_stub::FUN_100c10d80(self_00);
        }
        IVar5 = IVar5 + 1;
      } while (IVar1 != IVar5);
      IVar1 = objc_stub::countByEnumeratingWithState_objects_count_(self,&local_130,auStack_e8,0x10)
      ;
    } while (IVar1 != 0);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  _objc_sync_enter();
  objc_stub::FUN_100c08ee0(*(ID *)(param_1 + 0x58));
  objc_stub::FUN_100c08ee0(*(ID *)(param_1 + 0x38));
  _objc_sync_exit(uVar3);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}



/* Address: 0x100b29c28 | SentryHubInternal::installedIntegrations */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryHubInternal::installedIntegrations(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  ID IVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_sync_enter();
  IVar2 = objc_stub::copy(*(ID *)(param_1 + 0x58));
  _objc_sync_exit(uVar1);
  return IVar2;
}



/* Address: 0x100b29c88 | SentryHubInternal::installedIntegrationNames */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryHubInternal::installedIntegrationNames(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  ID IVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_sync_enter();
  IVar2 = objc_stub::copy(*(ID *)(param_1 + 0x38));
  _objc_sync_exit(uVar1);
  return IVar2;
}



/* Address: 0x100b29ce8 | SentryHubInternal::setUser: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryHubInternal::setUser_(ID param_1,SEL param_2,ID param_3)

{
  ID self;
  
  self = objc_stub::scope(param_1);
  if (self != 0) {
    objc_stub::FUN_100c0e6e0(self,param_3);
  }
  return;
}



/* Address: 0x100b29d40 | SentryHubInternal::storeEnvelope: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryHubInternal::storeEnvelope_(ID param_1,SEL param_2,ID param_3)

{
  ID self;
  ID IVar1;
  
  self = objc_stub::FUN_100bff480(param_1);
  if (self != 0) {
    IVar1 = objc_stub::FUN_100c10f40(param_1,param_3,0);
    objc_stub::storeEnvelope_(self,IVar1);
  }
  return;
}



/* Address: 0x100b29dc4 | SentryHubInternal::captureEnvelope: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryHubInternal::captureEnvelope_(ID param_1,SEL param_2,ID param_3)

{
  ID self;
  ID IVar1;
  
  self = objc_stub::FUN_100bff480(param_1);
  if (self != 0) {
    IVar1 = objc_stub::FUN_100c10f40(param_1,param_3,1);
    objc_stub::captureEnvelope_(self,IVar1);
  }
  return;
}



/* Address: 0x100b29e48 | SentryHubInternal::updateSessionState:startNewSession: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x1c bytes */

ID SentryHubInternal::updateSessionState_startNewSession_
             (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  int iVar1;
  ID IVar2;
  undefined8 uVar3;
  ID IVar4;
  undefined *self;
  class_t *pcVar5;
  byte local_51;
  
  local_51 = 1;
  IVar2 = objc_stub::items(param_3);
  IVar2 = objc_stub::FUN_100c01d00(param_1,IVar2,&local_51);
  if ((int)IVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    _objc_sync_enter();
    if (local_51 == 1) {
      IVar2 = objc_stub::FUN_100c03860(param_1);
    }
    else {
      IVar2 = objc_stub::copy(*(ID *)(param_1 + 0x50));
    }
    if (IVar2 == 0) {
      _objc_sync_exit(uVar3);
    }
    else {
      if ((local_51 & 1) == 0) {
        IVar4 = objc_stub::sharedInstance
                          ((ID)&objc::class_t::_TtC6Sentry25SentryDependencyContainer);
        IVar4 = objc_stub::FUN_100c00ac0(IVar4);
        IVar4 = objc_stub::date(IVar4);
        objc_stub::FUN_100c01a80(IVar2,IVar4);
        iVar1 = 0;
        FUN_100b3a1c0();
        if (iVar1 != 0) {
          objc_stub::FUN_100c00520(param_1,IVar2);
          FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryHub.m",
                        0x322,&cf_Endingsessionwithstatus___);
        }
        if (param_4 != 0) {
          *(undefined8 *)(param_1 + 0x50) = 0;
          objc_stub::FUN_100c0f480(param_1);
        }
      }
      _objc_sync_exit(uVar3);
      self = &_OBJC_CLASS___NSMutableArray;
      _objc_alloc();
      IVar4 = objc_stub::items(param_3);
      IVar4 = objc_stub::FUN_100c03ac0((ID)self,IVar4);
      pcVar5 = &objc::class_t::_TtC6Sentry18SentryEnvelopeItem;
      _objc_alloc();
      IVar2 = objc_stub::FUN_100c04b40((ID)pcVar5,IVar2);
      objc_stub::addObject_(IVar4,IVar2);
      pcVar5 = &objc::class_t::_TtC6Sentry14SentryEnvelope;
      _objc_alloc();
      IVar2 = objc_stub::FUN_100c033e0(param_3);
      param_3 = objc_stub::FUN_100c042c0((ID)pcVar5,IVar2,IVar4);
    }
  }
  return param_3;
}



/* Address: 0x100b2a0dc | SentryHubInternal::envelopeContainsEventWithErrorOrHigher:wasHandled: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

bool SentryHubInternal::envelopeContainsEventWithErrorOrHigher_wasHandled_
               (ID param_1,SEL param_2,ID param_3,bool *param_4)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ulong uVar4;
  bool bVar5;
  ID IVar6;
  ID self;
  long lVar7;
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
  lStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (long *)0x0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  IVar1 = objc_stub::countByEnumeratingWithState_objects_count_(param_3,&local_130,auStack_f0,0x10);
  if (IVar1 != 0) {
    lVar7 = *local_120;
    do {
      IVar6 = 0;
      do {
        if (*local_120 != lVar7) {
          _objc_enumerationMutation(param_3);
        }
        self = *(ID *)(lStack_128 + IVar6 * 8);
        IVar2 = objc_stub::type(self);
        IVar3 = objc_stub::FUN_100c01ea0((ID)&objc::class_t::_TtC6Sentry23SentryEnvelopeItemTypes);
        IVar2 = objc_stub::isEqualToString_(IVar2,IVar3);
        if ((int)IVar2 != 0) {
          IVar2 = objc_stub::data(self);
          if (IVar2 == 0) goto LAB_100b2a298;
          IVar2 = objc_stub::data(self);
          IVar2 = objc_stub::FUN_100c01100((ID)&objc::class_t::SentrySerialization,IVar2);
          if (IVar2 == 0) goto LAB_100b2a298;
          uVar4 = objc_stub::objectForKeyedSubscript_(IVar2,&cf_level);
          FUN_100b425d0();
          if (3 < uVar4) {
            IVar1 = objc_stub::FUN_100c01ec0(param_1,IVar2);
            *(char *)param_4 = (char)IVar1;
            bVar5 = 1;
            goto LAB_100b2a29c;
          }
        }
        IVar6 = IVar6 + 1;
      } while (IVar1 != IVar6);
      IVar1 = objc_stub::countByEnumeratingWithState_objects_count_
                        (param_3,&local_130,auStack_f0,0x10);
    } while (IVar1 != 0);
  }
LAB_100b2a298:
  bVar5 = 0;
LAB_100b2a29c:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return bVar5;
}



/* Address: 0x100b2a318 | SentryHubInternal::eventContainsOnlyHandledErrors: */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

bool SentryHubInternal::eventContainsOnlyHandledErrors_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  bool bVar4;
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
  undefined1 auStack_e8 [128];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  IVar1 = objc_stub::objectForKeyedSubscript_(param_3,&cf_exception);
  IVar1 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_values);
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (long *)0x0;
  IVar2 = objc_stub::countByEnumeratingWithState_objects_count_(IVar1,&local_130,auStack_e8,0x10);
  if (IVar2 != 0) {
    lVar5 = *local_120;
    do {
      IVar6 = 0;
      do {
        if (*local_120 != lVar5) {
          _objc_enumerationMutation(IVar1);
        }
        IVar3 = objc_stub::objectForKeyedSubscript_(*(ID *)(lStack_128 + IVar6 * 8),&cf_mechanism);
        IVar3 = objc_stub::objectForKeyedSubscript_(IVar3,&cf_handled);
        if ((IVar3 != 0) && (IVar3 = objc_stub::boolValue(IVar3), (int)IVar3 == 0)) {
          bVar4 = 0;
          goto LAB_100b2a47c;
        }
        IVar6 = IVar6 + 1;
      } while (IVar2 != IVar6);
      IVar2 = objc_stub::countByEnumeratingWithState_objects_count_
                        (IVar1,&local_130,auStack_e8,0x10);
    } while (IVar2 != 0);
  }
  bVar4 = 1;
LAB_100b2a47c:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_68) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}



/* Address: 0x100b2a4cc | SentryHubInternal::reportFullyDisplayed */

/* Function Stack Size: 0x10 bytes */

void SentryHubInternal::reportFullyDisplayed(ID param_1,SEL param_2)

{
  return;
}



/* Address: 0x100b2a4d0 | SentryHubInternal::createSessionDebugString: */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryHubInternal::createSessionDebugString_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined *self;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  
  if (param_3 == 0) {
    pcVar3 = &cf_Sessionisnil_;
  }
  else {
    IVar1 = objc_stub::serialize(param_3);
    IVar1 = objc_stub::dataWithJSONObject_options_error_
                      ((ID)&_OBJC_CLASS___NSJSONSerialization,IVar1,0,0);
    self = &_OBJC_CLASS___NSString;
    _objc_alloc();
    pcVar2 = (cfstringStruct *)objc_stub::initWithData_encoding_((ID)self,IVar1,4);
    pcVar3 = &cf_Failedtoencodesession;
    if (pcVar2 != (cfstringStruct *)0x0) {
      pcVar3 = pcVar2;
    }
  }
  return (ID)pcVar3;
}



/* Address: 0x100b2a58c | SentryHubInternal::flush: */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryHubInternal::flush_(ID param_1,SEL param_2,double param_3)

{
  ID self;
  
  self = objc_stub::FUN_100bff480(param_1);
  if (self != 0) {
    objc_stub::FUN_100c028c0(self,param_3);
  }
  return;
}



/* Address: 0x100b2a5d4 | SentryHubInternal::close */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

int SentryHubInternal::close(int param_1)

{
  int iVar1;
  ID self;
  
  self = objc_stub::FUN_100bff480((ulong)(uint)param_1);
  objc_stub::close(self);
  iVar1 = 0;
  FUN_100b3a1c0();
  if (iVar1 != 0) {
    iVar1 = 0xdbf683;
    FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryHub.m",0x37d,
                  &cf_ClosedtheHub_);
    return iVar1;
  }
  return 0;
}



/* Address: 0x100b2a630 | SentryHubInternal::registerSessionListener: */

/* WARNING: Function: _objc_storeWeak replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryHubInternal::registerSessionListener_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x48) = param_3;
  return;
}



/* Address: 0x100b2a63c | SentryHubInternal::unregisterSessionListener: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_loadWeakRetained replaced with injection: _objc_load_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_storeWeak replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryHubInternal::unregisterSessionListener_(ID param_1,SEL param_2,ID param_3)

{
  if (*(ID *)(param_1 + 0x48) != param_3) {
    return;
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  return;
}



/* Address: 0x100b2a6a8 | SentryHubInternal::captureLog: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryHubInternal::captureLog_(ID param_1,SEL param_2,ID param_3)

{
  ID self;
  ID IVar1;
  
  self = objc_stub::FUN_100bff480(param_1);
  if (self == 0) {
    FUN_100b3a1e0();
    if ((int)self != 0) {
      FUN_100b3a280("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryHub.m",0x392,
                    &cf_Noclientconfigured_Droppinglog_);
    }
  }
  else {
    IVar1 = objc_stub::scope(param_1);
    objc_stub::FUN_100bfd140(self,param_3,IVar1);
  }
  return;
}



/* Address: 0x100b2a74c | SentryHubInternal::trimmedInstalledIntegrationNames */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryHubInternal::trimmedInstalledIntegrationNames(ID param_1,SEL param_2)

{
  ID self;
  ID IVar1;
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
  undefined1 auStack_f0 [128];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  self = objc_stub::array((ID)&_OBJC_CLASS___NSMutableArray);
  lStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (long *)0x0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  IVar1 = objc_stub::currentHub((ID)&objc::class_t::SentrySDKInternal);
  IVar1 = objc_stub::FUN_100c053c0(IVar1);
  IVar2 = objc_stub::countByEnumeratingWithState_objects_count_(IVar1,&local_130,auStack_f0,0x10);
  if (IVar2 != 0) {
    lVar4 = *local_120;
    do {
      IVar5 = 0;
      do {
        if (*local_120 != lVar4) {
          _objc_enumerationMutation(IVar1);
        }
        IVar3 = objc_stub::stringByReplacingOccurrencesOfString_withString_
                          (*(ID *)(lStack_128 + IVar5 * 8),&cf_Sentry,&cf___);
        IVar3 = objc_stub::stringByReplacingOccurrencesOfString_withString_
                          (IVar3,&cf_Integration,&cf___);
        objc_stub::addObject_(self,IVar3);
        IVar5 = IVar5 + 1;
      } while (IVar2 != IVar5);
      IVar2 = objc_stub::countByEnumeratingWithState_objects_count_
                        (IVar1,&local_130,auStack_f0,0x10);
    } while (IVar2 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_70) {
    return self;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}



/* Address: 0x100b2a8ec | SentryHubInternal::setScope: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryHubInternal::setScope_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x18) = param_3;
  return;
}



/* Address: 0x100b2a8f8 | SentryHubInternal::client */

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryHubInternal::client(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x20);
}



/* Address: 0x100b2a904 | SentryHubInternal::setClient: */

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryHubInternal::setClient_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x20) = param_3;
  return;
}



/* Address: 0x100b2a90c | SentryHubInternal::dispatchQueue */

/* Function Stack Size: 0x10 bytes */

ID SentryHubInternal::dispatchQueue(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x28);
}



/* Address: 0x100b2a914 | SentryHubInternal::setDispatchQueue: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryHubInternal::setDispatchQueue_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x28) = param_3;
  return;
}



/* Address: 0x100b2a920 | SentryHubInternal::crashWrapper */

/* Function Stack Size: 0x10 bytes */

ID SentryHubInternal::crashWrapper(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x30);
}


