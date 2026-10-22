/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100b44434 | FUN_100b44434 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100b44434(long param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_100f34cd8;
  param_2[1] = *(undefined8 *)(param_1 + 8);
  return;
}



/* Address: 0x100b44468 | FUN_100b44468 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b44468(void)

{
  return 0;
}



/* Address: 0x100b44470 | FUN_100b44470 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100b44470(undefined8 param_1)

{
  __ZdlPv(param_1);
  return;
}



/* Address: 0x100b44498 | FUN_100b44498 */

void FUN_100b44498(long param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_50;
  undefined4 local_48;
  long *local_40;
  long local_38;
  long local_30;
  undefined8 uStack_28;
  
  local_68 = *param_2;
  if (*(char *)((long)param_2 + 0x1f) < '\0') {
    FUN_100b1abf8(&local_60,param_2[1],param_2[2]);
  }
  else {
    uStack_58 = param_2[2];
    local_60 = param_2[1];
    local_50 = param_2[3];
  }
  local_48 = *(undefined4 *)(param_2 + 4);
  local_40 = (long *)param_2[5];
  local_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  plVar1 = &local_38;
  FUN_100b445d8();
  FUN_100b4f344();
  local_40 = plVar1;
  _objc_autoreleasePoolPush();
  objc_stub::appendBacktrace_(*(ID *)(param_1 + 8),&local_68);
  _objc_autoreleasePoolPop(plVar1);
  if (local_38 != 0) {
    local_30 = local_38;
    __ZdlPv();
  }
  if (local_50 < 0) {
    __ZdlPv(local_60);
  }
  return;
}



/* Address: 0x100b44590 | FUN_100b44590 */

long FUN_100b44590(long param_1,undefined8 param_2)

{
  FUN_100b44690(param_2,&PTR_DAT_100f34d48);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Address: 0x100b445cc | FUN_100b445cc */

undefined ** FUN_100b445cc(void)

{
  return &PTR_DAT_100f34d48;
}



/* Address: 0x100b445d8 | FUN_100b445d8 */

void FUN_100b445d8(long param_1,void *param_2,long param_3,long param_4)

{
  size_t sVar1;
  void *pvVar2;
  
  if (param_4 != 0) {
    FUN_100b44650(param_1,param_4);
    pvVar2 = *(void **)(param_1 + 8);
    sVar1 = param_3 - (long)param_2;
    if (sVar1 != 0) {
      _memmove(pvVar2,param_2,sVar1);
    }
    *(size_t *)(param_1 + 8) = (long)pvVar2 + sVar1;
  }
  return;
}



/* Address: 0x100b44650 | FUN_100b44650 */

long * FUN_100b44650(long *param_1,ulong param_2)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3d == 0) {
    plVar2 = param_1 + 2;
    FUN_100b40b78();
    *param_1 = (long)plVar2;
    param_1[1] = (long)plVar2;
    param_1[2] = (long)(plVar2 + param_2);
    return plVar2;
  }
  FUN_100b1ae80();
  uVar3 = param_1[1];
  uVar4 = *(ulong *)(param_2 + 8);
  if (uVar3 == uVar4) {
    return (long *)&DAT_00000001;
  }
  if (-1 < (long)(uVar4 & uVar3)) {
    return (long *)0x0;
  }
  iVar1 = _strcmp((char *)(uVar3 & 0x7fffffffffffffff),(char *)(uVar4 & 0x7fffffffffffffff));
  return (long *)(ulong)(iVar1 == 0);
}



/* Address: 0x100b44690 | FUN_100b44690 */

bool FUN_100b44690(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *(ulong *)(param_1 + 8);
  uVar3 = *(ulong *)(param_2 + 8);
  if (uVar2 == uVar3) {
    return true;
  }
  if (-1 < (long)(uVar3 & uVar2)) {
    return false;
  }
  iVar1 = _strcmp((char *)(uVar2 & 0x7fffffffffffffff),(char *)(uVar3 & 0x7fffffffffffffff));
  return iVar1 == 0;
}



/* Address: 0x100b446dc | FUN_100b446dc */

void FUN_100b446dc(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    thunk_FUN_100b15d50();
    __ZdlPv();
    return;
  }
  return;
}



/* Address: 0x100b44704 | SentryAsynchronousOperation::init */

/* Function Stack Size: 0x10 bytes */

ID SentryAsynchronousOperation::init(ID param_1,SEL param_2)

{
  ID IVar1;
  objc_super local_20;
  
  local_20.super_class = &objc::class_t::SentryAsynchronousOperation;
  local_20.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_20,"init");
  if (IVar1 != 0) {
    *(undefined1 *)(IVar1 + (long)_finished) = 0;
    *(undefined1 *)(IVar1 + (long)_executing) = 0;
    *(undefined1 *)(IVar1 + (long)_cancelled) = 0;
  }
  return IVar1;
}



/* Address: 0x100b44760 | SentryAsynchronousOperation::start */

/* Function Stack Size: 0x10 bytes */

void SentryAsynchronousOperation::start(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = objc_stub::isCancelled(param_1);
  if ((int)IVar1 != 0) {
    objc_stub::FUN_100c0bd00(param_1,1);
    return;
  }
  objc_stub::FUN_100c0ba60(param_1,1);
  objc_stub::FUN_100c067a0(param_1);
  return;
}



/* Address: 0x100b447a8 | SentryAsynchronousOperation::cancel */

/* Function Stack Size: 0x10 bytes */

void SentryAsynchronousOperation::cancel(ID param_1,SEL param_2)

{
  objc_stub::FUN_100c0ba60(param_1,0);
  objc_stub::FUN_100c0bd00(param_1,1);
  objc_stub::FUN_100c0ad60(param_1,1);
  return;
}



