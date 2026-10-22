/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100b41f14 | SentryStacktrace::snapshot */

/* Function Stack Size: 0x10 bytes */

ID SentryStacktrace::snapshot(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x18);
}



/* Address: 0x100b41f1c | SentryStacktrace::setSnapshot: */

/* WARNING: Function: _objc_setProperty_nonatomic_copy replaced with injection:
   _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryStacktrace::setSnapshot_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x18) = param_3;
  return;
}



/* Address: 0x100b41f24 | SentryStacktrace::.cxx_destruct */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryStacktrace::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



/* Address: 0x100b41f60 | SentryProfileConfiguration::initWithProfileOptions: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryProfileConfiguration::initWithProfileOptions_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  objc_super local_40;
  
  local_40.super_class = &objc::class_t::SentryProfileConfiguration;
  local_40.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_40,"init");
  if (IVar1 != 0) {
    *(ID *)(IVar1 + 0x18) = param_3;
  }
  return IVar1;
}



/* Address: 0x100b41fe8 | SentryProfileConfiguration::initWaitingForFullDisplay: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x14 bytes */

ID SentryProfileConfiguration::initWaitingForFullDisplay_(ID param_1,SEL param_2,bool param_3)

{
  ID IVar1;
  objc_super local_30;
  
  local_30.super_class = &objc::class_t::SentryProfileConfiguration;
  local_30.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_30,"init");
  if (IVar1 != 0) {
    *(char *)(IVar1 + 8) = (char)param_3;
    *(undefined1 *)(IVar1 + 9) = 1;
  }
  return IVar1;
}



/* Address: 0x100b42050 | SentryProfileConfiguration::initContinuousProfilingV2WaitingForFullDisplay:samplerDecision:profileOptions: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x24 bytes */

ID SentryProfileConfiguration::
   initContinuousProfilingV2WaitingForFullDisplay_samplerDecision_profileOptions_
             (ID param_1,SEL param_2,bool param_3,ID param_4,ID param_5)

{
  ID IVar1;
  
  IVar1 = objc_stub::FUN_100c03a40(param_1,(ulong)param_3);
  if (IVar1 != 0) {
    *(ID *)(IVar1 + 0x18) = param_5;
    *(ID *)(IVar1 + 0x10) = param_4;
    *(undefined1 *)(IVar1 + 9) = 1;
  }
  return IVar1;
}



/* Address: 0x100b420f8 | SentryProfileConfiguration::profilerSessionSampleDecision */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryProfileConfiguration::profilerSessionSampleDecision(ID param_1,SEL param_2)

{
  ID IVar1;
  
  _objc_sync_enter();
  IVar1 = *(ID *)(param_1 + 0x10);
  _objc_sync_exit(param_1);
  return IVar1;
}



/* Address: 0x100b4213c | SentryProfileConfiguration::setProfilerSessionSampleDecision: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryProfileConfiguration::setProfilerSessionSampleDecision_
               (ID param_1,SEL param_2,ID param_3)

{
  _objc_sync_enter();
  *(ID *)(param_1 + 0x10) = param_3;
  _objc_sync_exit(param_1);
  return;
}



/* Address: 0x100b4218c | SentryProfileConfiguration::reevaluateSessionSampleRate */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryProfileConfiguration::reevaluateSessionSampleRate(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = objc_stub::profileOptions(param_1);
  IVar1 = objc_stub::FUN_100c0a2e0(IVar1);
  FUN_100b4c660();
  objc_stub::FUN_100c0d340(param_1,IVar1);
  return;
}



/* Address: 0x100b421ec | SentryProfileConfiguration::waitForFullDisplay */

/* Function Stack Size: 0x10 bytes */

bool SentryProfileConfiguration::waitForFullDisplay(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + 8);
}



/* Address: 0x100b421f4 | SentryProfileConfiguration::isProfilingThisLaunch */

/* Function Stack Size: 0x10 bytes */

bool SentryProfileConfiguration::isProfilingThisLaunch(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + 9);
}



/* Address: 0x100b421fc | SentryProfileConfiguration::profileOptions */

/* Function Stack Size: 0x10 bytes */

ID SentryProfileConfiguration::profileOptions(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x18);
}



/* Address: 0x100b42204 | SentryProfileConfiguration::.cxx_destruct */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryProfileConfiguration::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



/* Address: 0x100b42234 | SentryDependencyContainerSwiftHelper::release: */

/* Function Stack Size: 0x18 bytes */

ID SentryDependencyContainerSwiftHelper::release_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
  IVar1 = objc_stub::FUN_100c08e20(param_3);
  return IVar1;
}



/* Address: 0x100b4223c | SentryDependencyContainerSwiftHelper::beforeSendLog:options: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID SentryDependencyContainerSwiftHelper::beforeSendLog_options_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  
  IVar1 = objc_stub::FUN_100bfe4a0(param_4);
  if (IVar1 != 0) {
    IVar1 = objc_stub::FUN_100bfe4a0(param_4);
    (**(code **)(IVar1 + 0x10))(IVar1,param_3);
    param_3 = IVar1;
  }
  return param_3;
}



/* Address: 0x100b422e8 | SentryDependencyContainerSwiftHelper::environment: */

