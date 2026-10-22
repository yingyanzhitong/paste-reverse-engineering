/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100b1b758 | FUN_100b1b758 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long FUN_100b1b758(long param_1)

{
  ID self;
  long lVar1;
  long lVar2;
  undefined *local_48;
  undefined8 local_40;
  code *local_38;
  undefined *puStack_30;
  undefined8 local_28;
  
  *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 0;
  lVar2 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  lVar1 = param_1;
  if ((*(byte *)(lVar2 + 0x18) & 1) != 0) {
    FUN_100b3a1e0();
    if ((int)lVar1 != 0) {
      FUN_100b3a280("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryANRTrackerV1.m"
                    ,99,&cf_ANRstopped_);
    }
    self = objc_stub::dispatchQueueWrapper(*(ID *)(param_1 + 0x20));
    local_48 = PTR___NSConcreteStackBlock_100ea82a0;
    local_40 = 0xc2000000;
    local_38 = FUN_100b1b81c;
    puStack_30 = &DAT_100f341a0;
    local_28 = *(undefined8 *)(param_1 + 0x20);
    objc_stub::dispatchAsyncWithBlock_(self,&local_48);
    lVar1 = 0;
    lVar2 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  }
  *(undefined1 *)(lVar2 + 0x18) = 0;
  return lVar1;
}



/* Address: 0x100b1b81c | FUN_100b1b81c */

void FUN_100b1b81c(long param_1)

{
  objc_stub::ANRStopped(*(ID *)(param_1 + 0x20));
  return;
}



/* Address: 0x100b1b824 | FUN_100b1b824 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100b1b824(long param_1,long param_2)

{
  __Block_object_assign((void *)(param_1 + 0x28),*(void **)(param_2 + 0x28),8);
  __Block_object_assign((void *)(param_1 + 0x30),*(void **)(param_2 + 0x30),8);
  return;
}



/* Address: 0x100b1b868 | FUN_100b1b868 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b1b868(long param_1)

{
  __Block_object_dispose(*(void **)(param_1 + 0x30),8);
  __Block_object_dispose(*(void **)(param_1 + 0x28),8);
  return 0;
}



/* Address: 0x100b1b8a0 | SentryANRTrackerV1::ANRDetected */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryANRTrackerV1::ANRDetected(ID param_1,SEL param_2)

{
  ID IVar1;
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
  IVar1 = objc_stub::FUN_100c062c0(param_1);
  _objc_sync_enter();
  IVar2 = objc_stub::FUN_100c062c0(param_1);
  IVar2 = objc_stub::FUN_100bfdae0(IVar2);
  _objc_sync_exit(IVar1);
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  local_100 = (long *)0x0;
  IVar1 = objc_stub::countByEnumeratingWithState_objects_count_(IVar2,&local_110,auStack_c8,0x10);
  if (IVar1 != 0) {
    lVar3 = *local_100;
    do {
      IVar4 = 0;
      do {
        if (*local_100 != lVar3) {
          _objc_enumerationMutation(IVar2);
        }
        objc_stub::FUN_100bfdc40(*(ID *)(lStack_108 + IVar4 * 8),4);
        IVar4 = IVar4 + 1;
      } while (IVar1 != IVar4);
      IVar1 = objc_stub::countByEnumeratingWithState_objects_count_
                        (IVar2,&local_110,auStack_c8,0x10);
    } while (IVar1 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}



/* Address: 0x100b1ba08 | SentryANRTrackerV1::ANRStopped */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryANRTrackerV1::ANRStopped(ID param_1,SEL param_2)

{
  ID IVar1;
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
  IVar1 = objc_stub::FUN_100c062c0(param_1);
  _objc_sync_enter();
  IVar2 = objc_stub::FUN_100c062c0(param_1);
  IVar2 = objc_stub::FUN_100bfdae0(IVar2);
  _objc_sync_exit(IVar1);
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  local_100 = (long *)0x0;
  IVar1 = objc_stub::countByEnumeratingWithState_objects_count_(IVar2,&local_110,auStack_c8,0x10);
  if (IVar1 != 0) {
    lVar3 = *local_100;
    do {
      IVar4 = 0;
      do {
        if (*local_100 != lVar3) {
          _objc_enumerationMutation(IVar2);
        }
        objc_stub::FUN_100bfdc60(*(ID *)(lStack_108 + IVar4 * 8),0);
        IVar4 = IVar4 + 1;
      } while (IVar1 != IVar4);
      IVar1 = objc_stub::countByEnumeratingWithState_objects_count_
                        (IVar2,&local_110,auStack_c8,0x10);
    } while (IVar1 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}



/* Address: 0x100b1bb70 | SentryANRTrackerV1::addListener: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryANRTrackerV1::addListener_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  undefined8 uVar3;
  
  IVar1 = objc_stub::FUN_100c062c0(param_1);
  _objc_sync_enter();
  IVar2 = objc_stub::FUN_100c062c0(param_1);
  objc_stub::addObject_(IVar2,param_3);
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_sync_enter();
  IVar2 = objc_stub::FUN_100c062c0(param_1);
  IVar2 = objc_stub::count(IVar2);
  if (((IVar2 != 0) && (*(long *)(param_1 + 0x10) == 1)) && (*(long *)(param_1 + 0x10) == 1)) {
    *(undefined8 *)(param_1 + 0x10) = 3;
    objc_stub::FUN_100c01160((ID)&_OBJC_CLASS___NSThread,"detectANRs",param_1,0);
  }
  _objc_sync_exit(uVar3);
  _objc_sync_exit(IVar1);
  return;
}



/* Address: 0x100b1bca8 | SentryANRTrackerV1::removeListener: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryANRTrackerV1::removeListener_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = objc_stub::FUN_100c062c0(param_1);
  _objc_sync_enter();
  IVar2 = objc_stub::FUN_100c062c0(param_1);
  objc_stub::FUN_100c090a0(IVar2,param_3);
  IVar2 = objc_stub::FUN_100c062c0(param_1);
  IVar2 = objc_stub::count(IVar2);
  if (IVar2 == 0) {
    objc_stub::stop(param_1);
  }
  _objc_sync_exit(IVar1);
  return;
}



/* Address: 0x100b1bd74 | SentryANRTrackerV1::clear */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

int __thiscall SentryANRTrackerV1::clear(SentryANRTrackerV1 *this)

{
  ID in_x0;
  ID IVar1;
  ID self;
  
  IVar1 = objc_stub::FUN_100c062c0(in_x0);
  _objc_sync_enter();
  self = objc_stub::FUN_100c062c0(in_x0);
  objc_stub::FUN_100c08ee0(self);
  objc_stub::stop(in_x0);
  _objc_sync_exit(IVar1);
  return 0;
}



/* Address: 0x100b1bdf4 | SentryANRTrackerV1::stop */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryANRTrackerV1::stop(ID param_1,SEL param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar3 = uVar2;
  _objc_sync_enter();
  iVar1 = (int)uVar3;
  FUN_100b3a1d0();
  if (iVar1 != 0) {
    FUN_100b3a248("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryANRTrackerV1.m"
                  ,0xd7,&cf_StoppingANRdetection);
  }
  *(undefined8 *)(param_1 + 0x10) = 4;
  _objc_sync_exit(uVar2);
  return;
}



/* Address: 0x100b1be68 | SentryANRTrackerV1::crashWrapper */

/* Function Stack Size: 0x10 bytes */

ID SentryANRTrackerV1::crashWrapper(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x18);
}



/* Address: 0x100b1be70 | SentryANRTrackerV1::setCrashWrapper: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryANRTrackerV1::setCrashWrapper_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x18) = param_3;
  return;
}



/* Address: 0x100b1be7c | SentryANRTrackerV1::dispatchQueueWrapper */

/* Function Stack Size: 0x10 bytes */

ID SentryANRTrackerV1::dispatchQueueWrapper(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x20);
}



/* Address: 0x100b1be84 | SentryANRTrackerV1::setDispatchQueueWrapper: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryANRTrackerV1::setDispatchQueueWrapper_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x20) = param_3;
  return;
}



/* Address: 0x100b1be90 | SentryANRTrackerV1::threadWrapper */

/* Function Stack Size: 0x10 bytes */

ID SentryANRTrackerV1::threadWrapper(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x28);
}



/* Address: 0x100b1be98 | SentryANRTrackerV1::setThreadWrapper: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryANRTrackerV1::setThreadWrapper_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x28) = param_3;
  return;
}



/* Address: 0x100b1bea4 | SentryANRTrackerV1::listeners */

/* Function Stack Size: 0x10 bytes */

ID SentryANRTrackerV1::listeners(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x30);
}



