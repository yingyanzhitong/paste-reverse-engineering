/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100b261d0 | SentryNetworkTracker::setIsCaptureFailedRequestsEnabled: */

/* Function Stack Size: 0x14 bytes */

void SentryNetworkTracker::setIsCaptureFailedRequestsEnabled_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + 10) = (char)param_3;
  return;
}



/* Address: 0x100b261d8 | SentryNetworkTracker::isGraphQLOperationTrackingEnabled */

/* Function Stack Size: 0x10 bytes */

bool SentryNetworkTracker::isGraphQLOperationTrackingEnabled(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + 0xb);
}



/* Address: 0x100b261e0 | SentryNetworkTracker::setIsGraphQLOperationTrackingEnabled: */

/* Function Stack Size: 0x14 bytes */

void SentryNetworkTracker::setIsGraphQLOperationTrackingEnabled_
               (ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + 0xb) = (char)param_3;
  return;
}



/* Address: 0x100b261e8 | SentryNSURLSessionTaskSearch::urlSessionTaskClassesToTrack */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryNSURLSessionTaskSearch::urlSessionTaskClassesToTrack(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  ID self;
  undefined *self_00;
  ID self_01;
  cfstringStruct *pcVar3;
  ID IVar4;
  ID IVar5;
  
  IVar1 = objc_stub::FUN_100c01e00((ID)&_OBJC_CLASS___NSURLSessionConfiguration);
  IVar1 = objc_stub::sessionWithConfiguration_((ID)&_OBJC_CLASS___NSURLSession,IVar1);
  IVar2 = objc_stub::FUN_100bfd040((ID)&_OBJC_CLASS___NSURL,&cf___);
  IVar2 = objc_stub::FUN_100c00900(IVar1,IVar2);
  self = objc_stub::class(IVar2);
  self_00 = &_OBJC_CLASS___NSMutableArray;
  _objc_alloc();
  self_01 = objc_stub::init((ID)self_00);
  pcVar3 = &cf_setState_;
  _NSSelectorFromString(&cf_setState_);
  while (IVar4 = self, _class_getInstanceMethod(self,pcVar3), IVar4 != 0) {
    IVar5 = objc_stub::FUN_100c0fd40(self);
    IVar4 = self;
    _class_getInstanceMethod(self,pcVar3);
    _method_getImplementation();
    _class_getInstanceMethod(IVar5,pcVar3);
    _method_getImplementation();
    if (IVar4 != IVar5) {
      objc_stub::addObject_(self_01,self);
    }
    self = objc_stub::FUN_100c0fd40(self);
  }
  objc_stub::cancel(IVar2);
  objc_stub::FUN_100c026e0(IVar1);
  IVar1 = objc_stub::copy(self_01);
  return IVar1;
}



/* Address: 0x100b26360 | FUN_100b26360 */

undefined8 FUN_100b26360(long param_1)

{
  return *(undefined8 *)(param_1 + 0x298);
}



/* Address: 0x100b26368 | FUN_100b26368 */

undefined8 FUN_100b26368(long param_1)

{
  return *(undefined8 *)(param_1 + 0x2a8);
}



/* Address: 0x100b26370 | FUN_100b26370 */

undefined8 FUN_100b26370(long param_1)

{
  return *(undefined8 *)(param_1 + 0x2b0);
}



/* Address: 0x100b26378 | FUN_100b26378 */

undefined8 FUN_100b26378(long param_1)

{
  return *(undefined8 *)(param_1 + 0x2a0);
}



/* Address: 0x100b26380 | FUN_100b26380 */

void FUN_100b26380(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  FUN_100b2bc00(uVar1,param_1 + 0x6c,6,0x44);
  FUN_100b2bc00(uVar1,param_1 + 0x68,7,4);
  return;
}



/* Address: 0x100b263c4 | FUN_100b263c4 */

undefined8 FUN_100b263c4(void)

{
  return 0x22;
}



/* Address: 0x100b263cc | FUN_100b263cc */

undefined * FUN_100b263cc(int param_1)

{
  if (param_1 < 0x22) {
    return (&PTR_s_x0_100f34740)[param_1];
  }
  return (undefined *)0x0;
}



/* Address: 0x100b263ec | FUN_100b263ec */

ulong FUN_100b263ec(long param_1,int param_2)

{
  if (param_2 < 0x1d) {
    return *(ulong *)(param_1 + (long)param_2 * 8 + 0x1b0);
  }
  if (param_2 < 0x1f) {
    if (param_2 == 0x1d) {
      return *(ulong *)(param_1 + 0x298);
    }
    if (param_2 == 0x1e) {
      return *(ulong *)(param_1 + 0x2a0);
    }
  }
  else {
    if (param_2 == 0x1f) {
      return *(ulong *)(param_1 + 0x2a8);
    }
    if (param_2 == 0x20) {
      return *(ulong *)(param_1 + 0x2b0);
    }
    if (param_2 == 0x21) {
      return (ulong)*(uint *)(param_1 + 0x2b8);
    }
  }
  FUN_100b5e930("ERROR",
                "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Tools/SentryCrashCPU_arm64.c"
                ,0x88,"Invalid register number: %d");
  return 0;
}



