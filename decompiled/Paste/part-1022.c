/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100b0cb98 | _SentryDispatchQueueWrapperInternal::initHighPriorityWithName: */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID _SentryDispatchQueueWrapperInternal::initHighPriorityWithName_
             (ID param_1,SEL param_2,const_char__ param_3)

{
  undefined8 uVar1;
  ID IVar2;
  
  uVar1 = 0;
  _dispatch_queue_attr_make_with_qos_class(0,0x19,0);
  IVar2 = objc_stub::FUN_100c045a0(param_1,param_3,uVar1);
  return IVar2;
}



/* Address: 0x100b0cbfc | _SentryDispatchQueueWrapperInternal::dispatchAsyncOnMainQueueIfNotMainThread: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _SentryDispatchQueueWrapperInternal::dispatchAsyncOnMainQueueIfNotMainThread_
               (ID param_1,SEL param_2,ID param_3,uint param_4)

{
  ID IVar1;
  undefined *local_48;
  undefined8 local_40;
  code *local_38;
  undefined *puStack_30;
  ID local_28;
  
  IVar1 = objc_stub::isMainThread((ID)&_OBJC_CLASS___NSThread,param_3,(ulong)param_4);
  if ((int)IVar1 == 0) {
    local_48 = PTR___NSConcreteStackBlock_100ea82a0;
    local_40 = 0xc2000000;
    local_38 = FUN_100b0cca0;
    puStack_30 = &DAT_100f34140;
    local_28 = param_3;
    _dispatch_async(PTR___dispatch_main_q_100ea8310,&local_48);
  }
  else {
    (**(code **)(param_3 + 0x10))(param_3);
  }
  return;
}



/* Address: 0x100b0cca0 | FUN_100b0cca0 */

void FUN_100b0cca0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  _objc_autoreleasePoolPop(lVar1);
  return;
}



/* Address: 0x100b0ccd4 | FUN_100b0ccd4 */

void FUN_100b0ccd4(long param_1,long param_2)

{
  __Block_object_assign((void *)(param_1 + 0x20),*(void **)(param_2 + 0x20),7);
  return;
}



/* Address: 0x100b0cce4 | _SentryDispatchQueueWrapperInternal::dispatchAsyncWithBlock: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _SentryDispatchQueueWrapperInternal::dispatchAsyncWithBlock_
               (ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  undefined *local_48;
  undefined8 local_40;
  code *local_38;
  undefined *puStack_30;
  ID local_28;
  
  local_48 = PTR___NSConcreteStackBlock_100ea82a0;
  local_40 = 0xc2000000;
  local_38 = FUN_100b0cd68;
  puStack_30 = &DAT_100f34140;
  local_28 = param_3;
  _dispatch_async(*(undefined8 *)(param_1 + 8),&local_48,param_3,param_4);
  return;
}



/* Address: 0x100b0cd68 | FUN_100b0cd68 */

void FUN_100b0cd68(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  _objc_autoreleasePoolPop(lVar1);
  return;
}



/* Address: 0x100b0cd9c | _SentryDispatchQueueWrapperInternal::dispatchSync: */

/* Function Stack Size: 0x18 bytes */

void _SentryDispatchQueueWrapperInternal::dispatchSync_
               (ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  _dispatch_sync(*(undefined8 *)(param_1 + 8),param_3,param_3,param_4);
  return;
}



/* Address: 0x100b0cda8 | _SentryDispatchQueueWrapperInternal::dispatchSyncOnMainQueue: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _SentryDispatchQueueWrapperInternal::dispatchSyncOnMainQueue_
               (ID param_1,SEL param_2,ID param_3,uint param_4)

{
  ID IVar1;
  
  IVar1 = objc_stub::isMainThread((ID)&_OBJC_CLASS___NSThread,param_3,(ulong)param_4);
  if ((int)IVar1 == 0) {
    _dispatch_sync(PTR___dispatch_main_q_100ea8310,param_3);
  }
  else {
    (**(code **)(param_3 + 0x10))(param_3);
  }
  return;
}



/* Address: 0x100b0ce04 | _SentryDispatchQueueWrapperInternal::dispatchSyncOnMainQueue:timeout: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

bool _SentryDispatchQueueWrapperInternal::dispatchSyncOnMainQueue_timeout_
               (ID param_1,SEL param_2,ID param_3,uint param_4,double param_5)

{
  ID IVar1;
  dispatch_semaphore_t dsema;
  dispatch_time_t timeout;
  long lVar2;
  bool bVar3;
  undefined *local_70;
  undefined8 local_68;
  code *local_60;
  undefined *puStack_58;
  dispatch_semaphore_t local_50;
  ID local_48;
  
  IVar1 = objc_stub::isMainThread((ID)&_OBJC_CLASS___NSThread,param_3,(ulong)param_4);
  if ((int)IVar1 == 0) {
    dsema = _dispatch_semaphore_create(0);
    local_70 = PTR___NSConcreteStackBlock_100ea82a0;
    local_68 = 0xc2000000;
    local_60 = FUN_100b0cf18;
    puStack_58 = &DAT_100f34170;
    local_50 = dsema;
    local_48 = param_3;
    _dispatch_async(PTR___dispatch_main_q_100ea8310,&local_70);
    timeout = _dispatch_time(0,(long)(param_5 * 1000000000.0));
    lVar2 = _dispatch_semaphore_wait(dsema,timeout);
    bVar3 = (bool)(lVar2 == 0);
  }
  else {
    (**(code **)(param_3 + 0x10))(param_3);
    bVar3 = 1;
  }
  return bVar3;
}



/* Address: 0x100b0cf18 | FUN_100b0cf18 */

void FUN_100b0cf18(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
  _dispatch_semaphore_signal(*(dispatch_semaphore_t *)(param_1 + 0x20));
  return;
}