/* Function Stack Size: 0x18 bytes */

ID SentryDependencyContainerSwiftHelper::environment_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
  IVar1 = objc_stub::environment(param_3);
  return IVar1;
}



/* Address: 0x100b422f0 | SentryDependencyContainerSwiftHelper::enableLogs: */

/* Function Stack Size: 0x18 bytes */

bool SentryDependencyContainerSwiftHelper::enableLogs_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
  IVar1 = objc_stub::FUN_100c01860(param_3);
  return (bool)IVar1;
}



/* Address: 0x100b422f8 | SentryDependencyContainerSwiftHelper::enabledFeatures: */

/* Function Stack Size: 0x18 bytes */

ID SentryDependencyContainerSwiftHelper::enabledFeatures_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
  IVar1 = objc_stub::FUN_100c02dc0((ID)&objc::class_t::_TtC6Sentry28SentryEnabledFeaturesBuilder);
  return IVar1;
}



/* Address: 0x100b42304 | SentryDependencyContainerSwiftHelper::dispatchQueueWrapper */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryDependencyContainerSwiftHelper::dispatchQueueWrapper(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = objc_stub::sharedInstance((ID)&objc::class_t::_TtC6Sentry25SentryDependencyContainer);
  IVar1 = objc_stub::dispatchQueueWrapper(IVar1);
  return IVar1;
}



/* Address: 0x100b42350 | SentryDependencyContainerSwiftHelper::dispatchSyncOnMainQueue: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryDependencyContainerSwiftHelper::dispatchSyncOnMainQueue_
               (ID param_1,SEL param_2,ID param_3,uint param_4)

{
  ID IVar1;
  
  IVar1 = objc_stub::sharedInstance
                    ((ID)&objc::class_t::_TtC6Sentry25SentryDependencyContainer,param_3,
                     (ulong)param_4);
  IVar1 = objc_stub::dispatchQueueWrapper(IVar1);
  objc_stub::FUN_100c01480(IVar1,param_3);
  return;
}



/* Address: 0x100b423c4 | SentryDependencyContainerSwiftHelper::readTimestampLastInForeground */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryDependencyContainerSwiftHelper::readTimestampLastInForeground(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = objc_stub::currentHub((ID)&objc::class_t::SentrySDKInternal);
  IVar1 = objc_stub::getClient(IVar1);
  IVar1 = objc_stub::fileManager(IVar1);
  IVar1 = objc_stub::FUN_100c088e0(IVar1);
  return IVar1;
}



/* Address: 0x100b42448 | SentryDependencyContainerSwiftHelper::deleteTimestampLastInForeground */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryDependencyContainerSwiftHelper::deleteTimestampLastInForeground(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = objc_stub::currentHub((ID)&objc::class_t::SentrySDKInternal);
  IVar1 = objc_stub::getClient(IVar1);
  IVar1 = objc_stub::fileManager(IVar1);
  objc_stub::FUN_100c01000(IVar1);
  return;
}



/* Address: 0x100b424b8 | SentryDependencyContainerSwiftHelper::storeTimestampLastInForeground: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryDependencyContainerSwiftHelper::storeTimestampLastInForeground_
               (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
  IVar1 = objc_stub::currentHub((ID)&objc::class_t::SentrySDKInternal);
  IVar1 = objc_stub::getClient(IVar1);
  IVar1 = objc_stub::fileManager(IVar1);
  objc_stub::FUN_100c0f880(IVar1,param_3);
  return;
}



/* Address: 0x100b42544 | SentryDependencyContainerSwiftHelper::hasProfilingOptions */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

bool SentryDependencyContainerSwiftHelper::hasProfilingOptions(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = objc_stub::currentHub((ID)&objc::class_t::SentrySDKInternal);
  IVar1 = objc_stub::FUN_100bff480(IVar1);
  IVar1 = objc_stub::options(IVar1);
  IVar1 = objc_stub::profiling(IVar1);
  return (bool)(IVar1 != 0);
}



/* Address: 0x100b425d0 | FUN_100b425d0 */

void FUN_100b425d0(undefined8 param_1)

{
  objc_stub::FUN_100c06240((ID)&objc::class_t::_TtC6Sentry17SentryLevelHelper,param_1);
  return;
}



/* Address: 0x100b425e0 | FUN_100b425e0 */

void FUN_100b425e0(undefined8 param_1)

{
  objc_stub::FUN_100c070c0((ID)&objc::class_t::_TtC6Sentry17SentryLevelHelper,param_1);
  return;
}



/* Address: 0x100b425f0 | SentryNSDataUtils::sentry_gzippedWithData:compressionLevel:error: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_autorelease replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x28 bytes */

ID SentryNSDataUtils::sentry_gzippedWithData_compressionLevel_error_
             (ID param_1,SEL param_2,ID param_3,long_long param_4,ID *param_5)