/* Address: 0x100b447e0 | SentryAsynchronousOperation::completeOperation */

/* Function Stack Size: 0x10 bytes */

void SentryAsynchronousOperation::completeOperation(ID param_1,SEL param_2)

{
  objc_stub::FUN_100c0ba60(param_1,0);
  objc_stub::FUN_100c0bd00(param_1,1);
  return;
}



/* Address: 0x100b4480c | SentryAsynchronousOperation::isAsynchronous */

/* Function Stack Size: 0x10 bytes */

bool SentryAsynchronousOperation::isAsynchronous(ID param_1,SEL param_2)

{
  return 1;
}



/* Address: 0x100b44814 | SentryAsynchronousOperation::isExecuting */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

bool SentryAsynchronousOperation::isExecuting(ID param_1,SEL param_2)

{
  byte bVar1;
  
  _objc_sync_enter();
  bVar1 = *(byte *)(param_1 + (long)_executing);
  _objc_sync_exit(param_1);
  return (bool)bVar1;
}



/* Address: 0x100b44858 | SentryAsynchronousOperation::isFinished */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

bool SentryAsynchronousOperation::isFinished(ID param_1,SEL param_2)

{
  byte bVar1;
  
  _objc_sync_enter();
  bVar1 = *(byte *)(param_1 + (long)_finished);
  _objc_sync_exit(param_1);
  return (bool)bVar1;
}



/* Address: 0x100b4489c | SentryAsynchronousOperation::isCancelled */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

bool SentryAsynchronousOperation::isCancelled(ID param_1,SEL param_2)

{
  byte bVar1;
  
  _objc_sync_enter();
  bVar1 = *(byte *)(param_1 + (long)_cancelled);
  _objc_sync_exit(param_1);
  return (bool)bVar1;
}



/* Address: 0x100b448e0 | SentryAsynchronousOperation::setCancelled: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x14 bytes */

void SentryAsynchronousOperation::setCancelled_(ID param_1,SEL param_2,bool param_3)

{
  long lVar1;
  
  lVar1 = (long)_cancelled;
  if (*(byte *)(param_1 + lVar1) == param_3) {
    return;
  }
  objc_stub::willChangeValueForKey_(param_1,&cf_isCancelled);
  _objc_sync_enter();
  *(char *)(param_1 + lVar1) = (char)param_3;
  _objc_sync_exit(param_1);
  objc_stub::didChangeValueForKey_(param_1,&cf_isCancelled);
  return;
}



/* Address: 0x100b44974 | SentryAsynchronousOperation::setExecuting: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x14 bytes */

void SentryAsynchronousOperation::setExecuting_(ID param_1,SEL param_2,bool param_3)

{
  long lVar1;
  
  lVar1 = (long)_executing;
  if (*(byte *)(param_1 + lVar1) == param_3) {
    return;
  }
  objc_stub::willChangeValueForKey_(param_1,&cf_isExecuting);
  _objc_sync_enter();
  *(char *)(param_1 + lVar1) = (char)param_3;
  _objc_sync_exit(param_1);
  objc_stub::didChangeValueForKey_(param_1,&cf_isExecuting);
  return;
}



/* Address: 0x100b44a08 | SentryAsynchronousOperation::setFinished: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x14 bytes */

void SentryAsynchronousOperation::setFinished_(ID param_1,SEL param_2,bool param_3)

{
  objc_stub::willChangeValueForKey_(param_1,&cf_isFinished);
  _objc_sync_enter();
  if (*(byte *)(param_1 + (long)_finished) != param_3) {
    *(char *)(param_1 + (long)_finished) = (char)param_3;
  }
  _objc_sync_exit(param_1);
  objc_stub::didChangeValueForKey_(param_1,&cf_isFinished);
  return;
}



/* Address: 0x100b44a78 | SentryCrash::initWithBasePath: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryCrash::initWithBasePath_(ID param_1,SEL param_2,ID param_3)

{
  ID self;
  ID IVar1;
  objc_super local_40;
  
  local_40.super_class = &objc::class_t::SentryCrash;
  local_40.receiver = param_1;
  self = _objc_msgSendSuper2(&local_40,"init");
  if (self != 0) {
    IVar1 = objc_stub::FUN_100c02cc0(self);
    objc_stub::FUN_100c0acc0(self,IVar1);
    objc_stub::FUN_100c0aa80(self,param_3);
    objc_stub::FUN_100c0b4c0(self,2);
    objc_stub::FUN_100c0c400(self,1);
    objc_stub::FUN_100c0c920(self,5);
    objc_stub::FUN_100c0cbe0(self,0x8f);
    objc_stub::FUN_100c0cc00(self,0);
  }
  return self;
}



/* Address: 0x100b44b50 | SentryCrash::userInfo */

/* WARNING: Function: _objc_retainAutoreleaseReturnValue replaced with injection: _objc_retain_fixup
    */
/* Function Stack Size: 0x10 bytes */

ID SentryCrash::userInfo(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x28);
}



/* Address: 0x100b44b58 | SentryCrash::setUserInfo: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryCrash::setUserInfo_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  int iVar2;
  ID self;
  long local_48;
  
  _objc_sync_enter();
  if (param_3 == 0) {
    self = 0;
  }
  else {
    local_48 = 0;
    self = objc_stub::FUN_100c01960((ID)&objc::class_t::SentryCrashJSONCodec,param_3,2,&local_48);
    lVar1 = local_48;
    FUN_100b42768();
    iVar2 = 0;
    if (lVar1 != 0) {
      FUN_100b3a1f0();
      if (iVar2 != 0) {
        FUN_100b3a2b8("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/SentryCrash.m"
                      ,0x7d,&cf_Couldnotserializeuserinfo___);
      }
      goto LAB_100b44c38;
    }
  }
  *(ID *)(param_1 + 0x28) = param_3;
  _objc_retainAutorelease();
  objc_stub::bytes(self);
  thunk_FUN_100b0afe4();
LAB_100b44c38:
  _objc_sync_exit(param_1);
  return;
}



/* Address: 0x100b44c8c | SentryCrash::setMonitoring: */