/* Address: 0x100b0cf44 | _SentryDispatchQueueWrapperInternal::dispatchAfter:block: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void _SentryDispatchQueueWrapperInternal::dispatchAfter_block_
               (ID param_1,SEL param_2,double param_3,ID param_4,undefined4 param_5)

{
  dispatch_time_t dVar1;
  undefined *local_68;
  undefined8 local_60;
  code *local_58;
  undefined *puStack_50;
  ID local_48;
  
  dVar1 = _dispatch_time(0,(long)(param_3 * 1000000000.0));
  local_68 = PTR___NSConcreteStackBlock_100ea82a0;
  local_60 = 0xc2000000;
  local_58 = FUN_100b0d004;
  puStack_50 = &DAT_100f34140;
  local_48 = param_4;
  _dispatch_after(dVar1,*(undefined8 *)(param_1 + 8),&local_68);
  return;
}



/* Address: 0x100b0d004 | FUN_100b0d004 */

void FUN_100b0d004(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  _objc_autoreleasePoolPop(lVar1);
  return;
}



/* Address: 0x100b0d038 | _SentryDispatchQueueWrapperInternal::dispatchOnce:block: */

/* Function Stack Size: 0x20 bytes */

void _SentryDispatchQueueWrapperInternal::dispatchOnce_block_
               (ID param_1,SEL param_2,long_long *param_3,ID param_4,undefined4 param_5)

{
  if (*param_3 == 0xffffffffffffffff) {
    return;
  }
  _dispatch_once(param_3,param_4,param_3,param_4,param_5);
  return;
}



/* Address: 0x100b0d054 | _SentryDispatchQueueWrapperInternal::queue */

/* Function Stack Size: 0x10 bytes */

ID _SentryDispatchQueueWrapperInternal::queue(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 8);
}



/* Address: 0x100b0d05c | _SentryDispatchQueueWrapperInternal::setQueue: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void _SentryDispatchQueueWrapperInternal::setQueue_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 8) = param_3;
  return;
}



/* Address: 0x100b0d068 | _SentryDispatchQueueWrapperInternal::.cxx_destruct */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void _SentryDispatchQueueWrapperInternal::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