{
  int iVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  z_stream local_a0;
  
  IVar2 = objc_stub::length(param_3);
  if ((uInt)IVar2 == 0) {
    IVar2 = objc_stub::data((ID)&_OBJC_CLASS___NSData);
  }
  else {
    local_a0.zalloc = (alloc_func)0x0;
    local_a0.zfree = (free_func)0x0;
    local_a0.opaque = (voidpf)0x0;
    _objc_retainAutorelease();
    local_a0.next_in = (Bytef *)objc_stub::bytes(param_3);
    local_a0.total_out = 0;
    local_a0.avail_out = 0;
    local_a0.avail_in = (uInt)IVar2;
    iVar1 = _deflateInit2_(&local_a0,(int)param_4,8,0x1f,9,0,"1.2.12",0x70);
    if (iVar1 == 0) {
      IVar2 = objc_stub::dataWithLength_
                        ((ID)&_OBJC_CLASS___NSMutableData,
                         (long)((double)(IVar2 & 0xffffffff) * 1.02 + 50.0));
      IVar3 = IVar2;
      _objc_retainAutorelease();
      IVar3 = objc_stub::mutableBytes(IVar3);
      IVar4 = objc_stub::length(IVar2);
      do {
        local_a0.next_out = (Bytef *)(IVar3 + local_a0.total_out);
        local_a0.avail_out = (int)IVar4 - (int)local_a0.total_out;
        iVar1 = _deflate(&local_a0,4);
      } while (iVar1 == 0);
      objc_stub::FUN_100c0c640(IVar2,local_a0.total_out);
      _deflateEnd(&local_a0);
    }
    else if (param_5 == (ID *)0x0) {
      IVar2 = 0;
    }
    else {
      IVar3 = 0x67;
      FUN_100b1e38c(0x67,&cf_deflateInit2error);
      IVar2 = 0;
      *param_5 = IVar3;
    }
  }
  return IVar2;
}



/* Address: 0x100b42768 | FUN_100b42768 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

ID FUN_100b42768(long param_1)

{
  ID self;
  
  if (param_1 == 0) {
    self = 0;
  }
  else {
    self = objc_stub::FUN_100c009c0((ID)&_OBJC_CLASS___NSMutableData,param_1);
    objc_stub::appendBytes_length_(self,&DAT_100c97708,1);
  }
  return self;
}



/* Address: 0x100b427bc | FUN_100b427bc */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b427bc(ID param_1,ID param_2)

{
  int iVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  
  __ZNSt3__15mutex4lockEv(&DAT_100ffa950);
  IVar2 = objc_stub::FUN_100c083a0(param_1);
  IVar3 = objc_stub::thunk_FUN_100c0a000(IVar2);
  IVar4 = objc_stub::thunk_FUN_100c0a000(param_2);
  IVar2 = IVar4;
  FUN_100b3a1c0();
  iVar1 = 0;
  if ((int)IVar2 != 0) {
    iVar1 = 0xdc22c3;
    FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/Profiling/SentryProfiledTracerConcurrency.mm"
                  ,0x95,&cf_Trackingrelationshipbetweenprofilerid__andtracerid__);
  }
  if (DAT_1010e2f68 != 0 || DAT_1010e2f70 != 0) {
    if (((DAT_1010e2f68 == 0) || (DAT_1010e2f70 == 0)) && (FUN_100b3a1e0(), iVar1 != 0)) {
      FUN_100b3a280("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/Profiling/SentryProfiledTracerConcurrency.mm"
                    ,0x99,&cf_Bothstructuresmustbeinitializedsimultaneously_);
    }
    if (DAT_1010e2f68 != 0) goto LAB_100b428f0;
  }
  IVar5 = objc_stub::dictionary((ID)&_OBJC_CLASS___NSMutableDictionary);
  IVar2 = DAT_1010e2f68;
  DAT_1010e2f68 = IVar5;
  DAT_1010e2f70 = objc_stub::dictionary((ID)&_OBJC_CLASS___NSMutableDictionary,IVar2);
LAB_100b428f0:
  IVar2 = objc_stub::objectForKeyedSubscript_(DAT_1010e2f68,IVar3);
  IVar2 = objc_stub::unsignedIntValue(IVar2);
  IVar2 = objc_stub::FUN_100c073c0((ID)&_OBJC_CLASS___NSNumber,(ulong)((int)IVar2 + 1));
  objc_stub::setObject_forKeyedSubscript_(DAT_1010e2f68,IVar2,IVar3);
  objc_stub::setObject_forKeyedSubscript_(DAT_1010e2f70,param_1,IVar4);
  __ZNSt3__15mutex6unlockEv(&DAT_100ffa950);
  return 0;
}



/* Address: 0x100b42a1c | FUN_100b42a1c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b42a1c(ID param_1)

{
  int iVar1;
  ID IVar2;
  ID IVar3;
  
  __ZNSt3__15mutex4lockEv(&DAT_100ffa950);
  IVar2 = objc_stub::FUN_100c056e0((ID)&objc::class_t::SentryContinuousProfiler);
  iVar1 = (int)IVar2;
  if (iVar1 == 0) {
    if (param_1 != 0) {
      if ((DAT_1010e2f70 == 0) && (FUN_100b3a1f0(), iVar1 != 0)) {
        FUN_100b3a2b8("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/Profiling/SentryProfiledTracerConcurrency.mm"
                      ,0xb5,&
                            cf_Tracertoprofilershouldhavealreadybeeninitializedbythetimetheyarebeingqueried
                     );
      }
      IVar2 = objc_stub::thunk_FUN_100c0a000(param_1);
      IVar3 = objc_stub::objectForKeyedSubscript_(DAT_1010e2f70,IVar2);
      if (IVar3 != 0) {
        FUN_100b42c40(IVar3,IVar2);
      }
    }
  }
  else {
    FUN_100b3a1c0();
    if (iVar1 != 0) {
      objc_stub::thunk_FUN_100c0a000(param_1);
      FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/Profiling/SentryProfiledTracerConcurrency.mm"
                    ,0xaf,&cf_StoppingtrackingdiscardedtracerwithprofileReferenceId__);
    }
    FUN_100b42b90();
  }
  __ZNSt3__15mutex6unlockEv(&DAT_100ffa950);
  return 0;
}



/* Address: 0x100b42b90 | FUN_100b42b90 */