/* Function Stack Size: 0x14 bytes */

void SentryCrash::setMonitoring_(ID param_1,SEL param_2,int param_3)

{
  FUN_100b2beb4();
  *(int *)(param_1 + 0x10) = param_3;
  return;
}



/* Address: 0x100b44cb4 | SentryCrash::setBridgeObject: */

/* Function Stack Size: 0x18 bytes */

ID __objc_msgSend_stub SentryCrash::setBridgeObject_(ID self,...)

{
  (*(code *)PTR__objc_msgSend_100ea81a8)(self,"setBridge:");
  return self;
}



/* Address: 0x100b44cb8 | SentryCrash::setOnCrash: */

/* Function Stack Size: 0x18 bytes */

void SentryCrash::setOnCrash_(ID param_1,SEL param_2,undefined4 *param_3)

{
  *(undefined4 **)(param_1 + 0x30) = param_3;
  return;
}



/* Address: 0x100b44cc0 | SentryCrash::setIntrospectMemory: */

/* Function Stack Size: 0x14 bytes */

void SentryCrash::setIntrospectMemory_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + 8) = (char)param_3;
  thunk_FUN_100b0b03c(param_3);
  return;
}



/* Address: 0x100b44ccc | SentryCrash::setDoNotIntrospectClasses: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryCrash::setDoNotIntrospectClasses_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ulong uVar5;
  ulong uVar6;
  
  *(ID *)(param_1 + 0x50) = param_3;
  IVar2 = objc_stub::count(param_3);
  if (IVar2 == 0) {
    thunk_FUN_100b0b048(0,0);
  }
  else {
    IVar3 = objc_stub::dataWithLength_((ID)&_OBJC_CLASS___NSMutableData,IVar2 << 3);
    _objc_retainAutorelease();
    IVar3 = objc_stub::mutableBytes(IVar3);
    uVar5 = 0;
    uVar6 = 1;
    do {
      IVar4 = objc_stub::objectAtIndex_(param_3,uVar5);
      _objc_retainAutorelease();
      IVar4 = objc_stub::cStringUsingEncoding_(IVar4,4);
      *(ID *)(IVar3 + uVar5 * 8) = IVar4;
      bVar1 = uVar6 < IVar2;
      uVar5 = uVar6;
      uVar6 = (ulong)((int)uVar6 + 1);
    } while (bVar1);
    thunk_FUN_100b0b048(IVar3,IVar2);
  }
  return;
}



/* Address: 0x100b44dc0 | SentryCrash::setMaxReportCount: */

/* Function Stack Size: 0x14 bytes */

void SentryCrash::setMaxReportCount_(ID param_1,SEL param_2,int param_3)

{
  *(int *)(param_1 + 0x18) = param_3;
  thunk_FUN_100b19bdc(param_3);
  return;
}



/* Address: 0x100b44dcc | SentryCrash::systemInfo */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryCrash::systemInfo(ID param_1,SEL param_2)