/* Address: 0x100b0d074 | FUN_100b0d074 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

ID FUN_100b0d074(ID param_1)

{
  ID IVar1;
  ID IVar2;
  class_t *self;
  
  IVar1 = objc_stub::objectForKeyedSubscript_(param_1,&cf_profiles_sample_rand);
  if (IVar1 == 0) {
    FUN_100b3a1c0();
    if ((int)IVar1 != 0) {
      FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/Profiling/SentryLaunchProfiling.m"
                    ,0x2c,&
                          cf_Receivedanilconfiguredlaunchprofilesamplerand_willnotstarttraceprofilerforlaunch_
                   );
    }
    IVar1 = 0;
  }
  else {
    IVar2 = objc_stub::objectForKeyedSubscript_(param_1,&cf_profiles);
    if (IVar2 == 0) {
      FUN_100b3a1c0();
      if ((int)IVar2 != 0) {
        FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/Profiling/SentryLaunchProfiling.m"
                      ,0x33,&cf_Triedtostartaprofilewithnoconfiguredsamplerate_Willnotrunprofiler_);
      }
      IVar1 = 0;
    }
    else {
      self = &objc::class_t::_TtC6Sentry21SentrySamplerDecision;
      _objc_alloc();
      IVar1 = objc_stub::FUN_100c03f40((ID)self,1,IVar2,IVar1);
    }
  }
  return IVar1;
}



/* Address: 0x100b0d164 | FUN_100b0d164 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
FUN_100b0d164(undefined8 param_1,ID param_2,ID param_3,undefined8 param_4,undefined8 param_5)

{
  ID IVar1;
  class_t *self;
  
  objc_stub::FUN_100c0c6a0(param_2,param_4);
  objc_stub::FUN_100c0d300(param_2,1);
  IVar1 = objc_stub::sampleRate(param_3);
  objc_stub::FUN_100c028a0(IVar1);
  objc_stub::FUN_100c0d9e0(param_2);
  self = &objc::class_t::SentryProfileConfiguration;
  _objc_alloc();
  IVar1 = objc_stub::FUN_100c03980((ID)self,param_5,param_3,param_2);
  FUN_100b43d24(IVar1);
  return 0;
}



/* Address: 0x100b0d220 | FUN_100b0d220 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b0d220(ID param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ID IVar1;
  
  IVar1 = objc_stub::objectForKeyedSubscript_(param_1,&cf_profiles_sample_rand);
  if (IVar1 == 0) {
    FUN_100b3a1f0();
    if ((int)IVar1 != 0) {
      FUN_100b3a2b8("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/Profiling/SentryLaunchProfiling.m"
                    ,0x5c,&
                          cf_Triedtostartacontinuousprofilev2withnoconfiguredsamplerate_rand_Willnotrunprofiler_
                   );
    }
  }
  else {
    FUN_100b0d164(IVar1,param_2,param_3,0,param_4);
    objc_stub::start((ID)&objc::class_t::SentryContinuousProfiler);
  }
  return 0;
}



/* Address: 0x100b0d2f4 | FUN_100b0d2f4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

ID FUN_100b0d2f4(undefined8 param_1,undefined8 param_2)

{
  ID IVar1;
  class_t *self;
  
  self = &objc::class_t::SentryTransactionContext;
  _objc_alloc();
  IVar1 = objc_stub::FUN_100c04600
                    ((ID)self,&cf_launch,0,&cf_app_lifecycle,&cf_auto_app_start_profile,1,param_1,
                     param_2);
  return IVar1;
}



/* Address: 0x100b0d394 | FUN_100b0d394 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b0d394(ID param_1,undefined8 param_2)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  class_t *self;
  
  IVar1 = objc_stub::objectForKeyedSubscript_(param_1,&cf_traces);
  if (IVar1 == 0) {
    FUN_100b3a1c0();
    if ((int)IVar1 != 0) {
      FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/Profiling/SentryLaunchProfiling.m"
                    ,0x7b,&
                          cf_Receivedanilconfiguredlaunchtracesamplerate_willnotstarttraceprofilerforlaunch_
                   );
    }
  }
  else {
    IVar2 = objc_stub::objectForKeyedSubscript_(param_1,&cf_traces_sample_rand);
    if (IVar2 == 0) {
      FUN_100b3a1c0();
      if ((int)IVar2 != 0) {
        FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/Profiling/SentryLaunchProfiling.m"
                      ,0x82,&
                            cf_Receivedanilconfiguredlaunchtracesamplerand_willnotstarttraceprofilerforlaunch_
                     );
      }
    }
    else {
      IVar3 = IVar2;
      FUN_100b3a1d0();
      if ((int)IVar3 != 0) {
        objc_stub::FUN_100c02c20((ID)&objc::class_t::_TtC6Sentry32SentryDefaultCurrentDateProvider);
        FUN_100b3a248("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/Profiling/SentryLaunchProfiling.m"
                      ,0x87,&cf_Startingapplaunchtraceprofileat_llu_);
      }
      DAT_101058390 = 1;
      IVar3 = objc_stub::defaultConfiguration((ID)&objc::class_t::SentryTracerConfiguration);
      objc_stub::FUN_100c0d360(IVar3,param_2);
      FUN_100b0d2f4(IVar1,IVar2);
      self = &objc::class_t::SentryTracer;
      _objc_alloc();
      DAT_101058398 = objc_stub::FUN_100c04f40((ID)self,IVar1,0,IVar3);
    }
  }
  return 0;
}



/* Address: 0x100b0d538 | FUN_100b0d538 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b0d538(undefined8 *param_1,ID param_2)

{
  int iVar1;
  int iVar2;
  ID IVar3;
  class_t *pcVar4;
  ID IVar5;
  ID IVar6;
  ID IVar7;
  
  IVar3 = objc_stub::profiling(param_2);
  IVar3 = objc_stub::FUN_100c08320(IVar3);
  iVar1 = 0;
  if ((IVar3 & 1) == 0) {
    FUN_100b3a1c0();
    if (iVar1 != 0) {
      FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/Profiling/SentryLaunchProfiling.m"
                    ,0x99,&
                          cf_Continuousprofilingv2enabledbutdisabledappstartprofiling_won_tprofilelaunch_
                   );
    }
  }
  else {
    IVar3 = objc_stub::profiling(param_2);
    IVar3 = objc_stub::lifecycle(IVar3);
    if (IVar3 != 1) {
      IVar3 = objc_stub::profiling(param_2);
      IVar5 = objc_stub::FUN_100c0a2e0(IVar3);
      FUN_100b4c660();
      IVar6 = objc_stub::FUN_100c00c40(IVar5);
      IVar3 = IVar6;
      FUN_100b3a1c0();
      if (IVar6 == 1) {
        if ((int)IVar3 != 0) {
          FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/Profiling/SentryLaunchProfiling.m"
                        ,199,&
                             cf_Continuousprofilingv2manuallifecycleconditionssatisfied_willprofilelaunch_
                       );
        }
        *(undefined1 *)param_1 = 1;
        param_1[1] = 0;
        param_1[2] = IVar5;
        return 0;
      }
      if ((int)IVar3 != 0) {
        FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/Profiling/SentryLaunchProfiling.m"
                      ,0xc2,&cf_Samplingoutcontinuousv2profile_won_tprofilelaunch_);
      }
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      return 0;
    }
    IVar3 = objc_stub::FUN_100c05d60(param_2);
    iVar1 = (int)IVar3;
    if ((IVar3 & 1) != 0) {
      pcVar4 = &objc::class_t::SentryTransactionContext;
      _objc_alloc();
      IVar3 = objc_stub::FUN_100c04680((ID)pcVar4,&cf_app_launch,&cf_profile);
      objc_stub::FUN_100c0bd60(IVar3,1);
      pcVar4 = &objc::class_t::SentrySamplingContext;
      _objc_alloc();
      IVar3 = objc_stub::FUN_100c04f00((ID)pcVar4,IVar3);
      FUN_100b4c3cc(IVar3,param_2);
      IVar5 = objc_stub::FUN_100c00c40(IVar3);
      if (IVar5 != 1) {
        FUN_100b3a1c0();
        if ((int)IVar5 != 0) {
          FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/Profiling/SentryLaunchProfiling.m"
                        ,0xae,&
                              cf_Samplingoutthelaunchtraceforcontinuousprofilev2tracelifecycle_won_tprofilelaunch_
                       );
        }
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        return 0;
      }
      IVar5 = objc_stub::profiling(param_2);
      IVar6 = objc_stub::FUN_100c0a2e0(IVar5);
      FUN_100b4c660();
      IVar7 = objc_stub::FUN_100c00c40(IVar6);
      IVar5 = IVar7;
      FUN_100b3a1c0();
      if (IVar7 == 1) {
        if ((int)IVar5 != 0) {
          FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/Profiling/SentryLaunchProfiling.m"
                        ,0xbb,&
                              cf_Continuousprofilingv2tracelifecycleconditionssatisfied_willprofilelaunch_
                       );
        }
        *(undefined1 *)param_1 = 1;
        param_1[1] = IVar3;
        param_1[2] = IVar6;
        return 0;
      }
      if ((int)IVar5 != 0) {
        FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/Profiling/SentryLaunchProfiling.m"
                      ,0xb6,&cf_Samplingoutcontinuousv2tracelifecycleprofile_won_tprofilelaunch_);
      }
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      return 0;
    }
    FUN_100b3a1c0();
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = 0xdbc7e9;
      FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/Profiling/SentryLaunchProfiling.m"
                    ,0x9f,&
                          cf_Continuousprofilingv2enabledfortracelifecyclebuttracingisdisabled_won_tprofilelaunch_
                   );
    }
    FUN_100b3a1e0();
    if (iVar2 != 0) {
      FUN_100b3a280("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/Profiling/SentryLaunchProfiling.m"
                    ,0xa2,&
                          cf_Tracingmustbeenabledinordertoconfigureappstartprofilingwithtracelifecycle_SeeSentryOptions_tracesSampleRateandSentryOptions_tracesSampler_
                   );
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return 0;
}



/* Address: 0x100b0d844 | FUN_100b0d844 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b0d844(undefined8 *param_1,ID param_2)

{
  ID IVar1;
  
  IVar1 = objc_stub::FUN_100c056c0(param_2);
  if ((int)IVar1 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    FUN_100b0d538(param_1,param_2);
  }
  return 0;
}



/* Address: 0x100b0d88c | FUN_100b0d88c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

char * FUN_100b0d88c(char *param_1)

{
  ID IVar1;
  ID IVar2;
  class_t *self;
  ID IVar3;
  char *pcVar4;
  
  FUN_100b5b310();
  if (((ulong)param_1 & 1) != 0) {
    FUN_100b5b1a4();
    pcVar4 = param_1;
    FUN_100b0d074();
    if (pcVar4 == (char *)0x0) {
      FUN_100b3a1c0();
      if ((int)pcVar4 != 0) {
        FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/Profiling/SentryLaunchProfiling.m"
                      ,0x100,&cf_Couldn_thydratethepersistedsampledecision_);
      }
      FUN_100b5b4f8();
    }
    else {
      IVar1 = objc_stub::objectForKeyedSubscript_
                        ((ID)param_1,&cf_launch_profile_wait_for_full_display);
      if (IVar1 == 0) {
        FUN_100b3a1c0();
        if ((int)IVar1 != 0) {
          FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/Profiling/SentryLaunchProfiling.m"
                        ,0x10a,&
                               cf_ReceivedanilconfiguredlaunchprofilevalueindicatingwhetherornottheprofileshouldbefinishedonfulldisplayorSDKstart_cannotknowwhentostoptheprofile_willnotstartthislaunch_
                       );
        }
        FUN_100b5b4f8();
      }
      else {
        IVar2 = objc_stub::boolValue(IVar1);
        IVar1 = IVar2;
        FUN_100b3a1c0();
        if ((int)IVar1 != 0) {
          FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/Profiling/SentryLaunchProfiling.m"
                        ,0x112,&cf_Startingcontinuouslaunchprofilev2_);
        }
        IVar1 = objc_stub::objectForKeyedSubscript_
                          ((ID)param_1,&cf_continuous_profiling_v2_lifecycle);
        if (IVar1 == 0) {
          FUN_100b3a1f0();
          if ((int)IVar1 != 0) {
            FUN_100b3a2b8("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/Profiling/SentryLaunchProfiling.m"
                          ,0x117,&
                                 cf_Missingexpectedlaunchprofileconfigparameterforlifecycle_Willnotproceedwithlaunchprofile_
                         );
          }
          FUN_100b5b4f8();
        }
        else {
          self = &objc::class_t::_TtC6Sentry20SentryProfileOptions;
          _objc_alloc();
          IVar3 = objc_stub::init((ID)self);
          IVar1 = objc_stub::intValue(IVar1);
          if ((int)IVar1 == 0) {
            FUN_100b0d220(param_1,IVar3,pcVar4,IVar2);
          }
          else {
            FUN_100b0d164(IVar1,IVar3,pcVar4,1,IVar2);
            FUN_100b0d394(param_1,pcVar4);
          }
          FUN_100b5b4f8();
        }
      }
    }
    return (char *)0x0;
  }
  FUN_100b3a1c0();
  if ((int)param_1 == 0) {
    return param_1;
  }
  pcVar4 = 
  "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/Profiling/SentryLaunchProfiling.m";
  FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/Profiling/SentryLaunchProfiling.m"
                ,0xef,&cf_Nolaunchprofileconfigexists_willnotprofilelaunch_);
  return pcVar4;
}



/* Address: 0x100b0da88 | FUN_100b0da88 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b0da88(undefined8 param_1)

{
  ID IVar1;
  undefined *local_58;
  undefined8 local_50;
  code *local_48;
  undefined *puStack_40;
  undefined8 local_38;
  
  IVar1 = objc_stub::sharedInstance((ID)&objc::class_t::_TtC6Sentry25SentryDependencyContainer);
  IVar1 = objc_stub::dispatchQueueWrapper(IVar1);
  local_58 = PTR___NSConcreteStackBlock_100ea82a0;
  local_50 = 0xc2000000;
  local_48 = FUN_100b0db48;
  puStack_40 = &DAT_100f341a0;
  local_38 = param_1;
  objc_stub::dispatchAsyncWithBlock_(IVar1,&local_58);
  return 0;
}



/* Address: 0x100b0db48 | FUN_100b0db48 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b0db48(long param_1)

{
  int iVar1;
  ID self;
  ID IVar2;
  byte local_48 [8];
  ID local_40;
  ID local_38;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  FUN_100b0d844(local_48);
  if ((local_48[0] & 1) == 0) {
    FUN_100b3a1c0();
    if (iVar1 != 0) {
      FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/Profiling/SentryLaunchProfiling.m"
                    ,0x139,&cf_Removinglaunchprofileconfigfile_);
    }
    FUN_100b5b4f8();
  }
  else {
    self = NSMutableDictionary::dictionary((ID)&_OBJC_CLASS___NSMutableDictionary);
    IVar2 = objc_stub::enableTimeToFullDisplayTracing(*(ID *)(param_1 + 0x20));
    IVar2 = NSNumber::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,IVar2);
    NSMutableDictionary::setObject_forKeyedSubscript_
              (self,IVar2,&cf_launch_profile_wait_for_full_display);
    iVar1 = 0;
    FUN_100b3a1c0();
    if (iVar1 != 0) {
      FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/Profiling/SentryLaunchProfiling.m"
                    ,0x142,&cf_Configuringcontinuouslaunchprofilev2_);
    }
    IVar2 = objc_stub::profiling(*(ID *)(param_1 + 0x20));
    IVar2 = objc_stub::lifecycle(IVar2);
    IVar2 = NSNumber::numberWithInteger_((ID)&_OBJC_CLASS___NSNumber,IVar2);
    NSMutableDictionary::setObject_forKeyedSubscript_
              (self,IVar2,&cf_continuous_profiling_v2_lifecycle);
    IVar2 = objc_stub::profiling(*(ID *)(param_1 + 0x20));
    IVar2 = objc_stub::lifecycle(IVar2);
    if (IVar2 == 1) {
      IVar2 = objc_stub::sampleRate(local_40);
      NSMutableDictionary::setObject_forKeyedSubscript_(self,IVar2,&cf_traces);
      IVar2 = objc_stub::sampleRand(local_40);
      NSMutableDictionary::setObject_forKeyedSubscript_(self,IVar2,&cf_traces_sample_rand);
    }
    IVar2 = objc_stub::sampleRate(local_38);
    NSMutableDictionary::setObject_forKeyedSubscript_(self,IVar2,&cf_profiles);
    IVar2 = objc_stub::sampleRand(local_38);
    NSMutableDictionary::setObject_forKeyedSubscript_(self,IVar2,&cf_profiles_sample_rand);
    FUN_100b5b3dc(self);
  }
  return 0;
}



/* Address: 0x100b0ddb8 | FUN_100b0ddb8 */

