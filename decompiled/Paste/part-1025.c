/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100b1459c | SentryFileIOTrackerHelper::endTrackingFile */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryFileIOTrackerHelper::endTrackingFile(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  
  IVar1 = objc_stub::currentThread((ID)&_OBJC_CLASS___NSThread);
  IVar1 = objc_stub::FUN_100c10480(IVar1);
  IVar1 = objc_stub::objectForKey_(IVar1,&cf_SENTRY_TRACKING_COUNTER_KEY);
  if (IVar1 != 0) {
    IVar2 = objc_stub::intValue(IVar1);
    IVar3 = objc_stub::currentThread((ID)&_OBJC_CLASS___NSThread);
    IVar3 = objc_stub::FUN_100c10480(IVar3);
    if ((int)IVar2 < 2) {
      objc_stub::removeObjectForKey_(IVar3,&cf_SENTRY_TRACKING_COUNTER_KEY);
    }
    else {
      IVar1 = objc_stub::intValue(IVar1);
      IVar1 = objc_stub::numberWithInt_((ID)&_OBJC_CLASS___NSNumber,(ulong)((int)IVar1 - 1));
      objc_stub::setObject_forKey_(IVar3,IVar1,&cf_SENTRY_TRACKING_COUNTER_KEY);
    }
  }
  return;
}



/* Address: 0x100b146bc | SentryFileIOTrackerHelper::finishTrackingNSData:span: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void SentryFileIOTrackerHelper::finishTrackingNSData_span_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  int iVar1;
  ID IVar2;
  
  objc_stub::setDataValue_forKey_(param_4,param_3,&cf_file_size);
  IVar2 = objc_stub::FUN_100c02620(param_4);
  iVar1 = (int)IVar2;
  FUN_100b3a1c0();
  if (iVar1 != 0) {
    objc_stub::description(param_4);
    FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryFileIOTrackerHelper.m"
                  ,0x133,&cf_Automaticallyfinishedspan__);
  }
  return;
}



/* Address: 0x100b1474c | SentryFileIOTrackerHelper::ignoreFile: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

bool SentryFileIOTrackerHelper::ignoreFile_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  
  IVar2 = objc_stub::currentHub((ID)&objc::class_t::SentrySDKInternal);
  IVar2 = objc_stub::getClient(IVar2);
  IVar2 = objc_stub::fileManager(IVar2);
  IVar3 = objc_stub::FUN_100c0a040(IVar2);
  if (IVar3 == 0) {
    bVar1 = 0;
  }
  else {
    IVar2 = objc_stub::FUN_100c0a040(IVar2);
    IVar2 = objc_stub::hasPrefix_(param_3,IVar2);
    bVar1 = (bool)IVar2;
  }
  return bVar1;
}



/* Address: 0x100b14830 | SentryFileIOTrackerHelper::transactionDescriptionForFile:fileSize: */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID SentryFileIOTrackerHelper::transactionDescriptionForFile_fileSize_
             (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4)

{
  ID IVar1;
  
  objc_stub::lastPathComponent(param_3);
  if (param_4 == 0) {
    IVar1 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf___);
  }
  else {
    objc_stub::FUN_100bfeb40((ID)&objc::class_t::_TtC6Sentry24SentryByteCountFormatter,param_4);
    IVar1 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_______);
  }
  return IVar1;
}



/* Address: 0x100b148f0 | SentryFileIOTrackerHelper::isEnabled */

/* Function Stack Size: 0x10 bytes */

bool SentryFileIOTrackerHelper::isEnabled(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + 8);
}



/* Address: 0x100b148f8 | SentryFileIOTrackerHelper::setIsEnabled: */

/* Function Stack Size: 0x14 bytes */

void SentryFileIOTrackerHelper::setIsEnabled_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + 8) = (char)param_3;
  return;
}



/* Address: 0x100b14900 | SentryFileIOTrackerHelper::processingData */

/* Function Stack Size: 0x10 bytes */

ID SentryFileIOTrackerHelper::processingData(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x10);
}