/* Address: 0x100b26498 | FUN_100b26498 */

undefined8 FUN_100b26498(void)

{
  return 3;
}



/* Address: 0x100b264a0 | FUN_100b264a0 */

undefined * FUN_100b264a0(int param_1)

{
  if (param_1 < 3) {
    return (&PTR_s_exception_100f34850)[param_1];
  }
  FUN_100b5e930("ERROR",
                "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Tools/SentryCrashCPU_arm64.c"
                ,0x98,"Invalid register number: %d");
  return (undefined *)0x0;
}



/* Address: 0x100b264f8 | FUN_100b264f8 */

ulong FUN_100b264f8(long param_1,int param_2)

{
  if (param_2 == 2) {
    return *(ulong *)(param_1 + 0x1a0);
  }
  if (param_2 != 1) {
    if (param_2 == 0) {
      return (ulong)*(uint *)(param_1 + 0x1ac);
    }
    FUN_100b5e930("ERROR",
                  "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Tools/SentryCrashCPU_arm64.c"
                  ,0xa9,"Invalid register number: %d");
    return 0;
  }
  return (ulong)*(uint *)(param_1 + 0x1a8);
}



/* Address: 0x100b26564 | FUN_100b26564 */

undefined8 FUN_100b26564(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1a0);
}



/* Address: 0x100b2656c | FUN_100b2656c */

undefined8 FUN_100b2656c(void)

{
  return 0xffffffff;
}



/* Address: 0x100b26574 | FUN_100b26574 */

ulong FUN_100b26574(ulong param_1)

{
  return param_1 & 0xfffffffff;
}



/* Address: 0x100b2657c | SentrySystemWrapper::initWithProcessorCount: */

/* Function Stack Size: 0x18 bytes */

ID SentrySystemWrapper::initWithProcessorCount_(ID param_1,SEL param_2,long_long param_3)

{
  ID IVar1;
  objc_super local_30;
  
  local_30.super_class = &objc::class_t::SentrySystemWrapper;
  local_30.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_30,"init");
  if (IVar1 != 0) {
    *(float *)(IVar1 + 8) = (float)(long)param_3;
  }
  return IVar1;
}



/* Address: 0x100b265c8 | SentrySystemWrapper::memoryFootprintBytes: */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_autorelease replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

unsigned_long_long SentrySystemWrapper::memoryFootprintBytes_(ID param_1,SEL param_2,ID *param_3)

{
  unsigned_long_long *puVar1;
  kern_return_t kVar2;
  ID IVar3;
  unsigned_long_long uVar4;
  mach_msg_type_number_t local_1a8;
  integer_t aiStack_1a4 [4];
  unsigned_long_long auStack_194 [16];
  unsigned_long_long local_114 [28];
  
  local_1a8 = 0x5d;
  kVar2 = _task_info(*(task_name_t *)PTR__mach_task_self__100ea8778,0x16,aiStack_1a4,&local_1a8);
  if (kVar2 == 0) {
    puVar1 = local_114;
    if (local_1a8 < 0x26) {
      puVar1 = auStack_194;
    }
    uVar4 = *puVar1;
  }
  else if (param_3 == (ID *)0x0) {
    uVar4 = 0;
  }
  else {
    IVar3 = 0x6d;
    FUN_100b1e23c(0x6d,&cf_task_inforeportedanerror_,kVar2);
    uVar4 = 0;
    *param_3 = IVar3;
  }
  return uVar4;
}



/* Address: 0x100b26674 | SentrySystemWrapper::normalizeCPUUsage: */

/* Function Stack Size: 0x14 bytes */

float SentrySystemWrapper::normalizeCPUUsage_(ID param_1,SEL param_2,float param_3)

{
  return param_3 / *(float *)(param_1 + 8);
}



/* Address: 0x100b26680 | SentrySystemWrapper::cpuUsageWithError: */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_autorelease replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentrySystemWrapper::cpuUsageWithError_(ID param_1,SEL param_2,ID *param_3)