void FUN_100b0ddb8(ID param_1,SEL param_2)

{
  if (DAT_1010e1968 == -1) {
    return;
  }
  FUN_100b0de5c();
  return;
}



/* Address: 0x100b0dde0 | thunk_FUN_100b0d88c */

void thunk_FUN_100b0d88c(void)

{
  FUN_100b0d88c();
  return;
}



/* Address: 0x100b0dde4 | FUN_100b0dde4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b0dde4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_100b3a1c0();
  if ((int)uVar1 != 0) {
    FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/Profiling/SentryLaunchProfiling.m"
                  ,0x160,&cf_Finishinglaunchtracer_);
  }
  objc_stub::FUN_100c0c0a0(DAT_101058398,param_1);
  objc_stub::FUN_100c02620(DAT_101058398);
  FUN_100b43d24(0);
  DAT_101058390 = 0;
  DAT_101058398 = 0;
  return 0;
}



/* Address: 0x100b0de5c | FUN_100b0de5c */

void FUN_100b0de5c(void)

{
  _dispatch_once(&DAT_1010e1968,&PTR___NSConcreteGlobalBlock_100f341f0);
  return;
}



/* Address: 0x100b0de70 | SentryDebugMeta::init */

/* Function Stack Size: 0x10 bytes */

ID SentryDebugMeta::init(ID param_1,SEL param_2)