/* Address: 0x100b1beac | SentryANRTrackerV1::setListeners: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryANRTrackerV1::setListeners_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x30) = param_3;
  return;
}



/* Address: 0x100b1beb8 | SentryANRTrackerV1::timeoutInterval */

/* Function Stack Size: 0x10 bytes */

double SentryANRTrackerV1::timeoutInterval(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + 0x38);
}



/* Address: 0x100b1bec0 | SentryANRTrackerV1::setTimeoutInterval: */

/* Function Stack Size: 0x18 bytes */

void SentryANRTrackerV1::setTimeoutInterval_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + 0x38) = param_3;
  return;
}



/* Address: 0x100b1bec8 | SentryANRTrackerV1::.cxx_destruct */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryANRTrackerV1::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



/* Address: 0x100b1bf1c | FUN_100b1bf1c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

ID FUN_100b1bf1c(ID param_1,undefined8 param_2)

{
  ID IVar1;
  undefined *local_60;
  undefined8 local_58;
  code *local_50;
  undefined *puStack_48;
  ID local_40;
  undefined8 local_38;
  
  IVar1 = objc_stub::array((ID)&_OBJC_CLASS___NSMutableArray);
  local_60 = PTR___NSConcreteStackBlock_100ea82a0;
  local_58 = 0xc2000000;
  local_50 = FUN_100b1bfc4;
  puStack_48 = &DAT_100f34490;
  local_40 = IVar1;
  local_38 = param_2;
  objc_stub::FUN_100c01cc0(param_1,&local_60);
  return IVar1;
}



/* Address: 0x100b1bfc4 | FUN_100b1bfc4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b1bfc4(long param_1,ID param_2)

{
  int iVar1;
  ID IVar2;
  ID IVar3;
  char *pcVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  uVar5 = *(ulong *)(param_1 + 0x28);
  IVar2 = objc_stub::absoluteTimestamp(param_2);
  FUN_100b154f0(uVar5,IVar2);
  iVar1 = (int)uVar5;
  if ((uVar5 & 1) == 0) {
    FUN_100b3a1e0();
    if (iVar1 != 0) {
      FUN_100b3a280("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/Profiling/SentryProfilerSerialization.m"
                    ,0x35,&cf_Filteringsampleasitcamebeforestarttimetobeginslicing_);
    }
  }
  else {
    IVar2 = NSMutableDictionary::dictionary((ID)&_OBJC_CLASS___NSMutableDictionary);
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    IVar3 = objc_stub::absoluteTimestamp(param_2);
    FUN_100b154fc(uVar6,IVar3);
    iVar1 = _snprintf((char *)0x0,0,"%llu");
    pcVar4 = _malloc((long)(iVar1 + 1));
    _snprintf(pcVar4,(long)(iVar1 + 1),"%llu");
    IVar3 = NSString::stringWithCString_encoding_((ID)&_OBJC_CLASS___NSString,pcVar4,1);
    _free(pcVar4);
    NSMutableDictionary::setObject_forKeyedSubscript_(IVar2,IVar3,&cf_elapsed_since_start_ns);
    objc_stub::threadID(param_2);
    iVar1 = _snprintf((char *)0x0,0,"%llu");
    pcVar4 = _malloc((long)(iVar1 + 1));
    _snprintf(pcVar4,(long)(iVar1 + 1),"%llu");
    IVar3 = NSString::stringWithCString_encoding_((ID)&_OBJC_CLASS___NSString,pcVar4,1);
    _free(pcVar4);
    NSMutableDictionary::setObject_forKeyedSubscript_(IVar2,IVar3,&cf_thread_id);
    IVar3 = objc_stub::stackIndex(param_2);
    NSMutableDictionary::setObject_forKeyedSubscript_(IVar2,IVar3,&cf_stack_id);
    IVar3 = objc_stub::queueAddress(param_2);
    if (IVar3 != 0) {
      IVar3 = objc_stub::queueAddress(param_2);
      NSMutableDictionary::setObject_forKeyedSubscript_(IVar2,IVar3,&cf_queue_address);
    }
    objc_stub::addObject_(*(ID *)(param_1 + 0x20),IVar2);
  }
  return 0;
}



/* Address: 0x100b1c218 | FUN_100b1c218 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

ID FUN_100b1c218(ID param_1)

{
  ID IVar1;
  undefined *local_48;
  undefined8 local_40;
  code *local_38;
  undefined *puStack_30;
  ID local_28;
  
  IVar1 = objc_stub::array((ID)&_OBJC_CLASS___NSMutableArray);
  local_48 = PTR___NSConcreteStackBlock_100ea82a0;
  local_40 = 0xc2000000;
  local_38 = FUN_100b1c2b0;
  puStack_30 = &DAT_100f344c0;
  local_28 = IVar1;
  objc_stub::FUN_100c01cc0(param_1,&local_48);
  return IVar1;
}



/* Address: 0x100b1c2b0 | FUN_100b1c2b0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b1c2b0(long param_1,ID param_2)

{
  int iVar1;
  ID self;
  ID IVar2;
  char *pcVar3;
  
  self = NSMutableDictionary::dictionary((ID)&_OBJC_CLASS___NSMutableDictionary);
  objc_stub::absoluteNSDateInterval(param_2);
  IVar2 = NSNumber::numberWithDouble_((ID)&_OBJC_CLASS___NSNumber);
  NSMutableDictionary::setObject_forKeyedSubscript_(self,IVar2,&cf_timestamp);
  objc_stub::threadID(param_2);
  iVar1 = _snprintf((char *)0x0,0,"%llu");
  pcVar3 = _malloc((long)(iVar1 + 1));
  _snprintf(pcVar3,(long)(iVar1 + 1),"%llu");
  IVar2 = NSString::stringWithCString_encoding_((ID)&_OBJC_CLASS___NSString,pcVar3,1);
  _free(pcVar3);
  NSMutableDictionary::setObject_forKeyedSubscript_(self,IVar2,&cf_thread_id);
  IVar2 = objc_stub::stackIndex(param_2);
  NSMutableDictionary::setObject_forKeyedSubscript_(self,IVar2,&cf_stack_id);
  IVar2 = objc_stub::queueAddress(param_2);
  if (IVar2 != 0) {
    IVar2 = objc_stub::queueAddress(param_2);
    NSMutableDictionary::setObject_forKeyedSubscript_(self,IVar2,&cf_queue_address);
  }
  objc_stub::addObject_(*(ID *)(param_1 + 0x20),self);
  return 0;
}



/* Address: 0x100b1c474 | FUN_100b1c474 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

ID FUN_100b1c474(ID param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,ID param_5,
                ID param_6,ID param_7)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  ID IVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined *self;
  class_t *self_00;
  long lVar8;
  ID IVar9;
  undefined8 local_1a0;
  long lStack_198;
  long *local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  cfstringStruct *local_160;
  cfstringStruct *local_158;
  cfstringStruct *local_150;
  undefined *local_148;
  ID local_140;
  cfstringStruct *pcStack_138;
  cfstringStruct *local_130;
  cfstringStruct *local_128;
  cfstringStruct *local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  cfstringStruct *local_100;
  ID IStack_f8;
  undefined1 auStack_f0 [128];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  IVar1 = objc_stub::objectForKeyedSubscript_(param_1,&cf_profile);
  IVar2 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_samples);
  IVar1 = objc_stub::count(IVar2);
  if (IVar1 < 2) {
    FUN_100b3a1c0();
    if ((int)IVar1 != 0) {
      FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/Profiling/SentryProfilerSerialization.m"
                    ,0x7d,&cf_Notenoughsamplesinprofile);
    }
    IVar1 = objc_stub::getClient(param_7);
    objc_stub::recordLostEvent_reason_(IVar1,7,1);
    IVar1 = 0;
  }
  else {
    FUN_100b26f88(IVar2,param_2,param_3);
    IVar1 = objc_stub::count(IVar2);
    if (IVar1 < 2) {
      FUN_100b3a1c0();
      if ((int)IVar1 != 0) {
        FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/Profiling/SentryProfilerSerialization.m"
                      ,0x87,&cf_Notenoughsamplesinprofileduringthetransaction);
      }
      IVar1 = objc_stub::getClient(param_7);
      objc_stub::recordLostEvent_reason_(IVar1,7,1);
      IVar1 = 0;
    }
    else {
      IVar1 = objc_stub::dictionary((ID)&_OBJC_CLASS___NSMutableDictionary);
      IVar3 = objc_stub::objectForKeyedSubscript_(param_1,&cf_profile);
      IVar3 = objc_stub::mutableCopy(IVar3);
      FUN_100b1bf1c(IVar2,param_2);
      objc_stub::setObject_forKeyedSubscript_(IVar3,IVar2,&cf_samples);
      objc_stub::setObject_forKeyedSubscript_(IVar1,IVar3,&cf_profile);
      objc_stub::setObject_forKeyedSubscript_(IVar1,&cf_1,&cf_version);
      puVar4 = &_OBJC_CLASS___NSMutableArray;
      _objc_alloc();
      IVar2 = objc_stub::init((ID)puVar4);
      lStack_198 = 0;
      local_1a0 = 0;
      uStack_188 = 0;
      local_190 = (long *)0x0;
      uStack_178 = 0;
      local_180 = 0;
      uStack_168 = 0;
      uStack_170 = 0;
      IVar3 = objc_stub::countByEnumeratingWithState_objects_count_
                        (param_6,&local_1a0,auStack_f0,0x10);
      if (IVar3 != 0) {
        lVar8 = *local_190;
        do {
          IVar9 = 0;
          do {
            if (*local_190 != lVar8) {
              _objc_enumerationMutation(param_6);
            }
            IVar5 = objc_stub::serialize(*(ID *)(lStack_198 + IVar9 * 8));
            objc_stub::addObject_(IVar2,IVar5);
            IVar9 = IVar9 + 1;
          } while (IVar3 != IVar9);
          IVar3 = objc_stub::countByEnumeratingWithState_objects_count_
                            (param_6,&local_1a0,auStack_f0,0x10);
        } while (IVar3 != 0);
      }
      IVar3 = objc_stub::count(IVar2);
      if (IVar3 != 0) {
        local_100 = &cf_images;
        IStack_f8 = IVar2;
        IVar2 = objc_stub::FUN_100c012c0((ID)&_OBJC_CLASS___NSDictionary,&IStack_f8,&local_100,1);
        objc_stub::setObject_forKeyedSubscript_(IVar1,IVar2,&cf_debug_meta);
      }
      uVar6 = 0;
      local_130 = &cf_name;
      FUN_100b337c0();
      local_128 = &cf_version;
      local_118 = uVar6;
      FUN_100b337cc();
      local_120 = &cf_build_number;
      local_110 = uVar6;
      FUN_100b33974();
      local_108 = uVar6;
      IVar2 = objc_stub::FUN_100c012c0((ID)&_OBJC_CLASS___NSDictionary,&local_118,&local_130,3);
      objc_stub::setObject_forKeyedSubscript_(IVar1,IVar2,&cf_os);
      uVar7 = 0;
      FUN_100b33aa8();
      self = &_OBJC_CLASS___NSMutableDictionary;
      _objc_alloc();
      local_160 = &cf_architecture;
      puVar4 = self;
      FUN_100b33670();
      local_158 = &cf_is_emulator;
      local_148 = puVar4;
      local_140 = objc_stub::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,uVar7);
      local_150 = &cf_manufacturer;
      pcStack_138 = &cf_Apple;
      IVar2 = objc_stub::FUN_100c012c0((ID)&_OBJC_CLASS___NSDictionary,&local_148,&local_160,3);
      IVar2 = objc_stub::initWithDictionary_((ID)self,IVar2);
      IVar3 = objc_stub::FUN_100c00700((ID)&_OBJC_CLASS___NSLocale);
      IVar3 = objc_stub::localeIdentifier(IVar3);
      objc_stub::setObject_forKeyedSubscript_(IVar2,IVar3,&cf_locale);
      lVar8 = 0;
      if ((uVar7 & 1) == 0) {
        FUN_100b33854();
      }
      else {
        FUN_100b33900();
      }
      if (lVar8 != 0) {
        objc_stub::setObject_forKeyedSubscript_(IVar2,lVar8,&cf_model);
      }
      objc_stub::setObject_forKeyedSubscript_(IVar1,IVar2,&cf_device);
      self_00 = &objc::class_t::SentryId;
      _objc_alloc();
      IVar2 = objc_stub::init((ID)self_00);
      IVar2 = objc_stub::FUN_100c0a000(IVar2);
      objc_stub::setObject_forKeyedSubscript_(IVar1,IVar2,&cf_profile_id);
      objc_stub::setObject_forKeyedSubscript_(IVar1,param_4,&cf_truncation_reason);
      IVar2 = objc_stub::scope(param_7);
      IVar2 = objc_stub::FUN_100c01de0(IVar2);
      if (IVar2 == 0) {
        IVar2 = objc_stub::getClient(param_7);
        IVar2 = objc_stub::options(IVar2);
        IVar2 = objc_stub::environment(IVar2);
        objc_stub::setObject_forKeyedSubscript_(IVar1,IVar2,&cf_environment);
      }
      else {
        objc_stub::setObject_forKeyedSubscript_(IVar1,IVar2,&cf_environment);
      }
      IVar2 = objc_stub::getClient(param_7);
      IVar2 = objc_stub::options(IVar2);
      IVar2 = objc_stub::FUN_100c08e20(IVar2);
      objc_stub::setObject_forKeyedSubscript_(IVar1,IVar2,&cf_release);
      IVar2 = objc_stub::count(param_5);
      if (IVar2 != 0) {
        objc_stub::setObject_forKeyedSubscript_(IVar1,param_5,&cf_measurements);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return IVar1;
}



/* Address: 0x100b1cc54 | FUN_100b1cc54 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

ID FUN_100b1cc54(ID param_1,ID param_2,ID param_3,ID param_4,ID param_5,ID param_6)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  undefined *self;
  ID IVar4;
  long lVar5;
  ID IVar6;
  undefined8 local_140;
  long lStack_138;
  long *local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  cfstringStruct *local_100;
  ID IStack_f8;
  undefined1 auStack_f0 [128];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  IVar1 = objc_stub::objectForKeyedSubscript_(param_3,&cf_profile);
  IVar2 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_samples);
  IVar1 = objc_stub::dictionary((ID)&_OBJC_CLASS___NSMutableDictionary);
  IVar3 = objc_stub::objectForKeyedSubscript_(param_3,&cf_profile);
  IVar3 = objc_stub::mutableCopy(IVar3);
  FUN_100b1c218(IVar2);
  objc_stub::setObject_forKeyedSubscript_(IVar3,IVar2,&cf_samples);
  objc_stub::setObject_forKeyedSubscript_(IVar1,IVar3,&cf_profile);
  objc_stub::setObject_forKeyedSubscript_(IVar1,&cf_2,&cf_version);
  self = &_OBJC_CLASS___NSMutableArray;
  _objc_alloc();
  IVar3 = objc_stub::init((ID)self);
  lStack_138 = 0;
  local_140 = 0;
  uStack_128 = 0;
  local_130 = (long *)0x0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  IVar2 = objc_stub::countByEnumeratingWithState_objects_count_(param_5,&local_140,auStack_f0,0x10);
  if (IVar2 != 0) {
    lVar5 = *local_130;
    do {
      IVar6 = 0;
      do {
        if (*local_130 != lVar5) {
          _objc_enumerationMutation(param_5);
        }
        IVar4 = objc_stub::serialize(*(ID *)(lStack_138 + IVar6 * 8));
        objc_stub::addObject_(IVar3,IVar4);
        IVar6 = IVar6 + 1;
      } while (IVar2 != IVar6);
      IVar2 = objc_stub::countByEnumeratingWithState_objects_count_
                        (param_5,&local_140,auStack_f0,0x10);
    } while (IVar2 != 0);
  }
  IVar2 = objc_stub::count(IVar3);
  if (IVar2 != 0) {
    local_100 = &cf_images;
    IStack_f8 = IVar3;
    IVar3 = objc_stub::FUN_100c012c0((ID)&_OBJC_CLASS___NSDictionary,&IStack_f8,&local_100,1);
    objc_stub::setObject_forKeyedSubscript_(IVar1,IVar3,&cf_debug_meta);
  }
  IVar3 = objc_stub::FUN_100c0a000(param_2);
  objc_stub::setObject_forKeyedSubscript_(IVar1,IVar3,&cf_chunk_id);
  IVar3 = objc_stub::FUN_100c0a000(param_1);
  objc_stub::setObject_forKeyedSubscript_(IVar1,IVar3,&cf_profiler_id);
  IVar3 = objc_stub::scope(param_6);
  IVar3 = objc_stub::FUN_100c01de0(IVar3);
  if (IVar3 == 0) {
    IVar3 = objc_stub::getClient(param_6);
    IVar3 = objc_stub::options(IVar3);
    IVar3 = objc_stub::environment(IVar3);
    objc_stub::setObject_forKeyedSubscript_(IVar1,IVar3,&cf_environment);
  }
  else {
    objc_stub::setObject_forKeyedSubscript_(IVar1,IVar3,&cf_environment);
  }
  IVar3 = objc_stub::getClient(param_6);
  IVar3 = objc_stub::options(IVar3);
  IVar3 = objc_stub::FUN_100c08e20(IVar3);
  objc_stub::setObject_forKeyedSubscript_(IVar1,IVar3,&cf_release);
  objc_stub::setObject_forKeyedSubscript_(IVar1,&cf_cocoa,&cf_platform);
  IVar3 = objc_stub::dictionary((ID)&_OBJC_CLASS___NSMutableDictionary);
  IVar2 = objc_stub::FUN_100c09cc0((ID)&objc::class_t::SentryMeta);
  objc_stub::setObject_forKeyedSubscript_(IVar3,IVar2,&cf_name);
  IVar2 = objc_stub::FUN_100c11340((ID)&objc::class_t::SentryMeta);
  objc_stub::setObject_forKeyedSubscript_(IVar3,IVar2,&cf_version);
  objc_stub::setObject_forKeyedSubscript_(IVar1,IVar3,&cf_client_sdk);
  IVar3 = objc_stub::count(param_4);
  if (IVar3 != 0) {
    objc_stub::setObject_forKeyedSubscript_(IVar1,param_4,&cf_measurements);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_70) {
    return IVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}



/* Address: 0x100b1d1c8 | FUN_100b1d1c8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

ID FUN_100b1d1c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  class_t *pcVar5;
  
  pcVar5 = &objc::class_t::SentryId;
  _objc_alloc();
  IVar2 = objc_stub::init((ID)pcVar5);
  IVar3 = objc_stub::sharedInstance((ID)&objc::class_t::_TtC6Sentry25SentryDependencyContainer);
  IVar3 = objc_stub::FUN_100c00bc0(IVar3);
  IVar3 = objc_stub::FUN_100c02d40(IVar3);
  IVar4 = objc_stub::currentHub((ID)&objc::class_t::SentrySDKInternal);
  FUN_100b1cc54(param_1,IVar2,param_2,param_3,IVar3,IVar4);
  iVar1 = 0;
  if (param_1 == 0) {
    FUN_100b3a1c0();
    if (iVar1 != 0) {
      FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/Profiling/SentryProfilerSerialization.m"
                    ,0x149,&cf_Payloadwasempty_willnotcreateaprofilingenvelopeitem_);
    }
    IVar2 = 0;
  }
  else {
    IVar4 = objc_stub::FUN_100c009e0
                      ((ID)&objc::class_t::_TtC6Sentry24SentrySerializationSwift,param_1);
    IVar3 = IVar4;
    FUN_100b3a1c0();
    if (IVar4 == 0) {
      if ((int)IVar3 != 0) {
        FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/Profiling/SentryProfilerSerialization.m"
                      ,0x14f,&cf_FailedtoencodeprofiletoJSON_);
      }
      IVar2 = 0;
    }
    else {
      if ((int)IVar3 != 0) {
        FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/Profiling/SentryProfilerSerialization.m"
                      ,0x153,&cf_Transmittingcontinuousprofilechunk_);
      }
      pcVar5 = &objc::class_t::_TtC6Sentry18SentryEnvelopeItem;
      _objc_alloc();
      IVar3 = objc_stub::FUN_100c08340((ID)&objc::class_t::_TtC6Sentry23SentryEnvelopeItemTypes);
      IVar3 = objc_stub::FUN_100c04fe0((ID)pcVar5,IVar3,IVar4,1);
      pcVar5 = &objc::class_t::_TtC6Sentry14SentryEnvelope;
      _objc_alloc();
      IVar2 = objc_stub::FUN_100c04320((ID)pcVar5,IVar2,IVar3);
    }
  }
  return IVar2;
}



/* Address: 0x100b1d40c | FUN_100b1d40c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

ID FUN_100b1d40c(undefined8 param_1,ID param_2,ID param_3,ID param_4,undefined8 param_5)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  int iVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  ID IVar7;
  ID IVar8;
  ID IVar9;
  undefined *self;
  class_t *self_00;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  ID IStack_78;
  ID local_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  IVar4 = objc_stub::sharedInstance((ID)&objc::class_t::_TtC6Sentry25SentryDependencyContainer);
  IVar4 = objc_stub::FUN_100c00bc0(IVar4);
  IVar4 = objc_stub::FUN_100c02d40(IVar4);
  IVar5 = objc_stub::FUN_100c0f4a0(param_4);
  IVar6 = objc_stub::FUN_100c01b00(param_4);
  IVar7 = objc_stub::FUN_100c10c60(param_2);
  pcVar1 = &cf_backgrounded;
  if (IVar7 != 2) {
    pcVar1 = &cf_normal;
  }
  pcVar2 = &cf_timeout;
  if (IVar7 != 1) {
    pcVar2 = pcVar1;
  }
  IVar7 = objc_stub::FUN_100c06d40(param_2);
  IVar8 = objc_stub::FUN_100c0f4a0(param_4);
  IVar9 = objc_stub::FUN_100c01b00(param_4);
  IVar7 = objc_stub::FUN_100c0a1c0(IVar7,IVar8,IVar9);
  FUN_100b1c474(param_3,IVar5,IVar6,pcVar2,IVar7,IVar4,param_1);
  iVar3 = 0;
  if (param_3 == 0) {
    FUN_100b3a1c0();
    if (iVar3 != 0) {
      FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/Profiling/SentryProfilerSerialization.m"
                    ,0x17c,&cf_Payloadwasempty_willnotcreateaprofilingenvelopeitem_);
    }
    IVar4 = 0;
    goto LAB_100b1d8e4;
  }
  objc_stub::setObject_forKeyedSubscript_(param_3,&cf_cocoa,&cf_platform);
  self = &_OBJC_CLASS___NSMutableDictionary;
  _objc_alloc();
  local_88 = &cf_id;
  IVar4 = objc_stub::FUN_100c01f00(param_4);
  IStack_78 = objc_stub::FUN_100c0a000(IVar4);
  local_80 = &cf_trace_id;
  IVar4 = objc_stub::FUN_100c108e0(param_4);
  IVar4 = objc_stub::FUN_100c10960(IVar4);
  local_70 = objc_stub::FUN_100c0a000(IVar4);
  IVar4 = objc_stub::FUN_100c012c0((ID)&_OBJC_CLASS___NSDictionary,&IStack_78,&local_88,2);
  IVar4 = objc_stub::initWithDictionary_((ID)self,IVar4);
  IVar5 = objc_stub::FUN_100c108e0(param_4);
  IVar5 = objc_stub::FUN_100c10ac0(IVar5);
  IVar5 = objc_stub::FUN_100c0a0c0(IVar5);
  IVar5 = objc_stub::FUN_100c104e0(IVar5);
  if (IVar5 == 0) {
    IVar6 = objc_stub::numberWithInt_((ID)&_OBJC_CLASS___NSNumber,0);
    IVar6 = objc_stub::isEqual_(0,IVar6);
    if ((int)IVar6 != 0) goto LAB_100b1d764;
  }
  else {
LAB_100b1d764:
    objc_stub::setObject_forKeyedSubscript_(IVar4,IVar5,&cf_active_thread_id);
  }
  IVar5 = objc_stub::FUN_100c10a80(param_4);
  if (IVar5 != 0) {
    IVar5 = objc_stub::FUN_100c10a80(param_4);
    objc_stub::setObject_forKeyedSubscript_(IVar4,IVar5,&cf_name);
  }
  objc_stub::setObject_forKeyedSubscript_(param_3,IVar4,&cf_transaction);
  FUN_100b40420(param_5);
  objc_stub::setObject_forKeyedSubscript_(param_3,param_5,&cf_timestamp);
  IVar4 = objc_stub::FUN_100c009e0
                    ((ID)&objc::class_t::_TtC6Sentry24SentrySerializationSwift,param_3);
  if (IVar4 == 0) {
    FUN_100b3a1c0();
    if ((int)IVar4 != 0) {
      FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/Profiling/SentryProfilerSerialization.m"
                    ,0x192,&cf_FailedtoencodeprofiletoJSON_);
    }
    IVar4 = 0;
  }
  else {
    self_00 = &objc::class_t::_TtC6Sentry18SentryEnvelopeItem;
    _objc_alloc();
    IVar5 = objc_stub::FUN_100c08300((ID)&objc::class_t::_TtC6Sentry23SentryEnvelopeItemTypes);
    IVar4 = objc_stub::FUN_100c04fe0((ID)self_00,IVar5,IVar4,0);
  }
LAB_100b1d8e4:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return IVar4;
}



/* Address: 0x100b1d944 | FUN_100b1d944 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

ID FUN_100b1d944(undefined8 param_1,undefined8 param_2,ID param_3,undefined8 param_4)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  
  FUN_100b42e08();
  if (param_3 == 0) {
    IVar3 = 0;
  }
  else {
    IVar3 = objc_stub::state(param_3);
    IVar3 = objc_stub::copyProfilingData(IVar3);
    IVar4 = objc_stub::FUN_100c10c60(param_3);
    pcVar1 = &cf_backgrounded;
    if (IVar4 != 2) {
      pcVar1 = &cf_normal;
    }
    pcVar2 = &cf_timeout;
    if (IVar4 != 1) {
      pcVar2 = pcVar1;
    }
    IVar4 = objc_stub::FUN_100c06d40(param_3);
    IVar4 = objc_stub::FUN_100c0a1c0(IVar4,param_1,param_2);
    IVar5 = objc_stub::sharedInstance((ID)&objc::class_t::_TtC6Sentry25SentryDependencyContainer);
    IVar5 = objc_stub::FUN_100c00bc0(IVar5);
    IVar5 = objc_stub::FUN_100c02d40(IVar5);
    FUN_100b1c474(IVar3,param_1,param_2,pcVar2,IVar4,IVar5,param_4);
  }
  return IVar3;
}



/* Address: 0x100b1db00 | SentryEnvelopeItemHeader::initWithType:length: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

ID SentryEnvelopeItemHeader::initWithType_length_
             (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4)

{
  ID IVar1;
  objc_super local_40;
  
  local_40.super_class = &objc::class_t::SentryEnvelopeItemHeader;
  local_40.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_40,"init");
  if (IVar1 != 0) {
    *(ID *)(IVar1 + 8) = param_3;
    *(unsigned_long_long *)(IVar1 + 0x10) = param_4;
  }
  return IVar1;
}



/* Address: 0x100b1db80 | SentryEnvelopeItemHeader::initWithType:length:contentType: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x28 bytes */