{
  undefined *puVar1;
  kern_return_t kVar2;
  ID IVar3;
  ID IVar4;
  vm_size_t size;
  ulong uVar5;
  float fVar6;
  integer_t aiStack_8c [4];
  int local_7c;
  mach_msg_type_number_t local_64;
  thread_act_array_t local_60;
  mach_msg_type_number_t local_54;
  
  puVar1 = PTR__mach_task_self__100ea8778;
  local_54 = 0;
  local_60 = (thread_act_array_t)0x0;
  kVar2 = _task_threads(*(task_t *)PTR__mach_task_self__100ea8778,&local_60,&local_54);
  if (kVar2 == 0) {
    if (local_54 == 0) {
      size = 0;
      fVar6 = 0.0;
    }
    else {
      uVar5 = 0;
      fVar6 = 0.0;
      do {
        local_64 = 10;
        kVar2 = _thread_info(local_60[uVar5],3,aiStack_8c,&local_64);
        if (kVar2 != 0) {
          if (param_3 != (ID *)0x0) {
            IVar4 = 0x6d;
            FUN_100b1e23c(0x6d,&cf_task_threadsreportedanerror_,kVar2);
            *param_3 = IVar4;
          }
          _vm_deallocate(*(vm_map_t *)puVar1,(vm_address_t)local_60,(ulong)local_54 << 2);
          goto LAB_100b267cc;
        }
        fVar6 = fVar6 + (float)local_7c;
        uVar5 = uVar5 + 1;
      } while (uVar5 < local_54);
      size = (ulong)local_54 << 2;
    }
    _vm_deallocate(*(vm_map_t *)puVar1,(vm_address_t)local_60,size);
    objc_stub::FUN_100c07160(param_1,fVar6);
    IVar4 = objc_stub::FUN_100c07340((ID)&_OBJC_CLASS___NSNumber);
  }
  else if (param_3 == (ID *)0x0) {
LAB_100b267cc:
    IVar4 = 0;
  }
  else {
    IVar3 = 0x6d;
    FUN_100b1e23c(0x6d,&cf_task_threadsreportedanerror_,kVar2);
    IVar4 = 0;
    *param_3 = IVar3;
  }
  return IVar4;
}



/* Address: 0x100b267ec | SentrySystemWrapper::cpuEnergyUsageWithError: */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_autorelease replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentrySystemWrapper::cpuEnergyUsageWithError_(ID param_1,SEL param_2,ID *param_3)

{
  kern_return_t kVar1;
  ID IVar2;
  ID IVar3;
  mach_msg_type_number_t local_8c;
  integer_t aiStack_88 [20];
  undefined8 local_38;
  
  local_8c = 0x1a;
  kVar1 = _task_info(*(task_name_t *)PTR__mach_task_self__100ea8778,0x1a,aiStack_88,&local_8c);
  if (kVar1 == 0) {
    IVar3 = objc_stub::numberWithUnsignedLongLong_((ID)&_OBJC_CLASS___NSNumber,local_38);
  }
  else if (param_3 == (ID *)0x0) {
    IVar3 = 0;
  }
  else {
    IVar2 = 0x6d;
    FUN_100b1e23c(0x6d,&cf_E,kVar1);
    IVar3 = 0;
    *param_3 = IVar2;
  }
  return IVar3;
}



/* Address: 0x100b2688c | SentryException::initWithValue:type: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

ID SentryException::initWithValue_type_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID self;
  objc_super local_40;
  
  local_40.super_class = &objc::class_t::SentryException;
  local_40.receiver = param_1;
  self = _objc_msgSendSuper2(&local_40,"init");
  if (self != 0) {
    objc_stub::FUN_100c0e840(self,param_3);
    objc_stub::FUN_100c0e600(self,param_4);
  }
  return self;
}



/* Address: 0x100b26924 | SentryException::serialize */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryException::serialize(ID param_1,SEL param_2)

{
  undefined *self;
  ID self_00;
  ID IVar1;
  
  self = &_OBJC_CLASS___NSMutableDictionary;
  _objc_alloc();
  self_00 = objc_stub::init((ID)self);
  IVar1 = objc_stub::value(param_1);
  objc_stub::setValue_forKey_(self_00,IVar1,&cf_value);
  IVar1 = objc_stub::type(param_1);
  objc_stub::setValue_forKey_(self_00,IVar1,&cf_type);
  IVar1 = objc_stub::FUN_100c06bc0(param_1);
  IVar1 = objc_stub::serialize(IVar1);
  objc_stub::setValue_forKey_(self_00,IVar1,&cf_mechanism);
  IVar1 = objc_stub::FUN_100c06e40(param_1);
  objc_stub::setValue_forKey_(self_00,IVar1,&cf_module);
  IVar1 = objc_stub::FUN_100c104e0(param_1);
  objc_stub::setValue_forKey_(self_00,IVar1,&cf_thread_id);
  IVar1 = objc_stub::FUN_100c0f200(param_1);
  IVar1 = objc_stub::serialize(IVar1);
  objc_stub::setValue_forKey_(self_00,IVar1,&cf_stacktrace);
  return self_00;
}



/* Address: 0x100b26ab0 | SentryException::value */

/* Function Stack Size: 0x10 bytes */

ID SentryException::value(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 8);
}



/* Address: 0x100b26ab8 | SentryException::setValue: */

/* WARNING: Function: _objc_setProperty_nonatomic_copy replaced with injection:
   _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryException::setValue_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 8) = param_3;
  return;
}



/* Address: 0x100b26ac0 | SentryException::type */

/* Function Stack Size: 0x10 bytes */

ID SentryException::type(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x10);
}



/* Address: 0x100b26ac8 | SentryException::setType: */

/* WARNING: Function: _objc_setProperty_nonatomic_copy replaced with injection:
   _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryException::setType_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x10) = param_3;
  return;
}



/* Address: 0x100b26ad0 | SentryException::mechanism */

/* Function Stack Size: 0x10 bytes */

ID SentryException::mechanism(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x18);
}