/* Address: 0x100b14908 | SentryFileIOTrackerHelper::setProcessingData: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryFileIOTrackerHelper::setProcessingData_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x10) = param_3;
  return;
}



/* Address: 0x100b14914 | SentryFileIOTrackerHelper::stacktraceRetrieval */

/* Function Stack Size: 0x10 bytes */

ID SentryFileIOTrackerHelper::stacktraceRetrieval(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x18);
}



/* Address: 0x100b1491c | SentryFileIOTrackerHelper::setStacktraceRetrieval: */

/* WARNING: Function: _objc_setProperty_nonatomic_copy replaced with injection:
   _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryFileIOTrackerHelper::setStacktraceRetrieval_
               (ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  *(ID *)(param_1 + 0x18) = param_3;
  return;
}



/* Address: 0x100b14924 | SentryFileIOTrackerHelper::.cxx_destruct */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryFileIOTrackerHelper::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



/* Address: 0x100b14954 | SentryTracerConfiguration::defaultConfiguration */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryTracerConfiguration::defaultConfiguration(ID param_1,SEL param_2)

{
  class_t *self;
  ID IVar1;
  
  self = &objc::class_t::SentryTracerConfiguration;
  _objc_alloc();
  IVar1 = objc_stub::init((ID)self);
  return IVar1;
}



/* Address: 0x100b14974 | SentryTracerConfiguration::configurationWithBlock: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryTracerConfiguration::configurationWithBlock_
             (ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  ID IVar1;
  class_t *self;
  
  self = &objc::class_t::SentryTracerConfiguration;
  _objc_alloc();
  IVar1 = objc_stub::init((ID)self);
  (**(code **)(param_3 + 0x10))(param_3,IVar1);
  return IVar1;
}



/* Address: 0x100b149cc | SentryTracerConfiguration::init */

/* Function Stack Size: 0x10 bytes */

ID SentryTracerConfiguration::init(ID param_1,SEL param_2)

{
  ID self;
  objc_super local_30;
  
  local_30.super_class = &objc::class_t::SentryTracerConfiguration;
  local_30.receiver = param_1;
  self = _objc_msgSendSuper2(&local_30,"init");
  if (self != 0) {
    objc_stub::FUN_100c0c100(self,0);
    objc_stub::FUN_100c0e980(self,0);
    objc_stub::FUN_100c0bcc0(self,0);
  }
  return self;
}



/* Address: 0x100b14a38 | SentryTracerConfiguration::waitForChildren */

/* Function Stack Size: 0x10 bytes */

bool SentryTracerConfiguration::waitForChildren(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + 8);
}



/* Address: 0x100b14a40 | SentryTracerConfiguration::setWaitForChildren: */

/* Function Stack Size: 0x14 bytes */

void SentryTracerConfiguration::setWaitForChildren_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + 8) = (char)param_3;
  return;
}



/* Address: 0x100b14a48 | SentryTracerConfiguration::finishMustBeCalled */

/* Function Stack Size: 0x10 bytes */

bool SentryTracerConfiguration::finishMustBeCalled(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + 9);
}



/* Address: 0x100b14a50 | SentryTracerConfiguration::setFinishMustBeCalled: */

/* Function Stack Size: 0x14 bytes */

void SentryTracerConfiguration::setFinishMustBeCalled_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + 9) = (char)param_3;
  return;
}



/* Address: 0x100b14a58 | SentryTracerConfiguration::profilesSamplerDecision */

/* Function Stack Size: 0x10 bytes */

ID SentryTracerConfiguration::profilesSamplerDecision(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x10);
}



/* Address: 0x100b14a60 | SentryTracerConfiguration::setProfilesSamplerDecision: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryTracerConfiguration::setProfilesSamplerDecision_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x10) = param_3;
  return;
}



/* Address: 0x100b14a6c | SentryTracerConfiguration::idleTimeout */

/* Function Stack Size: 0x10 bytes */

double SentryTracerConfiguration::idleTimeout(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + 0x18);
}