ID SentryEnvelopeItemHeader::initWithType_length_contentType_
             (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4,ID param_5)

{
  ID IVar1;
  
  IVar1 = objc_stub::FUN_100c05000(param_1,param_3,param_4);
  if (IVar1 != 0) {
    *(ID *)(IVar1 + 0x20) = param_5;
  }
  return IVar1;
}



/* Address: 0x100b1dbf4 | SentryEnvelopeItemHeader::initWithType:length:filenname:contentType: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x30 bytes */

ID SentryEnvelopeItemHeader::initWithType_length_filenname_contentType_
             (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4,ID param_5,ID param_6)

{
  ID IVar1;
  
  IVar1 = objc_stub::FUN_100c05020(param_1,param_3,param_4,param_6);
  if (IVar1 != 0) {
    *(ID *)(IVar1 + 0x18) = param_5;
  }
  return IVar1;
}



/* Address: 0x100b1dc70 | SentryEnvelopeItemHeader::initWithType:length:contentType:itemCount: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x30 bytes */

ID SentryEnvelopeItemHeader::initWithType_length_contentType_itemCount_
             (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4,ID param_5,ID param_6)

{
  ID IVar1;
  
  IVar1 = objc_stub::FUN_100c05020(param_1,param_3,param_4,param_5);
  if (IVar1 != 0) {
    *(ID *)(IVar1 + 0x28) = param_6;
  }
  return IVar1;
}