{
  ID IVar1;
  objc_super local_20;
  
  local_20.super_class = &objc::class_t::SentryDebugMeta;
  local_20.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_20,"init");
  return IVar1;
}



/* Address: 0x100b0dea4 | SentryDebugMeta::serialize */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryDebugMeta::serialize(ID param_1,SEL param_2)

{
  undefined *self;
  ID self_00;
  ID IVar1;
  
  self = &_OBJC_CLASS___NSMutableDictionary;
  _objc_alloc();
  self_00 = objc_stub::init((ID)self);
  IVar1 = objc_stub::FUN_100c00ba0(param_1);
  objc_stub::setObject_forKeyedSubscript_(self_00,IVar1,&cf_debug_id);
  IVar1 = objc_stub::type(param_1);
  objc_stub::setObject_forKeyedSubscript_(self_00,IVar1,&cf_type);
  IVar1 = objc_stub::FUN_100c035e0(param_1);
  objc_stub::setObject_forKeyedSubscript_(self_00,IVar1,&cf_image_addr);
  IVar1 = objc_stub::imageSize(param_1);
  objc_stub::setObject_forKeyedSubscript_(self_00,IVar1,&cf_image_size);
  IVar1 = objc_stub::FUN_100bff5a0(param_1);
  objc_stub::setObject_forKeyedSubscript_(self_00,IVar1,&cf_code_file);
  IVar1 = objc_stub::FUN_100c03740(param_1);
  objc_stub::setObject_forKeyedSubscript_(self_00,IVar1,&cf_image_vmaddr);
  return self_00;
}



/* Address: 0x100b0e000 | SentryDebugMeta::debugID */

/* Function Stack Size: 0x10 bytes */

ID SentryDebugMeta::debugID(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 8);
}



/* Address: 0x100b0e008 | SentryDebugMeta::setDebugID: */

/* WARNING: Function: _objc_setProperty_nonatomic_copy replaced with injection:
   _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryDebugMeta::setDebugID_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 8) = param_3;
  return;
}



/* Address: 0x100b0e010 | SentryDebugMeta::type */

/* Function Stack Size: 0x10 bytes */

ID SentryDebugMeta::type(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x10);
}



/* Address: 0x100b0e018 | SentryDebugMeta::setType: */

/* WARNING: Function: _objc_setProperty_nonatomic_copy replaced with injection:
   _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryDebugMeta::setType_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x10) = param_3;
  return;
}



/* Address: 0x100b0e020 | SentryDebugMeta::imageSize */

/* Function Stack Size: 0x10 bytes */

ID SentryDebugMeta::imageSize(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x18);
}



/* Address: 0x100b0e028 | SentryDebugMeta::setImageSize: */

/* WARNING: Function: _objc_setProperty_nonatomic_copy replaced with injection:
   _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryDebugMeta::setImageSize_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x18) = param_3;
  return;
}



/* Address: 0x100b0e030 | SentryDebugMeta::imageAddress */

/* Function Stack Size: 0x10 bytes */

ID SentryDebugMeta::imageAddress(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x20);
}



/* Address: 0x100b0e038 | SentryDebugMeta::setImageAddress: */

/* WARNING: Function: _objc_setProperty_nonatomic_copy replaced with injection:
   _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryDebugMeta::setImageAddress_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x20) = param_3;
  return;
}



/* Address: 0x100b0e040 | SentryDebugMeta::imageAddressRaw */

/* Function Stack Size: 0x10 bytes */

unsigned_long_long SentryDebugMeta::imageAddressRaw(ID param_1,SEL param_2)

{
  return *(unsigned_long_long *)(param_1 + 0x28);
}



/* Address: 0x100b0e048 | SentryDebugMeta::setImageAddressRaw: */

/* Function Stack Size: 0x18 bytes */