{
  undefined *self;
  ID self_00;
  ID IVar1;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long local_120;
  long lStack_118;
  long local_110;
  long local_108;
  long local_100;
  long lStack_f8;
  ulong local_f0;
  long local_e8;
  long local_e0;
  long lStack_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  long lStack_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  ulong uStack_98;
  long local_90;
  ulong local_88;
  long local_80;
  long lStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  lStack_78 = 0;
  local_80 = 0;
  local_68 = 0;
  local_70 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  local_88 = 0;
  local_90 = 0;
  lStack_b8 = 0;
  local_c0 = 0;
  local_a8 = 0;
  local_b0 = 0;
  lStack_d8 = 0;
  local_e0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  lStack_f8 = 0;
  local_100 = 0;
  local_e8 = 0;
  local_f0 = 0;
  lStack_118 = 0;
  local_120 = 0;
  local_108 = 0;
  local_110 = 0;
  uStack_138 = 0;
  local_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_158 = 0;
  local_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_178 = 0;
  local_180 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_198 = 0;
  local_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_1b8 = 0;
  local_1c0 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_1d8 = 0;
  local_1e0 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1f8 = 0;
  local_200 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  FUN_100b4d934();
  (**(code **)(param_1 + 0x10))(&local_200);
  self = &_OBJC_CLASS___NSMutableDictionary;
  _objc_alloc();
  self_00 = objc_stub::init((ID)self);
  if (local_120 != 0) {
    IVar1 = objc_stub::stringWithUTF8String_((ID)&_OBJC_CLASS___NSString);
    objc_stub::setObject_forKeyedSubscript_(self_00,IVar1,&cf_systemName);
  }
  if (lStack_118 != 0) {
    IVar1 = objc_stub::stringWithUTF8String_((ID)&_OBJC_CLASS___NSString);
    objc_stub::setObject_forKeyedSubscript_(self_00,IVar1,&cf_systemVersion);
  }
  if (local_110 != 0) {
    IVar1 = objc_stub::stringWithUTF8String_((ID)&_OBJC_CLASS___NSString);
    objc_stub::setObject_forKeyedSubscript_(self_00,IVar1,&cf_machine);
  }
  if (local_108 != 0) {
    IVar1 = objc_stub::stringWithUTF8String_((ID)&_OBJC_CLASS___NSString);
    objc_stub::setObject_forKeyedSubscript_(self_00,IVar1,&cf_model);
  }
  if (local_100 != 0) {
    IVar1 = objc_stub::stringWithUTF8String_((ID)&_OBJC_CLASS___NSString);
    objc_stub::setObject_forKeyedSubscript_(self_00,IVar1,&cf_kernelVersion);
  }
  if (lStack_f8 != 0) {
    IVar1 = objc_stub::stringWithUTF8String_((ID)&_OBJC_CLASS___NSString);
    objc_stub::setObject_forKeyedSubscript_(self_00,IVar1,&cf_osVersion);
  }
  IVar1 = objc_stub::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,local_f0 & 0xff);
  objc_stub::setObject_forKeyedSubscript_(self_00,IVar1,&cf_isJailbroken);
  if (local_e8 != 0) {
    IVar1 = objc_stub::stringWithUTF8String_((ID)&_OBJC_CLASS___NSString);
    objc_stub::setObject_forKeyedSubscript_(self_00,IVar1,&cf_bootTime);
  }
  if (local_e0 != 0) {
    IVar1 = objc_stub::stringWithUTF8String_((ID)&_OBJC_CLASS___NSString);
    objc_stub::setObject_forKeyedSubscript_(self_00,IVar1,&cf_appStartTime);
  }
  if (lStack_d8 != 0) {
    IVar1 = objc_stub::stringWithUTF8String_((ID)&_OBJC_CLASS___NSString);
    objc_stub::setObject_forKeyedSubscript_(self_00,IVar1,&cf_executablePath);
  }
  if (local_d0 != 0) {
    IVar1 = objc_stub::stringWithUTF8String_((ID)&_OBJC_CLASS___NSString);
    objc_stub::setObject_forKeyedSubscript_(self_00,IVar1,&cf_executableName);
  }
  if (local_c8 != 0) {
    IVar1 = objc_stub::stringWithUTF8String_((ID)&_OBJC_CLASS___NSString);
    objc_stub::setObject_forKeyedSubscript_(self_00,IVar1,&cf_bundleID);
  }
  if (local_c0 != 0) {
    IVar1 = objc_stub::stringWithUTF8String_((ID)&_OBJC_CLASS___NSString);
    objc_stub::setObject_forKeyedSubscript_(self_00,IVar1,&cf_bundleName);
  }
  if (lStack_b8 != 0) {
    IVar1 = objc_stub::stringWithUTF8String_((ID)&_OBJC_CLASS___NSString);
    objc_stub::setObject_forKeyedSubscript_(self_00,IVar1,&cf_bundleVersion);
  }
  if (local_b0 != 0) {
    IVar1 = objc_stub::stringWithUTF8String_((ID)&_OBJC_CLASS___NSString);
    objc_stub::setObject_forKeyedSubscript_(self_00,IVar1,&cf_bundleShortVersion);
  }
  if (local_a8 != 0) {
    IVar1 = objc_stub::stringWithUTF8String_((ID)&_OBJC_CLASS___NSString);
    objc_stub::setObject_forKeyedSubscript_(self_00,IVar1,&cf_appID);
  }
  if (local_a0 != 0) {
    IVar1 = objc_stub::stringWithUTF8String_((ID)&_OBJC_CLASS___NSString);
    objc_stub::setObject_forKeyedSubscript_(self_00,IVar1,&cf_cpuArchitecture);
  }
  IVar1 = objc_stub::numberWithInt_((ID)&_OBJC_CLASS___NSNumber,uStack_98 & 0xffffffff);
  objc_stub::setObject_forKeyedSubscript_(self_00,IVar1,&cf_cpuType);
  IVar1 = objc_stub::numberWithInt_((ID)&_OBJC_CLASS___NSNumber,uStack_98 >> 0x20);
  objc_stub::setObject_forKeyedSubscript_(self_00,IVar1,&cf_cpuSubType);
  if (local_90 != 0) {
    IVar1 = objc_stub::stringWithUTF8String_((ID)&_OBJC_CLASS___NSString);
    objc_stub::setObject_forKeyedSubscript_(self_00,IVar1,&cf_processName);
  }
  IVar1 = objc_stub::numberWithInt_((ID)&_OBJC_CLASS___NSNumber,local_88 & 0xffffffff);
  objc_stub::setObject_forKeyedSubscript_(self_00,IVar1,&cf_processID);
  IVar1 = objc_stub::numberWithInt_((ID)&_OBJC_CLASS___NSNumber,local_88 >> 0x20);
  objc_stub::setObject_forKeyedSubscript_(self_00,IVar1,&cf_parentProcessID);
  if (local_80 != 0) {
    IVar1 = objc_stub::stringWithUTF8String_((ID)&_OBJC_CLASS___NSString);
    objc_stub::setObject_forKeyedSubscript_(self_00,IVar1,&cf_deviceAppHash);
  }
  if (lStack_78 != 0) {
    IVar1 = objc_stub::stringWithUTF8String_((ID)&_OBJC_CLASS___NSString);
    objc_stub::setObject_forKeyedSubscript_(self_00,IVar1,&cf_buildType);
  }
  IVar1 = objc_stub::numberWithUnsignedLongLong_((ID)&_OBJC_CLASS___NSNumber,local_70);
  objc_stub::setObject_forKeyedSubscript_(self_00,IVar1,&cf_memorySize);
  IVar1 = objc_stub::numberWithUnsignedLongLong_((ID)&_OBJC_CLASS___NSNumber,local_68);
  objc_stub::setObject_forKeyedSubscript_(self_00,IVar1,&cf_freeMemorySize);
  IVar1 = objc_stub::numberWithUnsignedLongLong_((ID)&_OBJC_CLASS___NSNumber,local_60);
  objc_stub::setObject_forKeyedSubscript_(self_00,IVar1,&cf_usableMemorySize);
  return self_00;
}