/* Address: 0x100b14a74 | SentryTracerConfiguration::setIdleTimeout: */

/* Function Stack Size: 0x18 bytes */

void SentryTracerConfiguration::setIdleTimeout_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + 0x18) = param_3;
  return;
}



/* Address: 0x100b14a7c | SentryTracerConfiguration::.cxx_destruct */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryTracerConfiguration::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



/* Address: 0x100b14a88 | SentryProfileCollector::collectProfileBetween:and:forTrace: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x28 bytes */

ID SentryProfileCollector::collectProfileBetween_and_forTrace_
             (ID param_1,SEL param_2,unsigned_long_long param_3,unsigned_long_long param_4,
             ID param_5)

{
  ID IVar1;
  long lVar2;
  long local_50;
  cfstringStruct *local_48;
  ID local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ea82f0;
  IVar1 = objc_stub::currentHub((ID)&objc::class_t::SentrySDKInternal);
  FUN_100b1d944(param_3,param_4,param_5,IVar1);
  if (param_3 != 0) {
    objc_stub::setObject_forKeyedSubscript_(param_3,&cf_cocoa,&cf_platform);
    local_48 = &cf_active_thread_id;
    FUN_100b4eaa0(&local_50);
    lVar2 = local_50;
    FUN_100b4ed7c(local_50);
    local_40 = objc_stub::numberWithLongLong_((ID)&_OBJC_CLASS___NSNumber,lVar2);
    IVar1 = objc_stub::FUN_100c012c0((ID)&_OBJC_CLASS___NSDictionary,&local_40,&local_48,1);
    objc_stub::setObject_forKeyedSubscript_(param_3,IVar1,&cf_transaction);
    lVar2 = local_50;
    local_50 = 0;
    if (lVar2 != 0) {
      thunk_FUN_100b4ea10();
      __ZdlPv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_38) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}



/* Address: 0x100b14c70 | SentryTransactionContext::initWithName:operation: */

/* Function Stack Size: 0x20 bytes */

ID SentryTransactionContext::initWithName_operation_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  
  IVar1 = objc_stub::FUN_100c046a0(param_1,param_3,param_4,0,0,0);
  return IVar1;
}



/* Address: 0x100b14c80 | SentryTransactionContext::initWithName:operation:sampled: */

/* Function Stack Size: 0x28 bytes */

ID SentryTransactionContext::initWithName_operation_sampled_
             (ID param_1,SEL param_2,ID param_3,ID param_4,unsigned_long_long param_5)

{
  ID IVar1;
  
  IVar1 = objc_stub::FUN_100c046a0(param_1);
  return IVar1;
}



/* Address: 0x100b14c8c | SentryTransactionContext::initWithName:operation:sampled:sampleRate:sampleRand: */

/* Function Stack Size: 0x38 bytes */

ID SentryTransactionContext::initWithName_operation_sampled_sampleRate_sampleRand_
             (ID param_1,SEL param_2,ID param_3,ID param_4,unsigned_long_long param_5,ID param_6,
             ID param_7)

{
  ID IVar1;
  
  IVar1 = objc_stub::FUN_100c04600(param_1,param_3,0,param_4,&cf_manual,param_5,param_6,param_7);
  return IVar1;
}



/* Address: 0x100b14ccc | SentryTransactionContext::initWithName:operation:traceId:spanId:parentSpanId:parentSampled: */

/* Function Stack Size: 0x40 bytes */

ID SentryTransactionContext::initWithName_operation_traceId_spanId_parentSpanId_parentSampled_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,ID param_7,
             unsigned_long_long param_8)

{
  ID IVar1;
  
  IVar1 = objc_stub::FUN_100c04640
                    (param_1,param_3,0,param_4,&cf_manual,param_5,param_6,param_7,0,param_8,0,0,0,0)
  ;
  return IVar1;
}



/* Address: 0x100b14d20 | SentryTransactionContext::initWithName:operation:traceId:spanId:parentSpanId:parentSampled:parentSampleRate:parentSampleRand: */