void FUN_100b42b90(int param_1)

{
  bool bVar1;
  int iVar2;
  
  if (DAT_1010e2f78 == 0) {
    FUN_100b3a1f0();
    bVar1 = param_1 != 0;
    param_1 = 0;
    if (bVar1) {
      param_1 = 0xdc22c3;
      FUN_100b3a2b8("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/Profiling/SentryProfiledTracerConcurrency.mm"
                    ,0x50,&cf_Attemtptedtostopcontinuousprofilerwithnorootspansinflight_);
    }
  }
  else {
    DAT_1010e2f78 = DAT_1010e2f78 + -1;
  }
  iVar2 = DAT_1010e2f78;
  FUN_100b3a1c0();
  if (iVar2 == 0) {
    if (param_1 != 0) {
      FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/Profiling/SentryProfiledTracerConcurrency.mm"
                    ,0x56,&cf_Lastrootspanended_stoppingprofiler_);
    }
    objc_stub::stop((ID)&objc::class_t::SentryContinuousProfiler);
    return;
  }
  if (param_1 == 0) {
    return;
  }
  FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/Profiling/SentryProfiledTracerConcurrency.mm"
                ,0x59,&cf_Waitingforremainingrootspanstofinishbeforestoppingprofiler_);
  return;
}



/* Address: 0x100b42c40 | FUN_100b42c40 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b42c40(ID param_1,undefined8 param_2)

{
  int iVar1;
  ID IVar2;
  ID IVar3;
  
  IVar2 = objc_stub::FUN_100c083a0(param_1);
  IVar2 = objc_stub::thunk_FUN_100c0a000(IVar2);
  objc_stub::removeObjectForKey_(DAT_1010e2f70,param_2);
  IVar3 = objc_stub::objectForKeyedSubscript_(DAT_1010e2f68,IVar2);
  IVar3 = objc_stub::unsignedIntValue(IVar3);
  IVar3 = objc_stub::FUN_100c073c0((ID)&_OBJC_CLASS___NSNumber,(ulong)((int)IVar3 - 1));
  objc_stub::setObject_forKeyedSubscript_(DAT_1010e2f68,IVar3,IVar2);
  IVar3 = objc_stub::objectForKeyedSubscript_(DAT_1010e2f68,IVar2);
  IVar3 = objc_stub::unsignedIntValue(IVar3);
  iVar1 = 0;
  if ((int)IVar3 == 0) {
    objc_stub::removeObjectForKey_(DAT_1010e2f68,IVar2);
    objc_stub::FUN_100c0f780(param_1,0);
  }
  else {
    FUN_100b3a1c0();
    if (iVar1 != 0) {
      FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/Profiling/SentryProfiledTracerConcurrency.mm"
                    ,0x40,&cf_Waitingon_lutracerstofinish_);
    }
  }
  return 0;
}



/* Address: 0x100b42e08 | FUN_100b42e08 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

ID FUN_100b42e08(ID param_1)

{
  int iVar1;
  ID IVar2;
  ID IVar3;
  
  iVar1 = 0xffa950;
  __ZNSt3__15mutex4lockEv();
  if (DAT_1010e2f70 == 0 || DAT_1010e2f68 == 0) {
    FUN_100b3a1f0();
    if (iVar1 != 0) {
      FUN_100b3a2b8("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/Profiling/SentryProfiledTracerConcurrency.mm"
                    ,0xd3,&cf_Structuresshouldhavealreadybeeninitializedbythetimetheyarebeingqueried
                   );
    }
    IVar3 = 0;
  }
  else {
    IVar2 = objc_stub::thunk_FUN_100c0a000(param_1);
    IVar3 = objc_stub::objectForKeyedSubscript_(DAT_1010e2f70,IVar2);
    if (IVar3 == 0) {
      IVar2 = IVar3;
      FUN_100b3a1f0();
      if ((int)IVar2 != 0) {
        FUN_100b3a2b8("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/Profiling/SentryProfiledTracerConcurrency.mm"
                      ,0xdb,&cf_Expectedaprofilertobeassociatedwithtracerid___);
      }
    }
    else {
      FUN_100b42c40(IVar3,IVar2);
    }
  }
  __ZNSt3__15mutex6unlockEv(&DAT_100ffa950);
  return IVar3;
}



/* Address: 0x100b42f68 | FUN_100b42f68 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
FUN_100b42f68(ID param_1,undefined8 param_2,ID param_3,uint param_4,char *param_5,undefined8 param_6
             )

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  ID IVar4;
  ID IVar5;
  undefined *local_a0;
  undefined8 local_98;
  code *local_90;
  undefined *puStack_88;
  ID local_80;
  ID local_78;
  ID local_70;
  char *local_68;
  
  pcVar3 = param_5;
  FUN_100b43c58();
  if (((pcVar3 != (char *)0x0) &&
      (IVar4 = objc_stub::isProfilingThisLaunch((ID)pcVar3), (int)IVar4 != 0)) &&
     (IVar4 = objc_stub::profileOptions((ID)pcVar3), IVar4 != 0)) {
    IVar4 = objc_stub::profileOptions((ID)pcVar3);
    iVar2 = (int)IVar4;
    FUN_100b4f3c8();
    iVar1 = 0;
    if (iVar2 != 0) {
      FUN_100b3a1c0();
      if (iVar1 != 0) {
        FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/Profiling/SentryProfiledTracerConcurrency.mm"
                      ,0xfe,&cf_StoppinglaunchUItraceprofile_);
      }
      FUN_100b43484();
      IVar4 = objc_stub::FUN_100c108e0(param_3);
      if (IVar4 == DAT_101058398) {
        return 0;
      }
      IVar4 = objc_stub::scope(param_1);
      objc_stub::captureTransaction_withScope_(param_1,param_3,IVar4);
      return 0;
    }
  }
  IVar4 = objc_stub::getClient(param_1);
  if (((param_4 != 0) && (IVar4 != 0)) && (IVar5 = IVar4, FUN_100b4f218(), (int)IVar5 != 0)) {
    FUN_100b4f254();
    iVar2 = (int)IVar4;
    if (iVar2 != 0) {
      FUN_100b3a1c0();
      if (iVar2 != 0) {
        IVar4 = objc_stub::FUN_100c108e0(param_3);
        IVar4 = objc_stub::FUN_100c083c0(IVar4);
        objc_stub::thunk_FUN_100c0a000(IVar4);
        FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/Profiling/SentryProfiledTracerConcurrency.mm"
                      ,0x10f,&cf_StoppingtrackingrootspantracerwithprofilerReferenceId__);
      }
      FUN_100b43484();
      IVar4 = objc_stub::scope(param_1);
      objc_stub::captureTransaction_withScope_(param_1,param_3,IVar4);
      return 0;
    }
  }
  if ((param_4 & 1) == 0) {
    IVar4 = objc_stub::scope(param_1);
    objc_stub::captureTransaction_withScope_(param_1,param_3,IVar4);
  }
  else {
    if (param_5 == (char *)0x0) {
      FUN_100b3a1e0();
      if ((int)param_5 != 0) {
        param_5 = 
        "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/Profiling/SentryProfiledTracerConcurrency.mm"
        ;
        FUN_100b3a280("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/Profiling/SentryProfiledTracerConcurrency.mm"
                      ,0x127,&
                             cf_Atransactionwithaprofileshouldhaveastarttimestampalready_Wewillassignthecurrenttimebutthiswillbeincorrect_
                     );
      }
      FUN_100b4f2d8();
    }
    pcVar3 = param_5;
    FUN_100b3a1c0();
    if ((int)pcVar3 != 0) {
      FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/Profiling/SentryProfiledTracerConcurrency.mm"
                    ,0x12d,&cf_Tracerstarttime__llu);
    }
    objc_stub::FUN_100c0dde0(param_3,param_6);
    IVar4 = objc_stub::recordMetrics((ID)&objc::class_t::SentryTraceProfiler);
    FUN_100b4f344();
    objc_stub::FUN_100c0b880(param_3,IVar4);
    IVar4 = objc_stub::FUN_100c108e0(param_3);
    IVar4 = objc_stub::FUN_100c083c0(IVar4);
    FUN_100b42e08();
    if (IVar4 == 0) {
      IVar4 = objc_stub::scope(param_1);
      objc_stub::captureTransaction_withScope_(param_1,param_3,IVar4);
    }
    else {
      local_a0 = PTR___NSConcreteStackBlock_100ea82a0;
      local_98 = 0xc2000000;
      local_90 = FUN_100b434cc;
      puStack_88 = &DAT_100f34c98;
      local_80 = IVar4;
      local_78 = param_1;
      local_70 = param_3;
      local_68 = param_5;
      FUN_100b4f408(param_2,&local_a0);
    }
  }
  return 0;
}



/* Address: 0x100b43484 | FUN_100b43484 */