void SentryDebugMeta::setImageAddressRaw_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  *(unsigned_long_long *)(param_1 + 0x28) = param_3;
  return;
}



/* Address: 0x100b0e050 | SentryDebugMeta::imageVmAddress */

/* Function Stack Size: 0x10 bytes */

ID SentryDebugMeta::imageVmAddress(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x30);
}



/* Address: 0x100b0e058 | SentryDebugMeta::setImageVmAddress: */

/* WARNING: Function: _objc_setProperty_nonatomic_copy replaced with injection:
   _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryDebugMeta::setImageVmAddress_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x30) = param_3;
  return;
}



/* Address: 0x100b0e060 | SentryDebugMeta::imageVmAddressRaw */

/* Function Stack Size: 0x10 bytes */

unsigned_long_long SentryDebugMeta::imageVmAddressRaw(ID param_1,SEL param_2)

{
  return *(unsigned_long_long *)(param_1 + 0x38);
}



/* Address: 0x100b0e068 | SentryDebugMeta::setImageVmAddressRaw: */

/* Function Stack Size: 0x18 bytes */

void SentryDebugMeta::setImageVmAddressRaw_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  *(unsigned_long_long *)(param_1 + 0x38) = param_3;
  return;
}



/* Address: 0x100b0e070 | SentryDebugMeta::codeFile */

/* Function Stack Size: 0x10 bytes */

ID SentryDebugMeta::codeFile(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x40);
}



/* Address: 0x100b0e078 | SentryDebugMeta::setCodeFile: */

/* WARNING: Function: _objc_setProperty_nonatomic_copy replaced with injection:
   _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryDebugMeta::setCodeFile_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x40) = param_3;
  return;
}



/* Address: 0x100b0e080 | SentryDebugMeta::.cxx_destruct */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryDebugMeta::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



/* Address: 0x100b0e0e0 | SentryClientInternal::initWithOptions: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryClientInternal::initWithOptions_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  ID IVar2;
  class_t *pcVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  ID IVar7;
  ID IVar8;
  ID IVar9;
  ID IVar10;
  ID IVar11;
  ID IVar12;
  ID IVar13;
  ID IVar14;
  ID IVar15;
  ID local_68;
  
  IVar2 = objc_stub::sharedInstance((ID)&objc::class_t::_TtC6Sentry25SentryDependencyContainer);
  pcVar3 = &objc::class_t::_TtC6Sentry17SentryFileManager;
  _objc_alloc();
  IVar4 = objc_stub::FUN_100c00ac0(IVar2);
  IVar5 = objc_stub::dispatchQueueWrapper(IVar2);
  local_68 = 0;
  IVar5 = objc_stub::FUN_100c04760((ID)pcVar3,param_3,IVar4,IVar5,&local_68);
  IVar4 = local_68;
  iVar1 = 0;
  if (local_68 == 0) {
    IVar4 = objc_stub::FUN_100c00ac0(IVar2);
    IVar6 = objc_stub::rateLimits(IVar2);
    IVar7 = objc_stub::FUN_100c08800(IVar2);
    IVar4 = objc_stub::FUN_100c03a00
                      ((ID)&objc::class_t::SentryTransportFactory,param_3,IVar4,IVar5,IVar6,IVar7);
    pcVar3 = &objc::class_t::SentryTransportAdapter;
    _objc_alloc();
    IVar6 = objc_stub::FUN_100c04f80((ID)pcVar3,IVar4,param_3);
    pcVar3 = &objc::class_t::SentryDefaultThreadInspector;
    _objc_alloc();
    IVar7 = objc_stub::FUN_100c04740((ID)pcVar3,param_3);
    IVar8 = objc_stub::FUN_100c00ac0(IVar2);
    IVar9 = objc_stub::FUN_100c00bc0(IVar2);
    IVar10 = objc_stub::FUN_100c08620(IVar2);
    IVar11 = objc_stub::FUN_100bfe360((ID)&_OBJC_CLASS___NSLocale);
    IVar4 = objc_stub::FUN_100bfe340((ID)&_OBJC_CLASS___NSCalendar);
    IVar12 = objc_stub::FUN_100c10640(IVar4);
    IVar13 = objc_stub::FUN_100c01ee0(IVar2);
    IVar4 = IVar13;
    IVar14 = objc_stub::crashWrapper(IVar2);
    IVar15 = objc_stub::binaryImageCache(IVar2);
    IVar2 = objc_stub::dispatchQueueWrapper(IVar2);
    IVar4 = objc_stub::FUN_100c04780
                      (param_1,param_3,IVar8,IVar6,IVar5,IVar7,IVar9,IVar10,IVar11,IVar12,IVar13,
                       IVar14,IVar15,IVar2,IVar4);
  }
  else {
    FUN_100b3a200();
    if (iVar1 == 0) {
      IVar4 = 0;
    }
    else {
      objc_stub::localizedDescription(IVar4);
      FUN_100b3a2f0("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryClient.m",
                    0x4b,&cf_Failedtoinitializefilesystem___);
      IVar4 = 0;
    }
  }
  return IVar4;
}



/* Address: 0x100b0e48c | SentryClientInternal::initWithOptions:dateProvider:transportAdapter:fileManager:threadInspector:debugImageProvider:random:locale:timezone:eventContextEnricher:crashWrapper:binaryImageCache:dispatchQueueWrapper: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x78 bytes */

ID SentryClientInternal::
   initWithOptions_dateProvider_transportAdapter_fileManager_threadInspector_debugImageProvider_random_locale_timezone_eventContextEnricher_crashWrapper_binaryImageCache_dispatchQueueWrapper_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,ID param_7,
             ID param_8,ID param_9,ID param_10,ID param_11,ID param_12,ID param_13,ID param_14,
             ID param_15)