/* Address: 0x100b26ad8 | SentryException::setMechanism: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryException::setMechanism_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x18) = param_3;
  return;
}



/* Address: 0x100b26ae4 | SentryException::module */

/* Function Stack Size: 0x10 bytes */

ID SentryException::module(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x20);
}



/* Address: 0x100b26aec | SentryException::setModule: */

/* WARNING: Function: _objc_setProperty_nonatomic_copy replaced with injection:
   _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryException::setModule_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x20) = param_3;
  return;
}



/* Address: 0x100b26af4 | SentryException::threadId */

/* Function Stack Size: 0x10 bytes */

ID SentryException::threadId(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x28);
}



/* Address: 0x100b26afc | SentryException::setThreadId: */

/* WARNING: Function: _objc_setProperty_nonatomic_copy replaced with injection:
   _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryException::setThreadId_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x28) = param_3;
  return;
}



/* Address: 0x100b26b04 | SentryException::stacktrace */

/* Function Stack Size: 0x10 bytes */

ID SentryException::stacktrace(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x30);
}



/* Address: 0x100b26b0c | SentryException::setStacktrace: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryException::setStacktrace_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x30) = param_3;
  return;
}



/* Address: 0x100b26b18 | SentryException::.cxx_destruct */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryException::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



/* Address: 0x100b26b78 | FUN_100b26b78 */

void FUN_100b26b78(undefined8 param_1)

{
  DAT_1010e1db0 = param_1;
  return;
}



/* Address: 0x100b26b84 | FUN_100b26b84 */

void FUN_100b26b84(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  code *pcVar4;
  uint uVar5;
  uint *puVar6;
  long lVar7;
  
  puVar3 = param_1;
  FUN_100b2b9b4();
  if ((((ulong)param_1 & 0xf) != 0) && ((int)puVar3 != 0)) {
    if ((DAT_1010e1db8 & 1) == 0) {
      DAT_1010e1db8 = 1;
    }
    param_1 = (undefined8 *)(ulong)((uint)param_1 & 0x80);
  }
  uVar5 = 0;
  uVar1 = (uint)param_1 & 3;
  if ((((ulong)param_1 & 0x8c) != 0 & DAT_1010e1db9) == 0) {
    uVar1 = (uint)param_1;
  }
  puVar6 = &DAT_100f34868;
  lVar7 = 5;
  do {
    if (*(code **)(puVar6 + 2) == (code *)0x0) {
LAB_100b26c4c:
      uVar5 = uVar5 & (*puVar6 ^ 0xffffffff);
    }
    else {
      uVar2 = *puVar6;
      (**(code **)(puVar6 + 2))();
      if ((puVar3 != (undefined8 *)0x0) && (pcVar4 = (code *)*puVar3, pcVar4 != (code *)0x0)) {
        puVar3 = (undefined8 *)(ulong)((uVar2 & uVar1) != 0);
        (*pcVar4)();
      }
      if ((((*(code **)(puVar6 + 2) == (code *)0x0) ||
           ((**(code **)(puVar6 + 2))(), puVar3 == (undefined8 *)0x0)) ||
          ((code *)puVar3[1] == (code *)0x0)) || ((*(code *)puVar3[1])(), (int)puVar3 == 0))
      goto LAB_100b26c4c;
      uVar5 = *puVar6 | uVar5;
    }
    puVar6 = puVar6 + 4;
    lVar7 = lVar7 + -1;
    if (lVar7 == 0) {
      DAT_1010e1dbc = uVar5;
      return;
    }
  } while( true );
}



/* Address: 0x100b26c7c | FUN_100b26c7c */

undefined4 FUN_100b26c7c(void)

{
  return DAT_1010e1dbc;
}



/* Address: 0x100b26c88 | FUN_100b26c88 */

void FUN_100b26c88(byte param_1,long param_2,long param_3)

{
  pthread_t p_Var1;
  
  DAT_1010e1db9 = DAT_1010e1db9 | param_1;
  p_Var1 = _pthread_self();
  if (DAT_1010e1dc0 == '\0') {
    DAT_1010e1dc0 = '\x01';
    DAT_1010e1dc8 = p_Var1;
  }
  else if (p_Var1 == DAT_1010e1dc8) {
    DAT_1010e1dd0 = 1;
    FUN_100b26b84(0);
  }
  else {
    _sleep(2);
  }
  if ((param_2 != 0) && (param_3 != 0)) {
    FUN_100b512a0(param_2,param_3);
    return;
  }
  return;
}



/* Address: 0x100b26d44 | FUN_100b26d44 */