void FUN_100b43484(void)

{
  __ZNSt3__15mutex4lockEv(&DAT_100ffa950);
  FUN_100b42b90();
  __ZNSt3__15mutex6unlockEv(&DAT_100ffa950);
  return;
}



/* Address: 0x100b434cc | FUN_100b434cc */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100b434cc(long param_1)

{
  undefined8 uVar1;
  ID IVar2;
  long lVar3;
  ID IVar4;
  ID IVar5;
  long local_50;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_100ea82f0;
  IVar2 = objc_stub::state(*(ID *)(param_1 + 0x20));
  IVar2 = objc_stub::copyProfilingData(IVar2);
  lVar3 = *(long *)(param_1 + 0x28);
  FUN_100b1d40c(lVar3,*(undefined8 *)(param_1 + 0x20),IVar2,*(undefined8 *)(param_1 + 0x30),
                *(undefined8 *)(param_1 + 0x38));
  IVar2 = *(ID *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  if (lVar3 == 0) {
    IVar4 = objc_stub::scope(IVar2);
    objc_stub::captureTransaction_withScope_(IVar2,uVar1,IVar4);
  }
  else {
    IVar4 = objc_stub::scope(IVar2);
    local_50 = lVar3;
    IVar5 = NSArray::arrayWithObjects_count_((ID)&_OBJC_CLASS___NSArray,&local_50,1);
    objc_stub::captureTransaction_withScope_additionalEnvelopeItems_(IVar2,uVar1,IVar4,IVar5);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}



/* Address: 0x100b4367c | FUN_100b4367c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_100b4367c(undefined8 param_1,long param_2)

{
  return *(undefined8 *)(param_2 + 0x38);
}



/* Address: 0x100b436b4 | FUN_100b436b4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b436b4(void)

{
  return 0;
}



/* Address: 0x100b436ec | FUN_100b436ec */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

ID FUN_100b436ec(ID param_1,ID param_2,ID param_3)

{
  int iVar1;
  ID IVar2;
  ID IVar3;
  
  IVar3 = param_3;
  FUN_100b43c58();
  IVar2 = objc_stub::profileOptions(IVar3);
  if (IVar2 != 0) {
    IVar3 = objc_stub::profileOptions(IVar3);
    FUN_100b43a24(IVar3,param_3);
    return IVar3;
  }
  IVar3 = objc_stub::getClient(param_2);
  if ((IVar3 == 0) || (IVar2 = IVar3, FUN_100b4f218(), (int)IVar2 == 0)) {
    IVar3 = objc_stub::FUN_100c08400(param_1);
    FUN_100b2cae4(IVar3,1);
    IVar2 = 0;
    if ((((uint)DAT_101058390 | (uint)IVar3) & 1) != 0) {
      FUN_100b4f3a8();
      IVar3 = objc_stub::FUN_100c0f620((ID)&objc::class_t::SentryTraceProfiler,IVar2);
      iVar1 = (int)IVar3;
      if (iVar1 == 0) {
        return 0;
      }
      FUN_100b3a1c0();
      if (iVar1 != 0) {
        IVar3 = objc_stub::thunk_FUN_100c10960(param_3);
        objc_stub::thunk_FUN_100c0a000(IVar3);
        objc_stub::thunk_FUN_100c0a000(IVar2);
        FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/Profiling/SentryProfiledTracerConcurrency.mm"
                      ,0x17a,&cf_Startedprofilerfortrace__withinternalid__);
        return IVar2;
      }
      return IVar2;
    }
  }
  else {
    IVar2 = objc_stub::thunk_FUN_100c079e0(param_3);
    iVar1 = 0;
    if (IVar2 == 0) {
      FUN_100b4f290();
      if (IVar3 == 0) {
        FUN_100b3a1c0();
        if ((int)IVar3 != 0) {
          FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/Profiling/SentryProfiledTracerConcurrency.mm"
                        ,0x16d,&cf_Noprofilingoptionsfound_willnotstartprofiler_);
        }
        return 0;
      }
      FUN_100b43a24(IVar3,param_3);
      return IVar3;
    }
    FUN_100b3a1c0();
    if (iVar1 != 0) {
      FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/Profiling/SentryProfiledTracerConcurrency.mm"
                    ,0x167,&cf_Notarootspan_willnotstartautomaticallyfortracelifecycle_);
    }
  }
  return 0;
}