/* Function Stack Size: 0x50 bytes */

ID SentryTransactionContext::
   initWithName_operation_traceId_spanId_parentSpanId_parentSampled_parentSampleRate_parentSampleRand_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,ID param_7,
             unsigned_long_long param_8,ID param_9,ID param_10)

{
  ID IVar1;
  
  IVar1 = objc_stub::FUN_100c04640
                    (param_1,param_3,0,param_4,&cf_manual,param_5,param_6,param_7,0,param_8,0,
                     param_9,0,param_10);
  return IVar1;
}



/* Address: 0x100b14d74 | SentryTransactionContext::initWithName:nameSource:operation:origin: */

/* Function Stack Size: 0x30 bytes */

ID SentryTransactionContext::initWithName_nameSource_operation_origin_
             (ID param_1,SEL param_2,ID param_3,long_long param_4,ID param_5,ID param_6)

{
  ID IVar1;
  
  IVar1 = objc_stub::FUN_100c04600(param_1);
  return IVar1;
}



/* Address: 0x100b14d9c | SentryTransactionContext::initWithName:nameSource:operation:origin:sampled:sampleRate:sampleRand: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x48 bytes */

ID SentryTransactionContext::initWithName_nameSource_operation_origin_sampled_sampleRate_sampleRand_
             (ID param_1,SEL param_2,ID param_3,long_long param_4,ID param_5,ID param_6,
             unsigned_long_long param_7,ID param_8,ID param_9)

{
  ID self;
  objc_super local_60;
  
  local_60.super_class = &objc::class_t::SentryTransactionContext;
  local_60.receiver = param_1;
  self = _objc_msgSendSuper2(&local_60,"initWithOperation:origin:sampled:",param_5,param_6,param_7);
  if (self != 0) {
    objc_stub::FUN_100bff820(self,param_3,param_4,param_8,param_9,0,0,0);
  }
  return self;
}



/* Address: 0x100b14e84 | SentryTransactionContext::initWithName:nameSource:operation:origin:traceId:spanId:parentSpanId:parentSampled:parentSampleRate:parentSampleRand: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x60 bytes */

ID SentryTransactionContext::
   initWithName_nameSource_operation_origin_traceId_spanId_parentSpanId_parentSampled_parentSampleRate_parentSampleRand_
             (ID param_1,SEL param_2,ID param_3,long_long param_4,ID param_5,ID param_6,ID param_7,
             ID param_8,ID param_9,unsigned_long_long param_10,ID param_11,ID param_12)

{
  ID self;
  objc_super local_70;
  
  local_70.super_class = &objc::class_t::SentryTransactionContext;
  local_70.receiver = param_1;
  self = _objc_msgSendSuper2(&local_70,
                             "initWithTraceId:spanId:parentId:operation:spanDescription:origin:sampled:"
                             ,param_7,param_8,param_9,param_5,0,param_6,0);
  if (self != 0) {
    objc_stub::FUN_100bff820(self,param_3,param_4,0,0,param_10,param_11,param_12);
  }
  return self;
}



/* Address: 0x100b14f88 | SentryTransactionContext::initWithName:nameSource:operation:origin:traceId:spanId:parentSpanId:sampled:parentSampled:sampleRate:parentSampleRate:sampleRand:parentSampleRand: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x78 bytes */

ID SentryTransactionContext::
   initWithName_nameSource_operation_origin_traceId_spanId_parentSpanId_sampled_parentSampled_sampleRate_parentSampleRate_sampleRand_parentSampleRand_
             (ID param_1,SEL param_2,ID param_3,long_long param_4,ID param_5,ID param_6,ID param_7,
             ID param_8,ID param_9,unsigned_long_long param_10,unsigned_long_long param_11,
             ID param_12,ID param_13,ID param_14,ID param_15)