/* Address: 0x100b1dcec | SentryEnvelopeItemHeader::serialize */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryEnvelopeItemHeader::serialize(ID param_1,SEL param_2)

{
  undefined *self;
  ID self_00;
  ID IVar1;
  
  self = &_OBJC_CLASS___NSMutableDictionary;
  _objc_alloc();
  self_00 = objc_stub::init((ID)self);
  IVar1 = objc_stub::type(param_1);
  if (IVar1 != 0) {
    IVar1 = objc_stub::type(param_1);
    objc_stub::setValue_forKey_(self_00,IVar1,&cf_type);
  }
  IVar1 = objc_stub::FUN_100c02500(param_1);
  if (IVar1 != 0) {
    IVar1 = objc_stub::FUN_100c02500(param_1);
    objc_stub::setValue_forKey_(self_00,IVar1,&cf_filename);
  }
  IVar1 = objc_stub::FUN_100bffd40(param_1);
  if (IVar1 != 0) {
    IVar1 = objc_stub::FUN_100bffd40(param_1);
    objc_stub::setValue_forKey_(self_00,IVar1,&cf_content_type);
  }
  IVar1 = objc_stub::FUN_100c07e00(param_1);
  if (IVar1 != 0) {
    IVar1 = objc_stub::FUN_100c07e00(param_1);
    objc_stub::setValue_forKey_(self_00,IVar1,&cf_platform);
  }
  IVar1 = objc_stub::FUN_100c05ea0(param_1);
  if (IVar1 != 0) {
    IVar1 = objc_stub::FUN_100c05ea0(param_1);
    objc_stub::setValue_forKey_(self_00,IVar1,&cf_item_count);
  }
  IVar1 = objc_stub::length(param_1);
  IVar1 = objc_stub::numberWithUnsignedInteger_((ID)&_OBJC_CLASS___NSNumber,IVar1);
  objc_stub::setValue_forKey_(self_00,IVar1,&cf_length);
  return self_00;
}