{
  ID self;
  undefined *self_00;
  ID IVar1;
  class_t *pcVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  objc_super local_70;
  
  local_70.super_class = &objc::class_t::SentryClientInternal;
  local_70.receiver = param_1;
  self = _objc_msgSendSuper2(&local_70,"init");
  if (self != 0) {
    *(undefined1 *)(self + 8) = 1;
    objc_stub::FUN_100c0cf00(self,param_3);
    objc_stub::FUN_100c0e580(self,param_5);
    objc_stub::FUN_100c0bc00(self,param_6);
    objc_stub::FUN_100c0e200(self,param_7);
    objc_stub::FUN_100c0d460(self,param_9);
    objc_stub::FUN_100c0b460(self,param_8);
    objc_stub::setLocale_(self,param_10);
    objc_stub::FUN_100c0e2e0(self,param_11);
    self_00 = &_OBJC_CLASS___NSMutableArray;
    _objc_alloc();
    IVar1 = objc_stub::init((ID)self_00);
    objc_stub::FUN_100c0a7c0(self,IVar1);
    objc_stub::FUN_100c0b980(self,param_12);
    objc_stub::FUN_100c0b600(self,param_15);
    pcVar2 = &objc::class_t::SentryDefaultTelemetryProcessorTransport;
    _objc_alloc();
    IVar1 = objc_stub::FUN_100c04f60((ID)pcVar2,param_5);
    IVar3 = objc_stub::sharedInstance((ID)&objc::class_t::_TtC6Sentry25SentryDependencyContainer);
    IVar1 = objc_stub::FUN_100c02f60
                      ((ID)&objc::class_t::_TtC6Sentry31SentryTelemetryProcessorFactory,IVar1,IVar3)
    ;
    objc_stub::FUN_100c0e0a0(self,IVar1);
    IVar1 = objc_stub::FUN_100c09e80(param_3);
    pcVar2 = &objc::class_t::_TtC6Sentry28SentryDefaultLogScopeApplier;
    _objc_alloc();
    IVar3 = objc_stub::environment(param_3);
    IVar4 = objc_stub::FUN_100c08e20(param_3);
    IVar5 = objc_stub::FUN_100bfeb80(param_3);
    IVar1 = objc_stub::FUN_100c040e0((ID)pcVar2,IVar3,IVar4,IVar5,IVar1);
    objc_stub::FUN_100c0c7a0(self,IVar1);
    objc_stub::startBinaryImageCache(param_13);
    IVar1 = objc_stub::debug(param_3);
    objc_stub::start_(param_14,IVar1);
    IVar1 = objc_stub::FUN_100bfeb80(param_3);
    objc_stub::FUN_100bfebc0((ID)&objc::class_t::_TtC6Sentry18SentryInstallation,IVar1);
    objc_stub::FUN_100c00f20(param_6);
  }
  return self;
}



/* Address: 0x100b0e870 | SentryClientInternal::setOptionsInternal: */

/* Function Stack Size: 0x18 bytes */

ID __objc_msgSend_stub SentryClientInternal::setOptionsInternal_(ID self,...)

{
  (*(code *)PTR__objc_msgSend_100ea81a8)(self,"setOptions:");
  return self;
}



/* Address: 0x100b0e874 | SentryClientInternal::getOptions */

/* Function Stack Size: 0x10 bytes */

ID __objc_msgSend_stub SentryClientInternal::getOptions(ID self,...)

{
  (*(code *)PTR__objc_msgSend_100ea81a8)(self,"options");
  return self;
}



/* Address: 0x100b0e878 | SentryClientInternal::captureMessage: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryClientInternal::captureMessage_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  class_t *self;
  
  self = &objc::class_t::SentryScope;
  _objc_alloc();
  IVar1 = objc_stub::init((ID)self);
  IVar1 = objc_stub::FUN_100bfefa0(param_1,param_3,IVar1);
  return IVar1;
}



/* Address: 0x100b0e8f0 | SentryClientInternal::captureMessage:withScope: */

/* Function Stack Size: 0x20 bytes */

ID SentryClientInternal::captureMessage_withScope_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  
  IVar1 = objc_stub::FUN_100bfefc0(param_1,param_3,param_4,0);
  return IVar1;
}



/* Address: 0x100b0e8f8 | SentryClientInternal::captureMessage:withScope:attachAllThreads: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x28 bytes */

ID SentryClientInternal::captureMessage_withScope_attachAllThreads_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  ID IVar1;
  ID IVar2;
  class_t *pcVar3;
  
  pcVar3 = &objc::class_t::SentryEvent;
  _objc_alloc();
  IVar1 = objc_stub::FUN_100c044a0((ID)pcVar3,2);
  pcVar3 = &objc::class_t::SentryMessage;
  _objc_alloc();
  IVar2 = objc_stub::FUN_100c04260((ID)pcVar3,param_3);
  objc_stub::setMessage_(IVar1,IVar2);
  objc_stub::FUN_100c0a780(IVar1,param_5);
  IVar1 = objc_stub::FUN_100c09f20(param_1,IVar1,param_4,0);
  return IVar1;
}



/* Address: 0x100b0e9e8 | SentryClientInternal::captureException: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryClientInternal::captureException_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  class_t *self;
  
  self = &objc::class_t::SentryScope;
  _objc_alloc();
  IVar1 = objc_stub::init((ID)self);
  IVar1 = objc_stub::FUN_100bfeec0(param_1,param_3,IVar1);
  return IVar1;
}



/* Address: 0x100b0ea60 | SentryClientInternal::captureException:withScope: */

/* Function Stack Size: 0x20 bytes */

ID SentryClientInternal::captureException_withScope_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  
  IVar1 = objc_stub::FUN_100bfeee0(param_1,param_3,param_4,0);
  return IVar1;
}



/* Address: 0x100b0ea68 | SentryClientInternal::captureException:withScope:attachAllThreads: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x28 bytes */

ID SentryClientInternal::captureException_withScope_attachAllThreads_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  ID IVar1;
  
  IVar1 = objc_stub::FUN_100bfe980(param_1,param_3);
  objc_stub::FUN_100c0a780(IVar1,param_5);
  IVar1 = objc_stub::FUN_100bfee80(param_1,IVar1,param_4);
  return IVar1;
}