/* Address: 0x100b43a24 | FUN_100b43a24 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

ID FUN_100b43a24(ulong param_1,ID param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ID IVar4;
  ID self;
  
  FUN_100b4f3c8();
  if (((param_1 & 1) == 0) || (FUN_100b4f3ec(), (param_2 & 1) != 0)) {
    self = 0;
  }
  else {
    FUN_100b43c58();
    uVar3 = objc_stub::FUN_100c083e0(param_2);
    FUN_100b2cae4(uVar3,1);
    self = 0;
    if ((uVar3 & 1) == 0) {
      self = 0;
    }
    else {
      FUN_100b4f3a8();
      IVar4 = self;
      FUN_100b3a1c0();
      if ((int)IVar4 != 0) {
        objc_stub::thunk_FUN_100c0a000(self);
        FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/Profiling/SentryProfiledTracerConcurrency.mm"
                      ,0x85,&cf_StartingcontinuousprofilerforrootspantracerwithprofilerReferenceId__
                     );
      }
      __ZNSt3__15mutex4lockEv(&DAT_100ffa950);
      IVar4 = objc_stub::FUN_100c056e0((ID)&objc::class_t::SentryContinuousProfiler);
      uVar2 = (uint)IVar4;
      uVar1 = uVar2;
      if (DAT_1010e2f78 == 0) {
        uVar1 = 1;
      }
      if ((uVar1 & 1) == 0) {
        FUN_100b3a1f0();
        if (uVar2 != 0) {
          FUN_100b3a2b8("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/Profiling/SentryProfiledTracerConcurrency.mm"
                        ,99,&cf_Unbalancedtrackingofrootspansandprofilerdetected_);
        }
      }
      else {
        objc_stub::start((ID)&objc::class_t::SentryContinuousProfiler);
        DAT_1010e2f78 = DAT_1010e2f78 + 1;
      }
      __ZNSt3__15mutex6unlockEv(&DAT_100ffa950);
    }
  }
  return self;
}



/* Address: 0x100b43c18 | FUN_100b43c18 */