/* Address: 0x100b1dee8 | SentryEnvelopeItemHeader::type */

/* Function Stack Size: 0x10 bytes */

ID SentryEnvelopeItemHeader::type(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 8);
}



/* Address: 0x100b1def0 | SentryEnvelopeItemHeader::length */

/* Function Stack Size: 0x10 bytes */

unsigned_long_long SentryEnvelopeItemHeader::length(ID param_1,SEL param_2)

{
  return *(unsigned_long_long *)(param_1 + 0x10);
}



/* Address: 0x100b1def8 | SentryEnvelopeItemHeader::filename */

/* Function Stack Size: 0x10 bytes */

ID SentryEnvelopeItemHeader::filename(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x18);
}



/* Address: 0x100b1df00 | SentryEnvelopeItemHeader::contentType */

/* Function Stack Size: 0x10 bytes */

ID SentryEnvelopeItemHeader::contentType(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x20);
}



/* Address: 0x100b1df08 | SentryEnvelopeItemHeader::itemCount */

/* Function Stack Size: 0x10 bytes */

ID SentryEnvelopeItemHeader::itemCount(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x28);
}



/* Address: 0x100b1df10 | SentryEnvelopeItemHeader::platform */

/* Function Stack Size: 0x10 bytes */

ID SentryEnvelopeItemHeader::platform(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x30);
}