void FUN_100b26d44(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  
  *(undefined1 *)(param_1 + 8) = DAT_1010e1db9;
  if ((DAT_1010e1dd0 & 1) != 0) {
    *(undefined1 *)(param_1 + 10) = 1;
  }
  lVar3 = 8;
  lVar2 = param_1;
  do {
    (**(code **)((long)&DAT_100f34868 + lVar3))();
    if ((((lVar2 != 0) && (*(code **)(lVar2 + 8) != (code *)0x0)) &&
        ((**(code **)(lVar2 + 8))(), (int)lVar2 != 0)) &&
       (((**(code **)((long)&DAT_100f34868 + lVar3))(), lVar2 != 0 &&
        (puVar1 = (undefined8 *)(lVar2 + 0x10), (code *)*puVar1 != (code *)0x0)))) {
      lVar2 = param_1;
      (*(code *)*puVar1)();
    }
    lVar3 = lVar3 + 0x10;
  } while (lVar3 != 0x58);
  if (DAT_1010e1db0 != (code *)0x0) {
    (*DAT_1010e1db0)(param_1);
  }
  if (((DAT_1010e1dc0 & 1) != 0) && ((DAT_1010e1dd0 & 1) == 0)) {
    FUN_100b26b84(0);
    return;
  }
  return;
}



/* Address: 0x100b26e1c | FUN_100b26e1c */

void FUN_100b26e1c(void)

{
  DAT_1010e1dc0 = 0;
  DAT_1010e1dd0 = 0;
  DAT_1010e1dc8 = 0;
  DAT_1010e1db9 = 0;
  return;
}



/* Address: 0x100b26e4c | FUN_100b26e4c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b26e4c(ID param_1)

{
  int iVar1;
  ID IVar2;
  
  IVar2 = objc_stub::count(param_1);
  if (IVar2 == 0) {
    FUN_100b3a1e0();
    if ((int)IVar2 != 0) {
      FUN_100b3a280("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryProfileTimeseries.m"
                    ,0x1b,&cf_Shouldnothaveattemptedtosliceanemptyarray_);
    }
  }
  else {
    IVar2 = objc_stub::FUN_100c114e0((ID)&objc::class_t::_TtC6Sentry12SentrySDKLog,1);
    if ((int)IVar2 != 0) {
      IVar2 = objc_stub::firstObject(param_1);
      objc_stub::absoluteTimestamp(IVar2);
      IVar2 = objc_stub::FUN_100c06080(param_1);
      objc_stub::absoluteTimestamp(IVar2);
      iVar1 = 0;
      FUN_100b3a1c0();
      if (iVar1 != 0) {
        FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryProfileTimeseries.m"
                      ,0x2c,&
                            cf__slice___Couldnotfindany__sampletakenduringthetransaction_firstsampletakenat__llu_last__llu_transactionstart__llu_end__llu_firstsamplerelativetotransactionstart__lld_last__lld__
                     );
      }
    }
  }
  return 0;
}



/* Address: 0x100b26f88 | FUN_100b26f88 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

ID FUN_100b26f88(ID param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  undefined8 uVar5;
  undefined *local_a0;
  undefined8 local_98;
  code *local_90;
  undefined *puStack_88;
  undefined8 local_80;
  undefined *local_78;
  undefined8 local_70;
  code *local_68;
  undefined *puStack_60;
  undefined8 local_58;
  
  IVar2 = objc_stub::count(param_1);
  if (IVar2 != 0) {
    FUN_100b3a1c0();
    if ((int)IVar2 != 0) {
      objc_stub::count(param_1);
      FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryProfileTimeseries.m"
                    ,0x36,&cf_Findingrelevantsamplesfrom_lutotal_);
    }
    puVar1 = PTR___NSConcreteStackBlock_100ea82a0;
    local_78 = PTR___NSConcreteStackBlock_100ea82a0;
    local_70 = 0xc0000000;
    local_68 = FUN_100b27154;
    puStack_60 = &DAT_100f348b8;
    local_58 = param_2;
    IVar2 = objc_stub::FUN_100c038a0(param_1,&local_78);
    if (IVar2 == 0x7fffffffffffffff) {
      uVar5 = 1;
    }
    else {
      IVar3 = IVar2;
      FUN_100b3a1c0();
      if ((int)IVar3 != 0) {
        FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryProfileTimeseries.m"
                      ,0x42,&cf_Foundfirstslicesampleatindex_lu);
      }
      local_a0 = puVar1;
      local_98 = 0xc0000000;
      local_90 = FUN_100b2718c;
      puStack_88 = &DAT_100f348b8;
      local_80 = param_3;
      IVar3 = objc_stub::FUN_100c038c0(param_1,2,&local_a0);
      if (IVar3 != 0x7fffffffffffffff) {
        IVar4 = IVar3;
        FUN_100b3a1c0();
        if ((int)IVar4 != 0) {
          FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryProfileTimeseries.m"
                        ,0x51,&cf_Foundlastslicesampleatindex_lu);
        }
        IVar2 = objc_stub::FUN_100c03900((ID)&_OBJC_CLASS___NSIndexSet,IVar2,(IVar3 - IVar2) + 1);
        IVar2 = objc_stub::FUN_100c07580(param_1,IVar2);
        return IVar2;
      }
      uVar5 = 0;
    }
    FUN_100b26e4c(param_1,param_2,param_3,uVar5);
  }
  return 0;
}



/* Address: 0x100b27154 | FUN_100b27154 */

void FUN_100b27154(long param_1,ID param_2,undefined8 param_3,undefined8 param_4)