void FUN_100b43c18(undefined8 param_1)

{
  _objc_autoreleasePoolPush();
  ___cxa_atexit(PTR___ZNSt3__15mutexD1Ev_100ea67a0,&DAT_100ffa950,0x100000000);
  _objc_autoreleasePoolPop(param_1);
  return;
}



/* Address: 0x100b43c58 | FUN_100b43c58 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

undefined8 FUN_100b43c58(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_100b43ca8();
  _objc_sync_enter();
  uVar1 = DAT_1010e2f80;
  _objc_sync_exit(param_1);
  return uVar1;
}



/* Address: 0x100b43ca8 | FUN_100b43ca8 */

/* WARNING: Function: _objc_retainAutoreleaseReturnValue replaced with injection: _objc_retain_fixup
    */

ID FUN_100b43ca8(void)

{
  int iVar1;
  undefined *self;
  
  if ((DAT_1010e2f90 & 1) == 0) {
    iVar1 = 0x10e2f90;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      self = &_OBJC_CLASS___NSObject;
      _objc_alloc();
      DAT_1010e2f88 = objc_stub::init((ID)self);
      ___cxa_guard_release(&DAT_1010e2f90);
    }
  }
  return DAT_1010e2f88;
}



/* Address: 0x100b43d24 | FUN_100b43d24 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b43d24(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_100b43ca8();
  _objc_sync_enter();
  DAT_1010e2f80 = param_1;
  _objc_sync_exit(uVar1);
  return 0;
}



/* Address: 0x100b43d88 | FUN_100b43d88 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b43d88(ID param_1)

{
  FUN_100b43c58();
  objc_stub::FUN_100c08b60(param_1);
  return 0;
}



/* Address: 0x100b43dcc | SentryProfiler::load */

/* Function Stack Size: 0x10 bytes */

void SentryProfiler::load(ID param_1,SEL param_2)

{
  if (DAT_1010e1968 == -1) {
    return;
  }
  FUN_100b0de5c();
  return;
}



/* Address: 0x100b43dd0 | SentryProfiler::initWithMode: */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryProfiler::initWithMode_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  ID self;
  class_t *self_00;
  ID IVar1;
  objc_super local_30;
  
  local_30.super_class = &objc::class_t::SentryProfiler;
  local_30.receiver = param_1;
  self = _objc_msgSendSuper2(&local_30,"init");
  if (self != 0) {
    IVar1 = self;
    FUN_100b3a1c0();
    if ((int)IVar1 != 0) {
      FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryProfiler.mm",
                    0x79,&cf_InitializednewSentryProfiler__);
    }
    objc_stub::start(self);
    self_00 = &objc::class_t::SentryMetricProfiler;
    _objc_alloc();
    IVar1 = objc_stub::FUN_100c04540((ID)self_00,param_3);
    objc_stub::FUN_100c0cb40(self,IVar1);
    IVar1 = objc_stub::FUN_100c06d40(self);
    objc_stub::start(IVar1);
  }
  return self;
}



/* Address: 0x100b43ed4 | SentryProfiler::backgroundAbort */

/* Function Stack Size: 0x10 bytes */

void SentryProfiler::backgroundAbort(ID param_1,SEL param_2)

{
  int iVar1;
  ID IVar2;
  
  IVar2 = objc_stub::FUN_100c05c20(param_1);
  iVar1 = (int)IVar2;
  if ((IVar2 & 1) != 0) {
    FUN_100b3a1c0();
    if (iVar1 != 0) {
      FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryProfiler.mm",
                    0x98,&cf_Stoppingprofiler__duetoappmovingtobackground_);
    }
    objc_stub::FUN_100c0f780(param_1,2);
    return;
  }
  FUN_100b3a1e0();
  if (iVar1 != 0) {
    FUN_100b3a280("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryProfiler.mm",
                  0x94,&cf_Currentprofilerisnotrunning_);
    return;
  }
  return;
}



/* Address: 0x100b43f68 | SentryProfiler::stopForReason: */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryProfiler::stopForReason_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  int iVar1;
  ID IVar2;
  
  DAT_101058390 = 0;
  IVar2 = objc_stub::FUN_100c06d40(param_1);
  objc_stub::stop(IVar2);
  IVar2 = objc_stub::FUN_100c05c20(param_1);
  iVar1 = (int)IVar2;
  if ((IVar2 & 1) == 0) {
    FUN_100b3a1c0();
    if (iVar1 != 0) {
      FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryProfiler.mm",
                    0xa2,&cf_Profilerisnotcurrentlyrunning_);
      return;
    }
  }
  else {
    objc_stub::FUN_100c0e5e0(param_1,param_3);
    iVar1 = (int)*(undefined8 *)(param_1 + 8);
    FUN_100b15e2c();
    FUN_100b3a1c0();
    if (iVar1 != 0) {
      FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryProfiler.mm",
                    0xb6,&cf_Stoppedprofiler___);
    }
  }
  return;
}