/* Address: 0x100b1df18 | SentryEnvelopeItemHeader::setPlatform: */

/* WARNING: Function: _objc_setProperty_nonatomic_copy replaced with injection:
   _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryEnvelopeItemHeader::setPlatform_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x30) = param_3;
  return;
}



/* Address: 0x100b1df20 | SentryEnvelopeItemHeader::.cxx_destruct */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryEnvelopeItemHeader::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



/* Address: 0x100b1df74 | SentryEnvelopeAttachmentHeader::initWithType:length: */

/* Function Stack Size: 0x20 bytes */

ID SentryEnvelopeAttachmentHeader::initWithType_length_
             (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4)

{
  ID IVar1;
  objc_super local_20;
  
  local_20.super_class = &objc::class_t::SentryEnvelopeAttachmentHeader;
  local_20.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_20,"initWithType:length:");
  if (IVar1 != 0) {
    *(undefined8 *)(IVar1 + (long)_attachmentType) = 0;
  }
  return IVar1;
}



/* Address: 0x100b1dfb8 | SentryEnvelopeAttachmentHeader::initWithType:length:filename:contentType:attachmentType: */

/* Function Stack Size: 0x38 bytes */

ID SentryEnvelopeAttachmentHeader::initWithType_length_filename_contentType_attachmentType_
             (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4,ID param_5,ID param_6,
             long_long param_7)