/* Address: 0x100b45430 | SentryCrash::install */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

bool SentryCrash::install(ID param_1,SEL param_2)

{
  int iVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  bool bVar5;
  
  IVar2 = objc_stub::basePath(param_1);
  iVar1 = 0;
  if (IVar2 == 0) {
    FUN_100b3a1f0();
    if (iVar1 != 0) {
      FUN_100b3a2b8("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/SentryCrash.m"
                    ,0xe0,&cf_Failedtoinitializecrashhandler_Crashreportingdisabled_);
    }
    bVar5 = 0;
  }
  else {
    IVar2 = objc_stub::FUN_100c06ea0(param_1);
    if (((int)IVar2 != 0) && (IVar2 = objc_stub::FUN_100c06ec0(param_1), (int)IVar2 != 0)) {
      IVar2 = objc_stub::FUN_100c06ec0(param_1);
      objc_stub::FUN_100c0cbe0(param_1,IVar2);
      objc_stub::FUN_100c0cc20(param_1,0);
      objc_stub::FUN_100c0cc00(param_1,0);
    }
    IVar2 = objc_stub::FUN_100c02cc0(param_1);
    IVar2 = objc_stub::stringByAppendingPathComponent_(0x100f43528,IVar2);
    IVar3 = objc_stub::basePath(param_1);
    IVar3 = objc_stub::stringByAppendingPathComponent_(IVar3,IVar2);
    IVar2 = objc_stub::FUN_100bfe900(param_1);
    FUN_100b36e88(IVar2);
    IVar2 = objc_stub::FUN_100bfea80(param_1);
    _objc_retainAutorelease();
    IVar4 = objc_stub::UTF8String(IVar2);
    _objc_retainAutorelease();
    IVar2 = objc_stub::UTF8String(IVar3);
    FUN_100b2bc74(IVar4,IVar2);
    *(int *)(param_1 + 0x10) = (int)IVar4;
    IVar2 = objc_stub::FUN_100c06e80(param_1);
    bVar5 = (bool)((int)IVar2 != 0);
  }
  return bVar5;
}



/* Address: 0x100b455d0 | SentryCrash::uninstall */

/* Function Stack Size: 0x10 bytes */

void SentryCrash::uninstall(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = objc_stub::FUN_100c06e80(param_1);
  objc_stub::FUN_100c0cc20(param_1,IVar1);
  objc_stub::FUN_100c0cbe0(param_1,0);
  objc_stub::FUN_100c0cc00(param_1,1);
  objc_stub::FUN_100c0ce60(param_1,0);
  FUN_100b2bee4();
  return;
}



/* Address: 0x100b45620 | SentryCrash::sendAllReportsWithCompletion: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryCrash::sendAllReportsWithCompletion_(ID param_1,SEL param_2,ID param_3,uint param_4)

{
  ID self;
  ID IVar1;
  undefined *local_60;
  undefined8 local_58;
  code *local_50;
  undefined *puStack_48;
  ID local_40;
  ID local_38;
  
  self = objc_stub::FUN_100bfdb00(param_1,param_3,(ulong)param_4);
  IVar1 = self;
  FUN_100b3a1d0();
  if ((int)IVar1 != 0) {
    objc_stub::count(self);
    FUN_100b3a248("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/SentryCrash.m"
                  ,0x157,&cf_Sending_lucrashreports);
  }
  local_60 = PTR___NSConcreteStackBlock_100ea82a0;
  local_58 = 0xc2000000;
  local_50 = FUN_100b45700;
  puStack_48 = &DAT_100f34d58;
  local_40 = param_1;
  local_38 = param_3;
  objc_stub::sendReports_onCompletion_(param_1,self,&local_60);
  return;
}



/* Address: 0x100b45700 | FUN_100b45700 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b45700(long param_1,undefined8 param_2,ulong param_3,long param_4)

{
  int iVar1;
  ID IVar2;
  long lVar3;
  SEL extraout_x1;
  SEL extraout_x1_00;
  SEL pcVar4;
  
  lVar3 = param_4;
  FUN_100b3a1c0();
  iVar1 = 0;
  if ((int)lVar3 != 0) {
    iVar1 = 0xdc2951;
    FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/SentryCrash.m"
                  ,0x15b,&cf_Processfinishedwithcompletion__d);
  }
  if ((param_4 != 0) && (FUN_100b3a1f0(), iVar1 != 0)) {
    FUN_100b3a2b8("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/SentryCrash.m"
                  ,0x15d,&cf_Failedtosendreports___);
  }
  IVar2 = objc_stub::deleteBehaviorAfterSendAll(*(ID *)(param_1 + 0x20));
  if ((((int)IVar2 == 1) && (pcVar4 = extraout_x1, (param_3 & 1) != 0)) ||
     (IVar2 = objc_stub::deleteBehaviorAfterSendAll(*(ID *)(param_1 + 0x20)),
     pcVar4 = extraout_x1_00, (int)IVar2 == 2)) {
    thunk_FUN_100b19b20(IVar2,pcVar4);
  }
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar3 != 0) {
    (**(code **)(lVar3 + 0x10))(lVar3,param_2,param_3,param_4);
  }
  return 0;
}



/* Address: 0x100b457e8 | SentryCrash::deleteAllReports */

/* Function Stack Size: 0x10 bytes */

void SentryCrash::deleteAllReports(ID param_1,SEL param_2)

{
  _pthread_mutex_lock((pthread_mutex_t *)&DAT_100ffa500);
  FUN_100b18098(&DAT_1010e1b94);
  _pthread_mutex_unlock((pthread_mutex_t *)&DAT_100ffa500);
  return;
}