{
  ID IVar1;
  
  IVar1 = objc_stub::absoluteTimestamp(param_2);
  *(bool *)param_4 = *(ulong *)(param_1 + 0x20) <= IVar1;
  return;
}



/* Address: 0x100b2718c | FUN_100b2718c */

void FUN_100b2718c(long param_1,ID param_2,undefined8 param_3,undefined8 param_4)

{
  ID IVar1;
  
  IVar1 = objc_stub::absoluteTimestamp(param_2);
  *(bool *)param_4 = IVar1 <= *(ulong *)(param_1 + 0x20);
  return;
}



/* Address: 0x100b271c4 | SentryHubInternal::initWithClient:andScope: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

ID SentryHubInternal::initWithClient_andScope_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = objc_stub::sharedInstance((ID)&objc::class_t::_TtC6Sentry25SentryDependencyContainer);
  IVar1 = objc_stub::crashWrapper(IVar1);
  IVar2 = objc_stub::sharedInstance((ID)&objc::class_t::_TtC6Sentry25SentryDependencyContainer);
  IVar2 = objc_stub::dispatchQueueWrapper(IVar2);
  IVar1 = objc_stub::FUN_100c03ca0(param_1,param_3,param_4,IVar1,IVar2);
  return IVar1;
}



/* Address: 0x100b272b4 | SentryHubInternal::initWithClient:andScope:andCrashWrapper:andDispatchQueue: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x30 bytes */

ID SentryHubInternal::initWithClient_andScope_andCrashWrapper_andDispatchQueue_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6)

{
  ID IVar1;
  undefined *puVar2;
  ID IVar3;
  class_t *self;
  undefined8 uVar4;
  objc_super local_70;
  
  local_70.super_class = &objc::class_t::SentryHubInternal;
  local_70.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_70,"init");
  if (IVar1 != 0) {
    *(ID *)(IVar1 + 0x20) = param_3;
    *(ID *)(IVar1 + 0x18) = param_4;
    *(ID *)(IVar1 + 0x30) = param_5;
    *(ID *)(IVar1 + 0x28) = param_6;
    puVar2 = &_OBJC_CLASS___NSObject;
    _objc_alloc();
    IVar3 = objc_stub::init((ID)puVar2);
    uVar4 = *(undefined8 *)(IVar1 + 8);
    *(ID *)(IVar1 + 8) = IVar3;
    puVar2 = &_OBJC_CLASS___NSObject;
    _objc_alloc(uVar4);
    IVar3 = objc_stub::init((ID)puVar2);
    *(ID *)(IVar1 + 0x10) = IVar3;
    puVar2 = &_OBJC_CLASS___NSMutableArray;
    _objc_alloc();
    IVar3 = objc_stub::init((ID)puVar2);
    *(ID *)(IVar1 + 0x58) = IVar3;
    puVar2 = &_OBJC_CLASS___NSMutableSet;
    _objc_alloc();
    IVar3 = objc_stub::init((ID)puVar2);
    uVar4 = *(undefined8 *)(IVar1 + 0x38);
    *(ID *)(IVar1 + 0x38) = IVar3;
    *(undefined8 *)(IVar1 + 0x40) = 0;
    if (*(ID *)(IVar1 + 0x20) != 0) {
      objc_stub::FUN_100c0d9c0(*(ID *)(IVar1 + 0x20),uVar4,IVar1);
    }
    if (*(long *)(IVar1 + 0x18) != 0) {
      objc_stub::FUN_100c01b80(*(ID *)(IVar1 + 0x30));
    }
    self = &objc::class_t::_TtC6Sentry12SentryLogger;
    _objc_alloc();
    IVar3 = objc_stub::sharedInstance((ID)&objc::class_t::_TtC6Sentry25SentryDependencyContainer);
    IVar3 = objc_stub::FUN_100c00ac0(IVar3);
    IVar3 = objc_stub::FUN_100c03f60((ID)self,IVar1,IVar3);
    *(ID *)(IVar1 + 0x60) = IVar3;
  }
  return IVar1;
}



/* Address: 0x100b274b8 | SentryHubInternal::startSession */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryHubInternal::startSession(ID param_1,SEL param_2)