{
  ID IVar1;
  
  IVar1 = objc_stub::FUN_100c05040(param_1);
  if (IVar1 != 0) {
    *(long_long *)(IVar1 + (long)_attachmentType) = param_7;
  }
  return IVar1;
}



/* Address: 0x100b1dfe8 | SentryEnvelopeAttachmentHeader::serialize */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryEnvelopeAttachmentHeader::serialize(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  objc_super local_40;
  
  local_40.super_class = &objc::class_t::SentryEnvelopeAttachmentHeader;
  local_40.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_40,"serialize");
  IVar1 = objc_stub::mutableCopy(IVar1);
  IVar2 = objc_stub::FUN_100bfe160(param_1);
  FUN_100b58194();
  objc_stub::setObject_forKey_(IVar1,IVar2,&cf_attachment_type);
  return IVar1;
}



/* Address: 0x100b1e084 | SentryEnvelopeAttachmentHeader::attachmentType */

/* Function Stack Size: 0x10 bytes */

long_long SentryEnvelopeAttachmentHeader::attachmentType(ID param_1,SEL param_2)

{
  return *(long_long *)(param_1 + (long)_attachmentType);
}



/* Address: 0x100b1e094 | FUN_100b1e094 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

ID FUN_100b1e094(void)

{
  ID IVar1;
  char acStack_2b [19];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100ea82f0;
  _snprintf(acStack_2b,0x13,"0x%016llx");
  IVar1 = objc_stub::stringWithCString_encoding_((ID)&_OBJC_CLASS___NSString,acStack_2b,1);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_18) {
    return IVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100b1e10c | FUN_100b1e10c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

ID FUN_100b1e10c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ID IVar1;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ea82f0;
  local_58 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_100ea7c10;
  uStack_50 = *(undefined8 *)PTR__NSUnderlyingErrorKey_100ea7c80;
  local_48 = param_2;
  uStack_40 = param_3;
  IVar1 = objc_stub::FUN_100c012c0((ID)&_OBJC_CLASS___NSDictionary,&local_48,&local_58,2);
  IVar1 = objc_stub::errorWithDomain_code_userInfo_
                    ((ID)&_OBJC_CLASS___NSError,&cf_SentryErrorDomain,param_1,IVar1);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_38) {
    return IVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}



/* Address: 0x100b1e23c | FUN_100b1e23c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

ID FUN_100b1e23c(undefined8 param_1)

{
  ID IVar1;
  undefined8 local_48;
  ID local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ea82f0;
  local_48 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_100ea7c10;
  FUN_100b57c64();
  local_40 = objc_stub::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_____s_);
  IVar1 = objc_stub::FUN_100c012c0((ID)&_OBJC_CLASS___NSDictionary,&local_40,&local_48,1);
  IVar1 = objc_stub::errorWithDomain_code_userInfo_
                    ((ID)&_OBJC_CLASS___NSError,&cf_SentryErrorDomain,param_1,IVar1);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_38) {
    return IVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}



/* Address: 0x100b1e38c | FUN_100b1e38c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

ID FUN_100b1e38c(undefined8 param_1,undefined8 param_2)

{
  ID IVar1;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ea82f0;
  local_48 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_100ea7c10;
  uStack_40 = param_2;
  IVar1 = objc_stub::FUN_100c012c0((ID)&_OBJC_CLASS___NSDictionary,&uStack_40,&local_48,1);
  IVar1 = objc_stub::errorWithDomain_code_userInfo_
                    ((ID)&_OBJC_CLASS___NSError,&cf_SentryErrorDomain,param_1,IVar1);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_38) {
    return IVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}



/* Address: 0x100b1e48c | SentrySamplingContext::initWithTransactionContext: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentrySamplingContext::initWithTransactionContext_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  objc_super local_40;
  
  local_40.super_class = &objc::class_t::SentrySamplingContext;
  local_40.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_40,"init");
  if (IVar1 != 0) {
    *(ID *)(IVar1 + 8) = param_3;
  }
  return IVar1;
}



/* Address: 0x100b1e504 | SentrySamplingContext::initWithTransactionContext:customSamplingContext: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

ID SentrySamplingContext::initWithTransactionContext_customSamplingContext_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  
  IVar1 = objc_stub::FUN_100c04f00(param_1,param_3);
  *(ID *)(IVar1 + 0x10) = param_4;
  return IVar1;
}



/* Address: 0x100b1e558 | SentrySamplingContext::transactionContext */