/* Address: 0x100b457ec | SentryCrash::deleteReportWithID: */

/* Function Stack Size: 0x18 bytes */

void SentryCrash::deleteReportWithID_(ID param_1,SEL param_2,ID param_3)

{
  objc_stub::FUN_100c066e0(param_3);
  thunk_FUN_100b19b58();
  return;
}



/* Address: 0x100b45804 | SentryCrash::activeDurationSinceLastCrash */

/* Function Stack Size: 0x10 bytes */

double SentryCrash::activeDurationSinceLastCrash(ID param_1,SEL param_2)

{
  FUN_100b41794();
  return *(double *)param_1;
}



/* Address: 0x100b4581c | SentryCrash::backgroundDurationSinceLastCrash */

/* Function Stack Size: 0x10 bytes */

double SentryCrash::backgroundDurationSinceLastCrash(ID param_1,SEL param_2)

{
  FUN_100b41794();
  return *(double *)(param_1 + 8);
}



/* Address: 0x100b45834 | SentryCrash::launchesSinceLastCrash */

/* Function Stack Size: 0x10 bytes */

int SentryCrash::launchesSinceLastCrash(ID param_1,SEL param_2)

{
  FUN_100b41794();
  return *(int *)(param_1 + 0x10);
}



/* Address: 0x100b4584c | SentryCrash::sessionsSinceLastCrash */

/* Function Stack Size: 0x10 bytes */

int SentryCrash::sessionsSinceLastCrash(ID param_1,SEL param_2)

{
  FUN_100b41794();
  return *(int *)(param_1 + 0x14);
}



/* Address: 0x100b45864 | SentryCrash::activeDurationSinceLaunch */

/* Function Stack Size: 0x10 bytes */

double SentryCrash::activeDurationSinceLaunch(ID param_1,SEL param_2)

{
  FUN_100b41794();
  return *(double *)(param_1 + 0x18);
}



/* Address: 0x100b4587c | SentryCrash::backgroundDurationSinceLaunch */

/* Function Stack Size: 0x10 bytes */

double SentryCrash::backgroundDurationSinceLaunch(ID param_1,SEL param_2)

{
  FUN_100b41794();
  return *(double *)(param_1 + 0x20);
}



/* Address: 0x100b45894 | SentryCrash::sessionsSinceLaunch */

/* Function Stack Size: 0x10 bytes */

int SentryCrash::sessionsSinceLaunch(ID param_1,SEL param_2)

{
  FUN_100b41794();
  return *(int *)(param_1 + 0x28);
}



/* Address: 0x100b458ac | SentryCrash::crashedLastLaunch */

/* Function Stack Size: 0x10 bytes */

bool SentryCrash::crashedLastLaunch(ID param_1,SEL param_2)

{
  FUN_100b41794();
  return (bool)*(byte *)(param_1 + 0x2c);
}



/* Address: 0x100b458c4 | SentryCrash::reportCount */

/* Function Stack Size: 0x10 bytes */

int SentryCrash::reportCount(ID param_1,SEL param_2)

{
  int iVar1;
  
  iVar1 = _pthread_mutex_lock((pthread_mutex_t *)&DAT_100ffa500);
  FUN_100b197ec();
  _pthread_mutex_unlock((pthread_mutex_t *)&DAT_100ffa500);
  return iVar1;
}



/* Address: 0x100b458c8 | SentryCrash::sendReports:onCompletion: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void SentryCrash::sendReports_onCompletion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,uint param_5)

{
  ID IVar1;
  undefined *local_58;
  undefined8 local_50;
  code *local_48;
  undefined *puStack_40;
  ID local_38;
  
  IVar1 = objc_stub::count(param_3,param_3,param_4,(ulong)param_5);
  if (IVar1 == 0) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4,param_3,1,0);
    }
  }
  else {
    IVar1 = objc_stub::FUN_100c0edc0(param_1);
    if (IVar1 == 0) {
      IVar1 = objc_stub::class(param_1);
      IVar1 = objc_stub::description(IVar1);
      FUN_100b52f54(IVar1,0,&cf_Nosinkset_Crashreportsnotsent_);
      if (param_4 != 0) {
        (**(code **)(param_4 + 0x10))(param_4,param_3,0,IVar1);
      }
    }
    else {
      IVar1 = objc_stub::FUN_100c0edc0(param_1);
      local_58 = PTR___NSConcreteStackBlock_100ea82a0;
      local_50 = 0xc2000000;
      local_48 = FUN_100b45a30;
      puStack_40 = &DAT_100f34d88;
      local_38 = param_4;
      objc_stub::filterReports_onCompletion_(IVar1,param_3,&local_58);
    }
  }
  return;
}



/* Address: 0x100b45a30 | FUN_100b45a30 */