{
  int iVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  undefined8 uVar5;
  ID IVar6;
  class_t *self;
  cfstringStruct *pcVar7;
  ID self_00;
  
  IVar2 = objc_stub::scope(param_1);
  IVar3 = objc_stub::FUN_100bff480(param_1);
  IVar3 = objc_stub::options(IVar3);
  iVar1 = 0;
  if (IVar3 == 0) {
    FUN_100b3a1f0();
    if (iVar1 == 0) {
      return;
    }
    pcVar7 = &cf_Optionsoftheclientarenil_Notstartingasession_;
    uVar5 = 0x5c;
  }
  else {
    IVar4 = objc_stub::FUN_100c08e20(IVar3);
    iVar1 = 0;
    if (IVar4 != 0) {
      IVar4 = objc_stub::FUN_100c08e20(IVar3);
      uVar5 = *(undefined8 *)(param_1 + 8);
      _objc_sync_enter();
      self_00 = *(ID *)(param_1 + 0x50);
      IVar6 = objc_stub::FUN_100bfeb80(IVar3);
      IVar6 = objc_stub::FUN_100c03540((ID)&objc::class_t::_TtC6Sentry18SentryInstallation,IVar6);
      self = &objc::class_t::_TtC6Sentry13SentrySession;
      _objc_alloc();
      IVar4 = objc_stub::FUN_100c04a60((ID)self,IVar4,IVar6);
      *(ID *)(param_1 + 0x50) = IVar4;
      if ((*(long *)(param_1 + 0x40) != 0) &&
         (IVar6 = objc_stub::FUN_100c01820(IVar3), (int)IVar6 != 0)) {
        objc_stub::FUN_100c0b960(IVar4,*(undefined8 *)(param_1 + 0x40));
        *(undefined8 *)(param_1 + 0x40) = 0;
      }
      IVar3 = objc_stub::environment(IVar3);
      objc_stub::FUN_100c0b900(IVar4,IVar3);
      objc_stub::FUN_100bfdf20(IVar2,IVar4);
      objc_stub::FUN_100c0f800(param_1,IVar4);
      objc_stub::FUN_100bff040(param_1,IVar4);
      _objc_sync_exit(uVar5);
      IVar2 = objc_stub::sharedInstance((ID)&objc::class_t::_TtC6Sentry25SentryDependencyContainer);
      IVar2 = objc_stub::FUN_100c00ac0(IVar2);
      IVar2 = objc_stub::date(IVar2);
      objc_stub::FUN_100c01aa0(self_00,IVar2);
      objc_stub::FUN_100bff040(param_1,self_00);
      objc_stub::FUN_100c07200(param_1,IVar4);
      return;
    }
    FUN_100b3a1f0();
    if (iVar1 == 0) {
      return;
    }
    pcVar7 = &cf_Releasenameoftheoptionsoftheclientisnil_Notstartingasession_;
    uVar5 = 0x61;
  }
  FUN_100b3a2b8("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryHub.m",uVar5,
                pcVar7);
  return;
}



/* Address: 0x100b2776c | SentryHubInternal::endSession */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryHubInternal::endSession(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = objc_stub::sharedInstance((ID)&objc::class_t::_TtC6Sentry25SentryDependencyContainer);
  IVar1 = objc_stub::FUN_100c00ac0(IVar1);
  IVar1 = objc_stub::date(IVar1);
  objc_stub::FUN_100c01ac0(param_1,IVar1);
  return;
}



/* Address: 0x100b277e8 | SentryHubInternal::endSessionWithTimestamp: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryHubInternal::endSessionWithTimestamp_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  undefined8 uVar2;
  ID self;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_sync_enter();
  self = *(ID *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  objc_stub::FUN_100c00ec0(param_1);
  _objc_sync_exit(uVar2);
  iVar1 = 0;
  if (self == 0) {
    FUN_100b3a1c0();
    if (iVar1 != 0) {
      FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryHub.m",0x96,
                    &cf_Nosessiontoendwithtimestamp_);
    }
  }
  else {
    objc_stub::FUN_100c01aa0(self,param_3);
    objc_stub::FUN_100bff040(param_1,self);
    objc_stub::FUN_100c071e0(param_1,self);
  }
  return;
}



/* Address: 0x100b278c8 | SentryHubInternal::notifySessionStarted: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryHubInternal::notifySessionStarted_(ID param_1,SEL param_2,ID param_3)

{
  ID self;
  undefined *local_68;
  undefined8 local_60;
  code *local_58;
  undefined *puStack_50;
  ID local_48;
  ID local_40;
  ID local_38;
  
  local_40 = objc_stub::sessionListener(param_1);
  if (local_40 != 0) {
    self = objc_stub::FUN_100c01440(param_1);
    local_68 = PTR___NSConcreteStackBlock_100ea82a0;
    local_60 = 0xc2000000;
    local_58 = FUN_100b279a8;
    puStack_50 = &DAT_100f348d8;
    local_48 = param_1;
    local_38 = param_3;
    objc_stub::FUN_100c01380(self,&local_68);
  }
  return;
}



/* Address: 0x100b279a8 | FUN_100b279a8 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100b279a8(long param_1)

{
  ID IVar1;
  
  IVar1 = objc_stub::sessionListener(*(ID *)(param_1 + 0x20));
  if (IVar1 != *(ID *)(param_1 + 0x28)) {
    return 0;
  }
  IVar1 = objc_stub::sentrySessionStartedWithSession_
                    (*(ID *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return IVar1;
}



/* Address: 0x100b27a04 | FUN_100b27a04 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_100b27a04(undefined8 param_1,long param_2)

{
  return *(undefined8 *)(param_2 + 0x30);
}



/* Address: 0x100b27a34 | FUN_100b27a34 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b27a34(void)

{
  return 0;
}



/* Address: 0x100b27a64 | SentryHubInternal::notifySessionEnded: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryHubInternal::notifySessionEnded_(ID param_1,SEL param_2,ID param_3)

{
  ID self;
  undefined *local_68;
  undefined8 local_60;
  code *local_58;
  undefined *puStack_50;
  ID local_48;
  ID local_40;
  ID local_38;
  
  local_40 = objc_stub::sessionListener(param_1);
  if (local_40 != 0) {
    self = objc_stub::FUN_100c01440(param_1);
    local_68 = PTR___NSConcreteStackBlock_100ea82a0;
    local_60 = 0xc2000000;
    local_58 = FUN_100b27b44;
    puStack_50 = &DAT_100f348d8;
    local_48 = param_1;
    local_38 = param_3;
    objc_stub::FUN_100c01380(self,&local_68);
  }
  return;
}



/* Address: 0x100b27b44 | FUN_100b27b44 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100b27b44(long param_1)

{
  ID IVar1;
  
  IVar1 = objc_stub::sessionListener(*(ID *)(param_1 + 0x20));
  if (IVar1 != *(ID *)(param_1 + 0x28)) {
    return 0;
  }
  IVar1 = objc_stub::sentrySessionEndedWithSession_
                    (*(ID *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return IVar1;
}



/* Address: 0x100b27ba0 | SentryHubInternal::storeCurrentSession: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryHubInternal::storeCurrentSession_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
  IVar1 = objc_stub::FUN_100bff480(param_1);
  IVar1 = objc_stub::fileManager(IVar1);
  objc_stub::FUN_100c0f800(IVar1,param_3);
  return;
}



/* Address: 0x100b27c10 | SentryHubInternal::deleteCurrentSession */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryHubInternal::deleteCurrentSession(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = objc_stub::FUN_100bff480(param_1);
  IVar1 = objc_stub::fileManager(IVar1);
  objc_stub::FUN_100c00ec0(IVar1);
  return;
}