/* Function Stack Size: 0x10 bytes */

ID SentrySamplingContext::transactionContext(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 8);
}



/* Address: 0x100b1e560 | SentrySamplingContext::customSamplingContext */

/* Function Stack Size: 0x10 bytes */

ID SentrySamplingContext::customSamplingContext(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x10);
}



/* Address: 0x100b1e568 | SentrySamplingContext::.cxx_destruct */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void SentrySamplingContext::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



/* Address: 0x100b1e598 | SentryCrashReportFilterPassthrough::filter */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

void __thiscall SentryCrashReportFilterPassthrough::filter(SentryCrashReportFilterPassthrough *this)

{
  ID in_x0;
  
  _objc_alloc();
  objc_stub::init(in_x0);
  return;
}



/* Address: 0x100b1e5b0 | SentryCrashReportFilterPassthrough::filterReports:onCompletion: */

/* Function Stack Size: 0x20 bytes */

void SentryCrashReportFilterPassthrough::filterReports_onCompletion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,undefined4 param_5)

{
  if (param_4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000100b1e5c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_4 + 0x10))(param_4,param_3,1,0);
    return;
  }
  return;
}



/* Address: 0x100b1e5d0 | SentryCrashReportFilterCombine::initWithFilters:keys: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

ID SentryCrashReportFilterCombine::initWithFilters_keys_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID self;
  objc_super local_40;
  
  local_40.super_class = &objc::class_t::SentryCrashReportFilterCombine;
  local_40.receiver = param_1;
  self = _objc_msgSendSuper2(&local_40,"init");
  if (self != 0) {
    objc_stub::FUN_100c0bc40(self,param_3);
    objc_stub::FUN_100c0c5e0(self,param_4);
  }
  return self;
}



/* Address: 0x100b1e668 | SentryCrashReportFilterCombine::argBlockWithFilters:andKeys: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainBlock replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID SentryCrashReportFilterCombine::argBlockWithFilters_andKeys_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  undefined *local_88;
  undefined8 local_80;
  code *local_78;
  undefined *puStack_70;
  ID local_68;
  ID local_60;
  undefined8 *local_58;
  undefined8 local_50;
  undefined8 *puStack_48;
  undefined8 local_40;
  undefined1 local_38;
  
  local_58 = &local_50;
  local_50 = 0;
  local_40 = 0x2020000000;
  local_38 = 0;
  local_88 = PTR___NSConcreteStackBlock_100ea82a0;
  local_80 = 0xc2000000;
  local_78 = FUN_100b1e770;
  puStack_70 = &DAT_100f344f8;
  local_68 = param_4;
  local_60 = param_3;
  puStack_48 = local_58;
  IVar1 = objc_stub::copy((ID)&local_88);
  __Block_object_dispose(&local_50,8);
  return IVar1;
}



/* Address: 0x100b1e770 | FUN_100b1e770 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

undefined8 FUN_100b1e770(long param_1,ID param_2)

{
  int iVar1;
  ID IVar2;
  long lVar3;
  
  if (*(char *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) == '\x01') {
    if (param_2 == 0) {
      FUN_100b3a1f0();
      if ((int)param_2 != 0) {
        FUN_100b3a2b8("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Reporting/Filters/SentryCrashReportFilterBasic.m"
                      ,0x4f,&cf_keyentrywasnil);
      }
      goto LAB_100b1e86c;
    }
    IVar2 = *(ID *)(param_1 + 0x20);
  }
  else {
    IVar2 = NSArray::class((ID)&_OBJC_CLASS___NSArray);
    IVar2 = objc_stub::isKindOfClass_(param_2,IVar2);
    if ((int)IVar2 != 0) {
      param_2 = SentryCrashReportFilterPipeline::filterWithFilters_
                          ((ID)&objc::class_t::SentryCrashReportFilterPipeline,param_2);
    }
    IVar2 = objc_stub::conformsToProtocol_(param_2,&objc::protocol_t::SentryCrashReportFilter);
    iVar1 = (int)IVar2;
    if ((IVar2 & 1) == 0) {
      FUN_100b3a1f0();
      if (iVar1 == 0) {
        return 0;
      }
      FUN_100b3a2b8("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Reporting/Filters/SentryCrashReportFilterBasic.m"
                    ,0x58,&cf_Notafilter___);
      return 0;
    }
    IVar2 = *(ID *)(param_1 + 0x28);
  }
  objc_stub::addObject_(IVar2,param_2);
LAB_100b1e86c:
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  *(byte *)(lVar3 + 0x18) = *(byte *)(lVar3 + 0x18) ^ 1;
  return 0;
}



/* Address: 0x100b1e898 | FUN_100b1e898 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100b1e898(long param_1,long param_2)

{
  __Block_object_assign((void *)(param_1 + 0x30),*(void **)(param_2 + 0x30),8);
  return;
}



/* Address: 0x100b1e8d4 | FUN_100b1e8d4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b1e8d4(long param_1)

{
  __Block_object_dispose(*(void **)(param_1 + 0x30),8);
  return 0;
}



/* Address: 0x100b1e908 | SentryCrashReportFilterCombine::filterWithFiltersAndKeys: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryCrashReportFilterCombine::filterWithFiltersAndKeys_(ID param_1,SEL param_2,ID param_3)

{
  ID *pIVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  
  IVar2 = objc_stub::array((ID)&_OBJC_CLASS___NSMutableArray);
  IVar3 = objc_stub::array((ID)&_OBJC_CLASS___NSMutableArray);
  IVar4 = objc_stub::FUN_100bfdf60(param_1,IVar2,IVar3);
  pIVar1 = (ID *)register0x00000008;
  while (param_3 != 0) {
    (**(code **)(IVar4 + 0x10))(IVar4,param_3);
    param_3 = *pIVar1;
    pIVar1 = pIVar1 + 1;
  }
  _objc_alloc();
  IVar2 = objc_stub::FUN_100c041e0(param_1,IVar2,IVar3);
  return IVar2;
}