void FUN_100b45a30(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000100b45a3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Address: 0x100b45a44 | SentryCrash::loadCrashReportJSONWithID: */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryCrash::loadCrashReportJSONWithID_(ID param_1,SEL param_2,long_long param_3)

{
  size_t sVar1;
  ID IVar2;
  
  FUN_100b2bf3c();
  IVar2 = 0;
  if ((char *)param_3 != (char *)0x0) {
    sVar1 = _strlen((char *)param_3);
    IVar2 = objc_stub::FUN_100c00980((ID)&_OBJC_CLASS___NSData,param_3,sVar1,1);
  }
  return IVar2;
}



/* Address: 0x100b45a94 | SentryCrash::getAttachmentPaths: */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryCrash::getAttachmentPaths_(ID param_1,SEL param_2,long_long param_3)

{
  ID IVar1;
  ID IVar2;
  ID self;
  undefined *self_00;
  undefined *local_270;
  undefined8 local_268;
  code *local_260;
  undefined *puStack_258;
  ID local_250;
  ID local_248;
  byte local_23d;
  undefined1 auStack_23c [500];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_100ea82f0;
  FUN_100b19a74(param_3,auStack_23c);
  IVar1 = objc_stub::stringWithUTF8String_((ID)&_OBJC_CLASS___NSString,auStack_23c);
  local_23d = 0;
  IVar2 = objc_stub::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
  IVar2 = objc_stub::fileExistsAtPath_isDirectory_(IVar2,IVar1,&local_23d);
  if (((int)IVar2 == 0) || ((local_23d & 1) == 0)) {
    IVar2 = *(ID *)PTR____NSArray0___100ea9b00;
  }
  else {
    IVar2 = objc_stub::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
    self = objc_stub::contentsOfDirectoryAtPath_error_(IVar2,IVar1,0);
    if (self == 0) {
      IVar2 = *(ID *)PTR____NSArray0___100ea9b00;
    }
    else {
      self_00 = &_OBJC_CLASS___NSMutableArray;
      _objc_alloc();
      IVar2 = objc_stub::count(self);
      IVar2 = objc_stub::FUN_100c03c60((ID)self_00,IVar2);
      local_270 = PTR___NSConcreteStackBlock_100ea82a0;
      local_268 = 0xc2000000;
      local_260 = FUN_100b45c70;
      puStack_258 = &DAT_100f34db8;
      local_250 = IVar2;
      local_248 = IVar1;
      objc_stub::FUN_100c01cc0(self,&local_270);
    }
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return IVar2;
}



/* Address: 0x100b45c70 | FUN_100b45c70 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b45c70(long param_1)

{
  ID self;
  ID IVar1;
  
  self = *(ID *)(param_1 + 0x20);
  IVar1 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf______);
  objc_stub::addObject_(self,IVar1);
  return 0;
}



/* Address: 0x100b45ccc | SentryCrash::doctorReport: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryCrash::doctorReport_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = objc_stub::objectForKeyedSubscript_(param_3,&cf_crash);
  IVar2 = objc_stub::class((ID)&_OBJC_CLASS___NSMutableDictionary);
  IVar2 = objc_stub::isKindOfClass_(IVar1,IVar2);
  if ((int)IVar2 != 0) {
    IVar2 = objc_stub::FUN_100c01560((ID)&objc::class_t::SentryCrashDoctor);
    IVar2 = objc_stub::FUN_100c011c0(IVar2,param_3);
    objc_stub::setObject_forKeyedSubscript_(IVar1,IVar2,&cf_diagnosis);
  }
  IVar1 = objc_stub::objectForKeyedSubscript_(param_3,&cf_recrash_report);
  IVar2 = objc_stub::class((ID)&_OBJC_CLASS___NSDictionary);
  IVar2 = objc_stub::isKindOfClass_(IVar1,IVar2);
  if ((int)IVar2 != 0) {
    IVar1 = objc_stub::objectForKeyedSubscript_(IVar1,&cf_crash);
    IVar2 = objc_stub::class((ID)&_OBJC_CLASS___NSMutableDictionary);
    IVar2 = objc_stub::isKindOfClass_(IVar1,IVar2);
    if ((int)IVar2 != 0) {
      IVar2 = objc_stub::FUN_100c01560((ID)&objc::class_t::SentryCrashDoctor);
      IVar2 = objc_stub::FUN_100c011c0(IVar2,param_3);
      objc_stub::setObject_forKeyedSubscript_(IVar1,IVar2,&cf_diagnosis);
    }
  }
  return;
}



/* Address: 0x100b45e5c | SentryCrash::reportIDs */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryCrash::reportIDs(ID param_1,SEL param_2)

{
  int iVar1;
  undefined8 *puVar2;
  ID self;
  ID IVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long alStack_50 [2];
  
  alStack_50[1] = *(long *)PTR____stack_chk_guard_100ea82f0;
  iVar1 = thunk_FUN_100b197b0(param_1,param_2);
  puVar4 = (undefined8 *)((long)alStack_50 - ((ulong)iVar1 * 8 + 0xf & 0xffffffff0));
  puVar2 = puVar4;
  thunk_FUN_100b19890();
  self = objc_stub::arrayWithCapacity_((ID)&_OBJC_CLASS___NSMutableArray,(long)(int)puVar2);
  IVar3 = self;
  if (0 < (int)puVar2) {
    uVar5 = (ulong)puVar2 & 0xffffffff;
    do {
      IVar3 = objc_stub::numberWithLongLong_((ID)&_OBJC_CLASS___NSNumber,*puVar4);
      objc_stub::addObject_(self,IVar3);
      IVar3 = 0;
      uVar5 = uVar5 - 1;
      puVar4 = puVar4 + 1;
    } while (uVar5 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == alStack_50[1]) {
    return self;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(IVar3);
}



/* Address: 0x100b45f50 | SentryCrash::reportWithID: */

/* Function Stack Size: 0x18 bytes */

ID SentryCrash::reportWithID_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
  IVar1 = objc_stub::FUN_100c066e0(param_3);
  IVar1 = objc_stub::FUN_100c09380(param_1,IVar1);
  return IVar1;
}



/* Address: 0x100b45f7c | SentryCrash::reportWithIntID: */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryCrash::reportWithIntID_(ID param_1,SEL param_2,long_long param_3)

{
  int iVar1;
  ID IVar2;
  char *pcVar3;
  ID self;
  ID IVar4;
  char *local_48;
  
  IVar2 = objc_stub::FUN_100c062e0(param_1);
  if (IVar2 == 0) {
    IVar2 = 0;
  }
  else {
    local_48 = (char *)0x0;
    IVar2 = objc_stub::FUN_100c00c80((ID)&objc::class_t::SentryCrashJSONCodec,IVar2,7,&local_48);
    pcVar3 = local_48;
    if ((local_48 != (char *)0x0) && (FUN_100b3a1f0(), (int)pcVar3 != 0)) {
      pcVar3 = 
      "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/SentryCrash.m";
      FUN_100b3a2b8("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/SentryCrash.m"
                    ,0x1ef,&cf_Encounterederrorloadingcrashreport_llx___);
    }
    iVar1 = (int)pcVar3;
    if (IVar2 == 0) {
      FUN_100b3a1f0();
      if (iVar1 != 0) {
        FUN_100b3a2b8("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/SentryCrash.m"
                      ,0x1f2,&cf_Couldnotloadcrashreport);
      }
    }
    else {
      self = objc_stub::FUN_100c02c80(param_1,param_3);
      IVar4 = objc_stub::count(self);
      if (IVar4 != 0) {
        objc_stub::setObject_forKeyedSubscript_(IVar2,self,&cf_attachments);
      }
      objc_stub::FUN_100c01580(param_1,IVar2);
    }
  }
  return IVar2;
}



/* Address: 0x100b460c0 | SentryCrash::allReports */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryCrash::allReports(ID param_1,SEL param_2)

{
  int iVar1;
  ID self;
  undefined8 *puVar2;
  ID IVar3;
  SEL extraout_x1;
  undefined8 *puVar4;
  ulong uVar5;
  long alStack_50 [2];
  
  alStack_50[1] = *(long *)PTR____stack_chk_guard_100ea82f0;
  self = objc_stub::array((ID)&_OBJC_CLASS___NSMutableArray);
  iVar1 = thunk_FUN_100b197b0(self,extraout_x1);
  if (0 < (int)iVar1) {
    puVar4 = (undefined8 *)((long)alStack_50 - ((ulong)iVar1 * 8 + 0xf & 0xffffffff0));
    puVar2 = puVar4;
    thunk_FUN_100b19890();
    if (0 < (int)puVar2) {
      uVar5 = (ulong)puVar2 & 0xffffffff;
      do {
        IVar3 = objc_stub::FUN_100c09380(param_1,*puVar4);
        if (IVar3 != 0) {
          objc_stub::addObject_(self,IVar3);
        }
        uVar5 = uVar5 - 1;
        puVar4 = puVar4 + 1;
      } while (uVar5 != 0);
    }
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != alStack_50[1]) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return self;
}



/* Address: 0x100b461b8 | SentryCrash::setPrintPreviousLog: */

/* Function Stack Size: 0x14 bytes */

void SentryCrash::setPrintPreviousLog_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + 9) = (char)param_3;
  return;
}



/* Address: 0x100b461c0 | SentryCrash::applicationDidBecomeActive */

/* Function Stack Size: 0x10 bytes */

void SentryCrash::applicationDidBecomeActive(ID param_1,SEL param_2)

{
  thunk_FUN_100b41424(1);
  return;
}



/* Address: 0x100b461c8 | SentryCrash::applicationWillResignActive */

/* Function Stack Size: 0x10 bytes */

void SentryCrash::applicationWillResignActive(ID param_1,SEL param_2)

{
  thunk_FUN_100b41424(0);
  return;
}



/* Address: 0x100b461d0 | SentryCrash::applicationDidEnterBackground */

/* Function Stack Size: 0x10 bytes */

void SentryCrash::applicationDidEnterBackground(ID param_1,SEL param_2)

{
  thunk_FUN_100b41548(0);
  return;
}



/* Address: 0x100b461d8 | SentryCrash::applicationWillEnterForeground */

/* Function Stack Size: 0x10 bytes */

void SentryCrash::applicationWillEnterForeground(ID param_1,SEL param_2)

{
  thunk_FUN_100b41548(1);
  return;
}



/* Address: 0x100b461e0 | SentryCrash::applicationWillTerminate */

/* Function Stack Size: 0x10 bytes */

void SentryCrash::applicationWillTerminate(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  double dVar2;
  timeval tStack_40;
  
  dVar2 = DAT_1010e2f50;
  uVar1 = DAT_1010e2f08;
  if (DAT_1010e2f60 == '\x01') {
    _gettimeofday(&tStack_40,(void *)0x0);
    DAT_1010e2f18 =
         DAT_1010e2f18 +
         (((double)tStack_40.tv_usec / 1000000.0 + (double)tStack_40.tv_sec) - dVar2);
    FUN_100b411e8(uVar1);
    return;
  }
  return;
}



/* Address: 0x100b461e4 | SentryCrash::clearBundleName: */

/* Function Stack Size: 0x18 bytes */

ID SentryCrash::clearBundleName_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
  IVar1 = objc_stub::stringByReplacingOccurrencesOfString_withString_(param_3,&cf__,&cf__);
  return IVar1;
}



/* Address: 0x100b461fc | SentryCrash::getBundleName */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryCrash::getBundleName(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  ID IVar2;
  cfstringStruct *pcVar3;
  
  IVar2 = objc_stub::mainBundle((ID)&_OBJC_CLASS___NSBundle);
  IVar2 = objc_stub::infoDictionary(IVar2);
  pcVar3 = (cfstringStruct *)objc_stub::objectForKey_(IVar2,&cf_CFBundleName);
  pcVar1 = &cf_Unknown;
  if (pcVar3 != (cfstringStruct *)0x0) {
    pcVar1 = pcVar3;
  }
  IVar2 = objc_stub::FUN_100bff3c0(param_1,pcVar1);
  return IVar2;
}