{
  ID self;
  objc_super local_70;
  
  local_70.super_class = &objc::class_t::SentryTransactionContext;
  local_70.receiver = param_1;
  self = _objc_msgSendSuper2(&local_70,
                             "initWithTraceId:spanId:parentId:operation:spanDescription:origin:sampled:"
                             ,param_7,param_8,param_9,param_5,0,param_6,param_10);
  if (self != 0) {
    objc_stub::FUN_100bff820(self,param_3,param_4,param_12,param_14,param_11,param_13,param_15);
  }
  return self;
}



/* Address: 0x100b150b0 | SentryTransactionContext::getThreadInfo */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryTransactionContext::getThreadInfo(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = objc_stub::FUN_100c10500((ID)&objc::class_t::SentryThread);
  objc_stub::FUN_100c0e1e0(param_1,IVar1);
  return;
}



/* Address: 0x100b150f4 | SentryTransactionContext::sentry_threadInfo */

/* Function Stack Size: 0x10 bytes */

ID __objc_msgSend_stub SentryTransactionContext::sentry_threadInfo(ID self,...)

{
  (*(code *)PTR__objc_msgSend_100ea81a8)(self,"threadInfo");
  return self;
}



/* Address: 0x100b150f8 | SentryTransactionContext::commonInitWithName:source:sampleRate:sampleRand:parentSampled:parentSampleRate:parentSampleRand: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x48 bytes */

void SentryTransactionContext::
     commonInitWithName_source_sampleRate_sampleRand_parentSampled_parentSampleRate_parentSampleRand_
               (ID param_1,SEL param_2,ID param_3,long_long param_4,ID param_5,ID param_6,
               unsigned_long_long param_7,ID param_8,ID param_9)

{
  int iVar1;
  ID IVar2;
  
  IVar2 = objc_stub::FUN_100c0fb60((ID)&_OBJC_CLASS___NSString,param_3);
  *(ID *)(param_1 + (long)_name) = IVar2;
  *(long_long *)(param_1 + (long)_nameSource) = param_4;
  objc_stub::FUN_100c0d840(param_1,param_5);
  objc_stub::FUN_100c0d820(param_1,param_6);
  objc_stub::FUN_100c0d020(param_1,param_7);
  objc_stub::FUN_100c0d000(param_1,param_8);
  objc_stub::FUN_100c0cfe0(param_1,param_9);
  IVar2 = objc_stub::FUN_100c03000(param_1);
  iVar1 = (int)IVar2;
  FUN_100b3a1c0();
  if (iVar1 != 0) {
    FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryTransactionContext.m"
                  ,0xe3,&cf_Createdtransactioncontextwithname__);
  }
  return;
}



/* Address: 0x100b1525c | SentryTransactionContext::name */

/* Function Stack Size: 0x10 bytes */

ID SentryTransactionContext::name(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_name);
}



/* Address: 0x100b1526c | SentryTransactionContext::nameSource */

/* Function Stack Size: 0x10 bytes */

long_long SentryTransactionContext::nameSource(ID param_1,SEL param_2)

{
  return *(long_long *)(param_1 + (long)_nameSource);
}



/* Address: 0x100b1527c | SentryTransactionContext::sampleRate */

/* Function Stack Size: 0x10 bytes */

ID SentryTransactionContext::sampleRate(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_sampleRate);
}



/* Address: 0x100b1528c | SentryTransactionContext::setSampleRate: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryTransactionContext::setSampleRate_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_sampleRate) = param_3;
  return;
}



/* Address: 0x100b152a0 | SentryTransactionContext::sampleRand */

/* Function Stack Size: 0x10 bytes */

ID SentryTransactionContext::sampleRand(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_sampleRand);
}



/* Address: 0x100b152b0 | SentryTransactionContext::setSampleRand: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryTransactionContext::setSampleRand_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_sampleRand) = param_3;
  return;
}



/* Address: 0x100b152c4 | SentryTransactionContext::parentSampled */

/* Function Stack Size: 0x10 bytes */

unsigned_long_long SentryTransactionContext::parentSampled(ID param_1,SEL param_2)

{
  return *(unsigned_long_long *)(param_1 + (long)_parentSampled);
}



/* Address: 0x100b152d4 | SentryTransactionContext::setParentSampled: */