/* Address: 0x100b0eb04 | SentryClientInternal::buildExceptionEvent: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryClientInternal::buildExceptionEvent_(ID param_1,SEL param_2,ID param_3)

{
  ID self;
  ID IVar1;
  ID IVar2;
  class_t *pcVar3;
  ID local_50;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_100ea82f0;
  pcVar3 = &objc::class_t::SentryEvent;
  _objc_alloc();
  self = objc_stub::FUN_100c044a0((ID)pcVar3,4);
  pcVar3 = &objc::class_t::SentryException;
  _objc_alloc();
  IVar1 = objc_stub::reason(param_3);
  IVar2 = objc_stub::name(param_3);
  local_50 = objc_stub::FUN_100c051e0((ID)pcVar3,IVar1,IVar2);
  IVar1 = objc_stub::arrayWithObjects_count_((ID)&_OBJC_CLASS___NSArray,&local_50,1);
  objc_stub::FUN_100c0ba20(self,IVar1);
  IVar1 = objc_stub::userInfo(param_3);
  objc_stub::FUN_100c0e780(param_1,IVar1,self);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_48) {
    return self;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}



/* Address: 0x100b0ec60 | SentryClientInternal::captureError: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryClientInternal::captureError_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  class_t *self;
  
  self = &objc::class_t::SentryScope;
  _objc_alloc();
  IVar1 = objc_stub::init((ID)self);
  IVar1 = objc_stub::FUN_100bfede0(param_1,param_3,IVar1);
  return IVar1;
}



/* Address: 0x100b0ecd8 | SentryClientInternal::captureError:withScope: */

/* Function Stack Size: 0x20 bytes */

ID SentryClientInternal::captureError_withScope_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  
  IVar1 = objc_stub::FUN_100bfee00(param_1,param_3,param_4,0);
  return IVar1;
}



/* Address: 0x100b0ece0 | SentryClientInternal::captureError:withScope:attachAllThreads: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x28 bytes */

ID SentryClientInternal::captureError_withScope_attachAllThreads_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  ID IVar1;
  
  IVar1 = objc_stub::FUN_100bfe960(param_1,param_3);
  objc_stub::FUN_100c0a780(IVar1,param_5);
  IVar1 = objc_stub::FUN_100bfee80(param_1,IVar1,param_4);
  return IVar1;
}



/* Address: 0x100b0ed7c | SentryClientInternal::buildErrorEvent: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryClientInternal::buildErrorEvent_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  class_t *self;
  ID self_00;
  ID self_01;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  undefined8 uVar5;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  ID local_70;
  ID IStack_68;
  
  self = &objc::class_t::SentryEvent;
  _objc_alloc();
  self_00 = objc_stub::FUN_100c04100((ID)self,param_3);
  self_01 = objc_stub::FUN_100bfe020((ID)&_OBJC_CLASS___NSMutableArray,param_3);
  IVar2 = objc_stub::userInfo(param_3);
  uVar5 = *(undefined8 *)PTR__NSUnderlyingErrorKey_100ea7c80;
  IVar2 = objc_stub::objectForKeyedSubscript_(IVar2,uVar5);
  IVar3 = objc_stub::class((ID)&_OBJC_CLASS___NSError);
  IVar3 = objc_stub::isKindOfClass_(IVar2,IVar3);
  IVar2 = objc_stub::userInfo(param_3);
  IVar2 = objc_stub::objectForKeyedSubscript_(IVar2,uVar5);
  if ((IVar3 & 1) == 0) {
    iVar1 = 0;
    if ((IVar2 != 0) && (FUN_100b3a1e0(), iVar1 != 0)) {
      IVar2 = objc_stub::userInfo(param_3);
      objc_stub::objectForKeyedSubscript_(IVar2,uVar5);
      IVar2 = objc_stub::userInfo(param_3);
      IVar2 = objc_stub::objectForKeyedSubscript_(IVar2,uVar5);
      objc_stub::class(IVar2);
      FUN_100b3a280("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryClient.m",
                    0x101,&
                          cf_InvalidvalueforNSUnderlyingErrorKeyinuserinfo_Dataatkey____Classtype____
                   );
    }
  }
  else {
    do {
      IVar3 = IVar2;
      if (IVar3 == 0) goto LAB_100b0f068;
      objc_stub::addObject_(self_01,IVar3);
      IVar2 = objc_stub::userInfo(IVar3);
      IVar2 = objc_stub::objectForKeyedSubscript_(IVar2,uVar5);
      IVar4 = objc_stub::class((ID)&_OBJC_CLASS___NSError);
      IVar4 = objc_stub::isKindOfClass_(IVar2,IVar4);
      IVar2 = objc_stub::userInfo(IVar3);
      IVar2 = objc_stub::objectForKeyedSubscript_(IVar2,uVar5);
    } while ((IVar4 & 1) != 0);
    iVar1 = 0;
    if ((IVar2 != 0) && (FUN_100b3a1e0(), iVar1 != 0)) {
      IVar2 = objc_stub::userInfo(IVar3);
      objc_stub::objectForKeyedSubscript_(IVar2,uVar5);
      IVar2 = objc_stub::userInfo(IVar3);
      IVar2 = objc_stub::objectForKeyedSubscript_(IVar2,uVar5);
      objc_stub::class(IVar2);
      FUN_100b3a280("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryClient.m",
                    0x10e,&
                          cf_InvalidvalueforNSUnderlyingErrorKeyinuserinfo_Dataatkey____Classtype____
                   );
    }
  }
LAB_100b0f068:
  IVar2 = objc_stub::array((ID)&_OBJC_CLASS___NSMutableArray);
  local_90 = PTR___NSConcreteStackBlock_100ea82a0;
  local_88 = 0xc2000000;
  local_80 = FUN_100b0f158;
  puStack_78 = &DAT_100f34210;
  local_70 = IVar2;
  IStack_68 = param_1;
  objc_stub::FUN_100c01ce0(self_01,2,&local_90);
  objc_stub::FUN_100c0ba20(self_00,IVar2);
  IVar2 = objc_stub::userInfo(param_3);
  FUN_100bcfb78(IVar2);
  objc_stub::FUN_100c0e780(param_1,IVar2,self_00);
  return self_00;
}