/* Address: 0x100b27c58 | SentryHubInternal::closeCachedSessionWithTimestamp: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryHubInternal::closeCachedSessionWithTimestamp_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  ID IVar2;
  ID self;
  ID IVar3;
  
  IVar2 = objc_stub::FUN_100bff480(param_1);
  IVar2 = objc_stub::fileManager(IVar2);
  self = objc_stub::FUN_100c08880(IVar2);
  IVar2 = self;
  FUN_100b3a1c0();
  if (self == 0) {
    if ((int)IVar2 != 0) {
      FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryHub.m",0xca,
                    &cf_Nocachedsessiontoclose_);
    }
  }
  else {
    if ((int)IVar2 != 0) {
      FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryHub.m",0xcd,
                    &cf_Acachedsessionwasfound_);
    }
    IVar2 = objc_stub::FUN_100bff480(param_1);
    if (IVar2 == 0) {
      FUN_100b3a1c0();
      if ((int)IVar2 != 0) {
        FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryHub.m",0xd2
                      ,&cf_Noclientbound_);
      }
    }
    else {
      IVar3 = objc_stub::crashWrapper(param_1);
      IVar3 = objc_stub::FUN_100c003a0(IVar3);
      iVar1 = 0;
      if ((IVar3 & 1) == 0) {
        FUN_100b3a1c0();
        if (param_3 == 0) {
          if (iVar1 != 0) {
            objc_stub::FUN_100c0f640(self);
            FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryHub.m",
                          0xdc,&
                               cf_Notimestamptoclosesessionwasprovided_Closingasabnormal_Usingsession_sstarttime__
                         );
          }
          IVar3 = objc_stub::FUN_100c0f640(self);
          objc_stub::FUN_100c01a60(self,IVar3);
        }
        else {
          if (iVar1 != 0) {
            FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryHub.m",
                          0xe0,&cf_Closingcachedsessionasexited_);
          }
          objc_stub::FUN_100c01aa0(self,param_3);
        }
        objc_stub::FUN_100c00ec0(param_1);
        objc_stub::FUN_100bff040(IVar2,self);
      }
    }
  }
  return;
}



/* Address: 0x100b27e48 | SentryHubInternal::captureSession: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryHubInternal::captureSession_(ID param_1,SEL param_2,ID param_3)

{
  ID self;
  ID IVar1;
  
  if (param_3 != 0) {
    self = objc_stub::FUN_100bff480(param_1);
    IVar1 = self;
    FUN_100b3a1c0();
    if ((int)IVar1 != 0) {
      objc_stub::FUN_100c00520(param_1,param_3);
      FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryHub.m",0xf0,
                    &cf_Capturingsessionwithstatus___);
    }
    objc_stub::FUN_100bff040(self,param_3);
  }
  return;
}



/* Address: 0x100b27ef4 | SentryHubInternal::incrementSessionErrors */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryHubInternal::incrementSessionErrors(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  ID IVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_sync_enter();
  if (*(ID *)(param_1 + 0x50) == 0) {
    IVar2 = 0;
    *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + 1;
  }
  else {
    objc_stub::FUN_100c03840(*(ID *)(param_1 + 0x50));
    objc_stub::FUN_100c0f800(param_1,*(undefined8 *)(param_1 + 0x50));
    IVar2 = objc_stub::copy(*(ID *)(param_1 + 0x50));
  }
  _objc_sync_exit(uVar1);
  return IVar2;
}