/* Function Stack Size: 0x18 bytes */

void SentryTransactionContext::setParentSampled_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  *(unsigned_long_long *)(param_1 + (long)_parentSampled) = param_3;
  return;
}



/* Address: 0x100b152e4 | SentryTransactionContext::parentSampleRate */

/* Function Stack Size: 0x10 bytes */

ID SentryTransactionContext::parentSampleRate(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_parentSampleRate);
}



/* Address: 0x100b152f4 | SentryTransactionContext::setParentSampleRate: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryTransactionContext::setParentSampleRate_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_parentSampleRate) = param_3;
  return;
}



/* Address: 0x100b15308 | SentryTransactionContext::parentSampleRand */

/* Function Stack Size: 0x10 bytes */

ID SentryTransactionContext::parentSampleRand(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_parentSampleRand);
}



/* Address: 0x100b15318 | SentryTransactionContext::setParentSampleRand: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryTransactionContext::setParentSampleRand_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_parentSampleRand) = param_3;
  return;
}



/* Address: 0x100b1532c | SentryTransactionContext::forNextAppLaunch */

/* Function Stack Size: 0x10 bytes */

bool SentryTransactionContext::forNextAppLaunch(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + (long)_forNextAppLaunch);
}



/* Address: 0x100b1533c | SentryTransactionContext::setForNextAppLaunch: */

/* Function Stack Size: 0x14 bytes */

void SentryTransactionContext::setForNextAppLaunch_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + (long)_forNextAppLaunch) = (char)param_3;
  return;
}



/* Address: 0x100b1534c | SentryTransactionContext::threadInfo */

/* Function Stack Size: 0x10 bytes */

ID SentryTransactionContext::threadInfo(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_threadInfo);
}



/* Address: 0x100b1535c | SentryTransactionContext::setThreadInfo: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryTransactionContext::setThreadInfo_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_threadInfo) = param_3;
  return;
}



/* Address: 0x100b15370 | SentryTransactionContext::.cxx_destruct */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryTransactionContext::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_threadInfo) = 0;
  *(undefined8 *)(param_1 + (long)_parentSampleRand) = 0;
  *(undefined8 *)(param_1 + (long)_parentSampleRate) = 0;
  *(undefined8 *)(param_1 + (long)_sampleRand) = 0;
  *(undefined8 *)(param_1 + (long)_sampleRate) = 0;
  *(undefined8 *)(param_1 + (long)_name) = 0;
  return;
}



/* Address: 0x100b15400 | SentryTransactionContext::initWithName:rawNameSource:operation:origin: */

/* Function Stack Size: 0x30 bytes */

ID __objc_msgSend_stub
SentryTransactionContext::initWithName_rawNameSource_operation_origin_(ID self,...)

{
  (*(code *)PTR__objc_msgSend_100ea81a8)(self,"initWithName:nameSource:operation:origin:");
  return self;
}



/* Address: 0x100b15404 | SentryTransactionContext::initWithName:rawNameSource:operation:origin:traceId: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x38 bytes */

ID SentryTransactionContext::initWithName_rawNameSource_operation_origin_traceId_
             (ID param_1,SEL param_2,ID param_3,long_long param_4,ID param_5,ID param_6,ID param_7)

{
  ID IVar1;
  class_t *self;
  
  self = &objc::class_t::SentrySpanId;
  _objc_alloc();
  IVar1 = objc_stub::init((ID)self);
  IVar1 = objc_stub::FUN_100c04620(param_1,param_3,param_4,param_5,param_6,param_7,IVar1,0,0,0,0);
  return IVar1;
}



/* Address: 0x100b154f0 | FUN_100b154f0 */

bool FUN_100b154f0(ulong param_1,ulong param_2)

{
  return param_1 <= param_2;
}



/* Address: 0x100b154fc | FUN_100b154fc */

long FUN_100b154fc(ulong param_1,ulong param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (param_1 <= param_2) {
    lVar1 = param_2 - param_1;
  }
  return lVar1;
}