/* Address: 0x100b4404c | SentryProfiler::start */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryProfiler::start(ID param_1,SEL param_2)

{
  int iVar1;
  class_t *self;
  ID IVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long alStack_88 [3];
  long *local_70;
  undefined **local_68;
  ID IStack_60;
  undefined ***local_50;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_100ea82f0;
  IVar2 = param_1;
  FUN_100b1b0a0();
  iVar1 = (int)IVar2;
  if (iVar1 == 0) {
    plVar5 = (long *)(param_1 + 8);
    if (*plVar5 == 0) {
      FUN_100b3a1c0();
      if (iVar1 != 0) {
        FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryProfiler.mm"
                      ,0xd2,&cf_Startingprofiler_);
      }
      self = &objc::class_t::SentryProfilerState;
      _objc_alloc();
      IVar2 = objc_stub::init((ID)self);
      objc_stub::setState_(param_1,IVar2);
      uVar3 = 0x98;
      __Znwm(0x98);
      local_68 = &PTR_FUN_100f34cd8;
      IStack_60 = IVar2;
      local_50 = &local_68;
      thunk_FUN_100b15b68(uVar3,&local_68,0x65);
      if (local_50 == &local_68) {
        lVar4 = 0x20;
LAB_100b441c8:
        (**(code **)((long)*local_50 + lVar4))();
      }
      else if (local_50 != (undefined ***)0x0) {
        lVar4 = 0x28;
        goto LAB_100b441c8;
      }
      FUN_100b446dc(plVar5,uVar3);
      local_70 = (long *)0x0;
      FUN_100b15fe8(*plVar5,alStack_88);
      if (local_70 == alStack_88) {
        lVar4 = 0x20;
      }
      else {
        if (local_70 == (long *)0x0) goto LAB_100b4422c;
        lVar4 = 0x28;
      }
      (**(code **)(*local_70 + lVar4))();
    }
    else {
      FUN_100b3a1e0();
      if (iVar1 != 0) {
        if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_48) {
          FUN_100b3a280("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryProfiler.mm"
                        ,199,&cf_Thereisalreadyaprivateprofilerinstancepresent_willnotstartanewone_)
          ;
          return;
        }
        goto LAB_100b4425c;
      }
    }
  }
  else {
    FUN_100b3a1c0();
    if (iVar1 != 0) {
      if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_48) {
        FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryProfiler.mm"
                      ,0xbc,&cf_DisablingprofilingwhenrunningwithTSAN);
        return;
      }
      goto LAB_100b4425c;
    }
  }
LAB_100b4422c:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_48) {
    return;
  }
LAB_100b4425c:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100b442f4 | SentryProfiler::isRunning */

/* Function Stack Size: 0x10 bytes */

bool SentryProfiler::isRunning(ID param_1,SEL param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    FUN_100b16670();
    return (bool)lVar1;
  }
  return 0;
}



/* Address: 0x100b44304 | SentryProfiler::profilerId */

/* Function Stack Size: 0x10 bytes */

ID SentryProfiler::profilerId(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x10);
}



/* Address: 0x100b4430c | SentryProfiler::setProfilerId: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryProfiler::setProfilerId_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x10) = param_3;
  return;
}



/* Address: 0x100b44318 | SentryProfiler::state */

/* Function Stack Size: 0x10 bytes */

ID SentryProfiler::state(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x18);
}



/* Address: 0x100b44320 | SentryProfiler::setState: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryProfiler::setState_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x18) = param_3;
  return;
}



/* Address: 0x100b4432c | SentryProfiler::truncationReason */

/* Function Stack Size: 0x10 bytes */

unsigned_long_long SentryProfiler::truncationReason(ID param_1,SEL param_2)

{
  return *(unsigned_long_long *)(param_1 + 0x20);
}



/* Address: 0x100b44334 | SentryProfiler::setTruncationReason: */

/* Function Stack Size: 0x18 bytes */

void SentryProfiler::setTruncationReason_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  *(unsigned_long_long *)(param_1 + 0x20) = param_3;
  return;
}



/* Address: 0x100b4433c | SentryProfiler::metricProfiler */

/* Function Stack Size: 0x10 bytes */

ID SentryProfiler::metricProfiler(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x28);
}



/* Address: 0x100b44344 | SentryProfiler::setMetricProfiler: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryProfiler::setMetricProfiler_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x28) = param_3;
  return;
}



/* Address: 0x100b44350 | SentryProfiler::.cxx_destruct */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryProfiler::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  FUN_100b446dc(param_1 + 8,0);
  return;
}



/* Address: 0x100b44398 | SentryProfiler::.cxx_construct */

/* Function Stack Size: 0x10 bytes */

ID SentryProfiler::_cxx_construct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}



/* Address: 0x100b443a0 | FUN_100b443a0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b443a0(undefined8 param_1)

{
  return param_1;
}



/* Address: 0x100b443c8 | FUN_100b443c8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100b443c8(undefined8 param_1)

{
  __ZdlPv(param_1);
  return;
}



/* Address: 0x100b443f0 | FUN_100b443f0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 * FUN_100b443f0(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_FUN_100f34cd8;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  return puVar1;
}