/* Address: 0x100b15508 | SentryHttpStatusCodeRange::initWithMin:max: */

/* Function Stack Size: 0x20 bytes */

ID SentryHttpStatusCodeRange::initWithMin_max_
             (ID param_1,SEL param_2,long_long param_3,long_long param_4)

{
  ID IVar1;
  objc_super local_30;
  
  local_30.super_class = &objc::class_t::SentryHttpStatusCodeRange;
  local_30.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_30,"init");
  if (IVar1 != 0) {
    *(long_long *)(IVar1 + 8) = param_3;
    *(long_long *)(IVar1 + 0x10) = param_4;
  }
  return IVar1;
}



/* Address: 0x100b15554 | SentryHttpStatusCodeRange::initWithStatusCode: */

/* Function Stack Size: 0x18 bytes */

ID SentryHttpStatusCodeRange::initWithStatusCode_(ID param_1,SEL param_2,long_long param_3)

{
  ID IVar1;
  objc_super local_30;
  
  local_30.super_class = &objc::class_t::SentryHttpStatusCodeRange;
  local_30.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_30,"init");
  if (IVar1 != 0) {
    *(long_long *)(IVar1 + 8) = param_3;
    *(long_long *)(IVar1 + 0x10) = param_3;
  }
  return IVar1;
}



/* Address: 0x100b1559c | SentryHttpStatusCodeRange::isInRange: */

/* Function Stack Size: 0x18 bytes */

bool SentryHttpStatusCodeRange::isInRange_(ID param_1,SEL param_2,long_long param_3)

{
  if ((long)param_3 < *(long *)(param_1 + 8)) {
    return 0;
  }
  return (bool)((long)param_3 <= *(long *)(param_1 + 0x10));
}



/* Address: 0x100b155c0 | SentryHttpStatusCodeRange::min */

/* Function Stack Size: 0x10 bytes */

long_long SentryHttpStatusCodeRange::min(ID param_1,SEL param_2)

{
  return *(long_long *)(param_1 + 8);
}



/* Address: 0x100b155c8 | SentryHttpStatusCodeRange::max */

/* Function Stack Size: 0x10 bytes */

long_long SentryHttpStatusCodeRange::max(ID param_1,SEL param_2)

{
  return *(long_long *)(param_1 + 0x10);
}



/* Address: 0x100b155d0 | SentryUncaughtNSExceptions::configureCrashOnExceptions */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryUncaughtNSExceptions::configureCrashOnExceptions(ID param_1,SEL param_2)

{
  ID self;
  ID IVar1;
  cfstringStruct *local_48;
  ID local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ea82f0;
  self = objc_stub::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
  local_48 = &cf_NSApplicationCrashOnExceptions;
  local_40 = objc_stub::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,1);
  IVar1 = objc_stub::FUN_100c012c0((ID)&_OBJC_CLASS___NSDictionary,&local_40,&local_48,1);
  objc_stub::FUN_100c08c60(self,IVar1);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}



/* Address: 0x100b156b0 | SentryUncaughtNSExceptions::swizzleNSApplicationReportException */

/* Function Stack Size: 0x10 bytes */

void SentryUncaughtNSExceptions::swizzleNSApplicationReportException(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  ID IVar2;
  undefined *local_48;
  undefined8 local_40;
  code *local_38;
  undefined *puStack_30;
  cfstringStruct *local_28;
  
  pcVar1 = &cf_reportException_;
  _NSSelectorFromString();
  IVar2 = objc_stub::class((ID)&_OBJC_CLASS___NSApplication);
  local_48 = PTR___NSConcreteStackBlock_100ea82a0;
  local_40 = 0xc0000000;
  local_38 = FUN_100b15740;
  puStack_30 = &DAT_100f34390;
  local_28 = pcVar1;
  objc_stub::swizzleInstanceMethod_inClass_newImpFactory_mode_key_
            ((ID)&objc::class_t::SentrySwizzle,pcVar1,IVar2,&local_48,2,pcVar1);
  return;
}


